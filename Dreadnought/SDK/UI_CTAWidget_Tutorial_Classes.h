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
	 * WidgetBlueprintGeneratedClass UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C
	 * Size -> 0x00C8 (FullSize[0x0360] - InheritedSize[0x0298])
	 */
	class UUI_CTAWidget_Tutorial_C : public UUI_CtAWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowData;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    HideData;                                                // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    HidePanel;                                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    ShowPanel;                                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CloseButton;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          descriptionText;                                         // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FooterOverlay;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          headerText;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Arrow_Generic_C*                          LeftArrowButton;                                         // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          PageCounterText;                                         // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Arrow_Generic_C*                          RightArrowButton;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox6ft*                                       ScrollBox6ft_2;                                          // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SupportingImage;                                         // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class FName>                                        TutorialSteps;                                           // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentPageIndex;                                        // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B400[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DefaultCloseButtonText;                                  // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                FinishedCloseButtonText;                                 // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           PS4ButtonLegend;                                         // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		class FText GetCloseButtonText();
		void RequestShowPreviousPage();
		void RequestShowNextPage();
		void Setup();
		void SetLegendHints();
		void HandleInput(EUI_MenuActions GamePadButton);
		void RefreshCloseButton();
		void RefreshPageData(const struct FUI_Struct_CtAWidget_TutorialData& UI_Struct_CtAWidget_TutorialData);
		void RefreshPageCountText();
		void RefreshCurrentPageData();
		void ShowPage();
		void RequestShowPage(int32_t PageIndexToShow);
		void Construct();
		void BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature(class UUserWidget* source);
		void BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature(class UUserWidget* source);
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(int32_t index);
		void BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void OnTransitionOut();
		void OnTransitionIn();
		void BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void ExecuteUbergraph_UI_CTAWidget_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
