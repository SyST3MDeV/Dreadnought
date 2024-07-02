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
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.SetWidgetFocus
	 */
	struct UUI_Screen_Contracts_C_SetWidgetFocus_Params
	{
	public:
		class UUI_DreadWidget*                                     NewFocusWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.HandleInput
	 */
	struct UUI_Screen_Contracts_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.SetLegendHints
	 */
	struct UUI_Screen_Contracts_C_SetLegendHints_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.BindContractButtonEvents
	 */
	struct UUI_Screen_Contracts_C_BindContractButtonEvents_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.SetLockedContractsState
	 */
	struct UUI_Screen_Contracts_C_SetLockedContractsState_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.SetRerollTimerEventAndTiles
	 */
	struct UUI_Screen_Contracts_C_SetRerollTimerEventAndTiles_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.DecreaseTimeUntilReroll
	 */
	struct UUI_Screen_Contracts_C_DecreaseTimeUntilReroll_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.FormatTime
	 */
	struct UUI_Screen_Contracts_C_FormatTime_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.IsContractCompleted
	 */
	struct UUI_Screen_Contracts_C_IsContractCompleted_Params
	{
	public:
		struct FContractData                                       InContract;                                              // 0x0000(0x0058)  (Parm)
		bool                                                       IsCompleted;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.UpdateContracts
	 */
	struct UUI_Screen_Contracts_C_UpdateContracts_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.AddHorizontalBoxChildrenToArray
	 */
	struct UUI_Screen_Contracts_C_AddHorizontalBoxChildrenToArray_Params
	{
	public:
		class UHorizontalBox*                                      HorizontalBox;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.OnTransitionIn
	 */
	struct UUI_Screen_Contracts_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.OnTransitionOut
	 */
	struct UUI_Screen_Contracts_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Contracts_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Contracts_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.Construct
	 */
	struct UUI_Screen_Contracts_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.HandleOnRerollContract
	 */
	struct UUI_Screen_Contracts_C_HandleOnRerollContract_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.HandleOnRerollClicked
	 */
	struct UUI_Screen_Contracts_C_HandleOnRerollClicked_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.HandleOnContractsUpdated
	 */
	struct UUI_Screen_Contracts_C_HandleOnContractsUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.HandleAcknowledgeCompletedContract
	 */
	struct UUI_Screen_Contracts_C_HandleAcknowledgeCompletedContract_Params
	{
	public:
		class FString                                              questId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_Contracts_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		class UUI_DreadWidget*                                     FocusedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.OnNavigationEvent
	 */
	struct UUI_Screen_Contracts_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Contracts.UI_Screen_Contracts_C.ExecuteUbergraph_UI_Screen_Contracts
	 */
	struct UUI_Screen_Contracts_C_ExecuteUbergraph_UI_Screen_Contracts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
