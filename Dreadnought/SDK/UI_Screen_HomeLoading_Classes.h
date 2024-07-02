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
	 * WidgetBlueprintGeneratedClass UI_Screen_HomeLoading.UI_Screen_HomeLoading_C
	 * Size -> 0x00B0 (FullSize[0x0328] - InheritedSize[0x0278])
	 */
	class UUI_Screen_HomeLoading_C : public UUI_HomeLoadingScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_TrainingMatch;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Home_C*                                   Button_Tutorial;                                         // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        DownloadProgress;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LoadingText;                                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_1;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Spinner_C*                               Spinner;                                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Popup_Generic_C*                                 ExitPopup;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Button_Home_C*>                           ButtonArray;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsFirstTransitionIn;                                     // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WEWS[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_DreadWidget*>                             FeaturedItemList;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FMarketItemUIData>                           CarouselData;                                            // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void BindButtonEvents(TArray<class UUI_Button_Home_C*>* Array);
		void Setup();
		void HandleInput(EUI_MenuActions GamePadInput);
		void ClearButtonArrayNotificationStatuses();
		void SetupButtonArray();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionOutAnimationComplete();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void UpdateCurrentlyFocusedItem(class UUI_DreadWidget* FocusedItem);
		void BndEvt__Button_TrainingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUI_Button_Home_C* Widget);
		void BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUI_Button_Home_C* Widget);
		void DownloadProgressUpdated(float currentProgressPercentage);
		void ExecuteUbergraph_UI_Screen_HomeLoading(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
