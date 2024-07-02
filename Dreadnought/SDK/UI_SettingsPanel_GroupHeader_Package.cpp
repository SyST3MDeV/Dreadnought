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
	 * 		Name   -> Function UI_SettingsPanel_GroupHeader.UI_SettingsPanel_GroupHeader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsPanel_GroupHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel_GroupHeader.UI_SettingsPanel_GroupHeader_C.Construct");
		
		UUI_SettingsPanel_GroupHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_SettingsPanel_GroupHeader.UI_SettingsPanel_GroupHeader_C.ExecuteUbergraph_UI_SettingsPanel_GroupHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SettingsPanel_GroupHeader_C::ExecuteUbergraph_UI_SettingsPanel_GroupHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SettingsPanel_GroupHeader.UI_SettingsPanel_GroupHeader_C.ExecuteUbergraph_UI_SettingsPanel_GroupHeader");
		
		UUI_SettingsPanel_GroupHeader_C_ExecuteUbergraph_UI_SettingsPanel_GroupHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SettingsPanel_GroupHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingsPanel_GroupHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SettingsPanel_GroupHeader.UI_SettingsPanel_GroupHeader_C");
		return ptr;
	}

}


