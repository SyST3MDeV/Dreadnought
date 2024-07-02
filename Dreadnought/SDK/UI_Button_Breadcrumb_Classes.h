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
	 * WidgetBlueprintGeneratedClass UI_Button_Breadcrumb.UI_Button_Breadcrumb_C
	 * Size -> 0x005C (FullSize[0x029C] - InheritedSize[0x0240])
	 */
	class UUI_Button_Breadcrumb_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BlueLine;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             BreadcrumbButton;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BreadcrumbLabel;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              dot;                                                     // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                label;                                                   // 0x0270(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnBreadcrumbClicked;                                     // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    index;                                                   // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleUnfocus();
		void HandleFocus();
		void Construct();
		void OnSynchronizeProperties();
		void BndEvt__BreadcrumbButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BreadcrumbButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BreadcrumbButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Button_Breadcrumb(int32_t EntryPoint);
		void OnBreadcrumbClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
