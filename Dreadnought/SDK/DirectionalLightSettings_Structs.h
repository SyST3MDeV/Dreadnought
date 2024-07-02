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
	 * UserDefinedStruct DirectionalLightSettings.DirectionalLightSettings
	 * Size -> 0x0068
	 */
	struct FDirectionalLightSettings
	{
	public:
		float                                                      Intensity_32_42660909468009C3CC28558CD6C446B4;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LightColor_35_3E2751544EA49B083652DB88FF5878EB;          // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableLightShaftOcclusion_1_31AF50334866AEFBFC6EC98C344E1BF7; // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LFIO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionMaskDarkness_4_A09001F14275ECDE4002F08ED7FB325F; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableLightShaftBloom_20_8B8821FD49B22A90DF1A7DA3FCC1D2D4; // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6N9B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BloomScale_23_C037864C4FFB4B4F61BE3390B692F08B;          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      BloomThreshold_26_817228A840194440178C5D832F368730;      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BloomTint_29_D6891DA34A44EEFE594302A6A2D343DE;           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  LightFunctionMaterial_38_42D44F244C19F02160F778BEA49F9CBA; // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LightFunctionScale_41_69BF471746BEE0BE68B0CEB565B32648;  // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LightFunctionFadeDistance_44_0830874746F5A031A26BCEA567455914; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DisabledBrightness_48_422F045B421DF771E3538ABDB8F569C7;  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XB0Z[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StreamingSetupName_57_97CDE5444DE221517626B2AB8DFAC2F6;  // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
