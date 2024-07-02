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
	 * 		Name   -> Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.CreateBreadcrumb
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         ScreenEnumIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            BreadcrumbIndexIn                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_Breadcrumb_C*                     BreadcrumbOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Breadcrumb_C::CreateBreadcrumb(EUI_Screen ScreenEnumIn, int32_t BreadcrumbIndexIn, class UUI_Button_Breadcrumb_C** BreadcrumbOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.CreateBreadcrumb");
		
		UUI_Persistent_Breadcrumb_C_CreateBreadcrumb_Params params {};
		params.ScreenEnumIn = ScreenEnumIn;
		params.BreadcrumbIndexIn = BreadcrumbIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreadcrumbOut != nullptr)
			*BreadcrumbOut = params.BreadcrumbOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.UpdateBreadcrumbList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadScreen*                             TargetScreen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Breadcrumb_C::UpdateBreadcrumbList(class UUI_DreadScreen* TargetScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.UpdateBreadcrumbList");
		
		UUI_Persistent_Breadcrumb_C_UpdateBreadcrumbList_Params params {};
		params.TargetScreen = TargetScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.HandleBreadcrumbClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Breadcrumb_C::HandleBreadcrumbClicked(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.HandleBreadcrumbClicked");
		
		UUI_Persistent_Breadcrumb_C_HandleBreadcrumbClicked_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.ExecuteUbergraph_UI_Persistent_Breadcrumb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Breadcrumb_C::ExecuteUbergraph_UI_Persistent_Breadcrumb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.ExecuteUbergraph_UI_Persistent_Breadcrumb");
		
		UUI_Persistent_Breadcrumb_C_ExecuteUbergraph_UI_Persistent_Breadcrumb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.OnBreadcrumbClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_Breadcrumb_C::OnBreadcrumbClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.OnBreadcrumbClicked__DelegateSignature");
		
		UUI_Persistent_Breadcrumb_C_OnBreadcrumbClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_Breadcrumb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_Breadcrumb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C");
		return ptr;
	}

}


