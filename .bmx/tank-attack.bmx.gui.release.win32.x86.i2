import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.bytebuffer
import brl.clipboard
import brl.collections
import brl.d3d7max2d
import brl.d3d9max2d
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxunit
import brl.maxutil
import brl.objectlist
import brl.oggloader
import brl.openalaudio
import brl.platform
import brl.pngloader
import brl.quaternion
import brl.randomdefault
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.uuid
import brl.volumes
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.nfd
import pub.nx
import pub.opengles
import pub.opengles3
import pub.vulkan
import pub.xmmintrin
TVector2^Object{
.X#&
.Y#&
-New()="__m_tank_attack_TVector2_New"
}="_m_tank_attack_TVector2"
TTank^Object{
.X#&
.Y#&
.R%&
.G%&
.B%&
.Rotation#&
.rotRightKey%&
.rotLeftKey%&
.forwardKey%&
.fireKey%&
.Bullet:TBullet&
.Score%&
-New()="__m_tank_attack_TTank_New"
+Create:TTank(x%,y%,r%,g%,b%,rotLeft%,rotRight%,forward%,fire%)="_m_tank_attack_TTank_Create_TTTank_iiiiiiiii"
}="_m_tank_attack_TTank"
TBullet^Object{
.Location:TVector2&
.Speed:TVector2&
.IsAlive%&
-New()="__m_tank_attack_TBullet_New"
-Init%(x#,y#,sx#,sy#)="_m_tank_attack_TBullet_Init_ffff"
}="_m_tank_attack_TBullet"
PrintMessage%(s$,x%,y%,centre%=0)="_m_tank_attack_PrintMessage"
DrawSplash%()="_m_tank_attack_DrawSplash"
GetMapData:TList(filename$)="_m_tank_attack_GetMapData"
LoadMap:TList(mapID%)="_m_tank_attack_LoadMap"
UpdateCountDown%(roundTime% Var,countDown%)="_m_tank_attack_UpdateCountDown"
IsCrashWithBricks%(mapData:TList,img:TImage,x#,y#)="_m_tank_attack_IsCrashWithBricks"
UpdateTanks%(mapData:TList,tankList:TList)="_m_tank_attack_UpdateTanks"
UpdateBullets%(mapData:TList,tankList:TList)="_m_tank_attack_UpdateBullets"
ResetGame%(tankList:TList,tankVictor%)="_m_tank_attack_ResetGame"
DrawMap%(mapData:TList)="_m_tank_attack_DrawMap"
DrawTanks%(tankList:TList)="_m_tank_attack_DrawTanks"
DrawNumber%(x%,number%,offsetLeft%)="_m_tank_attack_DrawNumber"
DrawInformation%(tankList:TList,countDown%)="_m_tank_attack_DrawInformation"
DrawEndGame%(p1:TTank,p2:TTank)="_m_tank_attack_DrawEndGame"
MainGameLoop%(currentLevel%)="_m_tank_attack_MainGameLoop"
InstructionsPage%()="_m_tank_attack_InstructionsPage"
brick:TImage&=mem:p("_m_tank_attack_brick")
tankImage:TImage&=mem:p("_m_tank_attack_tankImage")
bulletImage:TImage&=mem:p("_m_tank_attack_bulletImage")