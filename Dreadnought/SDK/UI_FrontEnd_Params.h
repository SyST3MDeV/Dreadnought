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
	 * Function UI_FrontEnd.UI_FrontEnd_C.LoginStreakPopupCheck
	 */
	struct AUI_FrontEnd_C_LoginStreakPopupCheck_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.CheckAndReportHangarReady
	 */
	struct AUI_FrontEnd_C_CheckAndReportHangarReady_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.PlayMenuMusic
	 */
	struct AUI_FrontEnd_C_PlayMenuMusic_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.GetRoot
	 */
	struct AUI_FrontEnd_C_GetRoot_Params
	{
	public:
		class UUI_Screen_Root_FrontEnd_C*                          Root;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.GetNavigationHandler
	 */
	struct AUI_FrontEnd_C_GetNavigationHandler_Params
	{
	public:
		class UUI_EventHandler_Navigation_C*                       Handler;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.UserConstructionScript
	 */
	struct AUI_FrontEnd_C_UserConstructionScript_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.HangarReady
	 */
	struct AUI_FrontEnd_C_HangarReady_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateChanged
	 */
	struct AUI_FrontEnd_C_OnHangarStateChanged_Params
	{
	public:
		EHangarState                                               hangarState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.LoadHangar
	 */
	struct AUI_FrontEnd_C_LoadHangar_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.ExecuteUbergraph_UI_FrontEnd
	 */
	struct AUI_FrontEnd_C_ExecuteUbergraph_UI_FrontEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z1YT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.OnHangarUnloaded__DelegateSignature
	 */
	struct AUI_FrontEnd_C_OnHangarUnloaded__DelegateSignature_Params
	{	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateUpdated__DelegateSignature
	 */
	struct AUI_FrontEnd_C_OnHangarStateUpdated__DelegateSignature_Params
	{
	public:
		unsigned char                                              hangarState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd.UI_FrontEnd_C.OnHangarLoaded__DelegateSignature
	 */
	struct AUI_FrontEnd_C_OnHangarLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
