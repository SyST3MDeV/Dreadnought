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
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetupTabs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::SetupTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetupTabs");
		
		UUI_Screen_ManufacturerTechTree_C_SetupTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleTabClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Tab_Generic_C*                    Tab                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::HandleTabClicked(class UUI_Button_Tab_Generic_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleTabClicked");
		
		UUI_Screen_ManufacturerTechTree_C_HandleTabClicked_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Setup");
		
		UUI_Screen_ManufacturerTechTree_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetRequirementPaths
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::SetRequirementPaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.SetRequirementPaths");
		
		UUI_Screen_ManufacturerTechTree_C_SetRequirementPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ComposeTechTreePaths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUITechTreeShipNode>                 TechTreeNodes                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::ComposeTechTreePaths(TArray<struct FUITechTreeShipNode>* TechTreeNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ComposeTechTreePaths");
		
		UUI_Screen_ManufacturerTechTree_C_ComposeTechTreePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TechTreeNodes != nullptr)
			*TechTreeNodes = params.TechTreeNodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.HandleInput");
		
		UUI_Screen_ManufacturerTechTree_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Construct");
		
		UUI_Screen_ManufacturerTechTree_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 */
	void UUI_Screen_ManufacturerTechTree_C::BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature");
		
		UUI_Screen_ManufacturerTechTree_C_BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionIn");
		
		UUI_Screen_ManufacturerTechTree_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnTransitionOut");
		
		UUI_Screen_ManufacturerTechTree_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionInAnimationComplete");
		
		UUI_Screen_ManufacturerTechTree_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_ManufacturerTechTree_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.TransitionOutAnimationComplete");
		
		UUI_Screen_ManufacturerTechTree_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.OnNavigationEvent");
		
		UUI_Screen_ManufacturerTechTree_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.Tick");
		
		UUI_Screen_ManufacturerTechTree_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ExecuteUbergraph_UI_Screen_ManufacturerTechTree
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_ManufacturerTechTree_C::ExecuteUbergraph_UI_Screen_ManufacturerTechTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C.ExecuteUbergraph_UI_Screen_ManufacturerTechTree");
		
		UUI_Screen_ManufacturerTechTree_C_ExecuteUbergraph_UI_Screen_ManufacturerTechTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_ManufacturerTechTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_ManufacturerTechTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C");
		return ptr;
	}

}


