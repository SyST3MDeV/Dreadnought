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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_XPConversion.UI_MarketPanel_Currency_XPConversion_C
	 * Size -> 0x0278 (FullSize[0x04B8] - InheritedSize[0x0240])
	 */
	class UUI_MarketPanel_Currency_XPConversion_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            ConsoleConvertCustomButtonOverlay;                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ConversionErrorIcon;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ConversionRateFreeXpAmountText;                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ConversionRateGPAmountText;                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ConversionRateShipXpAmountText;                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ConvertAllShipXp_BtmBracket;                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     ConvertAllShipXp_TopBracket;                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ConvertAllShipXpButton;                                  // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ConvertAllShipXpContainer;                               // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_MarketPanel_Currency_ConvertAllButton_C*         ConvertAllXpButton;                                      // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     ConvertCustomWidgetSwitcher;                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     CustomConversionBtmBrackets;                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             CustomConversionButton;                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            CustomConversionOverlay;                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     CustomConversionTopBrackets;                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CustomGPTotalValue;                                      // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             CustomShipXpConversionContainer;                         // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          CustomShipXpList;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CustomShipXpTotalValue;                                  // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CustomXpConversionButton;                                // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CustomXpTotalValue;                                      // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ErrorMessageContainer;                                   // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          FinalConversionXpText;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_8;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            PCConvertCustomButtonOverlay;                            // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TotalGPAvailableText;                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TotalShipXpGainedText;                                   // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TotalXpAvailableText;                                    // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots_C_1;                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             RequestXpConvertAllShips;                                // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RequestXpConversion;                                     // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TotalCustomXp;                                           // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P2L3[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUiXpConversionData                                 XpConversionData;                                        // 0x0360(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRequestXpConversionShip>                    CustomShipXpConvertRequests;                             // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    TotalCustomGp;                                           // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HJ27[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*> ShipWidgets;                                             // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       AllXpButtonFocused;                                      // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CustomXpButtonFocused;                                   // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3A7J[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ConfirmationPopupTitleText;                              // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConfirmationPopupBodyText;                               // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NotEnoughGPTitleText;                                    // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NotEnoughGPConvertAllBodyText;                           // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NotEnoughGPConvertCustomBodyText;                        // 0x0418(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseAcceptButtonLabelText;                           // 0x0430(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseCancelButtonLabelText;                           // 0x0448(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InvalidCustomXpAmountTitleText;                          // 0x0460(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InvalidCustomXpAmountBodyText;                           // 0x0478(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                CloseButtonLabelText;                                    // 0x0490(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        ConfirmButtonColor;                                      // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowNotEnoughGPPopup(bool IsCustomXpConversion, struct FPopupStackData* PopupStackData);
		void ShowInvalidCustomXpAmountPopup(struct FPopupStackData* PopupStackData);
		void HandleConvertCustomConfirmationPopupResult(int32_t ButtonIndex);
		void HandleConvertAllConfirmationPopupResult(int32_t ButtonIndex);
		void ShowConfirmationPopup(int32_t PurchaseAmountGP, class UUI_Popup_Generic_C** GenericPopup);
		void ConstructConfirmationPopupButtons(class AFrontendHUD* FrontendHUD, int32_t PurchaseAmountGP, TArray<class UPopupButtonData*>* PopupButtons);
		void ScrollCustomXpWidgetIntoView(class UUI_DreadWidget* Widget);
		void HandleCustomXpUnfocus();
		void HandleCustomXpFocus();
		void HandleAllXpUnfocus();
		void HandleAllXpFocus();
		void GetWidgets(class UUI_MarketPanel_Currency_ConvertAllButton_C** ConvertAllButton, TArray<class UUI_MarketPanel_Currency_ShipXPConversionItem_C*>* ShipWidgets);
		void Setup();
		void HandleConvertXpCustomButtonClicked(int32_t Unused);
		void HandleConvertAllButtonClicked(class UUI_DreadWidget* source);
		void HandleCustomXPConversionFromShipItemUpdated(const struct FRequestXpConversionShip& RequestData);
		void CalculateTotalCustomXPConversion();
		void CheckForPlayerCurrency(const struct FUiXpConversionData& XpConversionData, bool* ShowConversionError);
		void SetData(const struct FUiXpConversionData& XpConversionData);
		void BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ConvertAllShipXPButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CustomConversionButton_K2Node_ComponentBoundEvent_154_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void AllXpChildButtonFocused(class UUI_DreadWidget* source);
		void AllXpChildButtonUnfocused(class UUI_DreadWidget* source);
		void CustomXpChildButtonFocused(class UUI_DreadWidget* source);
		void CustomXpChildButtonUnfocused(class UUI_DreadWidget* source);
		void ExecuteUbergraph_UI_MarketPanel_Currency_XPConversion(int32_t EntryPoint);
		void RequestXpConversion__DelegateSignature(TArray<struct FRequestXpConversionShip>* shipsToConvertXpFrom);
		void RequestXpConvertAllShips__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
