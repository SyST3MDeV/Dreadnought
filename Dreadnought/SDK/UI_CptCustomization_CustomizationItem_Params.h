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
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetEquipped
	 */
	struct UUI_CptCustomization_CustomizationItem_C_SetEquipped_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Action
	 */
	struct UUI_CptCustomization_CustomizationItem_C_Action_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleUnfocus
	 */
	struct UUI_CptCustomization_CustomizationItem_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.HandleFocus
	 */
	struct UUI_CptCustomization_CustomizationItem_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetHighlightState
	 */
	struct UUI_CptCustomization_CustomizationItem_C_SetHighlightState_Params
	{
	public:
		bool                                                       isHighlighted;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetCampaignData
	 */
	struct UUI_CptCustomization_CustomizationItem_C_SetCampaignData_Params
	{
	public:
		struct FYMenuOfferCampaingData                             CampaignData;                                            // 0x0000(0x0038)  (Parm)
		bool                                                       ShowPrice;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUICurrency                                               currencyType;                                            // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.SetData
	 */
	struct UUI_CptCustomization_CustomizationItem_C_SetData_Params
	{
	public:
		class UTexture2D*                                          ModuleTexture;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ModuleName;                                              // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.Construct
	 */
	struct UUI_CptCustomization_CustomizationItem_C_Construct_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnActionReceived
	 */
	struct UUI_CptCustomization_CustomizationItem_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.ExecuteUbergraph_UI_CptCustomization_CustomizationItem
	 */
	struct UUI_CptCustomization_CustomizationItem_C_ExecuteUbergraph_UI_CptCustomization_CustomizationItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CptCustomization_CustomizationItem.UI_CptCustomization_CustomizationItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_CptCustomization_CustomizationItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_CptCustomization_CustomizationItem_C*            ClickedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
