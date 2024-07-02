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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_ConvertAllButton.UI_MarketPanel_Currency_ConvertAllButton_C
	 * Size -> 0x0078 (FullSize[0x02B8] - InheritedSize[0x0240])
	 */
	class UUI_MarketPanel_Currency_ConvertAllButton_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            ConsoleConvertAllButtonOverlay;                          // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ConvertAllNowButton;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     ConvertAllWidgetSwitcher;                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_7;                                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            PCConvertAllButtonOverlay;                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsFocused;                                               // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3BO[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemClicked;                                           // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemHovered;                                           // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemFocused;                                           // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemUnfocused;                                         // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetIsFocused(bool* IsFocused);
		void Action();
		void HandleUnfocus();
		void HandleFocus();
		void Setup();
		void Construct();
		void BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source);
		void BndEvt__ConvertAllNowButton_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature(class UUI_Button_Generic_C* source);
		void OnActionReceived();
		void ExecuteUbergraph_UI_MarketPanel_Currency_ConvertAllButton(int32_t EntryPoint);
		void OnItemUnfocused__DelegateSignature(class UUI_DreadWidget* source);
		void OnItemFocused__DelegateSignature(class UUI_DreadWidget* source);
		void OnItemHovered__DelegateSignature(class UUI_DreadWidget* source);
		void OnItemClicked__DelegateSignature(class UUI_DreadWidget* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
