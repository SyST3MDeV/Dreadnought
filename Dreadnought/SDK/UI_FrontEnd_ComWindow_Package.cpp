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
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.Get_CharacterImage_Brush_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UUI_FrontEnd_ComWindow_C::Get_CharacterImage_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.Get_CharacterImage_Brush_1");
		
		UUI_FrontEnd_ComWindow_C_Get_CharacterImage_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventShowTransmission
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrontEnd_ComWindow_C::BP_EventShowTransmission(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventShowTransmission");
		
		UUI_FrontEnd_ComWindow_C_BP_EventShowTransmission_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetTitle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      title                                                      (Parm, ZeroConstructor)
	 */
	void UUI_FrontEnd_ComWindow_C::BP_EventSetTitle(const class FString& title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetTitle");
		
		UUI_FrontEnd_ComWindow_C_BP_EventSetTitle_Params params {};
		params.title = title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetSubtitle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      subtitle                                                   (Parm, ZeroConstructor)
	 */
	void UUI_FrontEnd_ComWindow_C::BP_EventSetSubtitle(const class FString& subtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetSubtitle");
		
		UUI_FrontEnd_ComWindow_C_BP_EventSetSubtitle_Params params {};
		params.subtitle = subtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetWindowImageTexture
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrontEnd_ComWindow_C::BP_EventSetWindowImageTexture(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetWindowImageTexture");
		
		UUI_FrontEnd_ComWindow_C_BP_EventSetWindowImageTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.ExecuteUbergraph_UI_FrontEnd_ComWindow
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_FrontEnd_ComWindow_C::ExecuteUbergraph_UI_FrontEnd_ComWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.ExecuteUbergraph_UI_FrontEnd_ComWindow");
		
		UUI_FrontEnd_ComWindow_C_ExecuteUbergraph_UI_FrontEnd_ComWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FrontEnd_ComWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FrontEnd_ComWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C");
		return ptr;
	}

}


