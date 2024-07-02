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
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandlePurchaseCompleted
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_HandlePurchaseCompleted_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetupData
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_SetupData_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnResearchShip
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnResearchShip_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnPurchaseShip
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnPurchaseShip_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetShipDescription
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_SetShipDescription_Params
	{
	public:
		class FText                                                ShipDescription;                                         // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Setup
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_Setup_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.SetManufacturerLogo
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_SetManufacturerLogo_Params
	{
	public:
		class FString                                              manufacturerIconPath;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.Construct
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnShow
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnShow_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnHide
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnHide_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HideComplete
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_HideComplete_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonTechTreeClicked
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnButtonTechTreeClicked_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.OnButtonResearchClaimButtonClicked
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_OnButtonResearchClaimButtonClicked_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimButton_C*          Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.HandleInventoryUpdated
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_HandleInventoryUpdated_Params
	{	};

	/**
	 * Function UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C.ExecuteUbergraph_UI_EditShip_Panel_ShipDetails
	 */
	struct UUI_EditShip_Panel_ShipDetails_C_ExecuteUbergraph_UI_EditShip_Panel_ShipDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9CMR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
