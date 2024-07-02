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
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYCharacterSpawner_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.UserConstructionScript");
		
		AYCharacterSpawner_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.OnCharacterSpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYBaseCharacter*                             spawnedCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYCharacterSpawner_BP_C::OnCharacterSpawned(class AYBaseCharacter* spawnedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.OnCharacterSpawned");
		
		AYCharacterSpawner_BP_C_OnCharacterSpawned_Params params {};
		params.spawnedCharacter = spawnedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYCharacterSpawner_BP_C::EOM_StatScreen_LS_Event_PlayCharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_StatScreen_LS_Event_PlayCharAnim");
		
		AYCharacterSpawner_BP_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYCharacterSpawner_BP_C::EOM_MVPScreen_LS_Event_PlayMVP1CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim");
		
		AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYCharacterSpawner_BP_C::EOM_MVPScreen_LS_Event_PlayMVP2CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim");
		
		AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYCharacterSpawner_BP_C::EOM_MVPScreen_LS_Event_PlayMVP3CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim");
		
		AYCharacterSpawner_BP_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_Debug_MVPTaunts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AnimIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYCharacterSpawner_BP_C::EOM_Debug_MVPTaunts(int32_t AnimIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_Debug_MVPTaunts");
		
		AYCharacterSpawner_BP_C_EOM_Debug_MVPTaunts_Params params {};
		params.AnimIndex = AnimIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_TeamScreen_PlayCharAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYCharacterSpawner_BP_C::EOM_TeamScreen_PlayCharAnim(int32_t CharacterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.EOM_TeamScreen_PlayCharAnim");
		
		AYCharacterSpawner_BP_C_EOM_TeamScreen_PlayCharAnim_Params params {};
		params.CharacterIndex = CharacterIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.ExecuteUbergraph_YCharacterSpawner_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYCharacterSpawner_BP_C::ExecuteUbergraph_YCharacterSpawner_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YCharacterSpawner_BP.YCharacterSpawner_BP_C.ExecuteUbergraph_YCharacterSpawner_BP");
		
		AYCharacterSpawner_BP_C_ExecuteUbergraph_YCharacterSpawner_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AYCharacterSpawner_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AYCharacterSpawner_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YCharacterSpawner_BP.YCharacterSpawner_BP_C");
		return ptr;
	}

}


