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
	 * BlueprintGeneratedClass UI_EventHandler_Navigation.UI_EventHandler_Navigation_C
	 * Size -> 0x0058 (FullSize[0x02A0] - InheritedSize[0x0248])
	 */
	class UUI_EventHandler_Navigation_C : public UUI_NavigationWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_DreadScreen*                                     CurrentScreen;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_DreadScreen*                                     screenToDestroy;                                         // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_Popup_Generic_C*>                         PopupStack;                                              // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                DefaultScreenName;                                       // 0x0278(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             ScreenChanged;                                           // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CloseAllPopups();
		void GotoTab(EUI_Screen ScreenEnumIn);
		void GetCurrentScreen(class UUI_DreadScreen** CurrentScreen);
		void HandlePopupDataAdded(const struct FPopupStackData& PopupStackData);
		void DestroyScreen(class UUI_DreadScreen* screenToDestroy);
		void FindReturnPath(EUI_Screen ScreenEnumIn, TArray<EUI_Screen>* ReturnPathOut);
		void FindScreenName(EUI_Screen ScreenEnumIn, class FText* ScreenNameOut);
		void GotoBreadcrumb(int32_t BreadcrumbIndex);
		void UpdateReturnPath(class UUI_DreadScreen* CurrentScreen);
		void FindScreenClass(EUI_Screen ScreenEnumIn, class UClass** ScreenClassOut);
		void ShowGenericPopupWithCustomButtons(const class FText& titleText, const class FText& bodyText, TArray<class UObject*>* buttons, class UUI_Popup_Generic_C** GenericPopup);
		void HidePopup(class UUI_Popup_Generic_C* PopupReference);
		void ShowGenericPopup(const class FText& titleText, const class FText& bodyText, TArray<class FText>* ButtonLabels, class UUI_Popup_Generic_C** GenericPopup);
		void HideScreen(class UUI_DreadScreen* screen);
		void ShowScreen(class UClass* ScreenClass, EUI_Screen ScreenEnum);
		void DestroyPreviousScreen();
		void GoToScreen(EUI_Screen ScreenEnumIn);
		void Construct();
		void OnNavigateToScreenRequested(EUI_Screen screen);
		void OnPopupAdded(const struct FPopupStackData& PopupData);
		void OnNavigateToTabRequested(EUI_Screen screen);
		void ExecuteUbergraph_UI_EventHandler_Navigation(int32_t EntryPoint);
		void ScreenChanged__DelegateSignature(EUI_Screen screen);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
