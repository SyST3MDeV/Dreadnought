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
	 * WidgetBlueprintGeneratedClass UI_Screen_Login_PS4.UI_Screen_Login_PS4_C
	 * Size -> 0x01A8 (FullSize[0x0428] - InheritedSize[0x0280])
	 */
	class UUI_Screen_Login_PS4_C : public UUI_LoginScreen_PS4
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        CongratulationsContainer;                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_Congratulations_C*               CongratulationsScreen;                                   // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        CreateAccountContainer;                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_CreateAccountContainer_C*        CreateAccountScreen;                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        LegalContainer;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_LegalDocumentContainer_C*        LegalDocumentScreen;                                     // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        LinkAccountContainer;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_LinkAccount_C*                   LinkAccountScreen;                                       // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_TitleScreen_C*                   TitleScreen;                                             // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        TitleScreenContainer;                                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_Background_C*                              UI_Login_Background;                                     // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        WelcomeContainer;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Login_PS4_Panel_Welcome_C*                       WelcomeScreen;                                           // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		ELoginSubScreensPS4                                        SubState;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWaitingOnBlockingRequest;                              // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y8XJ[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_SubPanel*>                                ScreensArray;                                            // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsInitialized;                                           // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2GZO[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PrivacyPolicyHeader;                                     // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_SubPanel*                                        CurrentScreen;                                           // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FLegendPromptData>                           LegalDocumentLegend;                                     // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                EULAHeader;                                              // 0x0348(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           StandardScreenLegend;                                    // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           CreateAccountLegend;                                     // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLegalDocumentData                                  TermsOfUseData;                                          // 0x0380(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLegendPromptData>                           CongratsAccountLegend;                                   // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              emailAddress;                                            // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                TermsOfUseHeader;                                        // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLegalDocumentData                                  PrivacyPolicyData;                                       // 0x03F0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void HandleCongratulationInput(EUI_MenuActions InputPin);
		void HandleLinkAccountInput(EUI_MenuActions InputPin);
		void HandleCreateAccountInput(EUI_MenuActions InputPin);
		void HandleWelcomeInput(EUI_MenuActions InputPin);
		void HandleLegalInput(EUI_MenuActions InputPin);
		void HandleTitleInput(EUI_MenuActions InputPin);
		void HandleInput(EUI_MenuActions InputPin);
		void HideLegend();
		void ShowLegend();
		void AttemptAcceptLegalDocument(const struct FLegalDocumentData& LegalDocumentData);
		void SetPolicyContentFunction(const struct FPolicyContentResultData& policyData);
		void HandleAccountResult(const struct FPS4RequestResultData& ResultData);
		void UpdateLegend();
		void GoToPreviousScreen();
		void BindScreenEvents();
		void ShowErrorPopup(EYTitleScreenError Error);
		void PutAllScreensInScreensArray();
		void HideAllScreens();
		void GoToSubState(ELoginSubScreensPS4 NewSubState);
		void OnTransitionIn();
		void OnTransitionOut();
		void Construct();
		void StartUserProfileSignIn();
		void SetPolicyContent(const struct FPolicyContentResultData& policyData);
		void HandleRequestProfileSignInComplete(const struct FRequestProfileSignInResultData& signInResultData);
		void HandleOnAcceptLegalDocumentComplete(bool successful);
		void HandleRequestToSubState(ELoginSubScreensPS4 NewSubState);
		void AttemptRequestSonyEmail();
		void AttemptRequestCreateAccount(const struct FCreateAccountRequestData& CreateAccountRequestData);
		void HandleOnRequestSonyEmailComplete(const struct FRequestSonyEmailResultData& emailResultData);
		void HandleRequestCreateAccountComplete(const struct FPS4RequestResultData& Result);
		void AttemptRequestLinkAccount(const struct FLinkAccountRequestData& LinkAccountRequestData);
		void ProceedFromCongratulations();
		void HandleRequestLinkAccountComplete(const struct FPS4RequestResultData& Result);
		void TransitionInAnimationComplete();
		void RequestForceLogin();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void BndEvt__LinkAccountScreen_K2Node_ComponentBoundEvent_3_OnTextCommited__DelegateSignature();
		void BndEvt__CreateAccountScreen_K2Node_ComponentBoundEvent_55_OnTextCommited__DelegateSignature();
		void ExecuteUbergraph_UI_Screen_Login_PS4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
