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
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetCategoryIcon
	 */
	struct UUI_EditLoadout_ModuleDetails_C_SetCategoryIcon_Params
	{
	public:
		class FString                                              CategoryIconPath;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetTier
	 */
	struct UUI_EditLoadout_ModuleDetails_C_SetTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.SetStats
	 */
	struct UUI_EditLoadout_ModuleDetails_C_SetStats_Params
	{
	public:
		struct FYItemUIData                                        itemData;                                                // 0x0000(0x00D0)  (Parm)
	};

	/**
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Setup
	 */
	struct UUI_EditLoadout_ModuleDetails_C_Setup_Params
	{
	public:
		struct FYItemUIData                                        itemData;                                                // 0x0000(0x00D0)  (Parm)
	};

	/**
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.Construct
	 */
	struct UUI_EditLoadout_ModuleDetails_C_Construct_Params
	{	};

	/**
	 * Function UI_EditLoadout_ModuleDetails.UI_EditLoadout_ModuleDetails_C.ExecuteUbergraph_UI_EditLoadout_ModuleDetails
	 */
	struct UUI_EditLoadout_ModuleDetails_C_ExecuteUbergraph_UI_EditLoadout_ModuleDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
