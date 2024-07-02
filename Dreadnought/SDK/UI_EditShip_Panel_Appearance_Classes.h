#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_EditShip_Panel_Appearance.UI_EditShip_Panel_Appearance_C
	 * Size -> 0x0138 (FullSize[0x0380] - InheritedSize[0x0248])
	 */
	class UUI_EditShip_Panel_Appearance_C : public UUI_EditShipAppearanceSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditAppearance_Button_CaptainCustomization_C*    CaptainCustomizationButton;                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ComponentsBottomBracket;                                 // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ComponentsTopBracket;                                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HBoxShipComponentModules;                                // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HboxVanityModules;                                       // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ShipComponentsBG;                                        // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            ShipComponentsBorderDots;                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ShipComponentsButtonContainer;                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditAppearance_AvailableItems_C*                 UI_EditAppearance_AvailableItems;                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_2;                   // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_3;                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_4;                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_5;                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_6;                 // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_7;                 // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_8;                 // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_LoadoutButton_Container_C*              UI_EditShip_LoadoutButton_Container_C_9;                 // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            VanityBorderDots;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityBottomBrackets;                                    // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             VanityContainerButton;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityTopBrackets;                                       // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FUIGenericButtonModuleData>                  CurrentAppearanceData;                                   // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_EditShip_LoadoutButton_Container_C*>      LoadoutContainers;                                       // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Generic_Button_Module_C*>                 AppearanceModules;                                       // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentAppearanceModuleIndex;                            // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WI5X[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_Button_Module_C*>                 CurrentAvailableModules;                                 // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FUIGenericButtonModuleData>                  AvailableModuleData;                                     // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            AvailableModulePositions;                                // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentAvailableHoverIndex;                              // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AHOF[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Generic_Button_Module_C*                         CurrentAppearanceModuleButton;                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateAvailableItemsHeader(const class FText& InputPin);
		void HandleModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton);
		void GetAvailableScrollBox(class UScrollBox** ScrollBox_1);
		void HandleModuleIndexClicked(int32_t index);
		void PopulateModule(EYUILoadoutItemType Slot, class UUI_Generic_Button_Module_C* ModuleButton);
		void GetItemSlotFromIndex(int32_t index, EYUILoadoutItemType* ItemSlotType);
		void UpdateSelectedAppearanceModule(int32_t selectedIndex);
		void ShowModuleList();
		void PopulateAvailableModulesForCurrentItem(int32_t CurrentIndex);
		void HideModuleList();
		void GetAvailableModules(class UUI_Generic_Button_Module_C* ModuleButton, TArray<struct FUIGenericButtonModuleData>* AvailableModules);
		void FindSelectedModuleButton(class UUI_Generic_Button_Module_C* ModuleButtonToFind, TArray<class UUI_Generic_Button_Module_C*>* ModuleList, class UUI_Generic_Button_Module_C** ModuleButton, int32_t* index);
		void AddHorizontalBoxChildrenToArray(class UPanelWidget* TargetHBox);
		void SetupAppearanceModules();
		void UpdateCurrentAppearance();
		void Construct();
		void OnAppearanceModuleButtonClicked(class UUI_Generic_Button_Module_C* ModuleButton);
		void OnAvailableModuleClicked(class UUI_Generic_Button_Module_C* ModuleButton);
		void OnAvailableModuleHovered(class UUI_Generic_Button_Module_C* ModuleButton);
		void BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__VanityContainerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ShipComponentsButtonContainer_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void OnShow();
		void OnHide();
		void HideComplete();
		void ExecuteUbergraph_UI_EditShip_Panel_Appearance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
