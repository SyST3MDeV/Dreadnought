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
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.UserConstructionScript
	 */
	struct AYCharacterSpawner_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.OnCharacterSpawned
	 */
	struct AYCharacterSpawner_BP_C_OnCharacterSpawned_Params
	{
	public:
		class AYBaseCharacter*                                     spawnedCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 */
	struct AYCharacterSpawner_BP_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params
	{	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 */
	struct AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params
	{	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 */
	struct AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params
	{	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 */
	struct AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params
	{	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_Debug_MVPTaunts
	 */
	struct AYCharacterSpawner_BP_C_EOM_Debug_MVPTaunts_Params
	{
	public:
		int32_t                                                    AnimIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_TeamScreen_PlayCharAnim
	 */
	struct AYCharacterSpawner_BP_C_EOM_TeamScreen_PlayCharAnim_Params
	{
	public:
		int32_t                                                    CharacterIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.ExecuteUbergraph_YCharacterSpawner_BP
	 */
	struct AYCharacterSpawner_BP_C_ExecuteUbergraph_YCharacterSpawner_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
