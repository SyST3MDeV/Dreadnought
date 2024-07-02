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
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.AdjustSlider
	 */
	struct UUI_Slider_Generic_C_AdjustSlider_Params
	{
	public:
		float                                                      AdjustmentFactor;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.UpdateSlider
	 */
	struct UUI_Slider_Generic_C_UpdateSlider_Params
	{
	public:
		float                                                      currentValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.HandleUnfocus
	 */
	struct UUI_Slider_Generic_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.HandleFocus
	 */
	struct UUI_Slider_Generic_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.Setup
	 */
	struct UUI_Slider_Generic_C_Setup_Params
	{	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.UpdateValueText
	 */
	struct UUI_Slider_Generic_C_UpdateValueText_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.Construct
	 */
	struct UUI_Slider_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.BndEvt__SliderGeneric_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Slider_Generic_C_BndEvt__SliderGeneric_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.OnMouseEnter
	 */
	struct UUI_Slider_Generic_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PS5F[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.OnMouseLeave
	 */
	struct UUI_Slider_Generic_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.ExecuteUbergraph_UI_Slider_Generic
	 */
	struct UUI_Slider_Generic_C_ExecuteUbergraph_UI_Slider_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.OnSliderHovered__DelegateSignature
	 */
	struct UUI_Slider_Generic_C_OnSliderHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Slider_Generic.UI_Slider_Generic_C.OnValueChanged__DelegateSignature
	 */
	struct UUI_Slider_Generic_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SliderIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
