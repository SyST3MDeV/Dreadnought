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
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagshipID
	 */
	struct UUI_Screen_ManageFleet_C_HandleSetFlagshipID_Params
	{
	public:
		int32_t                                                    flagshipID;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleSetFlagship
	 */
	struct UUI_Screen_ManageFleet_C_HandleSetFlagship_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetInitialFocus
	 */
	struct UUI_Screen_ManageFleet_C_SetInitialFocus_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetGamepadSelection
	 */
	struct UUI_Screen_ManageFleet_C_SetGamepadSelection_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTNM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetHeaderItemToFocus
	 */
	struct UUI_Screen_ManageFleet_C_GetHeaderItemToFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     HeaderItemToFocus;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftRightInHeader
	 */
	struct UUI_Screen_ManageFleet_C_HandleLeftRightInHeader_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsHeaderFocused
	 */
	struct UUI_Screen_ManageFleet_C_IsHeaderFocused_Params
	{
	public:
		bool                                                       IsHeaderFocused;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UPLN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ShowPlayButton
	 */
	struct UUI_Screen_ManageFleet_C_ShowPlayButton_Params
	{
	public:
		bool                                                       shouldShow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupBattleBonus
	 */
	struct UUI_Screen_ManageFleet_C_SetupBattleBonus_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleToFromFleetItems
	 */
	struct UUI_Screen_ManageFleet_C_HandleToFromFleetItems_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.RemoveAddShipButton
	 */
	struct UUI_Screen_ManageFleet_C_RemoveAddShipButton_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BindShipMenuButtonHover
	 */
	struct UUI_Screen_ManageFleet_C_BindShipMenuButtonHover_Params
	{
	public:
		class UUI_Button_ManageFleet_Ship_C*                       ShipItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemClicked
	 */
	struct UUI_Screen_ManageFleet_C_HandleFleetItemClicked_Params
	{
	public:
		class UUI_DreadWidget*                                     FleetItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonHovered
	 */
	struct UUI_Screen_ManageFleet_C_HandleShipMenuButtonHovered_Params
	{
	public:
		class UUI_Button_Generic_C*                                MenuButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemUnhovered
	 */
	struct UUI_Screen_ManageFleet_C_HandleShipItemUnhovered_Params
	{
	public:
		class UUI_Button_ManageFleet_Ship_C*                       FleetItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemHovered
	 */
	struct UUI_Screen_ManageFleet_C_HandleFleetItemHovered_Params
	{
	public:
		class UUI_DreadWidget*                                     FleetItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleBack
	 */
	struct UUI_Screen_ManageFleet_C_HandleBack_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleFleetItemAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleFleetItemAction_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3UMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipMenuButtonAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleShipMenuButtonAction_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KIU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleShipItemAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleShipItemAction_Params
	{
	public:
		class UUI_Button_ManageFleet_Ship_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuButton
	 */
	struct UUI_Screen_ManageFleet_C_GetShipMenuButton_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASZ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_Generic_C*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItem
	 */
	struct UUI_Screen_ManageFleet_C_GetFleetItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5UJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DreadWidget*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusShipMenuButton
	 */
	struct UUI_Screen_ManageFleet_C_UnfocusShipMenuButton_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5EW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusShipMenuButton
	 */
	struct UUI_Screen_ManageFleet_C_FocusShipMenuButton_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6EW4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.UnfocusFleetItem
	 */
	struct UUI_Screen_ManageFleet_C_UnfocusFleetItem_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.FocusFleetItem
	 */
	struct UUI_Screen_ManageFleet_C_FocusFleetItem_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetShipMenuIndexWrappingValues
	 */
	struct UUI_Screen_ManageFleet_C_GetShipMenuIndexWrappingValues_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    listLength;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SXLU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.GetFleetItemIndexWrappingValues
	 */
	struct UUI_Screen_ManageFleet_C_GetFleetItemIndexWrappingValues_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    listLength;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.IsInShipMenu
	 */
	struct UUI_Screen_ManageFleet_C_IsInShipMenu_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H5NU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleDownGranular
	 */
	struct UUI_Screen_ManageFleet_C_HandleDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleUpGranular
	 */
	struct UUI_Screen_ManageFleet_C_HandleUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRightGranular
	 */
	struct UUI_Screen_ManageFleet_C_HandleRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleLeftGranular
	 */
	struct UUI_Screen_ManageFleet_C_HandleLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Action
	 */
	struct UUI_Screen_ManageFleet_C_Action_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Setup
	 */
	struct UUI_Screen_ManageFleet_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleInput
	 */
	struct UUI_Screen_ManageFleet_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleViewTechTreeAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleViewTechTreeAction_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandlePurchaseHeroShipAction
	 */
	struct UUI_Screen_ManageFleet_C_HandlePurchaseHeroShipAction_Params
	{
	public:
		class UUI_Button_ManageFleet_HeroShip_C*                   source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupPurchaseHeroShipItem
	 */
	struct UUI_Screen_ManageFleet_C_SetupPurchaseHeroShipItem_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleAddShipAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleAddShipAction_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupAddShipItem
	 */
	struct UUI_Screen_ManageFleet_C_SetupAddShipItem_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupDebugFleetData
	 */
	struct UUI_Screen_ManageFleet_C_SetupDebugFleetData_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleRemoveFromFleetAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleRemoveFromFleetAction_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditLoadoutAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleEditLoadoutAction_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.HandleEditAppearanceAction
	 */
	struct UUI_Screen_ManageFleet_C_HandleEditAppearanceAction_Params
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.SetupShipItem
	 */
	struct UUI_Screen_ManageFleet_C_SetupShipItem_Params
	{
	public:
		struct FUIShipData                                         ShipLoadout;                                             // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.PopulateFleetItems
	 */
	struct UUI_Screen_ManageFleet_C_PopulateFleetItems_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.Construct
	 */
	struct UUI_Screen_ManageFleet_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionIn
	 */
	struct UUI_Screen_ManageFleet_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnTransitionOut
	 */
	struct UUI_Screen_ManageFleet_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionInAnimComplete
	 */
	struct UUI_Screen_ManageFleet_C_TransitionInAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.TransitionOutAnimComplete
	 */
	struct UUI_Screen_ManageFleet_C_TransitionOutAnimComplete_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutRemovedFromFleet
	 */
	struct UUI_Screen_ManageFleet_C_OnLoadoutRemovedFromFleet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnLoadoutAddedToFleet
	 */
	struct UUI_Screen_ManageFleet_C_OnLoadoutAddedToFleet_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnNavigationEvent
	 */
	struct UUI_Screen_ManageFleet_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStopped
	 */
	struct UUI_Screen_ManageFleet_C_OnMatchmakingStopped_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnMatchmakingStarted
	 */
	struct UUI_Screen_ManageFleet_C_OnMatchmakingStarted_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_ManageFleet_C_BndEvt__UI_Button_Generic_K2Node_ComponentBoundEvent_12_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.OnFleetUpdated
	 */
	struct UUI_Screen_ManageFleet_C_OnFleetUpdated_Params
	{	};

	/**
	 * Function UI_Screen_ManageFleet.UI_Screen_ManageFleet_C.ExecuteUbergraph_UI_Screen_ManageFleet
	 */
	struct UUI_Screen_ManageFleet_C_ExecuteUbergraph_UI_Screen_ManageFleet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
