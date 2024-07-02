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
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleUnfocus
	 */
	struct UUI_SettingRow_Hotkey_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.HandleFocus
	 */
	struct UUI_SettingRow_Hotkey_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Setup
	 */
	struct UUI_SettingRow_Hotkey_C_Setup_Params
	{	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableInput
	 */
	struct UUI_SettingRow_Hotkey_C_EnableInput_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.EnableKeyPressMode
	 */
	struct UUI_SettingRow_Hotkey_C_EnableKeyPressMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.Construct
	 */
	struct UUI_SettingRow_Hotkey_C_Construct_Params
	{	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_SettingRow_Hotkey_C_BndEvt__HotKeyButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseEnter
	 */
	struct UUI_SettingRow_Hotkey_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FFW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnMouseLeave
	 */
	struct UUI_SettingRow_Hotkey_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.ExecuteUbergraph_UI_SettingRow_Hotkey
	 */
	struct UUI_SettingRow_Hotkey_C_ExecuteUbergraph_UI_SettingRow_Hotkey_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotkeyHovered__DelegateSignature
	 */
	struct UUI_SettingRow_Hotkey_C_OnHotkeyHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SettingRow_Hotkey.UI_SettingRow_Hotkey_C.OnHotKeyClicked__DelegateSignature
	 */
	struct UUI_SettingRow_Hotkey_C_OnHotKeyClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
