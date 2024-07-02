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
	 * 		Name   -> Function OutpostPlayerController_Interface.OutpostPlayerController_Interface_C.MenuStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYMenuState                                        newMenuState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOutpostPlayerController_Interface_C::MenuStateChanged(EYMenuState newMenuState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OutpostPlayerController_Interface.OutpostPlayerController_Interface_C.MenuStateChanged");
		
		UOutpostPlayerController_Interface_C_MenuStateChanged_Params params {};
		params.newMenuState = newMenuState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOutpostPlayerController_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOutpostPlayerController_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OutpostPlayerController_Interface.OutpostPlayerController_Interface_C");
		return ptr;
	}

}


