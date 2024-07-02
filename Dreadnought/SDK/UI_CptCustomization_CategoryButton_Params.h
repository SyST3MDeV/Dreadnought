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
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Action
	 */
	struct UUI_CptCustomization_CategoryButton_C_Action_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Focus
	 */
	struct UUI_CptCustomization_CategoryButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Unfocus
	 */
	struct UUI_CptCustomization_CategoryButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.SetData
	 */
	struct UUI_CptCustomization_CategoryButton_C_SetData_Params
	{
	public:
		class UTexture2D*                                          ModuleTexture;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (Parm)
		class FText                                                itemName;                                                // 0x0020(0x0018)  (Parm)
		int32_t                                                    itemID;                                                  // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Construct
	 */
	struct UUI_CptCustomization_CategoryButton_C_Construct_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnActionReceived
	 */
	struct UUI_CptCustomization_CategoryButton_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.ExecuteUbergraph_UI_CptCustomization_CategoryButton
	 */
	struct UUI_CptCustomization_CategoryButton_C_ExecuteUbergraph_UI_CptCustomization_CategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_CptCustomization_CategoryButton_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_CptCustomization_CategoryButton_C*               ClickedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
