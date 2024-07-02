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
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleUnfocus
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.HandleFocus
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.GetTabType
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_GetTabType_Params
	{
	public:
		EMarketBundleInfoTabs                                      TabType;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.SetTabType
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_SetTabType_Params
	{
	public:
		EMarketBundleInfoTabs                                      Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.Construct
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_Construct_Params
	{	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.ExecuteUbergraph_UI_Market_BundleDetails_TabIcon
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_ExecuteUbergraph_UI_Market_BundleDetails_TabIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_BundleDetails_TabIcon.UI_Market_BundleDetails_TabIcon_C.OnTabSelected__DelegateSignature
	 */
	struct UUI_Market_BundleDetails_TabIcon_C_OnTabSelected__DelegateSignature_Params
	{
	public:
		class UUI_Market_BundleDetails_TabIcon_C*                  source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
