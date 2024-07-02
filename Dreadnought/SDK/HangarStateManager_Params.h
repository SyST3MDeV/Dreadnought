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
	 * Function HangarStateManager.HangarStateManager_C.SetHangarState
	 */
	struct AHangarStateManager_C_SetHangarState_Params
	{
	public:
		EHangarState                                               hangarState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetupFogDistance
	 */
	struct AHangarStateManager_C_SetupFogDistance_Params
	{
	public:
		float                                                      StartDistance;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DirectionalInscatteringExponent;                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DirectionalInscatteringStartDistance;                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        DirectionalInscatteringColor;                            // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetupFogColor
	 */
	struct AHangarStateManager_C_SetupFogColor_Params
	{
	public:
		float                                                      Density;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        InscatteringColor;                                       // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      HeightFalloff;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxOpacity;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightMaterial
	 */
	struct AHangarStateManager_C_SetupDirectionalLightMaterial_Params
	{
	public:
		class UMaterialInterface*                                  LightFunctionMaterial;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LightFunctionScale;                                      // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LightFunctionFadeDistance;                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LightDisabledBrightness;                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightBloom
	 */
	struct AHangarStateManager_C_SetupDirectionalLightBloom_Params
	{
	public:
		bool                                                       EnableLightShaftBloom;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F9CM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BloomScale;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BloomThreshold;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FColor                                              BloomTint;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightOcclusion
	 */
	struct AHangarStateManager_C_SetupDirectionalLightOcclusion_Params
	{
	public:
		float                                                      LightIntensity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        LightColor;                                              // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EnableLightShaftOcclusion;                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U41N[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OcclusionMaskDarkness;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetPPFX
	 */
	struct AHangarStateManager_C_SetPPFX_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetFog
	 */
	struct AHangarStateManager_C_SetFog_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetSkyLight
	 */
	struct AHangarStateManager_C_SetSkyLight_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.SetDirectionalLight
	 */
	struct AHangarStateManager_C_SetDirectionalLight_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.UserConstructionScript
	 */
	struct AHangarStateManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.ReceiveBeginPlay
	 */
	struct AHangarStateManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.OnPropertiesChanged
	 */
	struct AHangarStateManager_C_OnPropertiesChanged_Params
	{	};

	/**
	 * Function HangarStateManager.HangarStateManager_C.ExecuteUbergraph_HangarStateManager
	 */
	struct AHangarStateManager_C_ExecuteUbergraph_HangarStateManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
