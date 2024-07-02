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
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetNumColumns
	 */
	struct UUI_Generic_Stats_Panel_C_SetNumColumns_Params
	{
	public:
		int32_t                                                    NumColumns;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetDefaultPanelSize
	 */
	struct UUI_Generic_Stats_Panel_C_GetDefaultPanelSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.GetWidePanelSize
	 */
	struct UUI_Generic_Stats_Panel_C_GetWidePanelSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIconVisible
	 */
	struct UUI_Generic_Stats_Panel_C_SetCategoryIconVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetCategoryIcon
	 */
	struct UUI_Generic_Stats_Panel_C_SetCategoryIcon_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetTier
	 */
	struct UUI_Generic_Stats_Panel_C_SetTier_Params
	{
	public:
		int32_t                                                    tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToWideSize
	 */
	struct UUI_Generic_Stats_Panel_C_SetToWideSize_Params
	{	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetToDefaultSize
	 */
	struct UUI_Generic_Stats_Panel_C_SetToDefaultSize_Params
	{	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.SetItem
	 */
	struct UUI_Generic_Stats_Panel_C_SetItem_Params
	{
	public:
		int32_t                                                    itemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36BE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYItemUIData                                        ItemUIData;                                              // 0x0008(0x00D0)  (Parm)
	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.Construct
	 */
	struct UUI_Generic_Stats_Panel_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Stats_Panel.UI_Generic_Stats_Panel_C.ExecuteUbergraph_UI_Generic_Stats_Panel
	 */
	struct UUI_Generic_Stats_Panel_C_ExecuteUbergraph_UI_Generic_Stats_Panel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
