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
	 * WidgetBlueprintGeneratedClass UI_Popup_ActivateBattleBonusConfirmation.UI_Popup_ActivateBattleBonusConfirmation_C
	 * Size -> 0x00A8 (FullSize[0x0320] - InheritedSize[0x0278])
	 */
	class UUI_Popup_ActivateBattleBonusConfirmation_C : public UUI_BattleBonusPurchasePopup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CloseButton;                                             // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ConfirmButton;                                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CreditsBonusText;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          descriptionText;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          FreeXPBonusText;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      FreeXPHBox;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          headerText;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_LegendPrompt_Currency_C*                 LegendPromptClose;                                       // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_LegendPrompt_Currency_C*                 LegendPromptConfirm;                                     // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsBottom;                                 // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsTop;                                    // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ShipXPBonusText;                                         // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     WidgetSwitcherButton;                                    // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnButtonSelected;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UActivateBattleBonusConfirmationPopupData*           PopupData;                                               // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AFrontendHUD*                                        FrontendHUD;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BattleBonusCost;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    SoftCurrencyAmount;                                      // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void ButtonClicked(class UUI_Button_Generic_C* ButtonRef);
		void HandlePS4();
		void HandlePopupData(class UActivateBattleBonusConfirmationPopupData* PopupData);
		void Construct();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnPopupDataSet(class UPopupData* PopupData);
		void OnTransitionOut();
		void OnTransitionIn();
		void ExecuteUbergraph_UI_Popup_ActivateBattleBonusConfirmation(int32_t EntryPoint);
		void OnButtonSelected__DelegateSignature(class UUI_Button_Generic_C* ButtonRef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
