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
	 * Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetIsShowing
	 */
	struct UUI_Generic_Equipped_Checkmark_C_SetIsShowing_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.SetTier
	 */
	struct UUI_Generic_Equipped_Checkmark_C_SetTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        TierColor;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.Construct
	 */
	struct UUI_Generic_Equipped_Checkmark_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Equipped_Checkmark.UI_Generic_Equipped_Checkmark_C.ExecuteUbergraph_UI_Generic_Equipped_Checkmark
	 */
	struct UUI_Generic_Equipped_Checkmark_C_ExecuteUbergraph_UI_Generic_Equipped_Checkmark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
