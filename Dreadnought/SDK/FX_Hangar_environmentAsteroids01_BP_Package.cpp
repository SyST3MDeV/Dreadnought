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
	 * 		Name   -> Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFX_Hangar_environmentAsteroids01_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.UserConstructionScript");
		
		AFX_Hangar_environmentAsteroids01_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFX_Hangar_environmentAsteroids01_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.ReceiveBeginPlay");
		
		AFX_Hangar_environmentAsteroids01_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.ExecuteUbergraph_FX_Hangar_environmentAsteroids01_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFX_Hangar_environmentAsteroids01_BP_C::ExecuteUbergraph_FX_Hangar_environmentAsteroids01_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C.ExecuteUbergraph_FX_Hangar_environmentAsteroids01_BP");
		
		AFX_Hangar_environmentAsteroids01_BP_C_ExecuteUbergraph_FX_Hangar_environmentAsteroids01_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFX_Hangar_environmentAsteroids01_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFX_Hangar_environmentAsteroids01_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FX_Hangar_environmentAsteroids01_BP.FX_Hangar_environmentAsteroids01_BP_C");
		return ptr;
	}

}


