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
	 * Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.Setup
	 */
	struct UUI_Generic_BattleBonusHorizontal_C_Setup_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetAmount
	 */
	struct UUI_Generic_BattleBonusHorizontal_C_SetAmount_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OXZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.SetImage
	 */
	struct UUI_Generic_BattleBonusHorizontal_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          CurrencyTexture;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.PreConstruct
	 */
	struct UUI_Generic_BattleBonusHorizontal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonusHorizontal.UI_Generic_BattleBonusHorizontal_C.ExecuteUbergraph_UI_Generic_BattleBonusHorizontal
	 */
	struct UUI_Generic_BattleBonusHorizontal_C_ExecuteUbergraph_UI_Generic_BattleBonusHorizontal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
