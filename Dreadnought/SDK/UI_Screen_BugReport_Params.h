#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleGamepadGranularLeft
	 */
	struct UUI_Screen_BugReport_C_HandleGamepadGranularLeft_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleGamepadGranularRight
	 */
	struct UUI_Screen_BugReport_C_HandleGamepadGranularRight_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleUnfocus
	 */
	struct UUI_Screen_BugReport_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    WidgetIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleFocus
	 */
	struct UUI_Screen_BugReport_C_HandleFocus_Params
	{
	public:
		int32_t                                                    WidgetIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.Constructor
	 */
	struct UUI_Screen_BugReport_C_Constructor_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.SetupLegendHints
	 */
	struct UUI_Screen_BugReport_C_SetupLegendHints_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleSubmitButtonClicked
	 */
	struct UUI_Screen_BugReport_C_HandleSubmitButtonClicked_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIY9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleDropDownAction
	 */
	struct UUI_Screen_BugReport_C_HandleDropDownAction_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleGamepadGranularDown
	 */
	struct UUI_Screen_BugReport_C_HandleGamepadGranularDown_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleGamepadGranularUp
	 */
	struct UUI_Screen_BugReport_C_HandleGamepadGranularUp_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleHomeInput
	 */
	struct UUI_Screen_BugReport_C_HandleHomeInput_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleBackInput
	 */
	struct UUI_Screen_BugReport_C_HandleBackInput_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleActionInput
	 */
	struct UUI_Screen_BugReport_C_HandleActionInput_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleDropdown
	 */
	struct UUI_Screen_BugReport_C_HandleDropdown_Params
	{
	public:
		bool                                                       OpenComboBox;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleInput
	 */
	struct UUI_Screen_BugReport_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.ResetUI
	 */
	struct UUI_Screen_BugReport_C_ResetUI_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.CheckToSeeIfWeCanShowSubmitButton
	 */
	struct UUI_Screen_BugReport_C_CheckToSeeIfWeCanShowSubmitButton_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleBugReportSubmitResult
	 */
	struct UUI_Screen_BugReport_C_HandleBugReportSubmitResult_Params
	{
	public:
		bool                                                       successful;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6SP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.Construct
	 */
	struct UUI_Screen_BugReport_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.OnTransitionIn
	 */
	struct UUI_Screen_BugReport_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.OnTransitionOut
	 */
	struct UUI_Screen_BugReport_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_BugReport_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_BugReport_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_BugReport_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleIssueSummaryButtonClicked
	 */
	struct UUI_Screen_BugReport_C_HandleIssueSummaryButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleCancelButtonClicked
	 */
	struct UUI_Screen_BugReport_C_HandleCancelButtonClicked_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleIssueDescriptionButtonClicked
	 */
	struct UUI_Screen_BugReport_C_HandleIssueDescriptionButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleIssueDescriptionTextCommitted
	 */
	struct UUI_Screen_BugReport_C_HandleIssueDescriptionTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleIssueSummaryTextCommitted
	 */
	struct UUI_Screen_BugReport_C_HandleIssueSummaryTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.OnNavigationEvent
	 */
	struct UUI_Screen_BugReport_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleOnBugReportSubmittedResult
	 */
	struct UUI_Screen_BugReport_C_HandleOnBugReportSubmittedResult_Params
	{
	public:
		bool                                                       succeeded;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.HandleCustomerSupportButtonClicked
	 */
	struct UUI_Screen_BugReport_C_HandleCustomerSupportButtonClicked_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_BugReport.UI_Screen_BugReport_C.ExecuteUbergraph_UI_Screen_BugReport
	 */
	struct UUI_Screen_BugReport_C_ExecuteUbergraph_UI_Screen_BugReport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
