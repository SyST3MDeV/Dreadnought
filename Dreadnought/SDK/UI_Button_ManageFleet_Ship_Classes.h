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
	 * WidgetBlueprintGeneratedClass UI_Button_ManageFleet_Ship.UI_Button_ManageFleet_Ship_C
	 * Size -> 0x0380 (FullSize[0x05C0] - InheritedSize[0x0240])
	 */
	class UUI_Button_ManageFleet_Ship_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BG;                                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ButtonContainer;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                EditLoadoutButton;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              HLine;                                                   // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          LoadoutList;                                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_ModuleList_C*                        ModuleList_WBP;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ModuleListBorder;                                        // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                RemoveFromFleetButton;                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             SelectShipButton;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                SetFlagshipButton;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManufacturerTechTreeItem_C*               UI_Button_ManufacturerTechTreeItem;                      // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_BattleBonus_C*                       UI_ManageFleet_BattleBonus;                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_BottomBar_C*                         UI_ManageFleet_BottomBar;                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_ModuleList_C*                        UI_ManageFleet_ModuleList_C_1;                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityBottomBrackets;                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityTopBrackets;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ViewTechTreeButton;                                      // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_ModuleList_C*                        WeaponList_WBP;                                          // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsInMenu;                                                // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LB4L[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EditAppearanceClicked;                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EditLoadoutClicked;                                      // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RemoveFromFleetClicked;                                  // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FUIShipData                                         shipData;                                                // 0x0320(0x0080) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        UnfocusColor;                                            // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    shipID;                                                  // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2BGV[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                TierColors;                                              // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             ViewTechTreeClicked;                                     // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        FocusColor;                                              // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFocused;                                               // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_04GJ[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FYUIShipManufacturerTechItemData                    ShipTechTreeData;                                        // 0x0420(0x0180) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            Bonuses;                                                 // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             SetAsFlagshipClicked;                                    // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetFlagshipStatus(bool IsFlagship);
		void InitializeShipWidget();
		bool IsChildVisible(class UPanelWidget* Container, int32_t ChildIndex);
		void GetVisibleButtonsArray(class UVerticalBox* ButtonContainer, TArray<class UWidget*>* VisibleButtons);
		void SetFocus(bool Focused);
		void UnfocusAllMenuButtons();
		void GetMenuButton(int32_t index, class UUI_Button_Generic_C** Button);
		int32_t GetNumVisibleMenuButtons();
		void GetIsInMenu(bool* IsInMenu);
		void Setup();
		void HandleFocus();
		void HandleUnfocus();
		void HandleActionTechTree();
		void HandleActionRemove();
		void HandleActionEditLoadout();
		void HandleActionAppearance();
		void SetModulesVisible(bool Visible);
		void SetupLoadoutData(const struct FUILoadoutData& LoadoutData);
		void SetupBriefings(TArray<struct FUIOfficerBriefingsData>* Briefings);
		void SetupModules(TArray<struct FUIModuleData>* moduleData);
		void SetupWeapons(TArray<struct FUIWeaponData>* WeaponData);
		void SetupData();
		void ShowMenu(bool Show);
		void Construct();
		void OnSynchronizeProperties();
		void BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EditLoadoutButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__RemoveFromFleetButton_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__ViewDetailsButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__SelectShipButton_K2Node_ComponentBoundEvent_600_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SetFlagshipButton_K2Node_ComponentBoundEvent_429_OnButtonClicked__DelegateSignature(int32_t index);
		void ExecuteUbergraph_UI_Button_ManageFleet_Ship(int32_t EntryPoint);
		void SetAsFlagshipClicked__DelegateSignature(int32_t flagshipID);
		void OnUnHovered__DelegateSignature(class UUI_Button_ManageFleet_Ship_C* source);
		void OnClicked__DelegateSignature(class UUI_DreadWidget* source);
		void OnHovered__DelegateSignature(class UUI_DreadWidget* source);
		void ViewTechTreeClicked__DelegateSignature(int32_t ShipId);
		void RemoveFromFleetClicked__DelegateSignature(int32_t shipID);
		void EditLoadoutClicked__DelegateSignature(int32_t ShipId);
		void EditAppearanceClicked__DelegateSignature(int32_t ShipId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
