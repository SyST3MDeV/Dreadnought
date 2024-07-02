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
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetEmphasized
	 */
	struct UUI_Statistics_LeaderboardItem_C_SetEmphasized_Params
	{
	public:
		bool                                                       IsEmphasized;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.SetData
	 */
	struct UUI_Statistics_LeaderboardItem_C_SetData_Params
	{
	public:
		struct FStatisticsUIListPlayerData                         PlayerData;                                              // 0x0000(0x0098)  (Parm)
		int32_t                                                    index;                                                   // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZS32[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                StatLabel;                                               // 0x00A0(0x0018)  (Parm)
		int32_t                                                    LeaderboardIndexIn;                                      // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EY9T[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.Construct
	 */
	struct UUI_Statistics_LeaderboardItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnSynchronizeProperties
	 */
	struct UUI_Statistics_LeaderboardItem_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Statistics_LeaderboardItem_C_BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.ExecuteUbergraph_UI_Statistics_LeaderboardItem
	 */
	struct UUI_Statistics_LeaderboardItem_C_ExecuteUbergraph_UI_Statistics_LeaderboardItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C.OnLeaderboardItemClicked__DelegateSignature
	 */
	struct UUI_Statistics_LeaderboardItem_C_OnLeaderboardItemClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
