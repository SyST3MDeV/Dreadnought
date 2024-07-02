#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UChromaSDKPluginAnimation1DObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_LDC7[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideFrameTime;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKED[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0038(0x0080) Edit, NativeAccessSpecifierPublic
		EChromaSDKDevice1DEnum                                     Device;                                                  // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGX9[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChromaSDKColorFrame1D>                      Frames;                                                  // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM6D[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Unload();
		void Stop();
		void PlayWithOnComplete(const class FScriptDelegate& onComplete);
		void Play();
		void Load();
		bool IsPlaying();
		bool IsLoaded();
		TArray<struct FChromaSDKColorFrame1D> GetFrames();
		static UClass* StaticClass();
	};

	/**
	 * Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UChromaSDKPluginAnimation2DObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_XBXZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideFrameTime;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4RE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0038(0x0080) Edit, NativeAccessSpecifierPublic
		EChromaSDKDevice2DEnum                                     Device;                                                  // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2GX[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChromaSDKColorFrame2D>                      Frames;                                                  // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7RR[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Unload();
		void Stop();
		void PlayWithOnComplete(const class FScriptDelegate& onComplete);
		void Play();
		void Load();
		bool IsPlaying();
		bool IsLoaded();
		TArray<struct FChromaSDKColorFrame2D> GetFrames();
		static UClass* StaticClass();
	};

	/**
	 * Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnloadAnimationName(const class FString& animationName);
		void STATIC_UnloadAnimation(int32_t animationId);
		void STATIC_StopAnimationType(EChromaSDKDeviceEnum Device);
		void STATIC_StopAnimations(TArray<class FString> animationNames);
		void STATIC_StopAnimationComposite(const class FString& animationName);
		void STATIC_StopAnimation(const class FString& animationName);
		void STATIC_StopAll();
		TArray<struct FChromaSDKColors> STATIC_SetMouseLedColor(EChromaSDKMouseLed led, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors);
		void STATIC_SetKeysColorName(const class FString& animationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color);
		void STATIC_SetKeysColorAllFramesName(const class FString& animationName, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color);
		void STATIC_SetKeysColorAllFrames(int32_t animationId, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color);
		void STATIC_SetKeysColor(int32_t animationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys, const struct FLinearColor& Color);
		void STATIC_SetKeyColorName(const class FString& animationName, int32_t frameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color);
		void STATIC_SetKeyColorAllFramesName(const class FString& animationName, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color);
		void STATIC_SetKeyColorAllFrames(int32_t animationId, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color);
		void STATIC_SetKeyColor(int32_t animationId, int32_t frameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& Color);
		TArray<struct FChromaSDKColors> STATIC_SetKeyboardKeyColor(EChromaSDKKeyboardKey Key, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors);
		void STATIC_PlayAnimations(TArray<class FString> animationNames, bool loop);
		void STATIC_PlayAnimationComposite(const class FString& animationName, bool loop);
		void STATIC_PlayAnimation(const class FString& animationName, bool loop);
		void STATIC_LoadAnimationName(const class FString& animationName);
		void STATIC_LoadAnimation(int32_t animationId);
		bool STATIC_IsPlatformWindows();
		bool STATIC_IsInitialized();
		bool STATIC_IsAnimationTypePlaying(EChromaSDKDeviceEnum Device);
		bool STATIC_IsAnimationPlaying(const class FString& animationName);
		int32_t STATIC_GetPlayingAnimationId(int32_t index);
		int32_t STATIC_GetPlayingAnimationCount();
		int32_t STATIC_GetMaxRow(EChromaSDKDevice2DEnum Device);
		int32_t STATIC_GetMaxLeds(EChromaSDKDevice1DEnum Device);
		int32_t STATIC_GetMaxColumn(EChromaSDKDevice2DEnum Device);
		struct FLinearColor STATIC_GetKeyColorName(const class FString& animationName, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		struct FLinearColor STATIC_GetKeyColor(int32_t animationId, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		int32_t STATIC_GetFrameCountName(const class FString& animationName);
		int32_t STATIC_GetFrameCount(int32_t animationId);
		TArray<EChromaSDKKeyboardKey> STATIC_GetChromaKeysForInputAction(EYInputActions Action, class APlayerController* PlayerController);
		class FString STATIC_GetAnimationName(int32_t animationId);
		int32_t STATIC_GetAnimationIdByIndex(int32_t index);
		int32_t STATIC_GetAnimationId(const class FString& animationName);
		int32_t STATIC_GetAnimationCount();
		class FString STATIC_DebugToString(const struct FChromaSDKGuid& EffectId);
		TArray<struct FChromaSDKColors> STATIC_CreateRandomColors2D(EChromaSDKDevice2DEnum Device);
		TArray<struct FLinearColor> STATIC_CreateRandomColors1D(EChromaSDKDevice1DEnum Device);
		TArray<struct FChromaSDKColors> STATIC_CreateColors2D(EChromaSDKDevice2DEnum Device);
		TArray<struct FLinearColor> STATIC_CreateColors1D(EChromaSDKDevice1DEnum Device);
		void STATIC_CopyNonZeroKeysColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyNonZeroKeysColorAllFramesName(const class FString& sourceAnimationName, const class FString& targetAnimationName, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyNonZeroKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyNonZeroKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyNonZeroKeyColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		void STATIC_CopyNonZeroKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		void STATIC_CopyKeysColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyKeysColorAllFramesName(const class FString& sourceAnimationName, const class FString& targetAnimationName, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, TArray<EChromaSDKKeyboardKey> Keys);
		void STATIC_CopyKeyColorName(const class FString& sourceAnimationName, const class FString& targetAnimationName, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		void STATIC_CopyKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameIndex, EChromaSDKKeyboardKey Key);
		void STATIC_CloseAnimationName(const class FString& animationName);
		void STATIC_CloseAnimation(int32_t animationId);
		void STATIC_ClearAnimationType(EChromaSDKDeviceEnum Device);
		void STATIC_ClearAll();
		int32_t STATIC_ChromaSDKUnInit();
		int32_t STATIC_ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId);
		int32_t STATIC_ChromaSDKInit();
		int32_t STATIC_ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId);
		struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum Device, const struct FLinearColor& Color);
		struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum Device);
		struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors> Colors);
		struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor> Colors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
