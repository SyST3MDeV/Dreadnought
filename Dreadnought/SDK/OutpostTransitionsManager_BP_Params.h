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
	 * Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.OnCameraBlend_MoveToHangar
	 */
	struct UOutpostTransitionsManager_BP_C_OnCameraBlend_MoveToHangar_Params
	{
	public:
		class ACameraActor*                                        startingCam;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ACameraActor*                                        hangarCam;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AYPlayerController_Outpost*                          Player;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.ExecuteUbergraph_OutpostTransitionsManager_BP
	 */
	struct UOutpostTransitionsManager_BP_C_ExecuteUbergraph_OutpostTransitionsManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PK03[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
