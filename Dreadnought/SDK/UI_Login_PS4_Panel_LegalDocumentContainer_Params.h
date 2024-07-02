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
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.HandleScrollingInput
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_HandleScrollingInput_Params
	{
	public:
		struct FKey                                                StoredKey;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Action
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_Action_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptDocument
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_AcceptDocument_Params
	{
	public:
		struct FLegalDocumentData                                  DocumentData;                                            // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetAsLoading
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetAsLoading_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetDocumentData
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetDocumentData_Params
	{
	public:
		struct FLegalDocumentData                                  LegalDocumentData;                                       // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.SetHeader
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_SetHeader_Params
	{
	public:
		class FText                                                Header;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnShow
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_OnShow_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.OnHide
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_OnHide_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.Construct
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_Construct_Params
	{	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C.AcceptLegalDocument__DelegateSignature
	 */
	struct UUI_Login_PS4_Panel_LegalDocumentContainer_C_AcceptLegalDocument__DelegateSignature_Params
	{
	public:
		struct FLegalDocumentData                                  LegalDocumentData;                                       // 0x0000(0x0038)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
