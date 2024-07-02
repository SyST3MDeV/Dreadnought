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
	 * WidgetBlueprintGeneratedClass UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C
	 * Size -> 0x0100 (FullSize[0x0340] - InheritedSize[0x0240])
	 */
	class UUI_EditShip_Details_Button_TechTree_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BG;                                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_1;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      TechProgressBox;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     TechTreeSelectionBracketsBottom;                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     TechTreeSelectionBracketsTop;                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextAcquiredTech;                                        // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextAction;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextTechOwned;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextTechTotal;                                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                TextLabelAcquired;                                       // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TextLabelAction;                                         // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TextCurrentTechAmount;                                   // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TextTotalTech;                                           // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnButtonHovered;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonUnhovered;                                       // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FYPurchaseRequirementsData                          purchaseRequirementsData;                                // 0x0338(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Action();
		void SetVisibilityForHeroShip(bool IsHero);
		void ColorizeText(const struct FYTechTreeProgressData& techTreeProgressData);
		void SetInfoText(const class FText& infoText);
		void SetActionText(const class FText& Action);
		void SetTechTreeProgressData(const struct FYTechTreeProgressData& techTreeProgressData);
		void SetOwnedTech(int32_t newAmount);
		void HandleUnfocus();
		void HandleFocus();
		void SetMaxTech(int32_t newAmount);
		void PopulateWidgetsWithData(const struct FYTechTreeProgressData& techTreeProgressData);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
		void OnActionReceived();
		void ExecuteUbergraph_UI_EditShip_Details_Button_TechTree(int32_t EntryPoint);
		void OnButtonClicked__DelegateSignature();
		void OnButtonUnhovered__DelegateSignature();
		void OnButtonHovered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
