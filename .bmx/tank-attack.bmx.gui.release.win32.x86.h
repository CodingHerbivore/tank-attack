#ifndef TANK_ATTACK_TANK_ATTACK_BMX_GUI_RELEASE_WIN32_X86_H
#define TANK_ATTACK_TANK_ATTACK_BMX_GUI_RELEASE_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.win32.x86.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.release.win32.x86.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.release.win32.x86.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.release.win32.x86.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.release.win32.x86.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.release.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.release.win32.x86.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.release.win32.x86.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.release.win32.x86.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.release.win32.x86.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.release.win32.x86.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.release.win32.x86.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.release.win32.x86.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.release.win32.x86.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.release.win32.x86.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.release.win32.x86.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.release.win32.x86.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.release.win32.x86.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.release.win32.x86.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.release.win32.x86.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.release.win32.x86.h>
#include <brl.mod/map.mod/.bmx/map.bmx.release.win32.x86.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.release.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.release.win32.x86.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.release.win32.x86.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.release.win32.x86.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.release.win32.x86.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.release.win32.x86.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.release.win32.x86.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.release.win32.x86.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.release.win32.x86.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.release.win32.x86.h>
#include <brl.mod/randomdefault.mod/.bmx/randomdefault.bmx.release.win32.x86.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.release.win32.x86.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.release.win32.x86.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.release.win32.x86.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.release.win32.x86.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.release.win32.x86.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.release.win32.x86.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.release.win32.x86.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.release.win32.x86.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.release.win32.x86.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.release.win32.x86.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.release.win32.x86.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.release.win32.x86.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.release.win32.x86.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.release.win32.x86.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.release.win32.x86.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.release.win32.x86.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.release.win32.x86.h>
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
typedef struct _m_tank_attack_TTank_obj* (*_m_tank_attack_TTank_Create_TTTank_iiiiiiiii_f)(BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT);
struct _m_tank_attack_TTank_obj* _m_tank_attack_TTank_Create_TTTank_iiiiiiiii(BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT,BBINT);
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
	_m_tank_attack_TTank_Create_TTTank_iiiiiiiii_f f_Create_TTTank_iiiiiiiii;
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
