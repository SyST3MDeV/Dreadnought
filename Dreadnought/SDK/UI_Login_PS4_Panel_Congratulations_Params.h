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
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Action
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_Action_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.HandleProceedFromCongratulationsError
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_HandleProceedFromCongratulationsError_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Setup
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_Setup_Params
	{
	public:
		struct FCongratulationsScreenData                          CongratsScreenData;                                      // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnShow
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.OnHide
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.Construct
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_ExecuteUbergraph_UI_Login_PS4_Panel_Congratulations_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_Congratulations.UI_Login_PS4_Panel_Congratulations_C.ProceedFromCongratulations__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_Congratulations_C_ProceedFromCongratulations__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
