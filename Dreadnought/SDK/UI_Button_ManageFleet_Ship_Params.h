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
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFlagshipStatus
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetFlagshipStatus_Params
	{
	public:
		bool                                                       IsFlagship;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.InitializeShipWidget
	 */
	struct UUI_Button_ManageFleet_Ship_C_InitializeShipWidget_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.IsChildVisible
	 */
	struct UUI_Button_ManageFleet_Ship_C_IsChildVisible_Params
	{
	public:
		class UPanelWidget*                                        Container;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ChildIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VB37[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetVisibleButtonsArray
	 */
	struct UUI_Button_ManageFleet_Ship_C_GetVisibleButtonsArray_Params
	{
	public:
		class UVerticalBox*                                        ButtonContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UWidget*>                                     VisibleButtons;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetFocus
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetFocus_Params
	{
	public:
		bool                                                       Focused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.UnfocusAllMenuButtons
	 */
	struct UUI_Button_ManageFleet_Ship_C_UnfocusAllMenuButtons_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetMenuButton
	 */
	struct UUI_Button_ManageFleet_Ship_C_GetMenuButton_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6U1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_Generic_C*                                Button;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetNumVisibleMenuButtons
	 */
	struct UUI_Button_ManageFleet_Ship_C_GetNumVisibleMenuButtons_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.GetIsInMenu
	 */
	struct UUI_Button_ManageFleet_Ship_C_GetIsInMenu_Params
	{
	public:
		bool                                                       IsInMenu;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Setup
	 */
	struct UUI_Button_ManageFleet_Ship_C_Setup_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleFocus
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleUnfocus
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionTechTree
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleActionTechTree_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionRemove
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleActionRemove_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionEditLoadout
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleActionEditLoadout_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.HandleActionAppearance
	 */
	struct UUI_Button_ManageFleet_Ship_C_HandleActionAppearance_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetModulesVisible
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetModulesVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupLoadoutData
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetupLoadoutData_Params
	{
	public:
		struct FUILoadoutData                                      LoadoutData;                                             // 0x0000(0x0040)  (Parm)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupBriefings
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetupBriefings_Params
	{
	public:
		TArray<struct FUIOfficerBriefingsData>                     Briefings;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupModules
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetupModules_Params
	{
	public:
		TArray<struct FUIModuleData>                               moduleData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupWeapons
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetupWeapons_Params
	{
	public:
		TArray<struct FUIWeaponData>                               WeaponData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetupData
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetupData_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ShowMenu
	 */
	struct UUI_Button_ManageFleet_Ship_C_ShowMenu_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.Construct
	 */
	struct UUI_Button_ManageFleet_Ship_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnSynchronizeProperties
	 */
	struct UUI_Button_ManageFleet_Ship_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ExecuteUbergraph_UI_Button_ManageFleet_Ship
	 */
	struct UUI_Button_ManageFleet_Ship_C_ExecuteUbergraph_UI_Button_ManageFleet_Ship_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.SetAsFlagshipClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_SetAsFlagshipClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    flagshipID;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnUnHovered__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_OnUnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Button_ManageFleet_Ship_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.OnHovered__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.ViewTechTreeClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_ViewTechTreeClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.RemoveFromFleetClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_RemoveFromFleetClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    shipID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditLoadoutClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_EditLoadoutClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C.EditAppearanceClicked__DelegateSignature
	 */
	struct UUI_Button_ManageFleet_Ship_C_EditAppearanceClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
