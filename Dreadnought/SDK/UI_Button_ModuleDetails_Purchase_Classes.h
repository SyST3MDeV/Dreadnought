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
	 * WidgetBlueprintGeneratedClass UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C
	 * Size -> 0x02D0 (FullSize[0x0510] - InheritedSize[0x0240])
	 */
	class UUI_Button_ModuleDetails_Purchase_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocusMainButton;                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ActionButton;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ActionButtonOrButtonPrompt;                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Backing;                                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketBottom;                                           // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     BracketTop;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Cost1Amount;                                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      Cost1HBox;                                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Cost1IconImage;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Cost1PlusText;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Cost2Amount;                                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           Cost2CurrencyIcon;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CreditsCostAmount;                                       // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      CreditsCostHBox;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           CreditsCostIcon;                                         // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_LegendPrompt_C*                          GamepadButtonPrompt;                                     // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           Header1OptionalCheck;                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Header1Text;                                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      Header2HBox;                                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           Header2OptionalCheck;                                    // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Header2Text;                                             // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_5;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_8;                                                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             MainButton;                                              // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          RequirementDescText;                                     // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      TechRequiredHBox;                                        // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextRequired;                                            // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextRequirementsDesc;                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextResearched;                                          // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextSlash;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           ThrobberButton;                                          // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           ThrobberData;                                            // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots_268;                               // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ViewTechTreeHBox;                                        // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                ResearchButtonLabel;                                     // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseButtonLabel;                                     // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ResearchCostHeader;                                      // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PurchaseCostHeader;                                      // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ResearchedHeader;                                        // 0x03C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EquippedHeader;                                          // 0x03E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OwnedHeader;                                             // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                EquipButtonLabel;                                        // 0x0410(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ResearchRequiredDesc;                                    // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ReqsNotMetDesc;                                          // 0x0440(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AcquireMoreTechDesc;                                     // 0x0458(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSharedActionButtonClicked;                             // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CostShipXP;                                              // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CostFreeXP;                                              // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CostCredits;                                             // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S29Q[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PurchaseShipRequiredDesc;                                // 0x0490(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextResearchedNotEnoughColor;                            // 0x04A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextResearchedSufficientNumberColor;                     // 0x04D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LockedHeader;                                            // 0x04F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetButtonCurrencyThrobber(bool Show);
		void SetDataCurrencyThrobber(bool Show);
		void CheckCurrencyThrobberVisibility();
		void SetStateLockedPrecast();
		void EnableButton(bool Enabled);
		void SetPlatformButtons();
		void HandleUnfocus();
		void HandleFocus();
		void RefreshResearchAndPurchaseValues();
		void SetModuleCosts(int32_t ShipXPCost, int32_t FreeXPCost, int32_t CreditsCost);
		void SetStateRequirementsNotMet();
		void SetStateOwned();
		void SetStateEquipped();
		void SetStateCanPurchase();
		void SetStateCanResearch();
		void SetStateTechRequired(int32_t TechOwned, int32_t TechRequired);
		void ClearAllComponents();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void OnActionReceived();
		void ExecuteUbergraph_UI_Button_ModuleDetails_Purchase(int32_t EntryPoint);
		void OnSharedActionButtonClicked__DelegateSignature(class UUserWidget* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
