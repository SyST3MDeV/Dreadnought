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
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyTypeAndAmount
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_SetCurrencyTypeAndAmount_Params
	{
	public:
		EYUICurrency                                               currencyType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P5H9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrencyAmount;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyEnabled
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_SetCurrencyEnabled_Params
	{
	public:
		bool                                                       CurrencyDisplayEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyIcon
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_SetCurrencyIcon_Params
	{	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetCurrencyText
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_SetCurrencyText_Params
	{	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.SetButton
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_SetButton_Params
	{
	public:
		struct FLegendPromptData                                   Data;                                                    // 0x0000(0x0020)  (Parm)
	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.Construct
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_LegendPrompt_Currency.UI_Generic_LegendPrompt_Currency_C.ExecuteUbergraph_UI_Generic_LegendPrompt_Currency
	 */
	struct UUI_Generic_LegendPrompt_Currency_C_ExecuteUbergraph_UI_Generic_LegendPrompt_Currency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
