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
	 * Function UI_Generic_Spinner.UI_Generic_Spinner_C.IsSpinning
	 */
	struct UUI_Generic_Spinner_C_IsSpinning_Params
	{
	public:
		bool                                                       IsSpinning;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Spinner.UI_Generic_Spinner_C.StopSpinning
	 */
	struct UUI_Generic_Spinner_C_StopSpinning_Params
	{	};

	/**
	 * Function UI_Generic_Spinner.UI_Generic_Spinner_C.StartSpinning
	 */
	struct UUI_Generic_Spinner_C_StartSpinning_Params
	{	};

	/**
	 * Function UI_Generic_Spinner.UI_Generic_Spinner_C.Construct
	 */
	struct UUI_Generic_Spinner_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Spinner.UI_Generic_Spinner_C.ExecuteUbergraph_UI_Generic_Spinner
	 */
	struct UUI_Generic_Spinner_C_ExecuteUbergraph_UI_Generic_Spinner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
