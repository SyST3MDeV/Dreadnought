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
	 * Function CH_Female_VIM.CH_Female_VIM_C.ActivateCustomization 
	 */
	struct UCH_Female_VIM_C_ActivateCustomization_Params
	{
	public:
		bool                                                       DoIntro;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoClothesSwap;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoHeadgearSwap;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CH_Female_VIM.CH_Female_VIM_C.ExecuteUbergraph_CH_Female_VIM
	 */
	struct UCH_Female_VIM_C_ExecuteUbergraph_CH_Female_VIM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
