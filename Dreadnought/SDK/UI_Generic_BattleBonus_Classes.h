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
	 * WidgetBlueprintGeneratedClass UI_Generic_BattleBonus.UI_Generic_BattleBonus_C
	 * Size -> 0x010D (FullSize[0x034D] - InheritedSize[0x0240])
	 */
	class UUI_Generic_BattleBonus_C : public UUI_BattleBonusWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BodyBG;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ButtonActivate;                                          // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonusVertical_C*                   CreditsBonus;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonusVertical_C*                   FreeXPBonus;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonusVertical_C*                   ShipXpBonus;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BattleBonusHeader_C*                     UI_Generic_BattleBonusHeader;                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsBattleBonusActive;                                     // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5ZTN[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TextActivate;                                            // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TextActive;                                              // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ActivateBattleBonusDispatcher;                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CreditsAmount;                                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ShipXpAmount;                                            // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    FreeXpAmount;                                            // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BattleBonusPrice;                                        // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RecruitColor;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        VeteranColor;                                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LegendaryColor;                                          // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Popup_ActivateBattleBonusConfirmation_C*         PurchaseConfirmPopup;                                    // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FYUIBattleReadyBonusUIData                          BattleBonusData;                                         // 0x0308(0x0040) Edit, BlueprintVisible
		int32_t                                                    PlayerCurrentCredits;                                    // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EYFleetType                                                FleetType;                                               // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetBattleBonusButton(class UUI_Button_Generic_C** ButtonActivate);
		void SetupActivateButton();
		void ShowActivateButton(bool Show);
		void OnPurchasePopupResult(class UUI_Button_Generic_C* SelectedButtonRef);
		void ShowBattleReadyBonusConfirmPopup();
		void HandleTimerExpired();
		void SetupColorByFleet(EYFleetType Fleet);
		void SetCooldownTime(float RemainingTime);
		void SetupBonusValues();
		void Setup(EYFleetType fleetType);
		void Construct();
		void BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature(int32_t index);
		void OnFleetUpdated(bool Result);
		void OnBattleBonusPurcahsed(bool Result);
		void OnActionReceived();
		void ExecuteUbergraph_UI_Generic_BattleBonus(int32_t EntryPoint);
		void ActivateBattleBonusDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
