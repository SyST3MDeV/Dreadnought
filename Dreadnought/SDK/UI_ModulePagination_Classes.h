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
	 * WidgetBlueprintGeneratedClass UI_ModulePagination.UI_ModulePagination_C
	 * Size -> 0x0078 (FullSize[0x02B8] - InheritedSize[0x0240])
	 */
	class UUI_ModulePagination_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_LeftArrow;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_RightArrow;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Arrow_Generic_C*                          LeftArrowButton;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ModuleWidgetsHBox;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            ModuleWidgetsSizeBox;                                    // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Pagination_Generic_C*                            PaginationDots;                                          // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Arrow_Generic_C*                          RightArrowButton;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_Generic_Button_Module_C*>                 WidgetsArray;                                            // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    ItemsPerPage;                                            // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentPageIndex;                                        // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumberOfPages;                                           // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ModuleButtonWidth;                                       // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUI_Generic_Button_Module_C*                         CurrentItemWidget;                                       // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             ArrowButtonClicked;                                      // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void HandleUnfocus(int32_t ModuleIndex);
		void HandleFocus(int32_t ModuleIndex, bool* PageTurned);
		void GetPageFromIndex(int32_t index, int32_t* PageItemIsOn);
		void FindModuleInArrayByID(int32_t ItemIDToFind, int32_t* IndexInArray);
		void SetItemsPerPage(int32_t ItemsPerPage);
		void Setup();
		void ChangePage(int32_t RequestedPageIndex);
		void SetDisplayedModules();
		void AddItemsToCarousel(TArray<class UUI_Generic_Button_Module_C*>* Widgets, int32_t CurrentDisplayedIndex);
		void Construct();
		void LeftButtonClicked(class UUserWidget* ButtonReference);
		void RightButtonClicked(class UUserWidget* ButtonReference);
		void PaginationClick(int32_t DotIndex);
		void ExecuteUbergraph_UI_ModulePagination(int32_t EntryPoint);
		void ArrowButtonClicked__DelegateSignature(class UUI_DreadWidget* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
