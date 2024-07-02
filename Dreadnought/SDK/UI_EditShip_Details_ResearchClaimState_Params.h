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
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetPurchaseCostHardCurrencyVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetPurchaseCostHardCurrencyVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetPurchaseCostSoftCurrencyVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetPurchaseCostSoftCurrencyVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetResearchCostShipXpVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetResearchCostShipXpVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetResearchCostFreeXpVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetResearchCostFreeXpVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.HideResearchCosts
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_HideResearchCosts_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.HidePurchaseCosts
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_HidePurchaseCosts_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.HideAllCosts
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_HideAllCosts_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetInfoTextExtraVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetInfoTextExtraVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetInfoTextExtraColor
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetInfoTextExtraColor_Params
	{
	public:
		struct FSlateColor                                         secondaryTextColor;                                      // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetInfoTextExtra
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetInfoTextExtra_Params
	{
	public:
		class FText                                                extraText;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetPurchaseCost
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetPurchaseCost_Params
	{
	public:
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetInfoTextColor
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetInfoTextColor_Params
	{
	public:
		struct FSlateColor                                         primaryTextColor;                                        // 0x0000(0x0028)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetCostTextColor
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetCostTextColor_Params
	{
	public:
		struct FSlateColor                                         researchCostFreeXpTextColor;                             // 0x0000(0x0028)  (Parm)
		struct FSlateColor                                         researchCostShipXpTextColor;                             // 0x0028(0x0028)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetInfoText
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetInfoText_Params
	{
	public:
		class FText                                                infoText;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetResearchCost
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetResearchCost_Params
	{
	public:
		struct FYShipPrice                                         shipResearchCost;                                        // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimState.UI_EditShip_Details_ResearchClaimState_C.SetIconPath
	 */
	struct UUI_EditShip_Details_ResearchClaimState_C_SetIconPath_Params
	{
	public:
		class FString                                              iconPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
