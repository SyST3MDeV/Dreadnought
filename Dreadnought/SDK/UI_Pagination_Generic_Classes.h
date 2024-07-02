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
	 * WidgetBlueprintGeneratedClass UI_Pagination_Generic.UI_Pagination_Generic_C
	 * Size -> 0x0044 (FullSize[0x0284] - InheritedSize[0x0240])
	 */
	class UUI_Pagination_Generic_C : public UUI_DreadWidget
	{
	public:
		class UScrollBox*                                          PageDotList;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_PageDot_C*                                UI_Button_PageDot;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_PageDot_C*                                UI_Button_PageDot_C_1;                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_PageDot_C*                                UI_Button_PageDot_C_2;                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_PageDot_C*                                UI_Button_PageDot_C_3;                                   // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnCurrentPageChanged;                                    // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_Button_PageDot_C*                                CurrentDot;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentIndex;                                            // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetCurrentIndex(int32_t* index);
		void UpdateSelectedDot(int32_t NewDotIndex);
		void PageDotSelected(int32_t DotIndex);
		void SetNumberOfPages(int32_t NumPages);
		void OnCurrentPageChanged__DelegateSignature(int32_t DotIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
