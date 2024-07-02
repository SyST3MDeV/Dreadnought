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
	 * WidgetBlueprintGeneratedClass UI_Button_SelectFleet.UI_Button_SelectFleet_C
	 * Size -> 0x01B8 (FullSize[0x03F8] - InheritedSize[0x0240])
	 */
	class UUI_Button_SelectFleet_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundBlack;                                         // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BottomBracket;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FleetImage;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          FleetLabel;                                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            FleetLockedBox;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ManageFleetButton;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             SelectFleetButton;                                       // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     TopBracket;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_SelectFleet_BattleBonus_C*                       UI_SelectFleet_BattleBonus;                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UnlockConditionText;                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EYFleetType                                                fleetType;                                               // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QJD[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FleetClicked;                                            // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ManageFleetClicked;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsBattleBonusActive;                                     // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L5MG[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BattleBonusCooldown;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UUI_Popup_ActivateBattleBonusConfirmation_C*         PurchasePopup;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             ActivateBattleReadinessClicked;                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReceivedFocus;                                         // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentButtonIndex;                                      // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BKGQ[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget*>                                     ButtonList;                                              // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FYUIBattleReadyBonusUIData                          BattleBonusData;                                         // 0x0310(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    BattleBonusCost;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerCreditsAmount;                                     // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                TextRecruitUnlockCondition;                              // 0x0358(0x0018) Edit, BlueprintVisible
		class FText                                                TextVeteranUnlockCondition;                              // 0x0370(0x0018) Edit, BlueprintVisible
		class FText                                                TextLegendaryUnlockCondition;                            // 0x0388(0x0018) Edit, BlueprintVisible
		class FText                                                RecruitLabel;                                            // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                VeteranLabel;                                            // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LegendaryLabel;                                          // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        FleetColor;                                              // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetColorFromConfigColor();
		void HandleInitialFocus();
		void CheckForManageFleetIndex();
		void CheckForBattleBonusIndex(bool IsNavigatingUp);
		void UnfocusSelectFleetButton();
		void FocusSelectFleetButton();
		void SetButtonStyle(class UButton* Button, bool IsFocused);
		void HandleButtonFocusing(int32_t ButtonToFocus, int32_t PreviousIndex);
		void HandleGranularUpInput();
		void HandleGranularDownInput();
		void Action();
		void SetManageFleetButtonVisibility(bool IsVisible);
		void SetLockedState(bool FleetIsLocked);
		void OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef);
		void Setup(EYFleetType Selection);
		void HandleFocus();
		void HandleUnfocus();
		void Construct();
		void BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SelectFleetButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature();
		void OnActionReceived();
		void ExecuteUbergraph_UI_Button_SelectFleet(int32_t EntryPoint);
		void OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source);
		void ActivateBattleReadinessClicked__DelegateSignature();
		void ManageFleetClicked__DelegateSignature();
		void FleetClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
