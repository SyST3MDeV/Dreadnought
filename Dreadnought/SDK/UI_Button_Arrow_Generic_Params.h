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
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.PlayGamepadFeedback
	 */
	struct UUI_Button_Arrow_Generic_C_PlayGamepadFeedback_Params
	{	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.PreConstruct
	 */
	struct UUI_Button_Arrow_Generic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.BndEvt__Button_48_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Arrow_Generic_C_BndEvt__Button_48_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.BndEvt__ButtonBacking_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Arrow_Generic_C_BndEvt__ButtonBacking_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.BndEvt__ButtonBacking_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Arrow_Generic_C_BndEvt__ButtonBacking_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.ExecuteUbergraph_UI_Button_Arrow_Generic
	 */
	struct UUI_Button_Arrow_Generic_C_ExecuteUbergraph_UI_Button_Arrow_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Arrow_Generic.UI_Button_Arrow_Generic_C.OnArrowButtonClicked__DelegateSignature
	 */
	struct UUI_Button_Arrow_Generic_C_OnArrowButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
