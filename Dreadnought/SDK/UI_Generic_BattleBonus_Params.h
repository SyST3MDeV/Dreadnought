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
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.GetBattleBonusButton
	 */
	struct UUI_Generic_BattleBonus_C_GetBattleBonusButton_Params
	{
	public:
		class UUI_Button_Generic_C*                                ButtonActivate;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupActivateButton
	 */
	struct UUI_Generic_BattleBonus_C_SetupActivateButton_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowActivateButton
	 */
	struct UUI_Generic_BattleBonus_C_ShowActivateButton_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnPurchasePopupResult
	 */
	struct UUI_Generic_BattleBonus_C_OnPurchasePopupResult_Params
	{
	public:
		class UUI_Button_Generic_C*                                SelectedButtonRef;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ShowBattleReadyBonusConfirmPopup
	 */
	struct UUI_Generic_BattleBonus_C_ShowBattleReadyBonusConfirmPopup_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.HandleTimerExpired
	 */
	struct UUI_Generic_BattleBonus_C_HandleTimerExpired_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupColorByFleet
	 */
	struct UUI_Generic_BattleBonus_C_SetupColorByFleet_Params
	{
	public:
		EYFleetType                                                Fleet;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetCooldownTime
	 */
	struct UUI_Generic_BattleBonus_C_SetCooldownTime_Params
	{
	public:
		float                                                      RemainingTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.SetupBonusValues
	 */
	struct UUI_Generic_BattleBonus_C_SetupBonusValues_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Setup
	 */
	struct UUI_Generic_BattleBonus_C_Setup_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HAMX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.Construct
	 */
	struct UUI_Generic_BattleBonus_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_BattleBonus_C_BndEvt__ButtonActivate_K2Node_ComponentBoundEvent_90_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnFleetUpdated
	 */
	struct UUI_Generic_BattleBonus_C_OnFleetUpdated_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnBattleBonusPurcahsed
	 */
	struct UUI_Generic_BattleBonus_C_OnBattleBonusPurcahsed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.OnActionReceived
	 */
	struct UUI_Generic_BattleBonus_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ExecuteUbergraph_UI_Generic_BattleBonus
	 */
	struct UUI_Generic_BattleBonus_C_ExecuteUbergraph_UI_Generic_BattleBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_BattleBonus.UI_Generic_BattleBonus_C.ActivateBattleBonusDispatcher__DelegateSignature
	 */
	struct UUI_Generic_BattleBonus_C_ActivateBattleBonusDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
