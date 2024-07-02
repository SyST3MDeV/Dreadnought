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
	 * WidgetBlueprintGeneratedClass UI_Login_PC_Panel_TitleScreen.UI_Login_PC_Panel_TitleScreen_C
	 * Size -> 0x0031 (FullSize[0x0271] - InheritedSize[0x0240])
	 */
	class UUI_Login_PC_Panel_TitleScreen_C : public UUI_SubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      PressStartContainer;                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Spinner_C*                               Spinner;                                                 // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             TitleScreenButton;                                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnRequestSession;                                        // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HaveStartedSessionRequest;                               // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsPopupActive();
		void ResetSessionRequestState();
		void SessionRequestStarted();
		void OnShow();
		void OnHide();
		void Construct();
		void BndEvt__TitleScreenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Login_PC_Panel_TitleScreen(int32_t EntryPoint);
		void OnRequestSession__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
