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
	 * WidgetBlueprintGeneratedClass UI_Screen_BugReport.UI_Screen_BugReport_C
	 * Size -> 0x00C8 (FullSize[0x0350] - InheritedSize[0x0288])
	 */
	class UUI_Screen_BugReport_C : public UUI_BugReportScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ActionButton;                                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_3;                                                // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CancelButton;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CustomerSupportButton;                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBoxBottomButtons;                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             IssueDescriptionButton;                                  // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMultiLineEditableText*                              IssueDescriptionText;                                    // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              IssueDropdown;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             IssueSummaryButton;                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMultiLineEditableText*                              IssueSummaryText;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Overlay_4;                                               // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Spinner_C*                               Spinner;                                                 // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityBottomBrackets;                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityTopBrackets;                                       // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       DropdownIsOpen;                                          // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3GUE[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           ButtonHints;                                             // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UWidget*>                                     WidgetList;                                              // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UWidget*                                             CurrentlyFocusedWidget;                                  // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsActionButtonVisible;                                   // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXBR[0x3];                                   // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentlyFocusedWidgetIndex;                             // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleGamepadGranularLeft();
		void HandleGamepadGranularRight();
		void HandleUnfocus(int32_t WidgetIndex);
		void HandleFocus(int32_t WidgetIndex);
		void Constructor();
		void SetupLegendHints();
		void HandleSubmitButtonClicked(int32_t Unused);
		void HandleDropDownAction();
		void HandleGamepadGranularDown();
		void HandleGamepadGranularUp();
		void HandleHomeInput();
		void HandleBackInput();
		void HandleActionInput();
		void HandleDropdown(bool OpenComboBox);
		void HandleInput(EUI_MenuActions GamePadInput);
		void ResetUI();
		void CheckToSeeIfWeCanShowSubmitButton();
		void HandleBugReportSubmitResult(bool successful);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__ActionButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index);
		void HandleIssueSummaryButtonClicked();
		void HandleCancelButtonClicked(int32_t Unused);
		void HandleIssueDescriptionButtonClicked();
		void HandleIssueDescriptionTextCommitted(const class FText& Text, ETextCommit CommitMethod);
		void HandleIssueSummaryTextCommitted(const class FText& Text, ETextCommit CommitMethod);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void HandleOnBugReportSubmittedResult(bool succeeded);
		void HandleCustomerSupportButtonClicked(int32_t Unused);
		void ExecuteUbergraph_UI_Screen_BugReport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
