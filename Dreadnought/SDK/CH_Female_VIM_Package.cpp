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
	 * 		Name   -> Function CH_Female_VIM.CH_Female_VIM_C.ActivateCustomization 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoIntro                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoClothesSwap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoHeadgearSwap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Female_VIM_C::ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Female_VIM.CH_Female_VIM_C.ActivateCustomization ");
		
		UCH_Female_VIM_C_ActivateCustomization_Params params {};
		params.DoIntro = DoIntro;
		params.DoClothesSwap = DoClothesSwap;
		params.DoHeadgearSwap = DoHeadgearSwap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function CH_Female_VIM.CH_Female_VIM_C.ExecuteUbergraph_CH_Female_VIM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCH_Female_VIM_C::ExecuteUbergraph_CH_Female_VIM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CH_Female_VIM.CH_Female_VIM_C.ExecuteUbergraph_CH_Female_VIM");
		
		UCH_Female_VIM_C_ExecuteUbergraph_CH_Female_VIM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCH_Female_VIM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCH_Female_VIM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CH_Female_VIM.CH_Female_VIM_C");
		return ptr;
	}

}


