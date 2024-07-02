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
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetScrollBox
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_GetScrollBox_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.GetColumnCount
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_GetColumnCount_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ClearGrid
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_ClearGrid_Params
	{	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddWidgetToGrid
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_AddWidgetToGrid_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         GenericModuleButton;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Generic_Button_Module_C*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetOwnerPanel
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_SetOwnerPanel_Params
	{
	public:
		class UUI_EditShip_Panel_EditLoadout_C*                    Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ShowLoadoutDetails
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_ShowLoadoutDetails_Params
	{	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.HideDetails
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_HideDetails_Params
	{	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.SetDetails
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_SetDetails_Params
	{
	public:
		struct FYItemUIData                                        itemData;                                                // 0x0000(0x00D0)  (Parm)
		int32_t                                                    tier;                                                    // 0x00D0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9E4W[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CategoryIcon;                                            // 0x00D8(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.AddModule
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_AddModule_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Data;                                                    // 0x0000(0x00C0)  (Parm)
		class UUI_Generic_Button_Module_C*                         ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.Construct
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C.ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout
	 */
	struct UUI_EditShip_HorizontalModuleList_Loadout_C_ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
