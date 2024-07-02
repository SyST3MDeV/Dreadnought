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
	 * 		RVA    -> 0x016E4D20
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StopWebCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam");
		
		UGameLiveStreamingFunctionLibrary_StopWebCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E4D00
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E4BC0
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            DesiredWebCamWidth                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredWebCamHeight                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMirrorWebCamImage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawSimpleWebCamVideo                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StartWebCam(int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam");
		
		UGameLiveStreamingFunctionLibrary_StartWebCam_Params params {};
		params.DesiredWebCamWidth = DesiredWebCamWidth;
		params.DesiredWebCamHeight = DesiredWebCamHeight;
		params.bMirrorWebCamImage = bMirrorWebCamImage;
		params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E4850
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LoginUserName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LoginPassword                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScreenScaling                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartWebCam                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredWebCamWidth                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredWebCamHeight                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMirrorWebCamImage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawSimpleWebCamVideo                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaptureAudioFromComputer                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCaptureAudioFromMicrophone                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CoverUpImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(const class FString& LoginUserName, const class FString& LoginPassword, int32_t FrameRate, float ScreenScaling, bool bStartWebCam, int32_t DesiredWebCamWidth, int32_t DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params {};
		params.LoginUserName = LoginUserName;
		params.LoginPassword = LoginPassword;
		params.FrameRate = FrameRate;
		params.ScreenScaling = ScreenScaling;
		params.bStartWebCam = bStartWebCam;
		params.DesiredWebCamWidth = DesiredWebCamWidth;
		params.DesiredWebCamHeight = DesiredWebCamHeight;
		params.bMirrorWebCamImage = bMirrorWebCamImage;
		params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
		params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
		params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
		params.CoverUpImage = CoverUpImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E4780
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameLiveStreamingFunctionLibrary::STATIC_IsWebCamEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled");
		
		UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E4750
	 * 		Name   -> Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");
		
		UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiveStreamingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiveStreamingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016E47B0
	 * 		Name   -> Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const class FString& GameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");
		
		UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params {};
		params.GameName = GameName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQueryLiveStreamsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQueryLiveStreamsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}

}


