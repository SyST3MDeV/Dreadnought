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
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OpenKeyboard
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_OpenKeyboard_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularDown
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_HandleGranularDown_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.GetIndexWrappingValues
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_GetIndexWrappingValues_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    listLength;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.UnfocusItem
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_UnfocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JOGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleGranularUp
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_HandleGranularUp_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Action
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_Action_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.FocusItem
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_FocusItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNS1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Setup
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_Setup_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.HandleLinkAccountError
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_HandleLinkAccountError_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnShow
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnHide
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.Construct
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommitted
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_OnTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_TextField_Generic_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_PasswordField_Generic_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6U5W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.OnTextCommited__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_OnTextCommited__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C.RequestLinkAccount__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LinkAccount_C_RequestLinkAccount__DelegateSignature_Params
	{
	public:
		struct FLinkAccountRequestData                             LinkAccountData;                                         // 0x0000(0x0020)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
