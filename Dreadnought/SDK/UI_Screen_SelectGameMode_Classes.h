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
	 * WidgetBlueprintGeneratedClass UI_Screen_SelectGameMode.UI_Screen_SelectGameMode_C
	 * Size -> 0x0079 (FullSize[0x02F9] - InheritedSize[0x0280])
	 */
	class UUI_Screen_SelectGameMode_C : public UUI_GameModeSelectionScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUniformGridPanel*                                   GameModeGrid;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_GameMode;                                      // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    NumberOfColumns;                                         // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EQ63[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class UUI_DreadWidget*                                     CurrentlyFocusedItem;                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           PS4ButtonLegend;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UUI_Button_SelectGameMode_C*>                 GameModeWidgets;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    CurrentIndex;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKUW[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Screen_Persistent_C*                             PersistentScreen;                                        // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDirty;                                                 // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SaveFavoritesSettings();
		void GameModeFavoriteClicked(bool isFavorite, const struct FYMenuGameModeDefinition& GameMode);
		void AttemptWidgetFocus(int32_t index, class UUI_Button_SelectGameMode_C* GameModeButton);
		void SetWidgetFocus(class UUI_DreadWidget* NewFocusWidget);
		void HandleRightGranular();
		void HandleDownGranular();
		void HandleUpGranular();
		void HandleLeftGranular();
		void HandleInput(EUI_MenuActions GamePadInput);
		void GameModeButtonClicked(const struct FYMenuGameModeDefinition& GameMode);
		void BuildGameModeList();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void UpdateCurrentlyFocusedItem(class UUI_DreadWidget* FocusedItem);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_SelectGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
