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
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.GetCloseButtonText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UUI_CTAWidget_Tutorial_C::GetCloseButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.GetCloseButtonText");
		
		UUI_CTAWidget_Tutorial_C_GetCloseButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPreviousPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::RequestShowPreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPreviousPage");
		
		UUI_CTAWidget_Tutorial_C_RequestShowPreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowNextPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::RequestShowNextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowNextPage");
		
		UUI_CTAWidget_Tutorial_C_RequestShowNextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Setup");
		
		UUI_CTAWidget_Tutorial_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.SetLegendHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::SetLegendHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.SetLegendHints");
		
		UUI_CTAWidget_Tutorial_C_SetLegendHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.HandleInput");
		
		UUI_CTAWidget_Tutorial_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCloseButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::RefreshCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCloseButton");
		
		UUI_CTAWidget_Tutorial_C_RefreshCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUI_Struct_CtAWidget_TutorialData           UI_Struct_CtAWidget_TutorialData                           (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UUI_CTAWidget_Tutorial_C::RefreshPageData(const struct FUI_Struct_CtAWidget_TutorialData& UI_Struct_CtAWidget_TutorialData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageData");
		
		UUI_CTAWidget_Tutorial_C_RefreshPageData_Params params {};
		params.UI_Struct_CtAWidget_TutorialData = UI_Struct_CtAWidget_TutorialData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageCountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::RefreshPageCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshPageCountText");
		
		UUI_CTAWidget_Tutorial_C_RefreshPageCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCurrentPageData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::RefreshCurrentPageData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RefreshCurrentPageData");
		
		UUI_CTAWidget_Tutorial_C_RefreshCurrentPageData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ShowPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::ShowPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ShowPage");
		
		UUI_CTAWidget_Tutorial_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PageIndexToShow                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::RequestShowPage(int32_t PageIndexToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.RequestShowPage");
		
		UUI_CTAWidget_Tutorial_C_RequestShowPage_Params params {};
		params.PageIndexToShow = PageIndexToShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.Construct");
		
		UUI_CTAWidget_Tutorial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__HideData_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_1_OnArrowButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_2_OnArrowButtonClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__HidePanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnNavigationEvent");
		
		UUI_CTAWidget_Tutorial_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionOut");
		
		UUI_CTAWidget_Tutorial_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.OnTransitionIn");
		
		UUI_CTAWidget_Tutorial_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CTAWidget_Tutorial_C::BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UUI_CTAWidget_Tutorial_C_BndEvt__ShowPanel_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ExecuteUbergraph_UI_CTAWidget_Tutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CTAWidget_Tutorial_C::ExecuteUbergraph_UI_CTAWidget_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C.ExecuteUbergraph_UI_CTAWidget_Tutorial");
		
		UUI_CTAWidget_Tutorial_C_ExecuteUbergraph_UI_CTAWidget_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTAWidget_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTAWidget_Tutorial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTAWidget_Tutorial.UI_CTAWidget_Tutorial_C");
		return ptr;
	}

}


