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
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowMatchMakingCancelledMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowPlayAfterwards                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ShowMatchMakingCancelledMessage(bool ShowPlayAfterwards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowMatchMakingCancelledMessage");
		
		UUI_Persistent_MatchmakingTimer_C_ShowMatchMakingCancelledMessage_Params params {};
		params.ShowPlayAfterwards = ShowPlayAfterwards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ServerStarting
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsStarting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ServerStarting(bool IsStarting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ServerStarting");
		
		UUI_Persistent_MatchmakingTimer_C_ServerStarting_Params params {};
		params.IsStarting = IsStarting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideContent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::HideContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideContent");
		
		UUI_Persistent_MatchmakingTimer_C_HideContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowHeader
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ShowHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowHeader");
		
		UUI_Persistent_MatchmakingTimer_C_ShowHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowPlayButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ShowPlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowPlayButton");
		
		UUI_Persistent_MatchmakingTimer_C_ShowPlayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::HideAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.HideAll");
		
		UUI_Persistent_MatchmakingTimer_C_HideAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Setup");
		
		UUI_Persistent_MatchmakingTimer_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.GetAverageWaitTimeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        AverageWaitTime                                            (Parm, OutParm)
	 */
	void UUI_Persistent_MatchmakingTimer_C::GetAverageWaitTimeText(class FText* AverageWaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.GetAverageWaitTimeText");
		
		UUI_Persistent_MatchmakingTimer_C_GetAverageWaitTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AverageWaitTime != nullptr)
			*AverageWaitTime = params.AverageWaitTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.FormatTextFromTimespan
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTimespan                                   Timespan                                                   (Parm, ZeroConstructor)
	 * 		class FText                                        HoursMiunutesSeconds                                       (Parm, OutParm)
	 */
	void UUI_Persistent_MatchmakingTimer_C::FormatTextFromTimespan(const struct FTimespan& Timespan, class FText* HoursMiunutesSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.FormatTextFromTimespan");
		
		UUI_Persistent_MatchmakingTimer_C_FormatTextFromTimespan_Params params {};
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HoursMiunutesSeconds != nullptr)
			*HoursMiunutesSeconds = params.HoursMiunutesSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.SetLabels
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        FleetTier                                                  (Parm)
	 * 		class FText                                        GameMode                                                   (Parm)
	 */
	void UUI_Persistent_MatchmakingTimer_C::SetLabels(const class FText& FleetTier, const class FText& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.SetLabels");
		
		UUI_Persistent_MatchmakingTimer_C_SetLabels_Params params {};
		params.FleetTier = FleetTier;
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.IncrementTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::IncrementTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.IncrementTimer");
		
		UUI_Persistent_MatchmakingTimer_C_IncrementTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ShowTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ShowTimer");
		
		UUI_Persistent_MatchmakingTimer_C_ShowTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Construct");
		
		UUI_Persistent_MatchmakingTimer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.Tick");
		
		UUI_Persistent_MatchmakingTimer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__ButtonCancel2_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(class UUI_Button_Generic_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_BndEvt__PlayButton_PC_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ExecuteUbergraph_UI_Persistent_MatchmakingTimer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Persistent_MatchmakingTimer_C::ExecuteUbergraph_UI_Persistent_MatchmakingTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.ExecuteUbergraph_UI_Persistent_MatchmakingTimer");
		
		UUI_Persistent_MatchmakingTimer_C_ExecuteUbergraph_UI_Persistent_MatchmakingTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnPlayButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::OnPlayButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnPlayButtonClicked__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_OnPlayButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnCancelButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Persistent_MatchmakingTimer_C::OnCancelButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C.OnCancelButtonClicked__DelegateSignature");
		
		UUI_Persistent_MatchmakingTimer_C_OnCancelButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Persistent_MatchmakingTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Persistent_MatchmakingTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Persistent_MatchmakingTimer.UI_Persistent_MatchmakingTimer_C");
		return ptr;
	}

}


