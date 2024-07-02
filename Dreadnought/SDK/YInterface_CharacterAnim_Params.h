#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_PVE_TeamScreen_PlayCharAnim
	 */
	struct UYInterface_CharacterAnim_C_EOM_PVE_TeamScreen_PlayCharAnim_Params
	{
	public:
		int32_t                                                    CharacterIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 */
	struct UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 */
	struct UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 */
	struct UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 */
	struct UYInterface_CharacterAnim_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.OnAssignEndOfMatchBasePoseID
	 */
	struct UYInterface_CharacterAnim_C_OnAssignEndOfMatchBasePoseID_Params
	{
	public:
		int32_t                                                    EndOfMatchPoseID;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isRightRow;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetVOAnim
	 */
	struct UYInterface_CharacterAnim_C_SetVOAnim_Params
	{
	public:
		class UAnimSequence*                                       VOAnim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFaceCorrectiveAnim
	 */
	struct UYInterface_CharacterAnim_C_SetFaceCorrectiveAnim_Params
	{
	public:
		class UAnimSequence*                                       anim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetTalking
	 */
	struct UYInterface_CharacterAnim_C_SetTalking_Params
	{
	public:
		bool                                                       Talking;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFemale
	 */
	struct UYInterface_CharacterAnim_C_SetFemale_Params
	{
	public:
		bool                                                       Female;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateCustomization 
	 */
	struct UYInterface_CharacterAnim_C_ActivateCustomization_Params
	{
	public:
		bool                                                       DoIntro;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoClothesSwap;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoHeadgearSwap;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateEndofMatchSingleView
	 */
	struct UYInterface_CharacterAnim_C_ActivateEndofMatchSingleView_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.	ActivateEndOfMatch 
	 */
	struct UYInterface_CharacterAnim_C_ActivateEndOfMatch_Params
	{	};

	/**
	 * Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.PlayRandomAnimation
	 */
	struct UYInterface_CharacterAnim_C_PlayRandomAnimation_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
