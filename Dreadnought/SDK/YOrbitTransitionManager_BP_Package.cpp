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
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.AttachPanCameraToAttachPoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          YPlayerController                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::AttachPanCameraToAttachPoint(class AYPlayerController* YPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.AttachPanCameraToAttachPoint");
		
		AYOrbitTransitionManager_BP_C_AttachPanCameraToAttachPoint_Params params {};
		params.YPlayerController = YPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForGameMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYLevelStreamingDataTableRow                StreamingData                                              (Parm)
	 * 		bool                                               IsRelevant                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::IsLevelRelevantForGameMode(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForGameMode");
		
		AYOrbitTransitionManager_BP_C_IsLevelRelevantForGameMode_Params params {};
		params.StreamingData = StreamingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRelevant != nullptr)
			*IsRelevant = params.IsRelevant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForAVSMSetting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYLevelStreamingDataTableRow                StreamingData                                              (Parm)
	 * 		bool                                               IsRelevant                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::IsLevelRelevantForAVSMSetting(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForAVSMSetting");
		
		AYOrbitTransitionManager_BP_C_IsLevelRelevantForAVSMSetting_Params params {};
		params.StreamingData = StreamingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRelevant != nullptr)
			*IsRelevant = params.IsRelevant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForSelectedVariation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYLevelStreamingDataTableRow                StreamingData                                              (Parm)
	 * 		bool                                               IsRelevant                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::IsLevelRelevantForSelectedVariation(const struct FYLevelStreamingDataTableRow& StreamingData, bool* IsRelevant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForSelectedVariation");
		
		AYOrbitTransitionManager_BP_C_IsLevelRelevantForSelectedVariation_Params params {};
		params.StreamingData = StreamingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRelevant != nullptr)
			*IsRelevant = params.IsRelevant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ShouldSublevelBeLoadedOnLevelStart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYLevelStreamingDataTableRow                StreamingData                                              (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class AYGameState_MP*                              GameStateMP                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldBeLoaded                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::ShouldSublevelBeLoadedOnLevelStart(const struct FYLevelStreamingDataTableRow& StreamingData, class AYGameState_MP* GameStateMP, bool* ShouldBeLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ShouldSublevelBeLoadedOnLevelStart");
		
		AYOrbitTransitionManager_BP_C_ShouldSublevelBeLoadedOnLevelStart_Params params {};
		params.StreamingData = StreamingData;
		params.GameStateMP = GameStateMP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBeLoaded != nullptr)
			*ShouldBeLoaded = params.ShouldBeLoaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.UserConstructionScript");
		
		AYOrbitTransitionManager_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionStarts
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnOrbitTransitionStarts(class AYPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionStarts");
		
		AYOrbitTransitionManager_BP_C_OnOrbitTransitionStarts_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionEnds
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UYPlayerOrbitComponent*                      orbitComponent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnOrbitTransitionEnds(class AYPlayerController* Player, class UYPlayerOrbitComponent* orbitComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionEnds");
		
		AYOrbitTransitionManager_BP_C_OnOrbitTransitionEnds_Params params {};
		params.Player = Player;
		params.orbitComponent = orbitComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnEndOfMatchOrbitSetUp
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnEndOfMatchOrbitSetUp(class AYPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnEndOfMatchOrbitSetUp");
		
		AYOrbitTransitionManager_BP_C_OnEndOfMatchOrbitSetUp_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitLevelSetUp
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYGameState_MP*                              multiplayerGameState                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            levelVariationIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnOrbitLevelSetUp(class AYGameState_MP* multiplayerGameState, int32_t levelVariationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitLevelSetUp");
		
		AYOrbitTransitionManager_BP_C_OnOrbitLevelSetUp_Params params {};
		params.multiplayerGameState = multiplayerGameState;
		params.levelVariationIndex = levelVariationIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnCameraFadeComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnCameraFadeComplete(class AYPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnCameraFadeComplete");
		
		AYOrbitTransitionManager_BP_C_OnCameraFadeComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnStartProfileEndOfMatchScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::OnStartProfileEndOfMatchScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnStartProfileEndOfMatchScreen");
		
		AYOrbitTransitionManager_BP_C_OnStartProfileEndOfMatchScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.TryStreamingLevelsAfterOrbit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::TryStreamingLevelsAfterOrbit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.TryStreamingLevelsAfterOrbit");
		
		AYOrbitTransitionManager_BP_C_TryStreamingLevelsAfterOrbit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.RequestTransitionToLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::RequestTransitionToLevel(class AYPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.RequestTransitionToLevel");
		
		AYOrbitTransitionManager_BP_C_RequestTransitionToLevel_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnPlayCameraPanAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UYPlayerOrbitComponent*                      playerOrbitComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AYPlayerController*                          Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AYPawn*                                      Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::OnPlayCameraPanAnimation(class UYPlayerOrbitComponent* playerOrbitComponent, class AYPlayerController* Player, class AYPawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnPlayCameraPanAnimation");
		
		AYOrbitTransitionManager_BP_C_OnPlayCameraPanAnimation_Params params {};
		params.playerOrbitComponent = playerOrbitComponent;
		params.Player = Player;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.CamPanFInished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::CamPanFInished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.CamPanFInished");
		
		AYOrbitTransitionManager_BP_C_CamPanFInished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.SkipIntroCameraPan
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::SkipIntroCameraPan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.SkipIntroCameraPan");
		
		AYOrbitTransitionManager_BP_C_SkipIntroCameraPan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ExecuteUbergraph_YOrbitTransitionManager_BP
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AYOrbitTransitionManager_BP_C::ExecuteUbergraph_YOrbitTransitionManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ExecuteUbergraph_YOrbitTransitionManager_BP");
		
		AYOrbitTransitionManager_BP_C_ExecuteUbergraph_YOrbitTransitionManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature");
		
		AYOrbitTransitionManager_BP_C_OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_OnOrbitEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AYOrbitTransitionManager_BP_C::OrbitTransitionManager_OnOrbitEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_OnOrbitEnd__DelegateSignature");
		
		AYOrbitTransitionManager_BP_C_OrbitTransitionManager_OnOrbitEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AYOrbitTransitionManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AYOrbitTransitionManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C");
		return ptr;
	}

}


