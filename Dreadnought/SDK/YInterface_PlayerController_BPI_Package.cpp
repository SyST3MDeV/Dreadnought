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
	 * 		Name   -> Function YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C.DestroyCreepsOnOrbitEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_PlayerController_BPI_C::DestroyCreepsOnOrbitEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C.DestroyCreepsOnOrbitEnd");
		
		UYInterface_PlayerController_BPI_C_DestroyCreepsOnOrbitEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C.SpawnCreepsOnOrbitStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_PlayerController_BPI_C::SpawnCreepsOnOrbitStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C.SpawnCreepsOnOrbitStart");
		
		UYInterface_PlayerController_BPI_C_SpawnCreepsOnOrbitStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYInterface_PlayerController_BPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYInterface_PlayerController_BPI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C");
		return ptr;
	}

}


