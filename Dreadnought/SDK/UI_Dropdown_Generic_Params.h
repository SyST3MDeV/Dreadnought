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
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.TransferFocusToCurrentScreen
	 */
	struct UUI_Dropdown_Generic_C_TransferFocusToCurrentScreen_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnPreviewKeyDown
	 */
	struct UUI_Dropdown_Generic_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0HB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OpenCloseComboBox
	 */
	struct UUI_Dropdown_Generic_C_OpenCloseComboBox_Params
	{
	public:
		bool                                                       OpenComboBox;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.ScrollDown
	 */
	struct UUI_Dropdown_Generic_C_ScrollDown_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.ScrollUp
	 */
	struct UUI_Dropdown_Generic_C_ScrollUp_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.SetScrollableVersion
	 */
	struct UUI_Dropdown_Generic_C_SetScrollableVersion_Params
	{
	public:
		bool                                                       IsScrollable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.HandleUnfocus
	 */
	struct UUI_Dropdown_Generic_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.HandleFocus
	 */
	struct UUI_Dropdown_Generic_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.Setup
	 */
	struct UUI_Dropdown_Generic_C_Setup_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.SetDropdownAlignment
	 */
	struct UUI_Dropdown_Generic_C_SetDropdownAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HRZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.SetDropdownWidth
	 */
	struct UUI_Dropdown_Generic_C_SetDropdownWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.DoesComboBoxHaveFocus
	 */
	struct UUI_Dropdown_Generic_C_DoesComboBoxHaveFocus_Params
	{
	public:
		bool                                                       ComboBoxEnabled;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4ZRX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnComboBoxGenericGenerateWidget
	 */
	struct UUI_Dropdown_Generic_C_OnComboBoxGenericGenerateWidget_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.HandleOptionSelection
	 */
	struct UUI_Dropdown_Generic_C_HandleOptionSelection_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    DropdownIndex;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.SetUpOptions
	 */
	struct UUI_Dropdown_Generic_C_SetUpOptions_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.ShowLabel
	 */
	struct UUI_Dropdown_Generic_C_ShowLabel_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VMGQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.PreConstruct
	 */
	struct UUI_Dropdown_Generic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.BndEvt__ComboBoxString6ft_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Dropdown_Generic_C_BndEvt__ComboBoxString6ft_0_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnMouseEnter
	 */
	struct UUI_Dropdown_Generic_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z0N6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnMouseLeave
	 */
	struct UUI_Dropdown_Generic_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.ExecuteUbergraph_UI_Dropdown_Generic
	 */
	struct UUI_Dropdown_Generic_C_ExecuteUbergraph_UI_Dropdown_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnDropdownHovered__DelegateSignature
	 */
	struct UUI_Dropdown_Generic_C_OnDropdownHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnComboBoxSelected__DelegateSignature
	 */
	struct UUI_Dropdown_Generic_C_OnComboBoxSelected__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Dropdown_Generic.UI_Dropdown_Generic_C.OnSelectionChanged__DelegateSignature
	 */
	struct UUI_Dropdown_Generic_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
