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
	 * 		Name   -> Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.HandleOnPlayerSpeakingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             VoiceData                                                  (Parm)
	 */
	void UUI_Persistent_SquadList_C::HandleOnPlayerSpeakingChanged(const struct FSquadVoiceData& VoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.HandleOnPlayerSpeakingChanged");
		
		UUI_Persistent_SquadList_C_HandleOnPlayerSpeakingChanged_Params params {};
		params.VoiceData = VoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Setup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSquadUserData>                      SquadUsers                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_Persistent_SquadList_C::Setup(TArray<struct FSquadUserData>* SquadUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Setup");
		
		UUI_Persistent_SquadList_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadUsers != nullptr)
			*SquadUsers = params.SquadUsers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_SquadList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.Construct");
		
		UUI_Persistent_SquadList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.ExecuteUbergraph_UI_Persistent_SquadList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_SquadList_C::ExecuteUbergraph_UI_Persistent_SquadList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList.UI_Persistent_SquadList_C.ExecuteUbergraph_UI_Persistent_SquadList");
		
		UUI_Persistent_SquadList_C_ExecuteUbergraph_UI_Persistent_SquadList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_SquadList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_SquadList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_SquadList.UI_Persistent_SquadList_C");
		return ptr;
	}

}


