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
	 * WidgetBlueprintGeneratedClass UI_Generic_AccordionFilter.UI_Generic_AccordionFilter_C
	 * Size -> 0x00E0 (FullSize[0x0320] - InheritedSize[0x0240])
	 */
	class UUI_Generic_AccordionFilter_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             AccordianButton;                                         // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          descriptionText;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          FilterCategoryContainer;                                 // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             HeaderContainer;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          headerText;                                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityBottomBrackets;                                    // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     VanityTopBrackets;                                       // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FUI_Struct_AccordionFilterData                      AccordionFilterCategoryData;                             // 0x0288(0x0040) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FUIAccordionFilterCategoryData>              CategoryData;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnCategoryClicked;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCategoryFilterClicked;                                 // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseCheckBoxes;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OnlyAllowSingleOptionSelection;                          // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_R0CN[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_AccordionFilter_Category_C*>      FilterCategoryWidgets;                                   // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_DreadWidget*>                             AllWidgets;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void GetPreviousFocusableWidget(int32_t CurrentWidgetIndex, class UUI_DreadWidget** FocusableWidget, int32_t* WidgetIndex);
		void HandleUnfocus();
		void HandleFocus();
		void FindCategoryWidgetForRow(class UUI_Generic_AccordionFilter_OptionRow_C* RowWidget, class UUI_Generic_AccordionFilter_Category_C** Category, int32_t* filterIndex);
		void GetNextFocusableWidget(int32_t CurrentWidgetIndex, class UUI_DreadWidget** FocusableWidget, int32_t* WidgetIndex);
		void SelectCategory(int32_t categoryIndex, int32_t filterIndex);
		void ScrollCategoryIntoView(class UUI_DreadWidget* Widget);
		void GetFilterCategoryWidgets(TArray<class UUI_Generic_AccordionFilter_Category_C*>* Widgets);
		void HandleCategoryFilterClicked(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex);
		void HandleCategoryClicked(int32_t index);
		void SetupCategoryList();
		void SetData(const struct FUIAccordionFilterData& AccordionFilterData);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AccordianButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_Generic_AccordionFilter(int32_t EntryPoint);
		void OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex);
		void OnCategoryClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
