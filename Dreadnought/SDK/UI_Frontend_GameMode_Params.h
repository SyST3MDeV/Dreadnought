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
	 * Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.UserConstructionScript
	 */
	struct AUI_Frontend_GameMode_C_UserConstructionScript_Params
	{	};

	/**
	 * Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.LaunchTutorial
	 */
	struct AUI_Frontend_GameMode_C_LaunchTutorial_Params
	{
	public:
		class FName                                                tutorialMap;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.ExecuteUbergraph_UI_Frontend_GameMode
	 */
	struct AUI_Frontend_GameMode_C_ExecuteUbergraph_UI_Frontend_GameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J423[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
