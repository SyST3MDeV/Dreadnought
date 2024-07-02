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
	 * WidgetBlueprintGeneratedClass UI_Screen_GameModeLaunch.UI_Screen_GameModeLaunch_C
	 * Size -> 0x00C1 (FullSize[0x0339] - InheritedSize[0x0278])
	 */
	class UUI_Screen_GameModeLaunch_C : public UUI_GameModeLaunchScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BG;                                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_2;                                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_6;                                                // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             Button_8;                                                // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ChatButton;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             FleetButton;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          FleetText;                                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          GameModeDescText;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              GameModeIconImage;                                       // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             GameModePlayButton;                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          GameModeTitleText;                                       // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ManageFleetButton;                                       // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             NextFleetButton;                                         // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             PrevFleetButton;                                         // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Screen_Persistent_C*                             PersistentScreen;                                        // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4LegendData;                                           // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor
		EYFleetType                                                FleetTier;                                               // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateFleetTier(EYFleetType fleetType);
		void HandleInput(EUI_MenuActions GamePadButton);
		void SetIconBrush(EYGameModeType gameModeType);
		void SetupScreen();
		void SetBGBrush(EYGameModeType gameModeType);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionOutAnimComplete();
		void TransitionInAnimComplete();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void BndEvt__GameModePlayButton_K2Node_ComponentBoundEvent_435_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ManageFleetButton_K2Node_ComponentBoundEvent_469_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PrevFleetButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__NextFleetButton_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature();
		void OnMatchmakingStarted();
		void OnMatchmakingStopped();
		void ExecuteUbergraph_UI_Screen_GameModeLaunch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
