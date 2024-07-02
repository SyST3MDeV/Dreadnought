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
	 * Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ResetScrollPosition
	 */
	struct UUI_EditAppearance_AvailableItems_C_ResetScrollPosition_Params
	{	};

	/**
	 * Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ClearGrid
	 */
	struct UUI_EditAppearance_AvailableItems_C_ClearGrid_Params
	{	};

	/**
	 * Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.AddModule
	 */
	struct UUI_EditAppearance_AvailableItems_C_AddModule_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Data;                                                    // 0x0000(0x00C0)  (Parm)
		class UUI_Generic_Button_Module_C*                         Module;                                                  // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.Construct
	 */
	struct UUI_EditAppearance_AvailableItems_C_Construct_Params
	{	};

	/**
	 * Function UI_EditAppearance_AvailableItems.UI_EditAppearance_AvailableItems_C.ExecuteUbergraph_UI_EditAppearance_AvailableItems
	 */
	struct UUI_EditAppearance_AvailableItems_C_ExecuteUbergraph_UI_EditAppearance_AvailableItems_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
