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
	 * 		Name   -> Function MM_DefaultMediaPlayer_PS4_WG.MM_DefaultMediaPlayer_PS4_WG_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMM_DefaultMediaPlayer_PS4_WG_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_DefaultMediaPlayer_PS4_WG.MM_DefaultMediaPlayer_PS4_WG_C.Construct");
		
		UMM_DefaultMediaPlayer_PS4_WG_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function MM_DefaultMediaPlayer_PS4_WG.MM_DefaultMediaPlayer_PS4_WG_C.ExecuteUbergraph_MM_DefaultMediaPlayer_PS4_WG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMM_DefaultMediaPlayer_PS4_WG_C::ExecuteUbergraph_MM_DefaultMediaPlayer_PS4_WG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_DefaultMediaPlayer_PS4_WG.MM_DefaultMediaPlayer_PS4_WG_C.ExecuteUbergraph_MM_DefaultMediaPlayer_PS4_WG");
		
		UMM_DefaultMediaPlayer_PS4_WG_C_ExecuteUbergraph_MM_DefaultMediaPlayer_PS4_WG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMM_DefaultMediaPlayer_PS4_WG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMM_DefaultMediaPlayer_PS4_WG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MM_DefaultMediaPlayer_PS4_WG.MM_DefaultMediaPlayer_PS4_WG_C");
		return ptr;
	}

}


