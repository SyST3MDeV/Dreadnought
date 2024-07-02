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
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleTriangle
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleTriangle_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularDown
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.GetIndexWrappingValues
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_GetIndexWrappingValues_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    listLength;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleGranularUp
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Action
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_Action_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.UnfocusItem
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_UnfocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZCQ9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.FocusItem
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_FocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TCF7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Setup
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_Setup_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.SetSonyEmail
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_SetSonyEmail_Params
	{
	public:
		class FString                                              SonyEmail;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleCreateAccountError
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleCreateAccountError_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.Construct
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnShow
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnHide
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.HandleConfirmButtonClicked
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_HandleConfirmButtonClicked_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_TextField_Generic_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommitted
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_OnTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_ExecuteUbergraph_UI_Login_PS4_Panel_CreateAccountContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.OnTextCommited__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_OnTextCommited__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestCreateAccount__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_RequestCreateAccount__DelegateSignature_Params
	{
	public:
		struct FCreateAccountRequestData                           RequestData;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_CreateAccountContainer.UI_Login_PS4_Panel_CreateAccountContainer_C.RequestSonyEmail__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_CreateAccountContainer_C_RequestSonyEmail__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
