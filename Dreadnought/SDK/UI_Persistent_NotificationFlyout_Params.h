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
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.DismissCurrentNotification
	 */
	struct UUI_Persistent_NotificationFlyout_C_DismissCurrentNotification_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.UpdateFocusedButton
	 */
	struct UUI_Persistent_NotificationFlyout_C_UpdateFocusedButton_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleGamepadInput
	 */
	struct UUI_Persistent_NotificationFlyout_C_HandleGamepadInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ToggleOpen
	 */
	struct UUI_Persistent_NotificationFlyout_C_ToggleOpen_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.IsOpen
	 */
	struct UUI_Persistent_NotificationFlyout_C_IsOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.HandleOnActionButtonClicked
	 */
	struct UUI_Persistent_NotificationFlyout_C_HandleOnActionButtonClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetupNotificationActionButtons
	 */
	struct UUI_Persistent_NotificationFlyout_C_SetupNotificationActionButtons_Params
	{
	public:
		TArray<ENotificationButtonType>                            ButtonTypeList;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ClearNotificationData
	 */
	struct UUI_Persistent_NotificationFlyout_C_ClearNotificationData_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetCurrentNotification
	 */
	struct UUI_Persistent_NotificationFlyout_C_SetCurrentNotification_Params
	{
	public:
		class UNotificationData*                                   Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.SetNumNotifications
	 */
	struct UUI_Persistent_NotificationFlyout_C_SetNumNotifications_Params
	{
	public:
		int32_t                                                    NumberOfAnnouncements;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.Construct
	 */
	struct UUI_Persistent_NotificationFlyout_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnSynchronizeProperties
	 */
	struct UUI_Persistent_NotificationFlyout_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Persistent_NotificationFlyout_C_BndEvt__CounterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.ExecuteUbergraph_UI_Persistent_NotificationFlyout
	 */
	struct UUI_Persistent_NotificationFlyout_C_ExecuteUbergraph_UI_Persistent_NotificationFlyout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2MA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_NotificationFlyout.UI_Persistent_NotificationFlyout_C.OnNotificationClicked__DelegateSignature
	 */
	struct UUI_Persistent_NotificationFlyout_C_OnNotificationClicked__DelegateSignature_Params
	{
	public:
		class UUI_Persistent_NotificationFlyout_C*                 source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ENotificationButtonType                                    Action;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
