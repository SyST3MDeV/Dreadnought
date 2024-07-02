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
	 * Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetNeededPrice
	 */
	struct UUI_Popup_Upsell_Header_C_SetNeededPrice_Params
	{
	public:
		int32_t                                                    RequiredPrice;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetPreviousItemCurrencyType
	 */
	struct UUI_Popup_Upsell_Header_C_GetPreviousItemCurrencyType_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.GetRequiredPriceData
	 */
	struct UUI_Popup_Upsell_Header_C_GetRequiredPriceData_Params
	{
	public:
		class FText                                                Price;                                                   // 0x0000(0x0018)  (Parm, OutParm)
		int32_t                                                    CurrencyAmount;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_Upsell_Header.UI_Popup_Upsell_Header_C.SetData
	 */
	struct UUI_Popup_Upsell_Header_C_SetData_Params
	{
	public:
		float                                                      PlayerCurrency;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OYGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPopupUpsellData*                                    previousItem;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
