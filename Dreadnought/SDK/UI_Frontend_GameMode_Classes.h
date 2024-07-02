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
	 * BlueprintGeneratedClass UI_Frontend_GameMode.UI_Frontend_GameMode_C
	 * Size -> 0x0010 (FullSize[0x0BD0] - InheritedSize[0x0BC0])
	 */
	class AUI_Frontend_GameMode_C : public AYGameMode_Outpost
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		void LaunchTutorial(const class FName& tutorialMap);
		void ExecuteUbergraph_UI_Frontend_GameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
