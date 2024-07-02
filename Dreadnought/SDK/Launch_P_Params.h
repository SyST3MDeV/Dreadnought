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
	 * Function Launch_P.Launch_P_C.HandleHangarStateUpdate
	 */
	struct ALaunch_P_C_HandleHangarStateUpdate_Params
	{
	public:
		EHangarState                                               hangarState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0TB1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Launch_P.Launch_P_C.SetUpAllLevelActorLinks
	 */
	struct ALaunch_P_C_SetUpAllLevelActorLinks_Params
	{	};

	/**
	 * Function Launch_P.Launch_P_C.LoadMenuSoundbanks
	 */
	struct ALaunch_P_C_LoadMenuSoundbanks_Params
	{	};

	/**
	 * Function Launch_P.Launch_P_C.ReceiveBeginPlay
	 */
	struct ALaunch_P_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Launch_P.Launch_P_C.ExecuteUbergraph_Launch_P
	 */
	struct ALaunch_P_C_ExecuteUbergraph_Launch_P_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FCMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
