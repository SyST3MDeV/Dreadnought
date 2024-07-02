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
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
	 */
	struct UChromaSDKPluginAnimation1DObject_Unload_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
	 */
	struct UChromaSDKPluginAnimation1DObject_Stop_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
	 */
	struct UChromaSDKPluginAnimation1DObject_PlayWithOnComplete_Params
	{
	public:
		class FScriptDelegate                                      onComplete;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
	 */
	struct UChromaSDKPluginAnimation1DObject_Play_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
	 */
	struct UChromaSDKPluginAnimation1DObject_Load_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
	 */
	struct UChromaSDKPluginAnimation1DObject_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
	 */
	struct UChromaSDKPluginAnimation1DObject_IsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
	 */
	struct UChromaSDKPluginAnimation1DObject_GetFrames_Params
	{
	public:
		TArray<struct FChromaSDKColorFrame1D>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
	 */
	struct UChromaSDKPluginAnimation2DObject_Unload_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
	 */
	struct UChromaSDKPluginAnimation2DObject_Stop_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
	 */
	struct UChromaSDKPluginAnimation2DObject_PlayWithOnComplete_Params
	{
	public:
		class FScriptDelegate                                      onComplete;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
	 */
	struct UChromaSDKPluginAnimation2DObject_Play_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
	 */
	struct UChromaSDKPluginAnimation2DObject_Load_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
	 */
	struct UChromaSDKPluginAnimation2DObject_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
	 */
	struct UChromaSDKPluginAnimation2DObject_IsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
	 */
	struct UChromaSDKPluginAnimation2DObject_GetFrames_Params
	{
	public:
		TArray<struct FChromaSDKColorFrame2D>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
	 */
	struct UChromaSDKPluginBPLibrary_UnloadAnimationName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
	 */
	struct UChromaSDKPluginBPLibrary_UnloadAnimation_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
	 */
	struct UChromaSDKPluginBPLibrary_StopAnimationType_Params
	{
	public:
		EChromaSDKDeviceEnum                                       Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
	 */
	struct UChromaSDKPluginBPLibrary_StopAnimations_Params
	{
	public:
		TArray<class FString>                                      animationNames;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
	 */
	struct UChromaSDKPluginBPLibrary_StopAnimationComposite_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
	 */
	struct UChromaSDKPluginBPLibrary_StopAnimation_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
	 */
	struct UChromaSDKPluginBPLibrary_StopAll_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
	 */
	struct UChromaSDKPluginBPLibrary_SetMouseLedColor_Params
	{
	public:
		EChromaSDKMouseLed                                         led;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9ZE8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DV6V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChromaSDKColors>                            Colors;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FChromaSDKColors>                            ReturnValue;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
	 */
	struct UChromaSDKPluginBPLibrary_SetKeysColorName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0N00[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
	 */
	struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
	 */
	struct UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4VU8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
	 */
	struct UChromaSDKPluginBPLibrary_SetKeysColor_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
	 */
	struct UChromaSDKPluginBPLibrary_SetKeyColorName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0014(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FE1S[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
	 */
	struct UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0010(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FF9U[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
	 */
	struct UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0004(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RZ7V[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
	 */
	struct UChromaSDKPluginBPLibrary_SetKeyColor_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UNQW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
	 */
	struct UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params
	{
	public:
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E1U1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V8F0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChromaSDKColors>                            Colors;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FChromaSDKColors>                            ReturnValue;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
	 */
	struct UChromaSDKPluginBPLibrary_PlayAnimations_Params
	{
	public:
		TArray<class FString>                                      animationNames;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       loop;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
	 */
	struct UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       loop;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
	 */
	struct UChromaSDKPluginBPLibrary_PlayAnimation_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       loop;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
	 */
	struct UChromaSDKPluginBPLibrary_LoadAnimationName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
	 */
	struct UChromaSDKPluginBPLibrary_LoadAnimation_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
	 */
	struct UChromaSDKPluginBPLibrary_IsPlatformWindows_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
	 */
	struct UChromaSDKPluginBPLibrary_IsInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
	 */
	struct UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params
	{
	public:
		EChromaSDKDeviceEnum                                       Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
	 */
	struct UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
	 */
	struct UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
	 */
	struct UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
	 */
	struct UChromaSDKPluginBPLibrary_GetMaxRow_Params
	{
	public:
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X9TE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
	 */
	struct UChromaSDKPluginBPLibrary_GetMaxLeds_Params
	{
	public:
		EChromaSDKDevice1DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3KYP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
	 */
	struct UChromaSDKPluginBPLibrary_GetMaxColumn_Params
	{
	public:
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0F5M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
	 */
	struct UChromaSDKPluginBPLibrary_GetKeyColorName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0014(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GOFG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
	 */
	struct UChromaSDKPluginBPLibrary_GetKeyColor_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5SZ3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
	 */
	struct UChromaSDKPluginBPLibrary_GetFrameCountName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
	 */
	struct UChromaSDKPluginBPLibrary_GetFrameCount_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetChromaKeysForInputAction
	 */
	struct UChromaSDKPluginBPLibrary_GetChromaKeysForInputAction_Params
	{
	public:
		EYInputActions                                             Action;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SLOO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
	 */
	struct UChromaSDKPluginBPLibrary_GetAnimationName_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LPTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
	 */
	struct UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
	 */
	struct UChromaSDKPluginBPLibrary_GetAnimationId_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
	 */
	struct UChromaSDKPluginBPLibrary_GetAnimationCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
	 */
	struct UChromaSDKPluginBPLibrary_DebugToString_Params
	{
	public:
		struct FChromaSDKGuid                                      EffectId;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
	 */
	struct UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params
	{
	public:
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8I22[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChromaSDKColors>                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
	 */
	struct UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params
	{
	public:
		EChromaSDKDevice1DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2W44[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
	 */
	struct UChromaSDKPluginBPLibrary_CreateColors2D_Params
	{
	public:
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LU9B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChromaSDKColors>                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
	 */
	struct UChromaSDKPluginBPLibrary_CreateColors1D_Params
	{
	public:
		EChromaSDKDevice1DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KJ7I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7U7X[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8QU3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0024(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
	 */
	struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x000C(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeysColorName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7IIX[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeysColor_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZKKK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EChromaSDKKeyboardKey>                              Keys;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeyColorName_Params
	{
	public:
		class FString                                              sourceAnimationName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              targetAnimationName;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x0024(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
	 */
	struct UChromaSDKPluginBPLibrary_CopyKeyColor_Params
	{
	public:
		int32_t                                                    sourceAnimationId;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    targetAnimationId;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChromaSDKKeyboardKey                                      Key;                                                     // 0x000C(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
	 */
	struct UChromaSDKPluginBPLibrary_CloseAnimationName_Params
	{
	public:
		class FString                                              animationName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
	 */
	struct UChromaSDKPluginBPLibrary_CloseAnimation_Params
	{
	public:
		int32_t                                                    animationId;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
	 */
	struct UChromaSDKPluginBPLibrary_ClearAnimationType_Params
	{
	public:
		EChromaSDKDeviceEnum                                       Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
	 */
	struct UChromaSDKPluginBPLibrary_ClearAll_Params
	{	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params
	{
	public:
		struct FChromaSDKGuid                                      EffectId;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKInit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params
	{
	public:
		struct FChromaSDKGuid                                      EffectId;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params
	{
	public:
		EChromaSDKDeviceEnum                                       Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M024[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FChromaSDKEffectResult                              ReturnValue;                                             // 0x0014(0x0014)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params
	{
	public:
		EChromaSDKDeviceEnum                                       Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FTOA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FChromaSDKEffectResult                              ReturnValue;                                             // 0x0004(0x0014)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params
	{
	public:
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XMZC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChromaSDKColors>                            Colors;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChromaSDKEffectResult                              ReturnValue;                                             // 0x0018(0x0014)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
	 */
	struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params
	{
	public:
		EChromaSDKDevice1DEnum                                     Device;                                                  // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T9WC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FChromaSDKEffectResult                              ReturnValue;                                             // 0x0018(0x0014)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
