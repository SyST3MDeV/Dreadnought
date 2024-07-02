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
	 * 		Name   -> Function Launch_P.Launch_P_C.HandleHangarStateUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHangarState                                       hangarState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALaunch_P_C::HandleHangarStateUpdate(EHangarState hangarState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Launch_P.Launch_P_C.HandleHangarStateUpdate");
		
		ALaunch_P_C_HandleHangarStateUpdate_Params params {};
		params.hangarState = hangarState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Launch_P.Launch_P_C.SetUpAllLevelActorLinks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALaunch_P_C::SetUpAllLevelActorLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Launch_P.Launch_P_C.SetUpAllLevelActorLinks");
		
		ALaunch_P_C_SetUpAllLevelActorLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Launch_P.Launch_P_C.LoadMenuSoundbanks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALaunch_P_C::LoadMenuSoundbanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Launch_P.Launch_P_C.LoadMenuSoundbanks");
		
		ALaunch_P_C_LoadMenuSoundbanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Launch_P.Launch_P_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ALaunch_P_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Launch_P.Launch_P_C.ReceiveBeginPlay");
		
		ALaunch_P_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Launch_P.Launch_P_C.ExecuteUbergraph_Launch_P
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALaunch_P_C::ExecuteUbergraph_Launch_P(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Launch_P.Launch_P_C.ExecuteUbergraph_Launch_P");
		
		ALaunch_P_C_ExecuteUbergraph_Launch_P_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALaunch_P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALaunch_P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Launch_P.Launch_P_C");
		return ptr;
	}

}


