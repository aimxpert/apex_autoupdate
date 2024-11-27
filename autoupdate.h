#pragma once
#define FLT_MAX 3.402823466e+38F // max value
#define OFFSET_HIGHLIGHTSETTINGS 0xB2AD370
#define OFFSET_HIGHLIGHTSERVERACTIVESTATES  0x29c      //OFF_GLOW_HIGHLIGHT_ID 
#define OFFSET_GLOW_ENABLE  0x28C       // OFF_GLOW_ENABLE 
#define OFFSET_HIGHLIGHTVISIBILITYTYPE  0x26c       //OFF_GLOW_THROUGH_WALL 0x278
#define OFFSET_HIGHLIGHT_TYPE_SIZE 0x34 //? updated 01/10/2024
#define GLOW_DISTANCE 0x294 // Highlight_SetFarFadeDist

#define OFF_GLOW_ENABLE 0x28c
#define OFF_GLOW_THROUGH_WALL 0x26c
#define OFF_GLOW_HIGHLIGHT_ID 0x29C
#define OFF_HIGHLIGHT_TYPE_SIZE 0x34
#define OFF_GLOW_FIX 0x268
#define OFF_GLOW_DISTANCE 0x294

struct HighlightFunctionBits
{
    uint8_t functionBits[4];
};

struct HighlightParameter
{
    float parameter[4];
};

#define OFFSET_ENTITYLIST 0x2022BF8    //cl_entitylist
#define OFFSET_LOCAL_ENT 0x24F6288     //LocalPlayer
#define OFFSET_ORIGIN 0x017c           //[DataMap.CBaseViewModel]m_vecAbsOrigin
#define OFFSET_LEVEL 0x18ECF84 // Miscellaneous.LevelName
#define OFFSET_NAMELIST 0xD506380
#define OFFSET_NAME	0x0481                  //[RecvTable.DT_BaseEntity] m_iName
#define OFFSET_SIGNIFIER 0x0478					// m_iSignifierName
#define OFFSET_BONES 0xDA8 + 0x48            //m_nForceBone

#define OFFSET_MATRIX 0x11A350  // ViewMatrix
#define OFFSET_RENDER 0x77BD448 // ViewRender

#define OFFSET_TEAM	0x0338                  //m_iTeamNum
#define OFFSET_HEALTH 0x0328 //m_iHealth
#define OFFSET_m_iMaxHealth 0x470
#define OFFSET_MAX_SHIELD 0x1A4 //m_shieldHealthMax
#define OFFSET_SHIELD 0x1A0 //m_shieldHealth
#define OFFSET_ARMOR_TYPE 0x4724 //m_armorType
#define OFFSET_BLEED_OUT_STATE 0x2760 //m_bleedoutState
#define OFFSET_VISIBLE_TIME 0x1990 //CPlayer!lastVisibleTime
#define OFFSET_ABS_VELOCITY         0x0170 //m_vecAbsVelocity
#define OFFSET_FLAGS 0x00c8 //[DataMap.C_Player] m_fFlags 是否在地面
#define OFFSET_SKIN 0xD60     // m_nSkin
#define OFFSET_m_skydiveState 0x4784
#define OFFSET_m_skydiveSpeed 0x47a4
#define OFFSET_SAVERMODE 0x358C  //m_iObserverMode
#define OFFSET_DUCK_STATUS 0x2a60   // m_duckState

#define OFFSET_CAMERAPOS 0x1ee0 //CPlayer!camera_origin
#define OFFSET_VIEWANGLES  0x2534 - 0x14 // m_ammoPoolCapacity - 0x14
#define OFFSET_BREATH_ANGLES  OFFSET_VIEWANGLES - 0x10
#define OFFSET_AIMPUNCH	0x2438 //m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle

#define OFFSET_GRAPPLE  0x2cc0 //[RecvTable.DT_Player] m_grapple
#define OFFSET_GRAPPLE_ACTIVE  0x2d48  //[RecvTable.DT_Player] m_grappleActive
#define OFFSET_GRAPPLE_ATTACHED  0x0048 //m_grappleAttached

#define OFFSET_IN_JUMP 0x077bfe50  // 跳 in_jump        
#define OFFSET_IN_DUCK 0x077bff58  //蹲 in_duck         
#define OFFSET_IN_ATTACK 0x077bfd68    //in_attack         
#define OFFSET_in_forward 0x077bfc98
#define OFFSET_in_backward 0x077bfcc0
#define OFFSET_in_moveleft 0x077bfc88
#define OFFSET_in_moveright 0x077bfcb0
#define OFFSET_in_use 0x077bfed0

#define OFFSET_WALL_RUN_START_TIME 0x367c // m_wallRunStartTime
#define OFFSET_WALL_RUN_CLEAR_TIME 0x3680 // m_wallRunClearTime

#define OFFSET_TRAVERSAL_START_TIME 0x2b70 //m_traversalStartTime
#define OFFSET_TRAVERSAL_PROGRESS 0x2b6c //m_traversalProgress
#define OFFSET_TIME_BASE 0x2088 // m_currentFramePlayer.timeBase
#define OFFSET_STUDIOHDR 0xff0 //CBaseAnimating!m_pStudioHdr
#define OFFSET_LIFE_STATE 0x0690  //m_lifeState, >0 = dead
#define OFFSET_YAW 0x223c - 0x8 //m_currentFramePlayer.m_ammoPoolCount - 0x8
#define OFFSET_CROSSHAIR_LAST 0x1998 //[Miscellaneous].CWeaponX!lastCrosshairTargetTime

#define OFFSET_WEAPON 0x1934 //m_latestPrimaryWeapons
#define OFFSET_OFF_WEAPON 0x1944 //m_latestNonOffhandWeapons
#define OFFSET_WEAPON_NAME 0x1778 //[RecvTable.DT_WeaponX].m_weaponNameIndex
#define OFFSET_ITEM_ID 0x1558 //PropSurvival m_customScriptInt

#define OFFSET_BULLET_SPEED 0x19d8 + 0x04ec   //[WeaponSettingsMeta]base + projectile_launch_speed
#define OFFSET_BULLET_SCALE 0x19d8 + 0x04f4 // + projectile_gravity_scale
#define OFFSET_ZOOM_FOV 0x15e0 + 0x00b8 //m_playerData + m_curZoomFOV     ?
#define OFFSET_AMMO 0x1580 //[RecvTable.DT_WeaponX_LocalWeaponData].m_ammoInClip
#define OFFSET_m_xp 0x378C //m_xp

#define OFFSET_VIEWMODEL 0x2d98 //m_hViewModels
#define OFFSET_CURFRAME 0x00d8 //m_currentFrame.modelIndex
#define OFFSET_MODELNAME 0x0030 //m_ModelName
#define OFFSET_PLAT_FROM_USER_ID    0x2548 //m_platformUserId
#define OFFSET_NAME_INDEX 0x38
#define OFF_WALL_RUN_START_TIME 0x367C           //[RecvTable.DT_LocalPlayerExclusive]->m_wallRunStartTime
#define OFF_TRAVERSAL_PROGRESS 0x2B6C            //[RecvTable.DT_LocalPlayerExclusive]->m_traversalProgress
#define OFFSET_MOUSE_SENSITIVITY  0x023c1a10 // mouse_sensitivity
#define WEAPON_P2020 132#define WEAPON_RE45 88#define WEAPON_ALTERNATOR 86#define WEAPON_R301 0#define WEAPON_SPITFIRE = 134#define WEAPON_G7 105//Heavy#define WEAPON_FLATLINE 108#define WEAPON_HEMLOCK 96#define WEAPON_PROWLER 107#define WEAPON_REPEATER 118#define WEAPON_RAMPAGE 6#define WEAPON_CAR 119//Energy#define WEAPON_HAVOC 91#define WEAPON_LSTAR 99#define WEAPON_TRIPLETAKE 114#define WEAPON_VOLT 117#define WEAPON_NEMESIS 120//Shotgun#define WEAPON_MOZAMBIQUE 102#define WEAPON_PEACEKEEPER 109#define WEAPON_MASTIFF 111#define WEAPON_EVA8 92//Sniper#define WEAPON_LONGBOW 90#define WEAPON_CHARGE_RIFLE 91#define WEAPON_SENTINEL 1#define WEAPON_WINGMAN 115//Legendary#define WEAPON_DEVOTION 89#define WEAPON_R99 111#define WEAPON_BOCEK 2#define WEAPON_KRABER 98#define WEAPON_KNIFE 197#define WEAPON_VANTAGE 121