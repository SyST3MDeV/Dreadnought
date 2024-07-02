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
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetLoginQueueStats
	 */
	struct UUI_LoginGate_Container_C_SetLoginQueueStats_Params
	{
	public:
		bool                                                       ShouldShowQueue;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldShowWait;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldShowCheckTime;                                     // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0U84[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                QueueText;                                               // 0x0008(0x0018)  (Parm)
		class FText                                                WaitTimeText;                                            // 0x0020(0x0018)  (Parm)
		class FText                                                CheckTimeText;                                           // 0x0038(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetBurstSmoothingStats
	 */
	struct UUI_LoginGate_Container_C_SetBurstSmoothingStats_Params
	{
	public:
		bool                                                       HasEstimatedWait;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFXL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                WaitTimeText;                                            // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetWaitText
	 */
	struct UUI_LoginGate_Container_C_SetWaitText_Params
	{
	public:
		class FText                                                WaitTime;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetQueueText
	 */
	struct UUI_LoginGate_Container_C_SetQueueText_Params
	{
	public:
		class FText                                                QueueText;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsTextInfo
	 */
	struct UUI_LoginGate_Container_C_ShowStatsTextInfo_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.UpdateCheckTime
	 */
	struct UUI_LoginGate_Container_C_UpdateCheckTime_Params
	{
	public:
		class FText                                                TextTime;                                                // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetMessageText
	 */
	struct UUI_LoginGate_Container_C_SetMessageText_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetHeaderText
	 */
	struct UUI_LoginGate_Container_C_SetHeaderText_Params
	{
	public:
		class FText                                                headerText;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowNavigationArea
	 */
	struct UUI_LoginGate_Container_C_ShowNavigationArea_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsArea
	 */
	struct UUI_LoginGate_Container_C_ShowStatsArea_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowCheckingProgress
	 */
	struct UUI_LoginGate_Container_C_ShowCheckingProgress_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowMessageArea
	 */
	struct UUI_LoginGate_Container_C_ShowMessageArea_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.Construct
	 */
	struct UUI_LoginGate_Container_C_Construct_Params
	{	};

	/**
	 * Function UI_LoginGate_Container.UI_LoginGate_Container_C.ExecuteUbergraph_UI_LoginGate_Container
	 */
	struct UUI_LoginGate_Container_C_ExecuteUbergraph_UI_LoginGate_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
