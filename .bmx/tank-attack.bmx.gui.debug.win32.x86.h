#ifndef TANK_ATTACK_TANK_ATTACK_BMX_GUI_DEBUG_WIN32_X86_H
#define TANK_ATTACK_TANK_ATTACK_BMX_GUI_DEBUG_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.debug.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.win32.x86.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.debug.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.win32.x86.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.debug.win32.x86.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.debug.win32.x86.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.win32.x86.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.win32.x86.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.win32.x86.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.win32.x86.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.win32.x86.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.win32.x86.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.win32.x86.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.win32.x86.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.win32.x86.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.win32.x86.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.win32.x86.h>
#include <brl.mod/map.mod/.bmx/map.bmx.debug.win32.x86.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.debug.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x86.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.debug.win32.x86.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.win32.x86.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.debug.win32.x86.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.win32.x86.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.win32.x86.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.debug.win32.x86.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.win32.x86.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.debug.win32.x86.h>
#include <brl.mod/randomdefault.mod/.bmx/randomdefault.bmx.debug.win32.x86.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.win32.x86.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.win32.x86.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.win32.x86.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.debug.win32.x86.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.win32.x86.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.debug.win32.x86.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.debug.win32.x86.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.win32.x86.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.win32.x86.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.win32.x86.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.debug.win32.x86.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.debug.win32.x86.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.debug.win32.x86.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.win32.x86.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.debug.win32.x86.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.win32.x86.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.win32.x86.h>
int _bb_main();
struct _m_tank_attack_TVector2_obj;
struct _m_tank_attack_TTank_obj;
struct _m_tank_attack_TBullet_obj;
extern struct brl_max2d_image_TImage_obj* _m_tank_attack_brick;
extern struct brl_max2d_image_TImage_obj* _m_tank_attack_tankImage;
extern struct brl_max2d_image_TImage_obj* _m_tank_attack_bulletImage;
BBINT _m_tank_attack_PrintMessage(BBSTRING bbt_s,BBINT bbt_x,BBINT bbt_y,BBINT bbt_centre);
BBINT _m_tank_attack_DrawSplash();
void __m_tank_attack_TVector2_New(struct _m_tank_attack_TVector2_obj* o);
struct BBClass__m_tank_attack_TVector2 {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct _m_tank_attack_TVector2_obj {
	struct BBClass__m_tank_attack_TVector2* clas;
	BBFLOAT __m_tank_attack_tvector2_x;
	BBFLOAT __m_tank_attack_tvector2_y;
};
extern struct BBClass__m_tank_attack_TVector2 _m_tank_attack_TVector2;
struct brl_linkedlist_TList_obj* _m_tank_attack_GetMapData(BBSTRING bbt_filename);
struct brl_linkedlist_TList_obj* _m_tank_attack_LoadMap(BBINT bbt_mapID);
void __m_tank_attack_TTank_New(struct _m_tank_attack_TTank_obj* o);
typedef struct _m_tank_attack_TTank_obj* (*_m_tank_attack_TTank_Create_TTTank_iiiiiiiiii_f)(BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT);
struct _m_tank_attack_TTank_obj* _m_tank_attack_TTank_Create_TTTank_iiiiiiiiii(BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT);
struct BBClass__m_tank_attack_TTank {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_tank_attack_TTank_Create_TTTank_iiiiiiiiii_f f_Create_TTTank_iiiiiiiiii;
};

struct _m_tank_attack_TTank_obj {
	struct BBClass__m_tank_attack_TTank* clas;
	BBFLOAT __m_tank_attack_ttank_x;
	BBFLOAT __m_tank_attack_ttank_y;
	BBINT __m_tank_attack_ttank_r;
	BBINT __m_tank_attack_ttank_g;
	BBINT __m_tank_attack_ttank_b;
	BBFLOAT __m_tank_attack_ttank_rotation;
	BBINT __m_tank_attack_ttank_rotrightkey;
	BBINT __m_tank_attack_ttank_rotleftkey;
	BBINT __m_tank_attack_ttank_forwardkey;
	BBINT __m_tank_attack_ttank_reversekey;
	BBINT __m_tank_attack_ttank_firekey;
	struct _m_tank_attack_TBullet_obj* __m_tank_attack_ttank_bullet;
	BBINT __m_tank_attack_ttank_score;
};
extern struct BBClass__m_tank_attack_TTank _m_tank_attack_TTank;
void __m_tank_attack_TBullet_New(struct _m_tank_attack_TBullet_obj* o);
typedef BBINT (*_m_tank_attack_TBullet_Init_ffff_m)(struct _m_tank_attack_TBullet_obj*,BBFLOAT,BBFLOAT,BBFLOAT,BBFLOAT);
BBINT __m_tank_attack_TBullet_Init_ffff(struct _m_tank_attack_TBullet_obj*,BBFLOAT,BBFLOAT,BBFLOAT,BBFLOAT);
struct BBClass__m_tank_attack_TBullet {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_tank_attack_TBullet_Init_ffff_m m_Init_ffff;
};

struct _m_tank_attack_TBullet_obj {
	struct BBClass__m_tank_attack_TBullet* clas;
	struct _m_tank_attack_TVector2_obj* __m_tank_attack_tbullet_location;
	struct _m_tank_attack_TVector2_obj* __m_tank_attack_tbullet_speed;
	BBINT __m_tank_attack_tbullet_isalive;
};
extern struct BBClass__m_tank_attack_TBullet _m_tank_attack_TBullet;
BBINT _m_tank_attack_UpdateCountDown(BBINT* bbt_roundTime,BBINT bbt_countDown);
BBINT _m_tank_attack_IsCrashWithBricks(struct brl_linkedlist_TList_obj* bbt_mapData,struct brl_max2d_image_TImage_obj* bbt_img,BBFLOAT bbt_x,BBFLOAT bbt_y);
BBINT _m_tank_attack_UpdateTanks(struct brl_linkedlist_TList_obj* bbt_mapData,struct brl_linkedlist_TList_obj* bbt_tankList);
BBINT _m_tank_attack_UpdateBullets(struct brl_linkedlist_TList_obj* bbt_mapData,struct brl_linkedlist_TList_obj* bbt_tankList);
BBINT _m_tank_attack_ResetGame(struct brl_linkedlist_TList_obj* bbt_tankList,BBINT bbt_tankVictor);
BBINT _m_tank_attack_DrawMap(struct brl_linkedlist_TList_obj* bbt_mapData);
BBINT _m_tank_attack_DrawTanks(struct brl_linkedlist_TList_obj* bbt_tankList);
BBINT _m_tank_attack_DrawNumber(BBINT bbt_x,BBINT bbt_number,BBINT bbt_offsetLeft);
BBINT _m_tank_attack_DrawInformation(struct brl_linkedlist_TList_obj* bbt_tankList,BBINT bbt_countDown);
BBINT _m_tank_attack_DrawEndGame(struct _m_tank_attack_TTank_obj* bbt_p1,struct _m_tank_attack_TTank_obj* bbt_p2);
BBINT _m_tank_attack_MainGameLoop(BBINT bbt_currentLevel);
BBINT _m_tank_attack_InstructionsPage();

#endif
