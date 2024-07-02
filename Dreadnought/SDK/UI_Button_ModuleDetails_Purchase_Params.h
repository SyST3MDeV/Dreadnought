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
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetButtonCurrencyThrobber
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetButtonCurrencyThrobber_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetDataCurrencyThrobber
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetDataCurrencyThrobber_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.CheckCurrencyThrobberVisibility
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_CheckCurrencyThrobberVisibility_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateLockedPrecast
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateLockedPrecast_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.EnableButton
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_EnableButton_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetPlatformButtons
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetPlatformButtons_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.HandleUnfocus
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.HandleFocus
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.RefreshResearchAndPurchaseValues
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_RefreshResearchAndPurchaseValues_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetModuleCosts
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetModuleCosts_Params
	{
	public:
		int32_t                                                    ShipXPCost;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FreeXPCost;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CreditsCost;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateRequirementsNotMet
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateRequirementsNotMet_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateOwned
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateOwned_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateEquipped
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateEquipped_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateCanPurchase
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateCanPurchase_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateCanResearch
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateCanResearch_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.SetStateTechRequired
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_SetStateTechRequired_Params
	{
	public:
		int32_t                                                    TechOwned;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TechRequired;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.ClearAllComponents
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_ClearAllComponents_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.Construct
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.OnActionReceived
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.ExecuteUbergraph_UI_Button_ModuleDetails_Purchase
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_ExecuteUbergraph_UI_Button_ModuleDetails_Purchase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_ModuleDetails_Purchase.UI_Button_ModuleDetails_Purchase_C.OnSharedActionButtonClicked__DelegateSignature
	 */
	struct UUI_Button_ModuleDetails_Purchase_C_OnSharedActionButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
