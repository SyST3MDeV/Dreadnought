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
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.GetBackgroundColor
	 */
	struct UUI_Generic_ProgressBar_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.GetFillColor
	 */
	struct UUI_Generic_ProgressBar_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.SetPercent
	 */
	struct UUI_Generic_ProgressBar_C_SetPercent_Params
	{
	public:
		float                                                      percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.Construct
	 */
	struct UUI_Generic_ProgressBar_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.OnSynchronizeProperties
	 */
	struct UUI_Generic_ProgressBar_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Generic_ProgressBar.UI_Generic_ProgressBar_C.ExecuteUbergraph_UI_Generic_ProgressBar
	 */
	struct UUI_Generic_ProgressBar_C_ExecuteUbergraph_UI_Generic_ProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
