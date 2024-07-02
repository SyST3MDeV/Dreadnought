#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GameState_Outpost_BP.GameState_Outpost_BP_C
	 * Size -> 0x0008 (FullSize[0x1A70] - InheritedSize[0x1A68])
	 */
	class AGameState_Outpost_BP_C : public AYGameState_Outpost
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x1A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
