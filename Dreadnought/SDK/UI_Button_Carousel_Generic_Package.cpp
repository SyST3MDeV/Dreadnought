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
	 * 		Name   -> Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.OnFail_B10DC6BB4EA724F69542B59101A4A591
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_Carousel_Generic_C::OnFail_B10DC6BB4EA724F69542B59101A4A591(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.OnFail_B10DC6BB4EA724F69542B59101A4A591");
		
		UUI_Button_Carousel_Generic_C_OnFail_B10DC6BB4EA724F69542B59101A4A591_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.OnSuccess_B10DC6BB4EA724F69542B59101A4A591
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_Carousel_Generic_C::OnSuccess_B10DC6BB4EA724F69542B59101A4A591(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.OnSuccess_B10DC6BB4EA724F69542B59101A4A591");
		
		UUI_Button_Carousel_Generic_C_OnSuccess_B10DC6BB4EA724F69542B59101A4A591_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Button_Carousel_Generic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.Construct");
		
		UUI_Button_Carousel_Generic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.ExecuteUbergraph_UI_Button_Carousel_Generic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_Carousel_Generic_C::ExecuteUbergraph_UI_Button_Carousel_Generic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C.ExecuteUbergraph_UI_Button_Carousel_Generic");
		
		UUI_Button_Carousel_Generic_C_ExecuteUbergraph_UI_Button_Carousel_Generic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_Carousel_Generic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_Carousel_Generic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C");
		return ptr;
	}

}


