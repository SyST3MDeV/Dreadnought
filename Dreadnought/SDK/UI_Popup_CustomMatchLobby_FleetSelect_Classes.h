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
	 * WidgetBlueprintGeneratedClass UI_Popup_CustomMatchLobby_FleetSelect.UI_Popup_CustomMatchLobby_FleetSelect_C
	 * Size -> 0x009C (FullSize[0x0314] - InheritedSize[0x0278])
	 */
	class UUI_Popup_CustomMatchLobby_FleetSelect_C : public UUI_DreadPopup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CloseButton;                                             // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      FleetButtonBox;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          headerText;                                              // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_CustomMatchFleet_C*                       LegendaryButton;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          NoteText;                                                // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_CustomMatchFleet_C*                       RecruitButton;                                           // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsBottom;                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsTop;                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_CustomMatchFleet_C*                       VeteranButton;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnFleetSelected;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCustomMatchLobbyFleetSelectPopupData*               PopupData;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AFrontendHUD*                                        FrontendHUD;                                             // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Button_CustomMatchFleet_C*                       CurrentlyFocusedItem;                                    // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Button_CustomMatchFleet_C*>               ButtonList;                                              // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndex;                                            // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleLeftRight(int32_t NextIndex);
		void CancelAction(int32_t InputPin);
		void HandleInput(EUI_MenuActions GamePadInput);
		void HandlePopupData(class UCustomMatchLobbyFleetSelectPopupData* PopupData);
		void Construct();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index);
		void OnPopupDataSet(class UPopupData* PopupData);
		void BndEvt__RecruitButton_K2Node_ComponentBoundEvent_7_OnFleetSelected__DelegateSignature(EYFleetType fleetType);
		void BndEvt__VeteranButton_K2Node_ComponentBoundEvent_8_OnFleetSelected__DelegateSignature(EYFleetType fleetType);
		void BndEvt__LegendaryButton_K2Node_ComponentBoundEvent_9_OnFleetSelected__DelegateSignature(EYFleetType fleetType);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Popup_CustomMatchLobby_FleetSelect(int32_t EntryPoint);
		void OnFleetSelected__DelegateSignature(EYFleetType fleetType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
