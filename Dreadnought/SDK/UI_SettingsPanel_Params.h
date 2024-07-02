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
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.IsAdvancedGraphicsSetting
	 */
	struct UUI_SettingsPanel_C_IsAdvancedGraphicsSetting_Params
	{
	public:
		struct FYUIUserSetting                                     InSetting;                                               // 0x0000(0x0100)  (Parm)
		bool                                                       IsAGS;                                                   // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1L1H[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleCustomGraphicsPreset
	 */
	struct UUI_SettingsPanel_C_HandleCustomGraphicsPreset_Params
	{
	public:
		struct FYUIUserSetting                                     settingToUpdate;                                         // 0x0000(0x0100)  (Parm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CanScroll
	 */
	struct UUI_SettingsPanel_C_CanScroll_Params
	{
	public:
		bool                                                       CanScroll;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D8KD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandlePanelScroll
	 */
	struct UUI_SettingsPanel_C_HandlePanelScroll_Params
	{
	public:
		bool                                                       ScrollUp;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetAllButton
	 */
	struct UUI_SettingsPanel_C_GetResetAllButton_Params
	{
	public:
		class UUI_Button_Generic_C*                                ResetAllButton;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalData
	 */
	struct UUI_SettingsPanel_C_SetLegalData_Params
	{
	public:
		struct FLegalDocumentData                                  LegalDocumentData;                                       // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotkeyData
	 */
	struct UUI_SettingsPanel_C_SetHotkeyData_Params
	{
	public:
		TArray<struct FUISettingsGroupData>                        GroupData;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.NotifySettingsScreenOnHover
	 */
	struct UUI_SettingsPanel_C_NotifySettingsScreenOnHover_Params
	{
	public:
		class UUI_DreadWidget*                                     HoveredWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetLegalLayout
	 */
	struct UUI_SettingsPanel_C_SetLegalLayout_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateControllerLayoutBindings
	 */
	struct UUI_SettingsPanel_C_UpdateControllerLayoutBindings_Params
	{
	public:
		int32_t                                                    LayoutIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.UnfocusAllWidgets
	 */
	struct UUI_SettingsPanel_C_UnfocusAllWidgets_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.GetResetHotkeysButton
	 */
	struct UUI_SettingsPanel_C_GetResetHotkeysButton_Params
	{
	public:
		class UUI_Button_Generic_C*                                NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.GetApplyButton
	 */
	struct UUI_SettingsPanel_C_GetApplyButton_Params
	{
	public:
		class UUI_Button_Generic_C*                                ApplyButton;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.GetSettingWidgetByIndex
	 */
	struct UUI_SettingsPanel_C_GetSettingWidgetByIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R424[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetControlsLayout
	 */
	struct UUI_SettingsPanel_C_SetControlsLayout_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetPlatformButtons
	 */
	struct UUI_SettingsPanel_C_SetPlatformButtons_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CreateGammaPanel
	 */
	struct UUI_SettingsPanel_C_CreateGammaPanel_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleUnfocus
	 */
	struct UUI_SettingsPanel_C_HandleUnfocus_Params
	{
	public:
		int32_t                                                    IndexToUnfocus;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y4IK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleFocus
	 */
	struct UUI_SettingsPanel_C_HandleFocus_Params
	{
	public:
		int32_t                                                    IndexToFocus;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J3IC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.AddItemPadding
	 */
	struct UUI_SettingsPanel_C_AddItemPadding_Params
	{
	public:
		class UUI_DreadWidget*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHeader
	 */
	struct UUI_SettingsPanel_C_CreateHeader_Params
	{
	public:
		class FText                                                Header;                                                  // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.UpdateUserSetting
	 */
	struct UUI_SettingsPanel_C_UpdateUserSetting_Params
	{
	public:
		struct FYUIUserSetting                                     settingToUpdate;                                         // 0x0000(0x0100)  (Parm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleSliderValueChange
	 */
	struct UUI_SettingsPanel_C_HandleSliderValueChange_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleDropdownValueChange
	 */
	struct UUI_SettingsPanel_C_HandleDropdownValueChange_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyDown
	 */
	struct UUI_SettingsPanel_C_HandleHotKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4D0U[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKey                                                inKey;                                                   // 0x0038(0x0018)  (Parm)
		struct FEventReply                                         KeyHandled;                                              // 0x0050(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetHotKeysEnabled
	 */
	struct UUI_SettingsPanel_C_SetHotKeysEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FFLB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HandleHotKeyClick
	 */
	struct UUI_SettingsPanel_C_HandleHotKeyClick_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CreateHotKey
	 */
	struct UUI_SettingsPanel_C_CreateHotKey_Params
	{
	public:
		struct FYUIUserSetting                                     SettingData;                                             // 0x0000(0x0100)  (Parm)
		int32_t                                                    index;                                                   // 0x0100(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7BBA[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CreateSlider
	 */
	struct UUI_SettingsPanel_C_CreateSlider_Params
	{
	public:
		struct FYUIUserSetting                                     SettingData;                                             // 0x0000(0x0100)  (Parm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.CreateDropdown
	 */
	struct UUI_SettingsPanel_C_CreateDropdown_Params
	{
	public:
		struct FYUIUserSetting                                     SettingData;                                             // 0x0000(0x0100)  (Parm)
		class UUI_Dropdown_Generic_C*                              Widget;                                                  // 0x0100(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.GetDropdownOptions
	 */
	struct UUI_SettingsPanel_C_GetDropdownOptions_Params
	{
	public:
		TArray<class FText>                                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FUIAccordionFilterCategoryOptionData>        OptionData;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.AddSettingsGroupList
	 */
	struct UUI_SettingsPanel_C_AddSettingsGroupList_Params
	{
	public:
		EYUISettingCategory                                        SettingsCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3PJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FYUIUserSetting>                             Settings;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.SetGroupData
	 */
	struct UUI_SettingsPanel_C_SetGroupData_Params
	{
	public:
		TArray<struct FUISettingsGroupData>                        GroupData;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.OnShow
	 */
	struct UUI_SettingsPanel_C_OnShow_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.OnHide
	 */
	struct UUI_SettingsPanel_C_OnHide_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.HideComplete
	 */
	struct UUI_SettingsPanel_C_HideComplete_Params
	{	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.PreConstruct
	 */
	struct UUI_SettingsPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.ExecuteUbergraph_UI_SettingsPanel
	 */
	struct UUI_SettingsPanel_C_ExecuteUbergraph_UI_SettingsPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZUN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.OnSettingWidgetHovered__DelegateSignature
	 */
	struct UUI_SettingsPanel_C_OnSettingWidgetHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    hoveredIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQYH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SettingsPanel_C*                                 source;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestSettingChange__DelegateSignature
	 */
	struct UUI_SettingsPanel_C_OnRequestSettingChange__DelegateSignature_Params
	{
	public:
		EYUISettingCategory                                        Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQ65[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYUIUserSetting                                     SettingData;                                             // 0x0008(0x0100)  (Parm)
	};

	/**
	 * Function UI_SettingsPanel.UI_SettingsPanel_C.OnRequestHotKeyUpdate__DelegateSignature
	 */
	struct UUI_SettingsPanel_C_OnRequestHotKeyUpdate__DelegateSignature_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm)
		bool                                                       shiftDown;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       altDown;                                                 // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ctrlDown;                                                // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
