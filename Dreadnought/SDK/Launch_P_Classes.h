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
	 * BlueprintGeneratedClass Launch_P.Launch_P_C
	 * Size -> 0x0040 (FullSize[0x0420] - InheritedSize[0x03E0])
	 */
	class ALaunch_P_C : public AYLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AHangarStateManager_C*                               HangarStateManager;                                      // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ACameraActor*                                        StarfieldCamera_ExecuteUbergraph_Launch_P_RefProperty;   // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        HangarCamera_EdGraph_7_RefProperty;                      // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        StarfieldCamera_EdGraph_7_RefProperty;                   // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        CaptainCamera_EdGraph_7_RefProperty;                     // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        CareerCamera_EdGraph_7_RefProperty;                      // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AYCharacterSpawner_BP_C*                             CaptainSpawner_EdGraph_7_RefProperty;                    // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleHangarStateUpdate(EHangarState hangarState);
		void SetUpAllLevelActorLinks();
		void LoadMenuSoundbanks();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Launch_P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
