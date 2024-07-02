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
	 * BlueprintGeneratedClass HangarStateManager.HangarStateManager_C
	 * Size -> 0x0071 (FullSize[0x0431] - InheritedSize[0x03C0])
	 */
	class AHangarStateManager_C : public AYHangarStateManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               PostProcess;                                             // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UExponentialHeightFogComponent*                      ExponentialHeightFog;                                    // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USkyLightComponent*                                  SkyLight;                                                // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDirectionalLightComponent*                          DirectionalLight;                                        // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		TArray<struct FDirectionalLightSettings>                   DirectionalLightSetArray;                                // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FSkyLightSettings>                           SkyLightSetArray;                                        // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FExpHeightFogSettings>                       ExpHeightFogSetArray;                                    // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FString>                                      AvailableModes;                                          // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor
		EHangarState                                               CurrentHangarState;                                      // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetHangarState(EHangarState hangarState);
		void SetupFogDistance(float StartDistance, float DirectionalInscatteringExponent, float DirectionalInscatteringStartDistance, const struct FLinearColor& DirectionalInscatteringColor);
		void SetupFogColor(float Density, const struct FLinearColor& InscatteringColor, float HeightFalloff, float MaxOpacity);
		void SetupDirectionalLightMaterial(class UMaterialInterface* LightFunctionMaterial, const struct FVector& LightFunctionScale, float LightFunctionFadeDistance, float LightDisabledBrightness);
		void SetupDirectionalLightBloom(bool EnableLightShaftBloom, float BloomScale, float BloomThreshold, const struct FColor& BloomTint);
		void SetupDirectionalLightOcclusion(float LightIntensity, const struct FLinearColor& LightColor, bool EnableLightShaftOcclusion, float OcclusionMaskDarkness);
		void SetPPFX();
		void SetFog();
		void SetSkyLight();
		void SetDirectionalLight();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnPropertiesChanged();
		void ExecuteUbergraph_HangarStateManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
