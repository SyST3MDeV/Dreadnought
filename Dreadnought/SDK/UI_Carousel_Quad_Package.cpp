/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfPages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Pages                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetNumberOfPages(int32_t* Pages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfPages");
		
		UUI_Carousel_Quad_C_GetNumberOfPages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pages != nullptr)
			*Pages = params.Pages;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPageInitialIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetCurrentPageInitialIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPageInitialIndex");
		
		UUI_Carousel_Quad_C_GetCurrentPageInitialIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetPageInitialIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetPageInitialIndex(int32_t Page, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetPageInitialIndex");
		
		UUI_Carousel_Quad_C_GetPageInitialIndex_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetMaxItemsToDisplay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MaxItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetMaxItemsToDisplay(int32_t* MaxItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetMaxItemsToDisplay");
		
		UUI_Carousel_Quad_C_GetMaxItemsToDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxItems != nullptr)
			*MaxItems = params.MaxItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfColumns
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumberOfColumns                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetNumberOfColumns(int32_t* NumberOfColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfColumns");
		
		UUI_Carousel_Quad_C_GetNumberOfColumns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfColumns != nullptr)
			*NumberOfColumns = params.NumberOfColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetAutoScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAutoscroll                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::SetAutoScroll(bool IsAutoscroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetAutoScroll");
		
		UUI_Carousel_Quad_C_SetAutoScroll_Params params {};
		params.IsAutoscroll = IsAutoscroll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GetCurrentPage(int32_t* PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPage");
		
		UUI_Carousel_Quad_C_GetCurrentPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PageIndex != nullptr)
			*PageIndex = params.PageIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_MarketItemWidget*>                Widgets                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Carousel_Quad_C::GetWidgets(TArray<class UUI_MarketItemWidget*>* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetWidgets");
		
		UUI_Carousel_Quad_C_GetWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.AutoScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Carousel_Quad_C::AutoScroll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.AutoScroll");
		
		UUI_Carousel_Quad_C_AutoScroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Carousel_Quad_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.Init");
		
		UUI_Carousel_Quad_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetupItemCarousel
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   FeaturedWidgetList                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::SetupItemCarousel(TArray<struct FMarketItemUIData>* FeaturedWidgetList, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetupItemCarousel");
		
		UUI_Carousel_Quad_C_SetupItemCarousel_Params params {};
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FeaturedWidgetList != nullptr)
			*FeaturedWidgetList = params.FeaturedWidgetList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.GoToPage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::GoToPage(int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.GoToPage");
		
		UUI_Carousel_Quad_C_GoToPage_Params params {};
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.AddItemsToCarousel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Carousel_Quad_C::AddItemsToCarousel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.AddItemsToCarousel");
		
		UUI_Carousel_Quad_C_AddItemsToCarousel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Carousel_Quad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.Construct");
		
		UUI_Carousel_Quad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.OnPageDotClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::OnPageDotClicked(int32_t DotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.OnPageDotClicked");
		
		UUI_Carousel_Quad_C_OnPageDotClicked_Params params {};
		params.DotIndex = DotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Carousel_Quad.UI_Carousel_Quad_C.ExecuteUbergraph_UI_Carousel_Quad
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Carousel_Quad_C::ExecuteUbergraph_UI_Carousel_Quad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Carousel_Quad.UI_Carousel_Quad_C.ExecuteUbergraph_UI_Carousel_Quad");
		
		UUI_Carousel_Quad_C_ExecuteUbergraph_UI_Carousel_Quad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Carousel_Quad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Carousel_Quad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Carousel_Quad.UI_Carousel_Quad_C");
		return ptr;
	}

}


