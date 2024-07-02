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
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Action");
		
		UUI_EditShip_Details_Button_TechTree_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetVisibilityForHeroShip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHero                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetVisibilityForHeroShip(bool IsHero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetVisibilityForHeroShip");
		
		UUI_EditShip_Details_Button_TechTree_C_SetVisibilityForHeroShip_Params params {};
		params.IsHero = IsHero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ColorizeText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYTechTreeProgressData                      techTreeProgressData                                       (Parm)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::ColorizeText(const struct FYTechTreeProgressData& techTreeProgressData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ColorizeText");
		
		UUI_EditShip_Details_Button_TechTree_C_ColorizeText_Params params {};
		params.techTreeProgressData = techTreeProgressData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetInfoText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        infoText                                                   (Parm)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetInfoText(const class FText& infoText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetInfoText");
		
		UUI_EditShip_Details_Button_TechTree_C_SetInfoText_Params params {};
		params.infoText = infoText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetActionText
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Action                                                     (Parm)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetActionText(const class FText& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetActionText");
		
		UUI_EditShip_Details_Button_TechTree_C_SetActionText_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetTechTreeProgressData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYTechTreeProgressData                      techTreeProgressData                                       (Parm)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetTechTreeProgressData(const struct FYTechTreeProgressData& techTreeProgressData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetTechTreeProgressData");
		
		UUI_EditShip_Details_Button_TechTree_C_SetTechTreeProgressData_Params params {};
		params.techTreeProgressData = techTreeProgressData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetOwnedTech
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetOwnedTech(int32_t newAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetOwnedTech");
		
		UUI_EditShip_Details_Button_TechTree_C_SetOwnedTech_Params params {};
		params.newAmount = newAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleUnfocus");
		
		UUI_EditShip_Details_Button_TechTree_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.HandleFocus");
		
		UUI_EditShip_Details_Button_TechTree_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetMaxTech
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            newAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::SetMaxTech(int32_t newAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.SetMaxTech");
		
		UUI_EditShip_Details_Button_TechTree_C_SetMaxTech_Params params {};
		params.newAmount = newAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.PopulateWidgetsWithData
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYTechTreeProgressData                      techTreeProgressData                                       (Parm)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::PopulateWidgetsWithData(const struct FYTechTreeProgressData& techTreeProgressData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.PopulateWidgetsWithData");
		
		UUI_EditShip_Details_Button_TechTree_C_PopulateWidgetsWithData_Params params {};
		params.techTreeProgressData = techTreeProgressData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.Construct");
		
		UUI_EditShip_Details_Button_TechTree_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnActionReceived");
		
		UUI_EditShip_Details_Button_TechTree_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ExecuteUbergraph_UI_EditShip_Details_Button_TechTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::ExecuteUbergraph_UI_EditShip_Details_Button_TechTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.ExecuteUbergraph_UI_EditShip_Details_Button_TechTree");
		
		UUI_EditShip_Details_Button_TechTree_C_ExecuteUbergraph_UI_EditShip_Details_Button_TechTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonClicked__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::OnButtonUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonUnhovered__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_OnButtonUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_EditShip_Details_Button_TechTree_C::OnButtonHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C.OnButtonHovered__DelegateSignature");
		
		UUI_EditShip_Details_Button_TechTree_C_OnButtonHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShip_Details_Button_TechTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShip_Details_Button_TechTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EditShip_Details_Button_TechTree.UI_EditShip_Details_Button_TechTree_C");
		return ptr;
	}

}


