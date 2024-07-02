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
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.LoginStreakPopupCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::LoginStreakPopupCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.LoginStreakPopupCheck");
		
		AUI_FrontEnd_C_LoginStreakPopupCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.CheckAndReportHangarReady
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::CheckAndReportHangarReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.CheckAndReportHangarReady");
		
		AUI_FrontEnd_C_CheckAndReportHangarReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.PlayMenuMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::PlayMenuMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.PlayMenuMusic");
		
		AUI_FrontEnd_C_PlayMenuMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.GetRoot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Screen_Root_FrontEnd_C*                  Root                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_FrontEnd_C::GetRoot(class UUI_Screen_Root_FrontEnd_C** Root)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.GetRoot");
		
		AUI_FrontEnd_C_GetRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Root != nullptr)
			*Root = params.Root;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.GetNavigationHandler
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_EventHandler_Navigation_C*               Handler                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_FrontEnd_C::GetNavigationHandler(class UUI_EventHandler_Navigation_C** Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.GetNavigationHandler");
		
		AUI_FrontEnd_C_GetNavigationHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handler != nullptr)
			*Handler = params.Handler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.UserConstructionScript");
		
		AUI_FrontEnd_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.HangarReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::HangarReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.HangarReady");
		
		AUI_FrontEnd_C_HangarReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHangarState                                       hangarState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_FrontEnd_C::OnHangarStateChanged(EHangarState hangarState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateChanged");
		
		AUI_FrontEnd_C_OnHangarStateChanged_Params params {};
		params.hangarState = hangarState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.LoadHangar
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::LoadHangar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.LoadHangar");
		
		AUI_FrontEnd_C_LoadHangar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.ExecuteUbergraph_UI_FrontEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_FrontEnd_C::ExecuteUbergraph_UI_FrontEnd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.ExecuteUbergraph_UI_FrontEnd");
		
		AUI_FrontEnd_C_ExecuteUbergraph_UI_FrontEnd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.OnHangarUnloaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::OnHangarUnloaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.OnHangarUnloaded__DelegateSignature");
		
		AUI_FrontEnd_C_OnHangarUnloaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      hangarState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUI_FrontEnd_C::OnHangarStateUpdated__DelegateSignature(unsigned char hangarState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.OnHangarStateUpdated__DelegateSignature");
		
		AUI_FrontEnd_C_OnHangarStateUpdated__DelegateSignature_Params params {};
		params.hangarState = hangarState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_FrontEnd.UI_FrontEnd_C.OnHangarLoaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUI_FrontEnd_C::OnHangarLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_FrontEnd.UI_FrontEnd_C.OnHangarLoaded__DelegateSignature");
		
		AUI_FrontEnd_C_OnHangarLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUI_FrontEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUI_FrontEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UI_FrontEnd.UI_FrontEnd_C");
		return ptr;
	}

}


