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
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.HandleUnfocus
	 */
	struct UUI_Generic_Button_IconText_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.HandleFocus
	 */
	struct UUI_Generic_Button_IconText_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.Construct
	 */
	struct UUI_Generic_Button_IconText_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.PreConstruct
	 */
	struct UUI_Generic_Button_IconText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.OnActionReceived
	 */
	struct UUI_Generic_Button_IconText_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.ExecuteUbergraph_UI_Generic_Button_IconText
	 */
	struct UUI_Generic_Button_IconText_C_ExecuteUbergraph_UI_Generic_Button_IconText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.OnUnHovered__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_OnUnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.OnHovered__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_IconText.UI_Generic_Button_IconText_C.OnClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_IconText_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_IconText_C*                       source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
