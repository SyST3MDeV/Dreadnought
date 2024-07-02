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
	 * Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetCurrencyType
	 */
	struct UUI_Generic_CurrencyCost_C_SetCurrencyType_Params
	{
	public:
		EYUICurrency                                               Price;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPrice
	 */
	struct UUI_Generic_CurrencyCost_C_SetPrice_Params
	{
	public:
		class FText                                                Price;                                                   // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatFontColor
	 */
	struct UUI_Generic_CurrencyCost_C_FormatFontColor_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.FormatPrice
	 */
	struct UUI_Generic_CurrencyCost_C_FormatPrice_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FEAJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PriceFloat;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              RealCurrencyCode;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    PriceInt;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVP5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                FormattedPrice;                                          // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Generic_CurrencyCost.UI_Generic_CurrencyCost_C.SetPriceData
	 */
	struct UUI_Generic_CurrencyCost_C_SetPriceData_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISKP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PriceFloat;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              RealCurrencyCode;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    PriceInt;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCFD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
