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
	 * WidgetBlueprintGeneratedClass UI_CustomMatch_TeamList.UI_CustomMatch_TeamList_C
	 * Size -> 0x0098 (FullSize[0x02D8] - InheritedSize[0x0240])
	 */
	class UUI_CustomMatch_TeamList_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        TeamList;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextCurrentTeamCount;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextTeamTitle;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_CustomMatch_TeamList_Row_C*                      UI_CustomMatch_TeamList_Row;                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    AmountOfPlayersOnTeam;                                   // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_95F8[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_CustomMatch_TeamList_Row_C*>              RowItems;                                                // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    NumCurrentPlayers;                                       // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C51S[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TeamName;                                                // 0x0288(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnPlayerRemoved;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerMoved;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PlayerIndex;                                             // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DG17[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerOptionsOpen;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetButtonIndex(int32_t index, bool IsHost, int32_t* ButtonIndex);
		void GetRowFromIndex(int32_t index, bool IsHost, class UUI_CustomMatch_TeamList_Row_C** RowReference);
		void FindIndexFromRowAndButton(int32_t RowIndex, int32_t ButtonIndex, bool IsHost, int32_t* index);
		void FindRowAndButtonIndex(int32_t index, bool IsHost, int32_t* RowIndex, int32_t* ButtonIndex);
		void HandleOnPlayerCardClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard);
		void GetPlayerCard(int32_t index, class UUI_CustomMatch_PlayerCard_C** CurrentPlayerCard);
		void HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& PlayerVoiceData);
		void GetFocusableWidgets(TArray<class UButton*>* ItemList);
		void ClearTeamData();
		void HandleOnSendPlayerToOtherTeamClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard);
		void HandleOnRemovePlayerClicked(class UUI_CustomMatch_PlayerCard_C* PlayerCard);
		void FillOpenSlotsWithAi(bool IsFilling);
		void AddPlayer(const struct FPlayerUIData& PlayerData, bool IsHost, bool CanRemove, bool CanMove);
		void FindClickedRowItem(class UUI_CustomMatch_PlayerCard_C* SelectedRowItem, int32_t* index, class UUI_CustomMatch_TeamList_Row_C** RowItem);
		void RemovePlayer(int32_t PlayerIndex);
		void GetPlayerData(int32_t index, struct FPlayerUIData* CurrentPlayerData);
		void Setup();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_CustomMatch_TeamList(int32_t EntryPoint);
		void OnPlayerOptionsOpen__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		void OnPlayerMoved__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		void OnPlayerRemoved__DelegateSignature(class UUI_CustomMatch_TeamList_C* TeamList, int32_t PlayerIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
