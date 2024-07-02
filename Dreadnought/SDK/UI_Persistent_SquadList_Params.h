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
	 * Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.HandleOnPlayerSpeakingChanged
	 */
	struct UUI_Persistent_SquadList_C_HandleOnPlayerSpeakingChanged_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Setup
	 */
	struct UUI_Persistent_SquadList_C_Setup_Params
	{
	public:
		TArray<struct FSquadUserData>                              SquadUsers;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Construct
	 */
	struct UUI_Persistent_SquadList_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.ExecuteUbergraph_UI_Persistent_SquadList
	 */
	struct UUI_Persistent_SquadList_C_ExecuteUbergraph_UI_Persistent_SquadList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
