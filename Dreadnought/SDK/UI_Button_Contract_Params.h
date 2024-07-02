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
	 * Function UI_Button_Contract.UI_Button_Contract_C.IsReadyToUpdateInfo
	 */
	struct UUI_Button_Contract_C_IsReadyToUpdateInfo_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SetElite
	 */
	struct UUI_Button_Contract_C_SetElite_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnFocusReceived
	 */
	struct UUI_Button_Contract_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_ILTJ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.Action
	 */
	struct UUI_Button_Contract_C_Action_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.ResetOpacity
	 */
	struct UUI_Button_Contract_C_ResetOpacity_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.DisableReroll
	 */
	struct UUI_Button_Contract_C_DisableReroll_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.EndAnimationAndCheckFocus
	 */
	struct UUI_Button_Contract_C_EndAnimationAndCheckFocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.PlayRerollContract
	 */
	struct UUI_Button_Contract_C_PlayRerollContract_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.PlayAcknowledgementSequence
	 */
	struct UUI_Button_Contract_C_PlayAcknowledgementSequence_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.UpdateContractInfo
	 */
	struct UUI_Button_Contract_C_UpdateContractInfo_Params
	{
	public:
		class FText                                                MTitle;                                                  // 0x0000(0x0018)  (Parm)
		class FText                                                MDescription;                                            // 0x0018(0x0018)  (Parm)
		EYUICurrency                                               MCurrency;                                               // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MITI[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MAmount;                                                 // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MProgress;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MRequired;                                               // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              MQuestId;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor)
		bool                                                       MCanReroll;                                              // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKAJ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.HandleUnfocus
	 */
	struct UUI_Button_Contract_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.HandleFocus
	 */
	struct UUI_Button_Contract_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SetStateElitePromo
	 */
	struct UUI_Button_Contract_C_SetStateElitePromo_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SetStateCooldown
	 */
	struct UUI_Button_Contract_C_SetStateCooldown_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SetStateAcknowledge
	 */
	struct UUI_Button_Contract_C_SetStateAcknowledge_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SetStateInProgress
	 */
	struct UUI_Button_Contract_C_SetStateInProgress_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.CollapseAllWidgets
	 */
	struct UUI_Button_Contract_C_CollapseAllWidgets_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.BndEvt__Button_Contract_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Contract_C_BndEvt__Button_Contract_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.BndEvt__Button_Contract_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Contract_C_BndEvt__Button_Contract_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.SendAcknowledgementAndCheckFocus
	 */
	struct UUI_Button_Contract_C_SendAcknowledgementAndCheckFocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.UpdateContractAndCheckFocus
	 */
	struct UUI_Button_Contract_C_UpdateContractAndCheckFocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.CheckFocus
	 */
	struct UUI_Button_Contract_C_CheckFocus_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.Construct
	 */
	struct UUI_Button_Contract_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.HandleOnReceivedInfoFromReroll
	 */
	struct UUI_Button_Contract_C_HandleOnReceivedInfoFromReroll_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnActionReceived
	 */
	struct UUI_Button_Contract_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_60_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_Contract_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_60_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.ExecuteUbergraph_UI_Button_Contract
	 */
	struct UUI_Button_Contract_C_ExecuteUbergraph_UI_Button_Contract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJKJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnReceivedFocused__DelegateSignature
	 */
	struct UUI_Button_Contract_C_OnReceivedFocused__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnAcknowledgeCompletedContract__DelegateSignature
	 */
	struct UUI_Button_Contract_C_OnAcknowledgeCompletedContract__DelegateSignature_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnRerollClicked__DelegateSignature
	 */
	struct UUI_Button_Contract_C_OnRerollClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Contract.UI_Button_Contract_C.OnRerollContract__DelegateSignature
	 */
	struct UUI_Button_Contract_C_OnRerollContract__DelegateSignature_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
