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
	 * WidgetBlueprintGeneratedClass UI_TabList_Generic.UI_TabList_Generic_C
	 * Size -> 0x00B8 (FullSize[0x02F8] - InheritedSize[0x0240])
	 */
	class UUI_TabList_Generic_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              PS4_L1;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              PS4_R1;                                                  // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      TabList;                                                 // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Tab_Generic_C*                            UI_Button_Tab_Generic;                                   // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnTabClicked;                                            // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UUI_Button_Tab_Generic_C*>                    Tabs;                                                    // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndex;                                            // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntertabPadding;                                         // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FSlateFontInfo                                      TabLabelFont;                                            // 0x0290(0x0040) Edit, BlueprintVisible
		class UUI_Button_Tab_Generic_C*                            CurrentlyFocusedItem;                                    // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnTabFocused;                                            // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        TabColorGold;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTabAtIndex(int32_t index, class UUI_Button_Tab_Generic_C** Tab);
		void SetPlatformButtons();
		void HandleUnfocus(int32_t IndexToUnfocus);
		void HandleFocus(int32_t IndexToFocus);
		void FocusPreviousTab();
		void FocusNextTab();
		void GetInitialTab(class UUI_Button_Tab_Generic_C** Item);
		void TabFocused(class UUI_Button_Tab_Generic_C* source);
		void TabClicked(int32_t index);
		void SetTabs(TArray<struct FUI_Struct_TabButtonData>* Tabs, int32_t selectedIndex);
		void Construct();
		void ExecuteUbergraph_UI_TabList_Generic(int32_t EntryPoint);
		void OnTabFocused__DelegateSignature(class UUI_Button_Tab_Generic_C* source);
		void OnTabClicked__DelegateSignature(int32_t TabIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
