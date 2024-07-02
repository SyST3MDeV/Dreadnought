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
	 * WidgetBlueprintGeneratedClass UI_Screen_Notifications.UI_Screen_Notifications_C
	 * Size -> 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
	 */
	class UUI_Screen_Notifications_C : public UUI_NotificationsScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_AccordionFilter_C*                       AccordionFilter;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ActionButton;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ButtonContainer;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NoNotificationsText;                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          NotificationScrollBox;                                   // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                UI_Button_Generic;                                       // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_NotificationPanelWidget*                         CurrentNotificationPanel;                                // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UNotificationData*                                   NotificationData;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Button_Generic_C*>                        ActionGenericButtonList;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void SelectNotificationInAccordion(int32_t filterIndex, int32_t categoryIndex);
		void DisplayNoNotifications();
		void DisplayCurrentNotification(const struct FUIAccordionFilterData& UIAccordionFilterData);
		void RefreshNotifications();
		void DisplayFirstAvailableNotification(const struct FUIAccordionFilterData& UIAccordionFilterData);
		void HandleOnActionButtonClicked(int32_t index);
		void SetupNotificationButtons();
		void SetCurrentPanel(class UUI_NotificationPanelWidget* CurrentNotificationPanel);
		void RefreshSelectedNotification(int32_t filterIndex, int32_t categoryIndex);
		void HandleInput(EUI_MenuActions Selection);
		void GetDebugAccordionData(struct FUIAccordionFilterData* UIAccordionFilterData);
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void Construct();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void BndEvt__AccordionFilter_K2Node_ComponentBoundEvent_0_OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex);
		void HandleNotificationsChanged();
		void ExecuteUbergraph_UI_Screen_Notifications(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
