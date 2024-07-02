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
	 * WidgetBlueprintGeneratedClass UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C
	 * Size -> 0x0408 (FullSize[0x0648] - InheritedSize[0x0240])
	 */
	class UUI_EditShip_Details_ResearchClaimButton_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BG;                                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_1;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            ButtonStatesParent;                                      // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageOwned;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Owned;                                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ResearchClaimBracketsBottom;                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ResearchClaimBracketsTop;                                // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_ResearchClaimState_C*           StateClaimable;                                          // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_ResearchClaimState_C*           StateReqsNotMet;                                         // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_ResearchClaimState_C*           StateResearchable;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_ResearchClaimState_C*           StateResearched;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextAction;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FSlateColor                                         EnabledColor;                                            // 0x02C0(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         DisabledColor;                                           // 0x02E8(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         LockedColor;                                             // 0x0310(0x0028) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonHovered;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonUnhovered;                                       // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0368(0x0030) Edit, BlueprintVisible
		struct FYShipPrice                                         shipResearchCost;                                        // 0x0398(0x0030) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnResearchShip;                                          // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPurchaseShip;                                          // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         NormalColor;                                             // 0x03E8(0x0028) Edit, BlueprintVisible
		class FString                                              shipClassIconPath;                                       // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor
		struct FYResearchClaimButtonData                           NotResearchedNotPurchasedReqsNotMetButtonData;           // 0x0420(0x0058) Edit, BlueprintVisible
		struct FYResearchClaimButtonData                           NotResearchedNotPurchasedReqsMetButtonData;              // 0x0478(0x0058) Edit, BlueprintVisible
		struct FYResearchClaimButtonData                           ResearchedNotPurchasedReqsNotMetButtonData;              // 0x04D0(0x0058) Edit, BlueprintVisible
		struct FYResearchClaimButtonData                           ResearchedNotPurchasedReqsMetButtonData;                 // 0x0528(0x0058) Edit, BlueprintVisible
		struct FYResearchClaimButtonData                           ResearchedPurchasedButtonData;                           // 0x0580(0x0058) Edit, BlueprintVisible
		struct FYResearchClaimButtonData                           HeroShipNotPurchasedButtonData;                          // 0x05D8(0x0058) Edit, BlueprintVisible
		class UImage*                                              BG_1;                                                    // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             Button_0_1;                                              // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UOverlay*                                            Owned_1;                                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Action();
		void SetPurchaseCostVisibility(class UUI_EditShip_Details_ResearchClaimState_C* researchState);
		void SetSoftHardCurrencyWidgetVisibilities(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYShipPrice& ShipPurchaseCost);
		void hasPurchaseCost(bool* hasPurchaseCost);
		void SetFreeXpShipXpCurrencyWidgetVisibilities(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYShipPrice& shipResearchCost);
		void ButtonClicked();
		void ShowResearchedAndPurchasedButtonForHeroShip(const struct FYResearchClaimButtonData& ButtonData);
		void SetButtonStateForHeroShip(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYResearchClaimButtonData& ButtonData, const struct FYShipPrice& ShipPurchaseCost, bool IsEnabled);
		void SetButtonStatesForHeroShip(EYShipResearchPurchaseState shipResearchPurchaseState);
		void SetButtonStatesForNonHeroShip(EYShipResearchPurchaseState shipResearchPurchaseState);
		void SetButtonStateForNonHeroShip(class UUI_EditShip_Details_ResearchClaimState_C* Button, const struct FYResearchClaimButtonData& ButtonData, const struct FYShipPrice& shipResearchCost, bool IsEnabled, const struct FYShipPrice& ShipPurchaseCost);
		void SetButtonActionText(const class FText& buttonActionText);
		void SetIcon(const class FString& iconPath, class UImage* Image);
		void ShowResearchedAndPurchasedButtonForNonHeroShip(const struct FYResearchClaimButtonData& ButtonData);
		void HideAllButtons();
		void HandleUnfocus();
		void HandleFocus();
		void SetResearchClaimButtonData(const class FString& ShipImagePath, const struct FYShipPrice& ShipPurchaseCost, const struct FYShipPrice& shipResearchCost, EYShipResearchPurchaseState shipResearchPurchaseState, bool IsHeroShip);
		void Setup();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnActionReceived();
		void ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton(int32_t EntryPoint);
		void OnPurchaseShip__DelegateSignature();
		void OnResearchShip__DelegateSignature();
		void OnButtonUnhovered__DelegateSignature();
		void OnButtonHovered__DelegateSignature();
		void OnButtonClicked__DelegateSignature(class UUI_EditShip_Details_ResearchClaimButton_C* ResearchClaimButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
