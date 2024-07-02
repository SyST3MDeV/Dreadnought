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
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetLoginQueueStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldShowQueue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldShowWait                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldShowCheckTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        QueueText                                                  (Parm)
	 * 		class FText                                        WaitTimeText                                               (Parm)
	 * 		class FText                                        CheckTimeText                                              (Parm)
	 */
	void UUI_LoginGate_Container_C::SetLoginQueueStats(bool ShouldShowQueue, bool ShouldShowWait, bool ShouldShowCheckTime, const class FText& QueueText, const class FText& WaitTimeText, const class FText& CheckTimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetLoginQueueStats");
		
		UUI_LoginGate_Container_C_SetLoginQueueStats_Params params {};
		params.ShouldShowQueue = ShouldShowQueue;
		params.ShouldShowWait = ShouldShowWait;
		params.ShouldShowCheckTime = ShouldShowCheckTime;
		params.QueueText = QueueText;
		params.WaitTimeText = WaitTimeText;
		params.CheckTimeText = CheckTimeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetBurstSmoothingStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasEstimatedWait                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        WaitTimeText                                               (Parm)
	 */
	void UUI_LoginGate_Container_C::SetBurstSmoothingStats(bool HasEstimatedWait, const class FText& WaitTimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetBurstSmoothingStats");
		
		UUI_LoginGate_Container_C_SetBurstSmoothingStats_Params params {};
		params.HasEstimatedWait = HasEstimatedWait;
		params.WaitTimeText = WaitTimeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetWaitText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        WaitTime                                                   (Parm)
	 */
	void UUI_LoginGate_Container_C::SetWaitText(const class FText& WaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetWaitText");
		
		UUI_LoginGate_Container_C_SetWaitText_Params params {};
		params.WaitTime = WaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetQueueText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        QueueText                                                  (Parm)
	 */
	void UUI_LoginGate_Container_C::SetQueueText(const class FText& QueueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetQueueText");
		
		UUI_LoginGate_Container_C_SetQueueText_Params params {};
		params.QueueText = QueueText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsTextInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ShowStatsTextInfo(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsTextInfo");
		
		UUI_LoginGate_Container_C_ShowStatsTextInfo_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.UpdateCheckTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TextTime                                                   (Parm)
	 */
	void UUI_LoginGate_Container_C::UpdateCheckTime(const class FText& TextTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.UpdateCheckTime");
		
		UUI_LoginGate_Container_C_UpdateCheckTime_Params params {};
		params.TextTime = TextTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetMessageText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        MessageText                                                (Parm)
	 */
	void UUI_LoginGate_Container_C::SetMessageText(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetMessageText");
		
		UUI_LoginGate_Container_C_SetMessageText_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetHeaderText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        headerText                                                 (Parm)
	 */
	void UUI_LoginGate_Container_C::SetHeaderText(const class FText& headerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.SetHeaderText");
		
		UUI_LoginGate_Container_C_SetHeaderText_Params params {};
		params.headerText = headerText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowNavigationArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ShowNavigationArea(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowNavigationArea");
		
		UUI_LoginGate_Container_C_ShowNavigationArea_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ShowStatsArea(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowStatsArea");
		
		UUI_LoginGate_Container_C_ShowStatsArea_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowCheckingProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ShowCheckingProgress(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowCheckingProgress");
		
		UUI_LoginGate_Container_C_ShowCheckingProgress_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowMessageArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ShowMessageArea(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ShowMessageArea");
		
		UUI_LoginGate_Container_C_ShowMessageArea_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_LoginGate_Container_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.Construct");
		
		UUI_LoginGate_Container_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_LoginGate_Container.UI_LoginGate_Container_C.ExecuteUbergraph_UI_LoginGate_Container
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_LoginGate_Container_C::ExecuteUbergraph_UI_LoginGate_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoginGate_Container.UI_LoginGate_Container_C.ExecuteUbergraph_UI_LoginGate_Container");
		
		UUI_LoginGate_Container_C_ExecuteUbergraph_UI_LoginGate_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginGate_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginGate_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoginGate_Container.UI_LoginGate_Container_C");
		return ptr;
	}

}


