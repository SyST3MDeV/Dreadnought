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
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.SetText
	 */
	struct UUI_TextField_Generic_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.GetText
	 */
	struct UUI_TextField_Generic_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.Setup
	 */
	struct UUI_TextField_Generic_C_Setup_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.HandleUnfocus
	 */
	struct UUI_TextField_Generic_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.HandleFocus
	 */
	struct UUI_TextField_Generic_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.Construct
	 */
	struct UUI_TextField_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TextField_Generic_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_TextField_Generic_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.OnActionReceived
	 */
	struct UUI_TextField_Generic_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_TextField_Generic_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.ExecuteUbergraph_UI_TextField_Generic
	 */
	struct UUI_TextField_Generic_C_ExecuteUbergraph_UI_TextField_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TextField_Generic.UI_TextField_Generic_C.OnClicked__DelegateSignature
	 */
	struct UUI_TextField_Generic_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_TextField_Generic_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
