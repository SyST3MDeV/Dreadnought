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
	 * 		Name   -> Function DansMap_FlareWithMesh.DansMap_FlareWithMesh_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADansMap_FlareWithMesh_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DansMap_FlareWithMesh.DansMap_FlareWithMesh_C.UserConstructionScript");
		
		ADansMap_FlareWithMesh_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADansMap_FlareWithMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADansMap_FlareWithMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DansMap_FlareWithMesh.DansMap_FlareWithMesh_C");
		return ptr;
	}

}


