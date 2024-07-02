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
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.MakeImageArray
	 */
	struct UUI_Generic_SelectionBrackets_C_MakeImageArray_Params
	{
	public:
		TArray<class UWidget*>                                     Images;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.SetColor
	 */
	struct UUI_Generic_SelectionBrackets_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.HandleUnfocus
	 */
	struct UUI_Generic_SelectionBrackets_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.HandleFocus
	 */
	struct UUI_Generic_SelectionBrackets_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.PreConstruct
	 */
	struct UUI_Generic_SelectionBrackets_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_SelectionBrackets.UI_Generic_SelectionBrackets_C.ExecuteUbergraph_UI_Generic_SelectionBrackets
	 */
	struct UUI_Generic_SelectionBrackets_C_ExecuteUbergraph_UI_Generic_SelectionBrackets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
