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
	 * 		Name   -> Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetDataFromStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  moduleData                                                 (Parm)
	 */
	void UUI_Generic_Module_TitleWidget_C::SetDataFromStruct(const struct FUIGenericButtonModuleData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetDataFromStruct");
		
		UUI_Generic_Module_TitleWidget_C_SetDataFromStruct_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ClassIcon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  TierIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ModuleName                                                 (Parm, ZeroConstructor)
	 * 		int32_t                                            ModuleTier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Module_TitleWidget_C::SetData(class UTexture2D* ClassIcon, class UTexture2D* TierIcon, const class FString& ModuleName, int32_t ModuleTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetData");
		
		UUI_Generic_Module_TitleWidget_C_SetData_Params params {};
		params.ClassIcon = ClassIcon;
		params.TierIcon = TierIcon;
		params.ModuleName = ModuleName;
		params.ModuleTier = ModuleTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Generic_Module_TitleWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.Construct");
		
		UUI_Generic_Module_TitleWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.UpdateIconsAndText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  ClassIcon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  TierIcon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ModuleName                                                 (Parm, ZeroConstructor)
	 * 		int32_t                                            ModuleTier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Module_TitleWidget_C::UpdateIconsAndText(class UTexture2D* ClassIcon, class UTexture2D* TierIcon, const class FString& ModuleName, int32_t ModuleTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.UpdateIconsAndText");
		
		UUI_Generic_Module_TitleWidget_C_UpdateIconsAndText_Params params {};
		params.ClassIcon = ClassIcon;
		params.TierIcon = TierIcon;
		params.ModuleName = ModuleName;
		params.ModuleTier = ModuleTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.ExecuteUbergraph_UI_Generic_Module_TitleWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Generic_Module_TitleWidget_C::ExecuteUbergraph_UI_Generic_Module_TitleWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.ExecuteUbergraph_UI_Generic_Module_TitleWidget");
		
		UUI_Generic_Module_TitleWidget_C_ExecuteUbergraph_UI_Generic_Module_TitleWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Generic_Module_TitleWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Generic_Module_TitleWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C");
		return ptr;
	}

}


