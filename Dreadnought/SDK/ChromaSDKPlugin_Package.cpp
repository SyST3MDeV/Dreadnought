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
	 * 		RVA    -> 0x029F4F10
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation1DObject::Unload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload");
		
		UChromaSDKPluginAnimation1DObject_Unload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4C70
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation1DObject::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop");
		
		UChromaSDKPluginAnimation1DObject_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3DA0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              onComplete                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginAnimation1DObject::PlayWithOnComplete(const class FScriptDelegate& onComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete");
		
		UChromaSDKPluginAnimation1DObject_PlayWithOnComplete_Params params {};
		params.onComplete = onComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3AB0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation1DObject::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play");
		
		UChromaSDKPluginAnimation1DObject_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3970
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation1DObject::Load()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load");
		
		UChromaSDKPluginAnimation1DObject_Load_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3940
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginAnimation1DObject::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying");
		
		UChromaSDKPluginAnimation1DObject_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3910
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginAnimation1DObject::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded");
		
		UChromaSDKPluginAnimation1DObject_IsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3290
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChromaSDKColorFrame1D> UChromaSDKPluginAnimation1DObject::GetFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames");
		
		UChromaSDKPluginAnimation1DObject_GetFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChromaSDKPluginAnimation1DObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChromaSDKPluginAnimation1DObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4F30
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation2DObject::Unload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload");
		
		UChromaSDKPluginAnimation2DObject_Unload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4C70
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation2DObject::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop");
		
		UChromaSDKPluginAnimation2DObject_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3E50
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              onComplete                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginAnimation2DObject::PlayWithOnComplete(const class FScriptDelegate& onComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete");
		
		UChromaSDKPluginAnimation2DObject_PlayWithOnComplete_Params params {};
		params.onComplete = onComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3AD0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation2DObject::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play");
		
		UChromaSDKPluginAnimation2DObject_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3990
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginAnimation2DObject::Load()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load");
		
		UChromaSDKPluginAnimation2DObject_Load_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3940
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginAnimation2DObject::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying");
		
		UChromaSDKPluginAnimation2DObject_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3910
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginAnimation2DObject::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded");
		
		UChromaSDKPluginAnimation2DObject_IsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F32D0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChromaSDKColorFrame2D> UChromaSDKPluginAnimation2DObject::GetFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames");
		
		UChromaSDKPluginAnimation2DObject_GetFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChromaSDKPluginAnimation2DObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChromaSDKPluginAnimation2DObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4FC0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimationName(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName");
		
		UChromaSDKPluginBPLibrary_UnloadAnimationName_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4F50
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimation(int32_t animationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation");
		
		UChromaSDKPluginBPLibrary_UnloadAnimation_Params params {};
		params.animationId = animationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4DD0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDeviceEnum                               Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_StopAnimationType(EChromaSDKDeviceEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType");
		
		UChromaSDKPluginBPLibrary_StopAnimationType_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4E50
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              animationNames                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_StopAnimations(TArray<class FString> animationNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations");
		
		UChromaSDKPluginBPLibrary_StopAnimations_Params params {};
		params.animationNames = animationNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4D40
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_StopAnimationComposite(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite");
		
		UChromaSDKPluginBPLibrary_StopAnimationComposite_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4CB0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_StopAnimation(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation");
		
		UChromaSDKPluginBPLibrary_StopAnimation_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4C90
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_StopAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll");
		
		UChromaSDKPluginBPLibrary_StopAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4AF0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKMouseLed                                 led                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FChromaSDKColors>                    Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_SetMouseLedColor(EChromaSDKMouseLed led, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor");
		
		UChromaSDKPluginBPLibrary_SetMouseLedColor_Params params {};
		params.led = led;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4970
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorName(const class FString& animationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName");
		
		UChromaSDKPluginBPLibrary_SetKeysColorName_Params params {};
		params.animationName = animationName;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4830
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesName(const class FString& animationName, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName");
		
		UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params params {};
		params.animationName = animationName;
		params.Keys = Keys;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4700
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFrames(int32_t animationId, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames");
		
		UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params params {};
		params.animationId = animationId;
		params.Keys = Keys;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4590
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeysColor(int32_t animationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor");
		
		UChromaSDKPluginBPLibrary_SetKeysColor_Params params {};
		params.animationId = animationId;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F42A0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorName(const class FString& animationName, int32_t frameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName");
		
		UChromaSDKPluginBPLibrary_SetKeyColorName_Params params {};
		params.animationName = animationName;
		params.frameIndex = frameIndex;
		params.Key = Key;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4170
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFramesName(const class FString& animationName, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName");
		
		UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params params {};
		params.animationName = animationName;
		params.Key = Key;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4050
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFrames(int32_t animationId, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames");
		
		UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params params {};
		params.animationId = animationId;
		params.Key = Key;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3F00
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_SetKeyColor(int32_t animationId, int32_t frameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor");
		
		UChromaSDKPluginBPLibrary_SetKeyColor_Params params {};
		params.animationId = animationId;
		params.frameIndex = frameIndex;
		params.Key = Key;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F4410
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FChromaSDKColors>                    Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_SetKeyboardKeyColor(EChromaSDKKeyboardKey Key, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor");
		
		UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params params {};
		params.Key = Key;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3C90
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              animationNames                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_PlayAnimations(TArray<class FString> animationNames, bool loop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations");
		
		UChromaSDKPluginBPLibrary_PlayAnimations_Params params {};
		params.animationNames = animationNames;
		params.loop = loop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3BC0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_PlayAnimationComposite(const class FString& animationName, bool loop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite");
		
		UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params params {};
		params.animationName = animationName;
		params.loop = loop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3AF0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_PlayAnimation(const class FString& animationName, bool loop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation");
		
		UChromaSDKPluginBPLibrary_PlayAnimation_Params params {};
		params.animationName = animationName;
		params.loop = loop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3A20
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_LoadAnimationName(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName");
		
		UChromaSDKPluginBPLibrary_LoadAnimationName_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F39B0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_LoadAnimation(int32_t animationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation");
		
		UChromaSDKPluginBPLibrary_LoadAnimation_Params params {};
		params.animationId = animationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01E81BA0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginBPLibrary::STATIC_IsPlatformWindows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows");
		
		UChromaSDKPluginBPLibrary_IsPlatformWindows_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F38E0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UChromaSDKPluginBPLibrary::STATIC_IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized");
		
		UChromaSDKPluginBPLibrary_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3850
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDeviceEnum                               Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationTypePlaying(EChromaSDKDeviceEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying");
		
		UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F37B0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationPlaying(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying");
		
		UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3730
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationId(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId");
		
		UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3700
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount");
		
		UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3670
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice2DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetMaxRow(EChromaSDKDevice2DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow");
		
		UChromaSDKPluginBPLibrary_GetMaxRow_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F35E0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice1DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetMaxLeds(EChromaSDKDevice1DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds");
		
		UChromaSDKPluginBPLibrary_GetMaxLeds_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3550
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice2DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetMaxColumn(EChromaSDKDevice2DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn");
		
		UChromaSDKPluginBPLibrary_GetMaxColumn_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3420
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColorName(const class FString& animationName, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName");
		
		UChromaSDKPluginBPLibrary_GetKeyColorName_Params params {};
		params.animationName = animationName;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3310
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColor(int32_t animationId, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor");
		
		UChromaSDKPluginBPLibrary_GetKeyColor_Params params {};
		params.animationId = animationId;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F31F0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetFrameCountName(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName");
		
		UChromaSDKPluginBPLibrary_GetFrameCountName_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3170
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetFrameCount(int32_t animationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount");
		
		UChromaSDKPluginBPLibrary_GetFrameCount_Params params {};
		params.animationId = animationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F3060
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetChromaKeysForInputAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYInputActions                                     Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<EChromaSDKKeyboardKey> UChromaSDKPluginBPLibrary::STATIC_GetChromaKeysForInputAction(EYInputActions Action, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetChromaKeysForInputAction");
		
		UChromaSDKPluginBPLibrary_GetChromaKeysForInputAction_Params params {};
		params.Action = Action;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2FA0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UChromaSDKPluginBPLibrary::STATIC_GetAnimationName(int32_t animationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName");
		
		UChromaSDKPluginBPLibrary_GetAnimationName_Params params {};
		params.animationId = animationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2F20
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetAnimationIdByIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex");
		
		UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2E80
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetAnimationId(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId");
		
		UChromaSDKPluginBPLibrary_GetAnimationId_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2E50
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_GetAnimationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount");
		
		UChromaSDKPluginBPLibrary_GetAnimationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2D40
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChromaSDKGuid                              EffectId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UChromaSDKPluginBPLibrary::STATIC_DebugToString(const struct FChromaSDKGuid& EffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString");
		
		UChromaSDKPluginBPLibrary_DebugToString_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2C60
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice2DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors2D(EChromaSDKDevice2DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D");
		
		UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2B90
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice1DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors1D(EChromaSDKDevice1DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D");
		
		UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2AB0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice2DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateColors2D(EChromaSDKDevice2DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D");
		
		UChromaSDKPluginBPLibrary_CreateColors2D_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F29E0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice1DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateColors1D(EChromaSDKDevice1DEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D");
		
		UChromaSDKPluginBPLibrary_CreateColors1D_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2860
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2720
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFramesName(const class FString& sourceAnimationName, const class FString& targetAnimationName, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2610
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F24C0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2360
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F2220
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor");
		
		UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F20A0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName");
		
		UChromaSDKPluginBPLibrary_CopyKeysColorName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1F60
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFramesName(const class FString& sourceAnimationName, const class FString& targetAnimationName, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName");
		
		UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1E50
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames");
		
		UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1D00
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EChromaSDKKeyboardKey>                      Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor");
		
		UChromaSDKPluginBPLibrary_CopyKeysColor_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.frameIndex = frameIndex;
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1BA0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sourceAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      targetAnimationName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName");
		
		UChromaSDKPluginBPLibrary_CopyKeyColorName_Params params {};
		params.sourceAnimationName = sourceAnimationName;
		params.targetAnimationName = targetAnimationName;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1A60
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            sourceAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            targetAnimationId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            frameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChromaSDKKeyboardKey                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, EChromaSDKKeyboardKey Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor");
		
		UChromaSDKPluginBPLibrary_CopyKeyColor_Params params {};
		params.sourceAnimationId = sourceAnimationId;
		params.targetAnimationId = targetAnimationId;
		params.frameIndex = frameIndex;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F19D0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      animationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CloseAnimationName(const class FString& animationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName");
		
		UChromaSDKPluginBPLibrary_CloseAnimationName_Params params {};
		params.animationName = animationName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1960
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            animationId                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_CloseAnimation(int32_t animationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation");
		
		UChromaSDKPluginBPLibrary_CloseAnimation_Params params {};
		params.animationId = animationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F18E0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDeviceEnum                               Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_ClearAnimationType(EChromaSDKDeviceEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType");
		
		UChromaSDKPluginBPLibrary_ClearAnimationType_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F18C0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UChromaSDKPluginBPLibrary::STATIC_ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll");
		
		UChromaSDKPluginBPLibrary_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1890
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_ChromaSDKUnInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit");
		
		UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F17C0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChromaSDKGuid                              EffectId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect");
		
		UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1790
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_ChromaSDKInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit");
		
		UChromaSDKPluginBPLibrary_ChromaSDKInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F16C0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChromaSDKGuid                              EffectId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UChromaSDKPluginBPLibrary::STATIC_ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect");
		
		UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F15B0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDeviceEnum                               Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum Device, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic");
		
		UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params params {};
		params.Device = Device;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F14F0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDeviceEnum                               Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum Device)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone");
		
		UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F13A0
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice2DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FChromaSDKColors>                    Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D");
		
		UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params params {};
		params.Device = Device;
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x029F1280
	 * 		Name   -> Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChromaSDKDevice1DEnum                             Device                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D");
		
		UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params params {};
		params.Device = Device;
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChromaSDKPluginBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChromaSDKPluginBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}

}


