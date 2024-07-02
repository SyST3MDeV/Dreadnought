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
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleUnfocus
	 */
	struct UUI_CustomMatch_Settings_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleFocus
	 */
	struct UUI_CustomMatch_Settings_C_HandleFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.GetFocusableWidgets
	 */
	struct UUI_CustomMatch_Settings_C_GetFocusableWidgets_Params
	{
	public:
		TArray<class UUI_DreadWidget*>                             WidgetList;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDoRefresh
	 */
	struct UUI_CustomMatch_Settings_C_HandleDoRefresh_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RefreshDropdowns
	 */
	struct UUI_CustomMatch_Settings_C_RefreshDropdowns_Params
	{
	public:
		int32_t                                                    gameModeIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    mapIndex;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleRoomStateChanged
	 */
	struct UUI_CustomMatch_Settings_C_HandleRoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          OldScreenState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomRoomState                                          NewScreenState;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41F7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleSettingsChanged
	 */
	struct UUI_CustomMatch_Settings_C_HandleSettingsChanged_Params
	{
	public:
		struct FYCustomMatchScreenSettings                         ScreenSettings;                                          // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.HandleDataReady
	 */
	struct UUI_CustomMatch_Settings_C_HandleDataReady_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_BndEvt__ButtonStartMatch_K2Node_ComponentBoundEvent_435_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DataReady
	 */
	struct UUI_CustomMatch_Settings_C_DataReady_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_BndEvt__GameModeDropdown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_BndEvt__MapDropdown_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.SettingsChanged
	 */
	struct UUI_CustomMatch_Settings_C_SettingsChanged_Params
	{
	public:
		struct FYCustomMatchScreenSettings                         Settings;                                                // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.RoomStateChanged
	 */
	struct UUI_CustomMatch_Settings_C_RoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          oldRoomState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomRoomState                                          newRoomState;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.DoRefresh
	 */
	struct UUI_CustomMatch_Settings_C_DoRefresh_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.Construct
	 */
	struct UUI_CustomMatch_Settings_C_Construct_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_BndEvt__CheckBoxTeam1Ai_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S2YS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_BndEvt__CheckBoxTeam2Ai_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CDUT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.ExecuteUbergraph_UI_CustomMatch_Settings
	 */
	struct UUI_CustomMatch_Settings_C_ExecuteUbergraph_UI_CustomMatch_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnMapSelected__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_OnMapSelected__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedMap;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnGameModeSelected__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_OnGameModeSelected__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedGameMode;                                        // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnAdvanceClicked__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_OnAdvanceClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CustomMatch_Settings.UI_CustomMatch_Settings_C.OnFillTeamWithAIChecked__DelegateSignature
	 */
	struct UUI_CustomMatch_Settings_C_OnFillTeamWithAIChecked__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQTC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TeamNumber;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
