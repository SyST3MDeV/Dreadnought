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
	 * WidgetBlueprintGeneratedClass UI_Screen_LoginGate.UI_Screen_LoginGate_C
	 * Size -> 0x0198 (FullSize[0x0418] - InheritedSize[0x0280])
	 */
	class UUI_Screen_LoginGate_C : public UUI_LoginGateScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_Background_C*                              UI_Login_Background;                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_LoginGate_Container_C*                           UI_LoginGate_Container;                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Popup_Generic_C*                                 ErrorPopup;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                ErrorPopupTitleText;                                     // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ErrorPopupBodyText;                                      // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ErrorPopupButtonText;                                    // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HeaderBurstSmoothing;                                    // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HeaderDownForMaintenance;                                // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HeaderMaintenanceComplete;                               // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                HeaderDefault;                                           // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageEnteringGame;                                     // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageDisconnectionQueue;                               // 0x0378(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageMaintainenceQueue;                                // 0x0390(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageMaintainence;                                     // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageMaintainenceComplete;                             // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageInQueue;                                          // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MessageConnectingToServer;                               // 0x03F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      UpdateTimer;                                             // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OEZQ[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0410(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HandleNavigation(EUI_MenuActions MenuAction);
		void SetupLoginGatePlatform();
		void SetTextVisibility(class UTextBlock* Text, bool shouldShow);
		void SetupLoginGateText();
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void SetupLoginGateScreen();
		void BndEvt__ExitButton_K2Node_ComponentBoundEvent_33_OnButtonClicked__DelegateSignature(int32_t index);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_LoginGate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
