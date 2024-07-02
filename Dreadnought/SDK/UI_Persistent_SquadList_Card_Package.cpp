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
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.GetID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_SquadList_Card_C::GetID(class FName* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.GetID");
		
		UUI_Persistent_SquadList_Card_C_GetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ClearVoiceChatStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_SquadList_Card_C::ClearVoiceChatStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ClearVoiceChatStatus");
		
		UUI_Persistent_SquadList_Card_C_ClearVoiceChatStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.UpdateVoiceChatStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             VoiceData                                                  (Parm)
	 */
	void UUI_Persistent_SquadList_Card_C::UpdateVoiceChatStatus(const struct FSquadVoiceData& VoiceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.UpdateVoiceChatStatus");
		
		UUI_Persistent_SquadList_Card_C_UpdateVoiceChatStatus_Params params {};
		params.VoiceData = VoiceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.clear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_SquadList_Card_C::clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.clear");
		
		UUI_Persistent_SquadList_Card_C_clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Setup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadUserData                              SquadMemberData                                            (Parm)
	 */
	void UUI_Persistent_SquadList_Card_C::Setup(const struct FSquadUserData& SquadMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Setup");
		
		UUI_Persistent_SquadList_Card_C_Setup_Params params {};
		params.SquadMemberData = SquadMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_SquadList_Card_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Construct");
		
		UUI_Persistent_SquadList_Card_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_SquadList_Card_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.PreConstruct");
		
		UUI_Persistent_SquadList_Card_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ExecuteUbergraph_UI_Persistent_SquadList_Card
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_SquadList_Card_C::ExecuteUbergraph_UI_Persistent_SquadList_Card(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ExecuteUbergraph_UI_Persistent_SquadList_Card");
		
		UUI_Persistent_SquadList_Card_C_ExecuteUbergraph_UI_Persistent_SquadList_Card_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_SquadList_Card_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_SquadList_Card_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C");
		return ptr;
	}

}


