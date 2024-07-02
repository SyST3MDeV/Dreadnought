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
	 * WidgetBlueprintGeneratedClass UI_Generic_AccordionFilter_Category.UI_Generic_AccordionFilter_Category_C
	 * Size -> 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
	 */
	class UUI_Generic_AccordionFilter_Category_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          FilterOptionScrollBox;                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Market_CategoryButton_C*                         HeaderButton;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                headerText;                                              // 0x0258(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FUIAccordionFilterCategoryOptionData>        OptionList;                                              // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		bool                                                       HasOptions;                                              // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsShowing;                                               // 0x0281(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCollapsible;                                           // 0x0282(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_3AMI[0x5];                                   // 0x0283(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCategoryClicked;                                       // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCategoryFilterClicked;                                 // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    index;                                                   // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DisplayOptionsAsCheckBoxes;                              // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       OnlyAllowSingleOptionSelection;                          // 0x02AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_5CXW[0x2];                                   // 0x02AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_AccordionFilter_OptionRow_C*>     FilterOptionsWidgets;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetWidgets(class UUI_Market_CategoryButton_C** HeaderWidget, TArray<class UUI_Generic_AccordionFilter_OptionRow_C*>* OptionWidgets);
		void HandleFilterClicked(bool Checked, int32_t CheckBoxIndex);
		void Hide();
		void Show();
		void SetupOptionList();
		void Construct();
		void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_0_OnLoadoutButtonClicked__DelegateSignature(class UUI_Market_CategoryButton_C* source);
		void ExecuteUbergraph_UI_Generic_AccordionFilter_Category(int32_t EntryPoint);
		void OnCategoryFilterClicked__DelegateSignature(bool Checked, int32_t CheckBoxIndex, int32_t categoryIndex);
		void OnCategoryClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
