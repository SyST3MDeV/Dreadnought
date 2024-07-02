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
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.GetWidgets
	 */
	struct UUI_MarketPanel_Featured_C_GetWidgets_Params
	{
	public:
		class UUI_Carousel_Generic_C*                              CarouselGeneric;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Carousel_Quad_C*                                 CarouselQuad;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.HandleItemDetailsClick
	 */
	struct UUI_MarketPanel_Featured_C_HandleItemDetailsClick_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.SetupCarousels
	 */
	struct UUI_MarketPanel_Featured_C_SetupCarousels_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.Construct
	 */
	struct UUI_MarketPanel_Featured_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.OnShow
	 */
	struct UUI_MarketPanel_Featured_C_OnShow_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.OnHide
	 */
	struct UUI_MarketPanel_Featured_C_OnHide_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.HideComplete
	 */
	struct UUI_MarketPanel_Featured_C_HideComplete_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.MarketDataUpdated
	 */
	struct UUI_MarketPanel_Featured_C_MarketDataUpdated_Params
	{	};

	/**
	 * Function UI_MarketPanel_Featured.UI_MarketPanel_Featured_C.ExecuteUbergraph_UI_MarketPanel_Featured
	 */
	struct UUI_MarketPanel_Featured_C_ExecuteUbergraph_UI_MarketPanel_Featured_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SS0E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
