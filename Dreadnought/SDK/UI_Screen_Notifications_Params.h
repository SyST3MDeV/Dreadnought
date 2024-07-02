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
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.SelectNotificationInAccordion
	 */
	struct UUI_Screen_Notifications_C_SelectNotificationInAccordion_Params
	{
	public:
		int32_t                                                    filterIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayNoNotifications
	 */
	struct UUI_Screen_Notifications_C_DisplayNoNotifications_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayCurrentNotification
	 */
	struct UUI_Screen_Notifications_C_DisplayCurrentNotification_Params
	{
	public:
		struct FUIAccordionFilterData                              UIAccordionFilterData;                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshNotifications
	 */
	struct UUI_Screen_Notifications_C_RefreshNotifications_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.DisplayFirstAvailableNotification
	 */
	struct UUI_Screen_Notifications_C_DisplayFirstAvailableNotification_Params
	{
	public:
		struct FUIAccordionFilterData                              UIAccordionFilterData;                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleOnActionButtonClicked
	 */
	struct UUI_Screen_Notifications_C_HandleOnActionButtonClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8JU1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetupNotificationButtons
	 */
	struct UUI_Screen_Notifications_C_SetupNotificationButtons_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.SetCurrentPanel
	 */
	struct UUI_Screen_Notifications_C_SetCurrentPanel_Params
	{
	public:
		class UUI_NotificationPanelWidget*                         CurrentNotificationPanel;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.RefreshSelectedNotification
	 */
	struct UUI_Screen_Notifications_C_RefreshSelectedNotification_Params
	{
	public:
		int32_t                                                    filterIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleInput
	 */
	struct UUI_Screen_Notifications_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.GetDebugAccordionData
	 */
	struct UUI_Screen_Notifications_C_GetDebugAccordionData_Params
	{
	public:
		struct FUIAccordionFilterData                              UIAccordionFilterData;                                   // 0x0000(0x0040)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionIn
	 */
	struct UUI_Screen_Notifications_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnTransitionOut
	 */
	struct UUI_Screen_Notifications_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Notifications_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Notifications_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.Construct
	 */
	struct UUI_Screen_Notifications_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.OnNavigationEvent
	 */
	struct UUI_Screen_Notifications_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature
	 */
	struct UUI_Screen_Notifications_C_BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJIG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CheckBoxIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    categoryIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.HandleNotificationsChanged
	 */
	struct UUI_Screen_Notifications_C_HandleNotificationsChanged_Params
	{	};

	/**
	 * Function UI_Screen_Notifications.UI_Screen_Notifications_C.ExecuteUbergraph_UI_Screen_Notifications
	 */
	struct UUI_Screen_Notifications_C_ExecuteUbergraph_UI_Screen_Notifications_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
