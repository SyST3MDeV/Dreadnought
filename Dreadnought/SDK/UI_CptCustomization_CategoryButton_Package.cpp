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
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Action");
		
		UUI_CptCustomization_CategoryButton_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Focus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Focus");
		
		UUI_CptCustomization_CategoryButton_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Unfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Handle Unfocus");
		
		UUI_CptCustomization_CategoryButton_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ModuleTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        CategoryName                                               (Parm)
	 * 		class FText                                        itemName                                                   (Parm)
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CategoryButton_C::SetData(class UTexture2D* ModuleTexture, const class FText& CategoryName, const class FText& itemName, int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.SetData");
		
		UUI_CptCustomization_CategoryButton_C_SetData_Params params {};
		params.ModuleTexture = ModuleTexture;
		params.CategoryName = CategoryName;
		params.itemName = itemName;
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.Construct");
		
		UUI_CptCustomization_CategoryButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnActionReceived");
		
		UUI_CptCustomization_CategoryButton_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.ExecuteUbergraph_UI_CptCustomization_CategoryButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CategoryButton_C::ExecuteUbergraph_UI_CptCustomization_CategoryButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.ExecuteUbergraph_UI_CptCustomization_CategoryButton");
		
		UUI_CptCustomization_CategoryButton_C_ExecuteUbergraph_UI_CptCustomization_CategoryButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CptCustomization_CategoryButton_C::OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonUnhovered__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CategoryButton_C::OnButtonHovered__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonHovered__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_OnButtonHovered__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CptCustomization_CategoryButton_C*       ClickedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CptCustomization_CategoryButton_C::OnButtonClicked__DelegateSignature(class UUI_CptCustomization_CategoryButton_C* ClickedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C.OnButtonClicked__DelegateSignature");
		
		UUI_CptCustomization_CategoryButton_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ClickedItem = ClickedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CptCustomization_CategoryButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CptCustomization_CategoryButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CptCustomization_CategoryButton.UI_CptCustomization_CategoryButton_C");
		return ptr;
	}

}


