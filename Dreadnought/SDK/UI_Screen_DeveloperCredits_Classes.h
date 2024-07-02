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
	 * WidgetBlueprintGeneratedClass UI_Screen_DeveloperCredits.UI_Screen_DeveloperCredits_C
	 * Size -> 0x006C (FullSize[0x02E4] - InheritedSize[0x0278])
	 */
	class UUI_Screen_DeveloperCredits_C : public UUI_DreadScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Content;                                                 // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          CreditsScrollBox;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UYRichTextBlock*                                     CreditsTextBlock;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		float                                                      ScrollSpeed;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5WTL[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FTimerHandle                                        AutoScrollResetTimerHandle;                              // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AutoScrollResetTime;                                     // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoScroll;                                              // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceScrollUp;                                           // 0x02DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6U6D[0x2];                                   // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentForceScrollSpeed;                                 // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TickForceScrolling(float DeltaTime);
		void HandleForcedScrolling(bool ScrollUp);
		void HandleInput(EUI_MenuActions GamePadInput);
		void SetupCreditsText();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ResetAutoScrolling();
		void ExecuteUbergraph_UI_Screen_DeveloperCredits(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
