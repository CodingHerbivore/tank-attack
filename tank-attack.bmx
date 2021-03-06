Graphics 800, 600

Global brick:TImage = LoadImage("brick.png")
Global tankImage:TImage = LoadImage("tank.png")
Global bulletImage:TImage = LoadImage("bullet.png")

'Tell Blitzmax that we want to control the tanks and bullets from their center
MidHandleImage(tankImage)
MidHandleImage(bulletImage)


' Setup our types
Type TVector2
	Field X:Float
	Field Y:Float
End Type


Type TBullet
	Field Location:TVector2
	Field Speed:TVector2
	Field IsAlive:Int
	
	Rem
		The init method sets the initial values for the bullet.
	EndRem
	Method Init(x:Float, y:Float, sx:Float, sy:Float)
		Location.X = x
		Location.Y = y
		Speed.X = sx
		Speed.Y = sy
		IsAlive = True
	End Method
End Type

Type TTank
	Field X:Float
	Field Y:Float
	
	Field R:Int
	Field G:Int
	Field B:Int
	
	Field Rotation:Float
	
	Field rotRightKey:Int
	Field rotLeftKey:Int
	Field forwardKey:Int
	Field reverseKey:Int
	Field fireKey:Int
	
	Field Bullet:TBullet
	
	Field Score:Int
	
	Function Create:TTank(x:Int, y:Int, r:Int, g:Int, b:Int, rotLeft:Int, rotRight:Int, forward:Int, fire:Int, reverse:Int)
		Local tank:TTank = New TTank
		tank.X = x
		tank.Y = y
		
		tank.R = r
		tank.G = g
		tank.B = b
		
		tank.rotRightKey = rotRight
		tank.rotLeftKey = rotLeft
		tank.forwardKey = forward
		tank.reverseKey = reverse
		tank.fireKey = fire
		
		tank.Bullet = New TBullet
		tank.Bullet.IsAlive = False
		tank.Bullet.Location = New TVector2
		tank.Bullet.Speed = New TVector2
		tank.Bullet.Location.X = 0
		tank.Bullet.Location.Y = 0
		tank.Bullet.Speed.X = 0
		tank.Bullet.Speed.Y = 0
		
		Return tank
	End Function
End Type


Function DrawNumber(x:Int, number:Int, offsetLeft:Int)
	Local s:String = "" + number
	x = x - TextWidth(s) / 2
	x = x - offsetLeft
	DrawText s, x, 48
End Function

Function LoadMap:TList(mapID:Int)
	Local mapChar:String = Chr(65 + (mapID - 1))
	Local mapFilename:String = "Map" + mapChar + ".tsv"
	Return GetMapData(mapFilename)
End Function

Function GetMapData:TList(filename:String)
	Local list:TList = CreateList()
	Local y:Int = 0
	Local x:Int = 0
	Local file:TStream = OpenFile(filename, True, False)
	
	While Not Eof(file)
		Rem
			When we read in the string from the file, we need to parse out the tab characters that are put in by Google docs.
		EndRem
		
		Local line:String = ReadLine(file)
		Local cells:String[] = line.Split(Chr(9))
		
		Rem
			Once that is done, it's a trivial matter of going through each of the characters in turn and deciding to put a block
			if the character contains an upper case x
		EndRem
		
		For Local x:Int = 0 To cells.Length - 1
			Local c:String = cells[x]
			If c = "X"
				Local vec:TVector2 = New TVector2
				vec.X = x * 32
				vec.Y = y * 24
				ListAddLast(list, vec)
			EndIf
		Next
		y = y + 1
	Wend
	CloseFile(file)
	Return list
End Function

Function DrawInformation(tankList:TList, countDown:Int)
	Local firstTank:TTank = TTank(tankList.First())
	Local secondTank:TTank = TTank(tankList.Last())
	
	SetColor 255, 0, 0
	DrawNumber 200, firstTank.Score, True
	
	SetColor 255, 192, 0
	DrawNumber 366, countDown, False
	
	SetColor 0, 0, 255
	DrawNumber 600, secondTank.Score, False
End Function

Function PrintMessage(s:String, x:Int, y:Int, centre:Int = False)
	' Special technique to center text
	If centre Then
		x = x - TextWidth(s) / 2
	End If
	DrawText s, x, y
End Function

Function UpdateCountDown:Int(roundTime:Int Var, countDown:Int)
	Local ms:Int = MilliSecs()
	If ms > roundTime + 1000
		roundTime = MilliSecs()
		countDown:-1
	End If
	Return countDown
End Function

Function DrawTanks(tankList:TList)
	For Local t:TTank = EachIn tankList
		SetColor t.R, t.G, t.B
		SetRotation t.Rotation
		DrawImage tankImage, t.X, t.Y
		SetRotation 0.0
		If t.Bullet.IsAlive
			DrawImage bulletImage, t.Bullet.Location.X, t.Bullet.Location.Y
		End If
	Next
End Function

Function IsCrashWithBricks:Int(mapData:TList, img:TImage, x:Float, y:Float)
	'Runs a lazy check against all bricks to see if there's a collision with one of them
	For Local vec:TVector2 = EachIn mapData
		If ImagesCollide(brick, vec.X, vec.Y, 0, img, x, y, 0)
			Return True
		End If
	Next
	Return False
End Function



Function UpdateBullets:Int(mapData:TList, tankList:TList)
	Local currentTank:Int = 0
	Local tankVictor:Int = -1
	
	For Local t:TTank = EachIn tankList
		Local otherTank:TTank = Null
		If currentTank = 0
			otherTank = TTank(tankList.Last())
		Else
			otherTank = TTank(tankList.First())
		End If
		
		If t.Bullet.IsAlive
			Local nx:Float = t.Bullet.Location.X + t.Bullet.Speed.X
			Local ny:Float = t.Bullet.Location.Y + t.Bullet.Speed.Y
			
			If IsCrashWithBricks(mapData, bulletImage, nx, ny)
				t.Bullet.IsAlive = False
				Continue
			End If
			
			If ImagesCollide(bulletImage, nx, ny, 0, tankImage, otherTank.X, otherTank.Y, 0)
				tankVictor = currentTank
			End If
			t.Bullet.Location.X = nx
			t.Bullet.Location.Y = ny
			
			If t.Bullet.Location.X < 0 Or t.Bullet.Location.X > 800 Or t.Bullet.Location.Y < 0 Or t.Bullet.Location.Y > 600
				t.Bullet.IsAlive = False
			End If
		End If
		
		currentTank:+1
		
	Next
	
	Return tankVictor
End Function

Function UpdateTanks(mapData:TList, tankList:TList)
	For Local t:TTank = EachIn tankList
		If KeyDown(t.rotLeftKey)
			t.Rotation = t.Rotation - 2.0
			If t.Rotation < 0
				t.Rotation = 360 - t.Rotation
			End If
		Else If KeyDown(t.rotRightKey)
			t.Rotation = t.Rotation + 2.0
			If t.Rotation > 360
				t.Rotation = t.Rotation - 360
			End If
		End If
		
		If KeyDown(t.fireKey) And Not t.Bullet.IsAlive
			Local x:Float = t.X
			Local y:Float = t.Y
			
			x = x + (3.14/2.0 * Sin(t.Rotation))
			y = y - (3.14/2.0 * Cos(t.Rotation))
			
			Local dx:Float = x - t.X
			Local dy:Float = y - t.Y
			t.Bullet.Init(t.X, t.Y, dx * 2, dy * 2)
		End If
		
		If KeyDown(t.forwardKey)
			Local x:Float = t.X
			Local y:Float = t.Y
			
			x = x + (3.14/2.0 * Sin(t.Rotation))
			y = y - (3.14/2.0 * Cos(t.Rotation))
			
			If IsCrashWithBricks(mapData, tankImage, x, y)
				Continue
			End If
			
			Rem
				According To the book, I think these are tests For screen bounds
				Not necessary except for maps without a border
			End Rem
		
			If x >= 32 And x <= 768
				t.X = x
			End If
			If y >= 32 And y <= 568
				t.Y = y
			End If
		End If
		
		' Add a way to back the tank up at the urging of my wife
		If KeyDown(t.reverseKey)
			Local x:Float = t.X
			Local y:Float = t.Y
			x = x - (3.14/2.0 * Sin(t.Rotation))
			y = y + (3.14/2.0 * Cos(t.Rotation))
			If IsCrashWithBricks(mapData, tankImage, x, y)
				Continue
			End If
			If x >= 32 And x <= 768
				t.X = x
			End If
			If y >= 32 And y <= 568
				t.Y = y
			End If
		End If
		
	Next
	SetRotation 0.0
		
End Function

Function DrawMap(mapData:TList)
	SetColor 255, 255, 255
	For Local vec:TVector2 = EachIn mapdata
		DrawImage brick, vec.X, vec.Y
	Next
End Function

Function ResetGame(tankList:TList, tankVictor:Int)
	Local winningTank:TTank = Null
	If tankVictor = 0
		winningTank = TTank(tankList.First())
	Else
		winningTank = TTank(tankList.Last())
	End If 
	
	winningTank.Score:+1
	Local i:Int = 0
	For Local t:TTank = EachIn tankList
		t.Bullet.IsAlive = False
		t.Rotation = 0
		If i = 0
			t.X = 64
			t.Y = 300
		Else
			t.X = 704
			t.Y = 300
		End If
		i:+1
	Next
End Function

Function MainGameLoop:Int(currentLevel:Int)
	Local roundTime:Int = MilliSecs()
	Local countDown:Int = 99
	Local mapData:TList = LoadMap(currentLevel)
	Local tankList:TList = CreateList()
	Local player1:TTank = TTank.Create(64, 300, 255, 0, 0, KEY_A, KEY_D, KEY_W, KEY_E, KEY_S)
	Local player2:TTank = TTank.Create(704, 300, 0, 0, 255, KEY_LEFT, KEY_RIGHT, KEY_UP, KEY_M, KEY_DOWN)
	ListAddLast(tankList, player1)
	ListAddLast(tankList, player2)
	
	While countDown > 0
		countDown = UpdateCountDown(roundTime, countdown)
		UpdateTanks(mapData, tanklist)
		Local tankVictor:Int = UpdateBullets(mapData, tankList)
		If tankVictor > -1
			ResetGame(tankList, tankVictor)
		End If
		Cls
		DrawMap(mapData)
		DrawTanks(tankList)
		DrawInformation(tankList, countDown)
		Flip
	Wend
	
	' End game screen
	Local result:Int = 0
	While result = 0
		result = DrawEndGame(player1, player2)
	Wend
	Return result
End Function

Function DrawSplash:Int()
	Local retVal:Int = 0
	
	While retVal = 0
		Cls
		SetColor 255, 255, 255
		PrintMessage "Tank Attack", 400, 32, True
		SetColor 255, 192, 0
		PrintMessage "A GAME FOR TWO PLAYERS", 400, 96, True
		SetColor 255, 255, 255
		PrintMessage "FIGHT TO THE DEATH IN", 400, 228, True
		PrintMessage "NINETY-NINE SECONDS", 400, 260, True
		SetColor 0, 255, 192
		PrintMessage "PLAYER WITH HIGHEST", 400, 292, True
		PrintMessage "SCORE WINS", 400, 324, True
		
		SetColor 255, 0, 0
		PrintMessage "PRESS A B OR C FOR MAP", 400, 492, True
		PrintMessage "Z FOR INSTRUCTIONS", 400, 524, True
		PrintMessage "ESCAPE TO QUIT TO OS", 400, 556, True
		
		Flip
		If KeyDown(KEY_A)
			retVal = 1
		Else If KeyDown(KEY_B)
			retVal = 2
		Else If KeyDown(KEY_C)
			retVal = 3
		Else If KeyDown(KEY_Z)
			retVal = 98
		Else If KeyDown(KEY_ESCAPE)
			retVal = 99
		End If
	Wend
	FlushKeys
	Return retVal
End Function

' I figured it would be a very good idea to add an instructions page.
Function InstructionsPage:Int()
	Local retVal:Int = 1
	
	While retVal = 1
		Cls
		SetColor 255, 255, 255
		PrintMessage "Tank Attack", 400, 32, True
		SetColor 255, 192, 0
		PrintMessage "A GAME FOR TWO PLAYERS", 400, 96, True
		SetColor 255, 255, 255
		PrintMessage "Player one uses the W key to drive forward, S to drive backward,", 400, 228, True
		PrintMessage "the A key to turn left, and the D key to turn right.", 400, 248, True
		PrintMessage "Player one shoots with the E key.", 400, 268, True
		PrintMessage "Player two uses the UP ARROW key to drive forward, the DOWN ARROW key to drive backward,", 400, 308, True
		PrintMessage "the LEFT ARROW key to turn left, and the RIGHT ARROW key to turn right.", 400, 328, True
		PrintMessage "Player two shoots with the M key.", 400, 348, True
		
		
		SetColor 255, 0, 0
		PrintMessage "PRESS ENTER TO RETURN TO THE MAIN SCREEN", 400, 492, True
		PrintMessage "ESCAPE TO QUIT TO OS", 400, 524, True
		
		Flip
		If KeyDown(KEY_ENTER)
			retVal = 0
		End If
	Wend
	FlushKeys
	Return retVal
End Function

Function DrawEndGame:Int(p1:TTank, p2:TTank)
	Local retVal:Int = 0
	FlushKeys
	While retVal = 0
		Cls
			SetColor 255, 255, 255
			PrintMessage "Tank Attack", 400, 32, True
			
			SetColor 255, 255, 255
			If p1.Score = p2.Score
				PrintMessage "IT WAS A DRAW", 400, 228, True
			Else If p1.Score > p2.Score
				PrintMessage "PLAYER 1 IS THE WINNER", 400, 228, True
			Else
				PrintMessage "PLAYER 2 IS THE WINNER", 400, 228, True
			End If
			
			SetColor 255, 0, 0
			PrintMessage "PRESS P TO PLAY AGAIN", 400, 492, True
			PrintMessage "ESCAPE TO QUIT TO OS", 400, 524, True
		Flip
		If KeyDown(KEY_P)
			retVal = 1
		Else If KeyDown(KEY_ESCAPE)
			retVal = 2
		End If
	Wend
	FlushKeys
	Return retVal
End Function

Local state:Int = 0
Local quit:Int = 0
Local currentLevel:Int = 0

	Rem
		
		I'm thinking to add an instructions page, I need to set a new currentLevel,
		then have that currentLevel return a new state, which leads to a instructionsPage function.
		The instructionsPage function would then return a state of 0, in other words returning the 
		player to the splash page.
		
	EndRem

While Not quit
	Select state
	Case 0
		currentLevel = DrawSplash()
		If currentLevel = 99
			quit = True
		Else If currentLevel = 98
			' Hoping to add instructions page
			state = 3
		Else
			state = 1
		End If
	Case 1
		state = MainGameLoop(currentLevel)
		If state = 2
			quit = True
		End If
	Case 3
		state = InstructionsPage()
	End Select
Wend