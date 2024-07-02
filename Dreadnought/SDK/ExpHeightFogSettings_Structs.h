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
	 * UserDefinedStruct ExpHeightFogSettings.ExpHeightFogSettings
	 * Size -> 0x0050
	 */
	struct FExpHeightFogSettings
	{
	public:
		float                                                      FogDensity_2_F8E2E94C432211E00BFFE9A86728811D;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FogInscatteringColor_7_8CBD0FF44C73E2983CFE3C9858AD62E1; // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FogHeightFalloff_18_384267734368083464F4C1A32ECE5A1F;    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FogMaxOpacity_24_B4CA0B6845A5C46545788D8AAFB67C65;       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StartDistance_21_48E11E8E481B69437E5EFCA8B40C03F0;       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DirectionalInscatteringExponent_9_B18ED0D046691CEAA943CD8D4478017D; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DirectionalInscatteringStartDistance_11_9B6173D140DEBAD8A476CEB534B0DC3D; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DirectionalInscatteringColor_16_8C7ABEF44FEF2DE4A0A854AA3EC39E0D; // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HeightOffset_27_5543E07E40A5475B37CCE08795605B11;        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5X9B[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StreamingSetupName_32_26EC6D07406E7D174BF8EDB21DE569E6;  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
