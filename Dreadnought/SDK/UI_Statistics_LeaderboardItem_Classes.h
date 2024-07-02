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
	 * WidgetBlueprintGeneratedClass UI_Statistics_LeaderboardItem.UI_Statistics_LeaderboardItem_C
	 * Size -> 0x00C9 (FullSize[0x0309] - InheritedSize[0x0240])
	 */
	class UUI_Statistics_LeaderboardItem_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             LeaderboardItemButton;                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          RankText;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Seperator;                                               // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          StatLabelText;                                           // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          StatNumberText;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UsernameText;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          UserNumberText;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              UserPortrait;                                            // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                rank;                                                    // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                UserName;                                                // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UTexture2D*                                          Portrait;                                                // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class FText                                                Stat;                                                    // 0x02C0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                UserNumber;                                              // 0x02D8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    index;                                                   // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F236[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLeaderboardItemClicked;                                // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isSelected;                                              // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetEmphasized(bool IsEmphasized);
		void SetData(const struct FStatisticsUIListPlayerData& PlayerData, int32_t index, const class FText& StatLabel, int32_t LeaderboardIndexIn);
		void Construct();
		void OnSynchronizeProperties();
		void BndEvt__LeaderboardItemButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Statistics_LeaderboardItem(int32_t EntryPoint);
		void OnLeaderboardItemClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
