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
	 * WidgetBlueprintGeneratedClass UI_TabList_Scrolling_Chat.UI_TabList_Scrolling_Chat_C
	 * Size -> 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
	 */
	class UUI_TabList_Scrolling_Chat_C : public UUI_DreadWidget
	{
	public:
		class UScrollBox*                                          ScrollBox_2;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Tab_Chat_C*                               UI_Button_Tab_Chat_83;                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnTabClicked;                                            // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UUI_Button_Tab_Chat_C*>                       Tabs;                                                    // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndex;                                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IntertabPadding;                                         // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FSlateFontInfo                                      TabLabelFont;                                            // 0x0278(0x0040) Edit, BlueprintVisible
		float                                                      TabWidthOverride;                                        // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GY7X[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTabCloseButtonClicked;                                 // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void HandleMessageReceived(int32_t roomIndex);
		void TabCloseButtonClicked(class UUI_Button_Tab_Chat_C* source);
		void TabClicked(int32_t index);
		void SetTabs(TArray<struct FUI_Struct_TabButtonData>* Tabs, int32_t selectedIndex);
		void OnTabCloseButtonClicked__DelegateSignature(class UUI_Button_Tab_Chat_C* source);
		void OnTabClicked__DelegateSignature(int32_t TabIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
