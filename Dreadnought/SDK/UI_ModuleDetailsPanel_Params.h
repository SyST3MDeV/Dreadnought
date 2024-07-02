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
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ShouldShowPurchaseButton
	 */
	struct UUI_ModuleDetailsPanel_C_ShouldShowPurchaseButton_Params
	{
	public:
		bool                                                       ItemIsOwned;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetVanityPurchaseCost
	 */
	struct UUI_ModuleDetailsPanel_C_SetVanityPurchaseCost_Params
	{
	public:
		int32_t                                                    ItemPurchaseCost;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Setup
	 */
	struct UUI_ModuleDetailsPanel_C_Setup_Params
	{
	public:
		bool                                                       IsItemModule;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsItemOfficerBriefing;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOwned;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemDescription
	 */
	struct UUI_ModuleDetailsPanel_C_SetItemDescription_Params
	{
	public:
		class FText                                                ModuleDescText;                                          // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetStats
	 */
	struct UUI_ModuleDetailsPanel_C_SetStats_Params
	{
	public:
		struct FYItemUIData                                        UIData;                                                  // 0x0000(0x00D0)  (Parm)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.SetItemTitle
	 */
	struct UUI_ModuleDetailsPanel_C_SetItemTitle_Params
	{
	public:
		struct FUIGenericButtonModuleData                          moduleData;                                              // 0x0000(0x00C0)  (Parm)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.Construct
	 */
	struct UUI_ModuleDetailsPanel_C_Construct_Params
	{	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
	 */
	struct UUI_ModuleDetailsPanel_C_BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.OnActionReceived
	 */
	struct UUI_ModuleDetailsPanel_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.ExecuteUbergraph_UI_ModuleDetailsPanel
	 */
	struct UUI_ModuleDetailsPanel_C_ExecuteUbergraph_UI_ModuleDetailsPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P47K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C.VanityPurchaseButtonClicked__DelegateSignature
	 */
	struct UUI_ModuleDetailsPanel_C_VanityPurchaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
