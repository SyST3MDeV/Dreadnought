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
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetShipXP
	 */
	struct UUI_Generic_ShipTitleWidget_C_SetShipXP_Params
	{
	public:
		int32_t                                                    xp;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetDataFromStruct
	 */
	struct UUI_Generic_ShipTitleWidget_C_SetDataFromStruct_Params
	{
	public:
		struct FYUIShipManufacturerTechItemData                    shipData;                                                // 0x0000(0x0180)  (Parm)
	};

	/**
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.SetData
	 */
	struct UUI_Generic_ShipTitleWidget_C_SetData_Params
	{
	public:
		class UTexture2D*                                          TierIcon;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          shipIcon;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              shipName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    tier;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHeroShip;                                              // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.Construct
	 */
	struct UUI_Generic_ShipTitleWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.UpdateIconsAndText
	 */
	struct UUI_Generic_ShipTitleWidget_C_UpdateIconsAndText_Params
	{
	public:
		class UTexture2D*                                          TierIcon;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          shipIcon;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              shipName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    shipTier;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C.ExecuteUbergraph_UI_Generic_ShipTitleWidget
	 */
	struct UUI_Generic_ShipTitleWidget_C_ExecuteUbergraph_UI_Generic_ShipTitleWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CQM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
