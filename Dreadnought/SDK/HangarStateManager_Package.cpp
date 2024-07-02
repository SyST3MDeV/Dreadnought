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
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetHangarState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHangarState                                       hangarState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetHangarState(EHangarState hangarState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetHangarState");
		
		AHangarStateManager_C_SetHangarState_Params params {};
		params.hangarState = hangarState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetupFogDistance
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DirectionalInscatteringExponent                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DirectionalInscatteringStartDistance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                DirectionalInscatteringColor                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetupFogDistance(float StartDistance, float DirectionalInscatteringExponent, float DirectionalInscatteringStartDistance, const struct FLinearColor& DirectionalInscatteringColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetupFogDistance");
		
		AHangarStateManager_C_SetupFogDistance_Params params {};
		params.StartDistance = StartDistance;
		params.DirectionalInscatteringExponent = DirectionalInscatteringExponent;
		params.DirectionalInscatteringStartDistance = DirectionalInscatteringStartDistance;
		params.DirectionalInscatteringColor = DirectionalInscatteringColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetupFogColor
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Density                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                InscatteringColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HeightFalloff                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetupFogColor(float Density, const struct FLinearColor& InscatteringColor, float HeightFalloff, float MaxOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetupFogColor");
		
		AHangarStateManager_C_SetupFogColor_Params params {};
		params.Density = Density;
		params.InscatteringColor = InscatteringColor;
		params.HeightFalloff = HeightFalloff;
		params.MaxOpacity = MaxOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightMaterial
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          LightFunctionMaterial                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LightFunctionScale                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LightFunctionFadeDistance                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LightDisabledBrightness                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetupDirectionalLightMaterial(class UMaterialInterface* LightFunctionMaterial, const struct FVector& LightFunctionScale, float LightFunctionFadeDistance, float LightDisabledBrightness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightMaterial");
		
		AHangarStateManager_C_SetupDirectionalLightMaterial_Params params {};
		params.LightFunctionMaterial = LightFunctionMaterial;
		params.LightFunctionScale = LightFunctionScale;
		params.LightFunctionFadeDistance = LightFunctionFadeDistance;
		params.LightDisabledBrightness = LightDisabledBrightness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightBloom
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableLightShaftBloom                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BloomScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BloomThreshold                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FColor                                      BloomTint                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetupDirectionalLightBloom(bool EnableLightShaftBloom, float BloomScale, float BloomThreshold, const struct FColor& BloomTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightBloom");
		
		AHangarStateManager_C_SetupDirectionalLightBloom_Params params {};
		params.EnableLightShaftBloom = EnableLightShaftBloom;
		params.BloomScale = BloomScale;
		params.BloomThreshold = BloomThreshold;
		params.BloomTint = BloomTint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightOcclusion
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LightIntensity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                LightColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EnableLightShaftOcclusion                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OcclusionMaskDarkness                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::SetupDirectionalLightOcclusion(float LightIntensity, const struct FLinearColor& LightColor, bool EnableLightShaftOcclusion, float OcclusionMaskDarkness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetupDirectionalLightOcclusion");
		
		AHangarStateManager_C_SetupDirectionalLightOcclusion_Params params {};
		params.LightIntensity = LightIntensity;
		params.LightColor = LightColor;
		params.EnableLightShaftOcclusion = EnableLightShaftOcclusion;
		params.OcclusionMaskDarkness = OcclusionMaskDarkness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetPPFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHangarStateManager_C::SetPPFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetPPFX");
		
		AHangarStateManager_C_SetPPFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetFog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHangarStateManager_C::SetFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetFog");
		
		AHangarStateManager_C_SetFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetSkyLight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHangarStateManager_C::SetSkyLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetSkyLight");
		
		AHangarStateManager_C_SetSkyLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.SetDirectionalLight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHangarStateManager_C::SetDirectionalLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.SetDirectionalLight");
		
		AHangarStateManager_C_SetDirectionalLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHangarStateManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.UserConstructionScript");
		
		AHangarStateManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AHangarStateManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.ReceiveBeginPlay");
		
		AHangarStateManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.OnPropertiesChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AHangarStateManager_C::OnPropertiesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.OnPropertiesChanged");
		
		AHangarStateManager_C_OnPropertiesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function HangarStateManager.HangarStateManager_C.ExecuteUbergraph_HangarStateManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarStateManager_C::ExecuteUbergraph_HangarStateManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarStateManager.HangarStateManager_C.ExecuteUbergraph_HangarStateManager");
		
		AHangarStateManager_C_ExecuteUbergraph_HangarStateManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHangarStateManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHangarStateManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HangarStateManager.HangarStateManager_C");
		return ptr;
	}

}


