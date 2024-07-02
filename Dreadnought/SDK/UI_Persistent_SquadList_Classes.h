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
	 * WidgetBlueprintGeneratedClass UI_Persistent_SquadList.UI_Persistent_SquadList_C
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class UUI_Persistent_SquadList_C : public UUI_PersistentSquadListWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Persistent_SquadList_Card_C*                     PlayerCard1;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_SquadList_Card_C*                     PlayerCard2;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Persistent_SquadList_Card_C*                     PlayerCard3;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_Persistent_SquadList_Card_C*>             PlayerCards;                                             // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void HandleOnPlayerSpeakingChanged(const struct FSquadVoiceData& VoiceData);
		void Setup(TArray<struct FSquadUserData>* SquadUsers);
		void Construct();
		void ExecuteUbergraph_UI_Persistent_SquadList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
