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
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_PVE_TeamScreen_PlayCharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::EOM_PVE_TeamScreen_PlayCharAnim(int32_t CharacterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_PVE_TeamScreen_PlayCharAnim");
		
		UYInterface_CharacterAnim_C_EOM_PVE_TeamScreen_PlayCharAnim_Params params {};
		params.CharacterIndex = CharacterIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::EOM_MVPScreen_LS_Event_PlayMVP3CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP3CharAnim");
		
		UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP3CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::EOM_MVPScreen_LS_Event_PlayMVP2CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP2CharAnim");
		
		UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP2CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::EOM_MVPScreen_LS_Event_PlayMVP1CharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_MVPScreen_LS_Event_PlayMVP1CharAnim");
		
		UYInterface_CharacterAnim_C_EOM_MVPScreen_LS_Event_PlayMVP1CharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_StatScreen_LS_Event_PlayCharAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::EOM_StatScreen_LS_Event_PlayCharAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.EOM_StatScreen_LS_Event_PlayCharAnim");
		
		UYInterface_CharacterAnim_C_EOM_StatScreen_LS_Event_PlayCharAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.OnAssignEndOfMatchBasePoseID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EndOfMatchPoseID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isRightRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::OnAssignEndOfMatchBasePoseID(int32_t EndOfMatchPoseID, bool isRightRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.OnAssignEndOfMatchBasePoseID");
		
		UYInterface_CharacterAnim_C_OnAssignEndOfMatchBasePoseID_Params params {};
		params.EndOfMatchPoseID = EndOfMatchPoseID;
		params.isRightRow = isRightRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetVOAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               VOAnim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::SetVOAnim(class UAnimSequence* VOAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetVOAnim");
		
		UYInterface_CharacterAnim_C_SetVOAnim_Params params {};
		params.VOAnim = VOAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFaceCorrectiveAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::SetFaceCorrectiveAnim(class UAnimSequence* anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFaceCorrectiveAnim");
		
		UYInterface_CharacterAnim_C_SetFaceCorrectiveAnim_Params params {};
		params.anim = anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetTalking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Talking                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::SetTalking(bool Talking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetTalking");
		
		UYInterface_CharacterAnim_C_SetTalking_Params params {};
		params.Talking = Talking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFemale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Female                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::SetFemale(bool Female)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.SetFemale");
		
		UYInterface_CharacterAnim_C_SetFemale_Params params {};
		params.Female = Female;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateCustomization 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DoIntro                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoClothesSwap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoHeadgearSwap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UYInterface_CharacterAnim_C::ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateCustomization ");
		
		UYInterface_CharacterAnim_C_ActivateCustomization_Params params {};
		params.DoIntro = DoIntro;
		params.DoClothesSwap = DoClothesSwap;
		params.DoHeadgearSwap = DoHeadgearSwap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateEndofMatchSingleView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::ActivateEndofMatchSingleView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.ActivateEndofMatchSingleView");
		
		UYInterface_CharacterAnim_C_ActivateEndofMatchSingleView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.	ActivateEndOfMatch 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::ActivateEndOfMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.	ActivateEndOfMatch ");
		
		UYInterface_CharacterAnim_C_ActivateEndOfMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.PlayRandomAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UYInterface_CharacterAnim_C::PlayRandomAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function YInterface_CharacterAnim.YInterface_CharacterAnim_C.PlayRandomAnimation");
		
		UYInterface_CharacterAnim_C_PlayRandomAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYInterface_CharacterAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYInterface_CharacterAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass YInterface_CharacterAnim.YInterface_CharacterAnim_C");
		return ptr;
	}

}


