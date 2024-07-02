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
	 * WidgetBlueprintGeneratedClass UI_Screen_SelectFleet.UI_Screen_SelectFleet_C
	 * Size -> 0x0081 (FullSize[0x02F9] - InheritedSize[0x0278])
	 */
	class UUI_Screen_SelectFleet_C : public UUI_FleetSelection
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ButtonContainer;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_SelectFleet_C*                            LegendaryButton;                                         // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_SelectFleet_C*                            RecruitButton;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        ScreenRoot;                                              // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_SelectFleet_C*                            VeteranButton;                                           // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                FleetName;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Button_SelectFleet_C*>                    FleetSelectButtons;                                      // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Button_SelectFleet_C*                            CurrentFocusedFleetButton;                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentFleetIndex;                                       // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K75V[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		EUI_MenuActions                                            CurrentGamepadInput;                                     // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleInputPopup(EUI_MenuActions Selection);
		void SendFleetAnalytics(EYFleetType Selection);
		void SetupInitialFocus();
		void HandleGranularRightInput();
		void HandleGranularLeftInput();
		void HandleInput(EUI_MenuActions GamePadInput);
		void HandleFocusUpdate(class UUI_DreadWidget* FocusedItem);
		void InitializeFleetButton(class UUI_Button_SelectFleet_C* FleetButtonWidget, EYFleetType Fleet, bool FleetIsLocked);
		void FleetTypeSelected(EYFleetType FleetType);
		void Setup();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimComplete();
		void TransitionOutAnimComplete();
		void BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_4_FleetClicked__DelegateSignature();
		void BndEvt__RecruitButton_K2Node_ComponentBoundEvent_5_FleetClicked__DelegateSignature();
		void BndEvt__VeteranButton_K2Node_ComponentBoundEvent_6_FleetClicked__DelegateSignature();
		void BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_7_ManageFleetClicked__DelegateSignature();
		void BndEvt__RecruitButton_K2Node_ComponentBoundEvent_8_ManageFleetClicked__DelegateSignature();
		void BndEvt__VeteranButton_K2Node_ComponentBoundEvent_9_ManageFleetClicked__DelegateSignature();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_SelectFleet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
