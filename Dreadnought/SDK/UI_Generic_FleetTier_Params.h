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
	 * Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetType
	 */
	struct UUI_Generic_FleetTier_C_SetFleetType_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierText
	 */
	struct UUI_Generic_FleetTier_C_SetTierText_Params
	{
	public:
		class UTextBlock*                                          TextWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                TierText;                                                // 0x0008(0x0018)  (Parm)
		struct FLinearColor                                        TierColor;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierTexts
	 */
	struct UUI_Generic_FleetTier_C_SetTierTexts_Params
	{
	public:
		int32_t                                                    FirstTier;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SecondTier;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetFleetText
	 */
	struct UUI_Generic_FleetTier_C_SetFleetText_Params
	{
	public:
		class FText                                                FleetTitle;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_FleetTier.UI_Generic_FleetTier_C.SetTierImage
	 */
	struct UUI_Generic_FleetTier_C_SetTierImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
