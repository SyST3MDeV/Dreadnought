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
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateAvailableItemsHeader
	 */
	struct UUI_EditShip_Panel_Appearance_C_UpdateAvailableItemsHeader_Params
	{
	public:
		class FText                                                InputPin;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleButtonClicked
	 */
	struct UUI_EditShip_Panel_Appearance_C_HandleModuleButtonClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableScrollBox
	 */
	struct UUI_EditShip_Panel_Appearance_C_GetAvailableScrollBox_Params
	{
	public:
		class UScrollBox*                                          ScrollBox_1;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HandleModuleIndexClicked
	 */
	struct UUI_EditShip_Panel_Appearance_C_HandleModuleIndexClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateModule
	 */
	struct UUI_EditShip_Panel_Appearance_C_PopulateModule_Params
	{
	public:
		EYUILoadoutItemType                                        Slot;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF5C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetItemSlotFromIndex
	 */
	struct UUI_EditShip_Panel_Appearance_C_GetItemSlotFromIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUILoadoutItemType                                        ItemSlotType;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateSelectedAppearanceModule
	 */
	struct UUI_EditShip_Panel_Appearance_C_UpdateSelectedAppearanceModule_Params
	{
	public:
		int32_t                                                    selectedIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SF77[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ShowModuleList
	 */
	struct UUI_EditShip_Panel_Appearance_C_ShowModuleList_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.PopulateAvailableModulesForCurrentItem
	 */
	struct UUI_EditShip_Panel_Appearance_C_PopulateAvailableModulesForCurrentItem_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideModuleList
	 */
	struct UUI_EditShip_Panel_Appearance_C_HideModuleList_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.GetAvailableModules
	 */
	struct UUI_EditShip_Panel_Appearance_C_GetAvailableModules_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FUIGenericButtonModuleData>                  AvailableModules;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.FindSelectedModuleButton
	 */
	struct UUI_EditShip_Panel_Appearance_C_FindSelectedModuleButton_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButtonToFind;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UUI_Generic_Button_Module_C*>                 ModuleList;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.AddHorizontalBoxChildrenToArray
	 */
	struct UUI_EditShip_Panel_Appearance_C_AddHorizontalBoxChildrenToArray_Params
	{
	public:
		class UPanelWidget*                                        TargetHBox;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.SetupAppearanceModules
	 */
	struct UUI_EditShip_Panel_Appearance_C_SetupAppearanceModules_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.UpdateCurrentAppearance
	 */
	struct UUI_EditShip_Panel_Appearance_C_UpdateCurrentAppearance_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.Construct
	 */
	struct UUI_EditShip_Panel_Appearance_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAppearanceModuleButtonClicked
	 */
	struct UUI_EditShip_Panel_Appearance_C_OnAppearanceModuleButtonClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleClicked
	 */
	struct UUI_EditShip_Panel_Appearance_C_OnAvailableModuleClicked_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnAvailableModuleHovered
	 */
	struct UUI_EditShip_Panel_Appearance_C_OnAvailableModuleHovered_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_Appearance_C_BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_Appearance_C_BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_Appearance_C_BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Panel_Appearance_C_BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnShow
	 */
	struct UUI_EditShip_Panel_Appearance_C_OnShow_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.OnHide
	 */
	struct UUI_EditShip_Panel_Appearance_C_OnHide_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.HideComplete
	 */
	struct UUI_EditShip_Panel_Appearance_C_HideComplete_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C.ExecuteUbergraph_UI_EditShip_Panel_Appearance
	 */
	struct UUI_EditShip_Panel_Appearance_C_ExecuteUbergraph_UI_EditShip_Panel_Appearance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FAUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
