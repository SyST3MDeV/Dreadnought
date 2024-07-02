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
	 * 		Name   -> Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_Frontend_GameMode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.UserConstructionScript");
		
		AUI_Frontend_GameMode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.LaunchTutorial
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        tutorialMap                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_Frontend_GameMode_C::LaunchTutorial(const class FName& tutorialMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.LaunchTutorial");
		
		AUI_Frontend_GameMode_C_LaunchTutorial_Params params {};
		params.tutorialMap = tutorialMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.ExecuteUbergraph_UI_Frontend_GameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_Frontend_GameMode_C::ExecuteUbergraph_UI_Frontend_GameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Frontend_GameMode.UI_Frontend_GameMode_C.ExecuteUbergraph_UI_Frontend_GameMode");
		
		AUI_Frontend_GameMode_C_ExecuteUbergraph_UI_Frontend_GameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUI_Frontend_GameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUI_Frontend_GameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UI_Frontend_GameMode.UI_Frontend_GameMode_C");
		return ptr;
	}

}


