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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MovieSceneCapture.EHDRCaptureGamut
	 */
	enum class EHDRCaptureGamut : uint8_t
	{
		HCGM_Rec709  = 0,
		HCGM_P3DCI   = 1,
		HCGM_Rec2020 = 2,
		HCGM_ACES    = 3,
		HCGM_ACEScg  = 4,
		HCGM_MAX     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneCapture.CaptureProtocolID
	 * Size -> 0x0008
	 */
	struct FCaptureProtocolID
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.CaptureResolution
	 * Size -> 0x0008
	 */
	struct FCaptureResolution
	{
	public:
		uint32_t                                                   ResX;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ResY;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
	 * Size -> 0x0048
	 */
	struct FMovieSceneCaptureSettings
	{
	public:
		struct FDirectoryPath                                      OutputDirectory;                                         // 0x0000(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bCreateTemporaryCopiesOfLevels;                          // 0x0010(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTQG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameModeOverride;                                        // 0x0018(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputFormat;                                            // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverwriteExisting;                                      // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bUseRelativeFrameNumbers;                                // 0x0031(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              ZeroPadFrameNumbers;                                     // 0x0032(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRCN[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameRate;                                               // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCaptureResolution                                  Resolution;                                              // 0x0038(0x0008) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bEnableTextureStreaming;                                 // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bCinematicMode;                                          // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowMovement;                                          // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bAllowTurning;                                           // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bShowPlayer;                                             // 0x0044(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bShowHUD;                                                // 0x0045(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFXP[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
	 * Size -> 0x0010
	 */
	struct FCompositionGraphCapturePasses
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
