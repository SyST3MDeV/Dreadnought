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
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.HandleUnfocus
	 */
	struct UUI_Button_OwnedShips_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.HandleFocus
	 */
	struct UUI_Button_OwnedShips_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnFocusReceived
	 */
	struct UUI_Button_OwnedShips_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_CRNF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.Construct
	 */
	struct UUI_Button_OwnedShips_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.BndEvt__ButtonClip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_BndEvt__ButtonClip_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.BndEvt__ButtonClip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_BndEvt__ButtonClip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.BndEvt__ButtonClip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_BndEvt__ButtonClip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.BndEvt__AboutButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_BndEvt__AboutButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnActionReceived
	 */
	struct UUI_Button_OwnedShips_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnFocusLost
	 */
	struct UUI_Button_OwnedShips_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.ExecuteUbergraph_UI_Button_OwnedShips
	 */
	struct UUI_Button_OwnedShips_C_ExecuteUbergraph_UI_Button_OwnedShips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnAboutButtonClicked__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_OnAboutButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_OwnedShips.UI_Button_OwnedShips_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_OwnedShips_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
