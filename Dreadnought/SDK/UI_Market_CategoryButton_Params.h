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
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.GetIsSelected
	 */
	struct UUI_Market_CategoryButton_C_GetIsSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetThemeColor
	 */
	struct UUI_Market_CategoryButton_C_SetThemeColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.UpdateLoadoutName
	 */
	struct UUI_Market_CategoryButton_C_UpdateLoadoutName_Params
	{
	public:
		class FText                                                ButtonLabel;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ShowEditLoadoutNameButton
	 */
	struct UUI_Market_CategoryButton_C_ShowEditLoadoutNameButton_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupWidget
	 */
	struct UUI_Market_CategoryButton_C_SetupWidget_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetSelected
	 */
	struct UUI_Market_CategoryButton_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.SetupIcon
	 */
	struct UUI_Market_CategoryButton_C_SetupIcon_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleUnfocus
	 */
	struct UUI_Market_CategoryButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.HandleFocus
	 */
	struct UUI_Market_CategoryButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.PreConstruct
	 */
	struct UUI_Market_CategoryButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnActionReceived
	 */
	struct UUI_Market_CategoryButton_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.ExecuteUbergraph_UI_Market_CategoryButton
	 */
	struct UUI_Market_CategoryButton_C_ExecuteUbergraph_UI_Market_CategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnSaveLoadoutNameClicked__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_OnSaveLoadoutNameClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_CategoryButton.UI_Market_CategoryButton_C.OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_Market_CategoryButton_C_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Market_CategoryButton_C*                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
