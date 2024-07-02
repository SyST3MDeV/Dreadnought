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
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleUnsavedSettingsPopupResult
	 */
	struct UUI_Screen_Settings_C_HandleUnsavedSettingsPopupResult_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.Construct Settings Popup Buttons
	 */
	struct UUI_Screen_Settings_C_ConstructSettingsPopupButtons_Params
	{
	public:
		TArray<class UPopupButtonData*>                            PopupButtons;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.Show Unsaved Settings Popup
	 */
	struct UUI_Screen_Settings_C_ShowUnsavedSettingsPopup_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnMouseWheel
	 */
	struct UUI_Screen_Settings_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QQ73[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ResetAllSettings
	 */
	struct UUI_Screen_Settings_C_ResetAllSettings_Params
	{
	public:
		class UUI_Button_Generic_C*                                Souce;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.RefreshHotkeys
	 */
	struct UUI_Screen_Settings_C_RefreshHotkeys_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ScrollLegalPanel
	 */
	struct UUI_Screen_Settings_C_ScrollLegalPanel_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.IsLegalPanelOpen
	 */
	struct UUI_Screen_Settings_C_IsLegalPanelOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleTabRight
	 */
	struct UUI_Screen_Settings_C_HandleTabRight_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleTabLeft
	 */
	struct UUI_Screen_Settings_C_HandleTabLeft_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ResetHotkeys
	 */
	struct UUI_Screen_Settings_C_ResetHotkeys_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleRightGranular
	 */
	struct UUI_Screen_Settings_C_HandleRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.IsCurrentWidgetSlider
	 */
	struct UUI_Screen_Settings_C_IsCurrentWidgetSlider_Params
	{
	public:
		bool                                                       IsSlider;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7GJU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleLeftGranular
	 */
	struct UUI_Screen_Settings_C_HandleLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.SetTabFocus
	 */
	struct UUI_Screen_Settings_C_SetTabFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleDropdown
	 */
	struct UUI_Screen_Settings_C_HandleDropdown_Params
	{
	public:
		bool                                                       DropdownOpen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V7D6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleDownGranular
	 */
	struct UUI_Screen_Settings_C_HandleDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleUpGranular
	 */
	struct UUI_Screen_Settings_C_HandleUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.SetSettingsFocus
	 */
	struct UUI_Screen_Settings_C_SetSettingsFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4XW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SettingsPanel_C*                                 SettingsPanel;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleInput
	 */
	struct UUI_Screen_Settings_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnPreviewKeyDown
	 */
	struct UUI_Screen_Settings_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7H29[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnPreviewMouseButtonDown
	 */
	struct UUI_Screen_Settings_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGKH[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleSettingChange
	 */
	struct UUI_Screen_Settings_C_HandleSettingChange_Params
	{
	public:
		EYUISettingCategory                                        SettingCategory;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3WC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYUIUserSetting                                     settingToUpdate;                                         // 0x0008(0x0100)  (Parm)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ApplyUserSettings
	 */
	struct UUI_Screen_Settings_C_ApplyUserSettings_Params
	{
	public:
		class UUI_Button_Generic_C*                                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.RefreshPanels
	 */
	struct UUI_Screen_Settings_C_RefreshPanels_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HandleHotKeyUpdate
	 */
	struct UUI_Screen_Settings_C_HandleHotKeyUpdate_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm)
		bool                                                       shiftDown;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       altDown;                                                 // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ctrlDown;                                                // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.CreatePanel
	 */
	struct UUI_Screen_Settings_C_CreatePanel_Params
	{
	public:
		ESettingsScreenGroup                                       SettingsScreenGroup;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LRT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SettingsPanel_C*                                 SettingsPanel;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.HideCurrentPanel
	 */
	struct UUI_Screen_Settings_C_HideCurrentPanel_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.GetPanelName
	 */
	struct UUI_Screen_Settings_C_GetPanelName_Params
	{
	public:
		ESettingsScreenGroup                                       Group;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SC7Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ShowPanel
	 */
	struct UUI_Screen_Settings_C_ShowPanel_Params
	{
	public:
		int32_t                                                    PanelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QMH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.TabClicked
	 */
	struct UUI_Screen_Settings_C_TabClicked_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.SetupTabs
	 */
	struct UUI_Screen_Settings_C_SetupTabs_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.Construct
	 */
	struct UUI_Screen_Settings_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature
	 */
	struct UUI_Screen_Settings_C_BndEvt__TabList_K2Node_ComponentBoundEvent_0_OnTabClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnTransitionIn
	 */
	struct UUI_Screen_Settings_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnTransitionOut
	 */
	struct UUI_Screen_Settings_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Settings_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Settings_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnSettingsUpdated
	 */
	struct UUI_Screen_Settings_C_OnSettingsUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnNavigationEvent
	 */
	struct UUI_Screen_Settings_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.OnHotKeysUpdated
	 */
	struct UUI_Screen_Settings_C_OnHotKeysUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Settings.UI_Screen_Settings_C.ExecuteUbergraph_UI_Screen_Settings
	 */
	struct UUI_Screen_Settings_C_ExecuteUbergraph_UI_Screen_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
