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
	 * BlueprintGeneratedClass OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UOutpostTransitionsManager_BP_C : public UYOutpostTransitionManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0080(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnCameraBlend_MoveToHangar(class ACameraActor* startingCam, class ACameraActor* hangarCam, class AYPlayerController_Outpost* Player);
		void ExecuteUbergraph_OutpostTransitionsManager_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
