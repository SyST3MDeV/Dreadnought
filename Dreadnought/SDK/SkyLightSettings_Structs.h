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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SkyLightSettings.SkyLightSettings
	 * Size -> 0x0030
	 */
	struct FSkyLightSettings
	{
	public:
		class UTextureCube*                                        CubeMap_5_06D4973A4A55119B64BC7DAE36C41F49;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Intensity_13_75C6899649F739D6DD4F348D8F7058AF;           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LightColor_16_59F4F6044A4DA0D038490B9BA6F985B5;          // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0H05[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StreamingSetupName_21_A60D33C54B377E51BC2A639EF86FCAF5;  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
