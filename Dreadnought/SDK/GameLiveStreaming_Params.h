#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
	 */
	struct UGameLiveStreamingFunctionLibrary_StopWebCam_Params
	{	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
	{	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
	 */
	struct UGameLiveStreamingFunctionLibrary_StartWebCam_Params
	{
	public:
		int32_t                                                    DesiredWebCamWidth;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DesiredWebCamHeight;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMirrorWebCamImage;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDrawSimpleWebCamVideo;                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
	{
	public:
		class FString                                              LoginUserName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LoginPassword;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameRate;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScreenScaling;                                           // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartWebCam;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DTDE[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DesiredWebCamWidth;                                      // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DesiredWebCamHeight;                                     // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMirrorWebCamImage;                                      // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDrawSimpleWebCamVideo;                                  // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCaptureAudioFromComputer;                               // 0x0036(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCaptureAudioFromMicrophone;                             // 0x0037(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UTexture2D*                                          CoverUpImage;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
	 */
	struct UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
	 */
	struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
	 */
	struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UQueryLiveStreamsCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
