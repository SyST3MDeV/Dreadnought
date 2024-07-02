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
	 * 		Name   -> Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.OnCameraBlend_MoveToHangar
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACameraActor*                                startingCam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACameraActor*                                hangarCam                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AYPlayerController_Outpost*                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOutpostTransitionsManager_BP_C::OnCameraBlend_MoveToHangar(class ACameraActor* startingCam, class ACameraActor* hangarCam, class AYPlayerController_Outpost* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.OnCameraBlend_MoveToHangar");
		
		UOutpostTransitionsManager_BP_C_OnCameraBlend_MoveToHangar_Params params {};
		params.startingCam = startingCam;
		params.hangarCam = hangarCam;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.ExecuteUbergraph_OutpostTransitionsManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOutpostTransitionsManager_BP_C::ExecuteUbergraph_OutpostTransitionsManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C.ExecuteUbergraph_OutpostTransitionsManager_BP");
		
		UOutpostTransitionsManager_BP_C_ExecuteUbergraph_OutpostTransitionsManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOutpostTransitionsManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOutpostTransitionsManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OutpostTransitionsManager_BP.OutpostTransitionsManager_BP_C");
		return ptr;
	}

}


