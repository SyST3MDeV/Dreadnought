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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrontendComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontendComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.FrontendComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrontendInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontendInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.FrontendInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMmogConnectionInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMmogConnectionInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.MmogConnectionInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB30B0
	 * 		Name   -> Function DreadGameUI.AsyncTaskDownloadEula.DownloadEula
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	class UAsyncTaskDownloadEula* UAsyncTaskDownloadEula::STATIC_DownloadEula()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.AsyncTaskDownloadEula.DownloadEula");
		
		UAsyncTaskDownloadEula_DownloadEula_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncTaskDownloadEula.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncTaskDownloadEula::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.AsyncTaskDownloadEula");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.ContextComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.BattleReadinessInterpreter.OnBattleReadinessPurchaseApproved__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               purchaseSuccessful                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBattleReadinessInterpreter::OnBattleReadinessPurchaseApproved__DelegateSignature(bool purchaseSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.BattleReadinessInterpreter.OnBattleReadinessPurchaseApproved__DelegateSignature");
		
		UBattleReadinessInterpreter_OnBattleReadinessPurchaseApproved__DelegateSignature_Params params {};
		params.purchaseSuccessful = purchaseSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleReadinessInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleReadinessInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.BattleReadinessInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0370
	 * 		Name   -> Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionPinnedGoalChanged
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        newPinnedGoalId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCareerProgressionInterpreter::OnCareerProgressionPinnedGoalChanged(const class FName& newPinnedGoalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionPinnedGoalChanged");
		
		UCareerProgressionInterpreter_OnCareerProgressionPinnedGoalChanged_Params params {};
		params.newPinnedGoalId = newPinnedGoalId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0180
	 * 		Name   -> Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FYUICareerProgressionGoalStageData          newStage                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasUIListBeenSorted                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCareerProgressionInterpreter::OnCareerProgressionGoalStageUpdated(const class FName& goalId, const struct FYUICareerProgressionGoalStageData& newStage, bool bHasUIListBeenSorted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageUpdated");
		
		UCareerProgressionInterpreter_OnCareerProgressionGoalStageUpdated_Params params {};
		params.goalId = goalId;
		params.newStage = newStage;
		params.bHasUIListBeenSorted = bHasUIListBeenSorted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0020
	 * 		Name   -> Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageRewardUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCareerProgressionInterpreter::OnCareerProgressionGoalStageRewardUpdated(const class FName& goalId, bool bSucceeded, const class FString& message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionGoalStageRewardUpdated");
		
		UCareerProgressionInterpreter_OnCareerProgressionGoalStageRewardUpdated_Params params {};
		params.goalId = goalId;
		params.bSucceeded = bSucceeded;
		params.message = message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFFA0
	 * 		Name   -> Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionCategoryUnlocked
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EYGoalCategory                                     unlockedCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCareerProgressionInterpreter::OnCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.CareerProgressionInterpreter.OnCareerProgressionCategoryUnlocked");
		
		UCareerProgressionInterpreter_OnCareerProgressionCategoryUnlocked_Params params {};
		params.unlockedCategory = unlockedCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCareerProgressionInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCareerProgressionInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.CareerProgressionInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.ChatInterpreter.OnChatMessagesChangedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UChatInterpreter::OnChatMessagesChangedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.ChatInterpreter.OnChatMessagesChangedDelegate__DelegateSignature");
		
		UChatInterpreter_OnChatMessagesChangedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.ChatInterpreter.OnChatChannelAddedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UChatInterpreter::OnChatChannelAddedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.ChatInterpreter.OnChatChannelAddedDelegate__DelegateSignature");
		
		UChatInterpreter_OnChatChannelAddedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.ChatInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD970
	 * 		Name   -> Function DreadGameUI.ContractsInterpreter.HandleOnPlayerContractsUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UContractsInterpreter::HandleOnPlayerContractsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.ContractsInterpreter.HandleOnPlayerContractsUpdated");
		
		UContractsInterpreter_HandleOnPlayerContractsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContractsInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContractsInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.ContractsInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameDownloadInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameDownloadInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.GameDownloadInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIdleKickInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIdleKickInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.IdleKickInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegalItemsInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegalItemsInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.LegalItemsInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginGateInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginGateInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.LoginGateInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3790
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetPS4ButtonIconMapping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYPS4ButtonIcon                                    buttonIconType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetPS4ButtonIconMapping(EYPS4ButtonIcon buttonIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetPS4ButtonIconMapping");
		
		UPopupButtonData_SetPS4ButtonIconMapping_Params params {};
		params.buttonIconType = buttonIconType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3310
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetLabel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        label                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetLabel(const class FText& label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetLabel");
		
		UPopupButtonData_SetLabel_Params params {};
		params.label = label;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3060
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetIndex");
		
		UPopupButtonData_SetIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC25C0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetCurrencyType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetCurrencyType(EYUICurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetCurrencyType");
		
		UPopupButtonData_SetCurrencyType_Params params {};
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC24C0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetCurrencyAmountStringText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        currencyAmountStrText                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetCurrencyAmountStringText(const class FText& currencyAmountStrText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetCurrencyAmountStringText");
		
		UPopupButtonData_SetCurrencyAmountStringText_Params params {};
		params.currencyAmountStrText = currencyAmountStrText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2440
	 * 		Name   -> Function DreadGameUI.PopupButtonData.SetButtonColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPopupButtonData::SetButtonColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.SetButtonColor");
		
		UPopupButtonData_SetButtonColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE4C0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.IsCurrencyEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPopupButtonData::IsCurrencyEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.IsCurrencyEnabled");
		
		UPopupButtonData_IsCurrencyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE4A0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.IsButtonColorCustom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPopupButtonData::IsButtonColorCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.IsButtonColorCustom");
		
		UPopupButtonData_IsButtonColorCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE0B0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.HasPS4ButtonIconMapping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPopupButtonData::HasPS4ButtonIconMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.HasPS4ButtonIconMapping");
		
		UPopupButtonData_HasPS4ButtonIconMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9690
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetPS4ButtonIconMapping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYPS4ButtonIcon UPopupButtonData::GetPS4ButtonIconMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetPS4ButtonIconMapping");
		
		UPopupButtonData_GetPS4ButtonIconMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6F70
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetLabel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPopupButtonData::GetLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetLabel");
		
		UPopupButtonData_GetLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6770
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPopupButtonData::GetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetIndex");
		
		UPopupButtonData_GetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4DD0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetCustomButtonColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UPopupButtonData::GetCustomButtonColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetCustomButtonColor");
		
		UPopupButtonData_GetCustomButtonColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB43A0
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetCurrencyType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYUICurrency UPopupButtonData::GetCurrencyType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetCurrencyType");
		
		UPopupButtonData_GetCurrencyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4370
	 * 		Name   -> Function DreadGameUI.PopupButtonData.GetCurrencyAmountStringText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPopupButtonData::GetCurrencyAmountStringText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupButtonData.GetCurrencyAmountStringText");
		
		UPopupButtonData_GetCurrencyAmountStringText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopupButtonData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopupButtonData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.PopupButtonData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.PopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2AD0
	 * 		Name   -> Function DreadGameUI.PopupManager.SetDefaultWebPopupWidgetClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::SetDefaultWebPopupWidgetClass(class UClass* userWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.SetDefaultWebPopupWidgetClass");
		
		UPopupManager_SetDefaultWebPopupWidgetClass_Params params {};
		params.userWidgetClass = userWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2A50
	 * 		Name   -> Function DreadGameUI.PopupManager.SetDefaultUpsellPopupWidgetClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::SetDefaultUpsellPopupWidgetClass(class UClass* userWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.SetDefaultUpsellPopupWidgetClass");
		
		UPopupManager_SetDefaultUpsellPopupWidgetClass_Params params {};
		params.userWidgetClass = userWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC29D0
	 * 		Name   -> Function DreadGameUI.PopupManager.SetDefaultLoginStreakPopupWidgetClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::SetDefaultLoginStreakPopupWidgetClass(class UClass* userWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.SetDefaultLoginStreakPopupWidgetClass");
		
		UPopupManager_SetDefaultLoginStreakPopupWidgetClass_Params params {};
		params.userWidgetClass = userWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2950
	 * 		Name   -> Function DreadGameUI.PopupManager.SetDefaultGenericPopupWidgetClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::SetDefaultGenericPopupWidgetClass(class UClass* userWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.SetDefaultGenericPopupWidgetClass");
		
		UPopupManager_SetDefaultGenericPopupWidgetClass_Params params {};
		params.userWidgetClass = userWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0630
	 * 		Name   -> Function DreadGameUI.PopupManager.OnPopupButtonSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUserWidget*                                 popupWidget                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::OnPopupButtonSelected(class UUserWidget* popupWidget, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.OnPopupButtonSelected");
		
		UPopupManager_OnPopupButtonSelected_Params params {};
		params.popupWidget = popupWidget;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF340
	 * 		Name   -> Function DreadGameUI.PopupManager.IsPopupDisplayed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPopupManager::IsPopupDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.IsPopupDisplayed");
		
		UPopupManager_IsPopupDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4AB0
	 * 		Name   -> Function DreadGameUI.PopupManager.GetCurrentPopupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPopupData* UPopupManager::GetCurrentPopupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.GetCurrentPopupData");
		
		UPopupManager_GetCurrentPopupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4A80
	 * 		Name   -> Function DreadGameUI.PopupManager.GetCurrentPopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UUserWidget* UPopupManager::GetCurrentPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.GetCurrentPopup");
		
		UPopupManager_GetCurrentPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2640
	 * 		Name   -> Function DreadGameUI.PopupManager.ClosePopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUserWidget*                                 popupWidget                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPopupManager::ClosePopup(class UUserWidget* popupWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.ClosePopup");
		
		UPopupManager_ClosePopup_Params params {};
		params.popupWidget = popupWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2620
	 * 		Name   -> Function DreadGameUI.PopupManager.CloseCurrentPopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPopupManager::CloseCurrentPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.CloseCurrentPopup");
		
		UPopupManager_CloseCurrentPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2580
	 * 		Name   -> Function DreadGameUI.PopupManager.CloseAllPopups
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPopupManager::CloseAllPopups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.CloseAllPopups");
		
		UPopupManager_CloseAllPopups_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1CD0
	 * 		Name   -> Function DreadGameUI.PopupManager.AddWebPopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      webURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPopupStackData UPopupManager::AddWebPopup(const class FString& webURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.AddWebPopup");
		
		UPopupManager_AddWebPopup_Params params {};
		params.webURL = webURL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1BC0
	 * 		Name   -> Function DreadGameUI.PopupManager.AddUpsellPopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPopupUpsellData*                            upsellData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPopupStackData UPopupManager::AddUpsellPopup(class UPopupUpsellData* upsellData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.AddUpsellPopup");
		
		UPopupManager_AddUpsellPopup_Params params {};
		params.upsellData = upsellData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB18B0
	 * 		Name   -> Function DreadGameUI.PopupManager.AddGenericPopupFromButtonDataList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        titleText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        bodyText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UPopupButtonData*>                    buttons                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FPopupStackData UPopupManager::AddGenericPopupFromButtonDataList(class UClass* userWidgetClass, const class FText& titleText, const class FText& bodyText, TArray<class UPopupButtonData*> buttons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.AddGenericPopupFromButtonDataList");
		
		UPopupManager_AddGenericPopupFromButtonDataList_Params params {};
		params.userWidgetClass = userWidgetClass;
		params.titleText = titleText;
		params.bodyText = bodyText;
		params.buttons = buttons;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB15D0
	 * 		Name   -> Function DreadGameUI.PopupManager.AddGenericPopup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        titleText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        bodyText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FText>                                buttonTexts                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FPopupStackData UPopupManager::AddGenericPopup(class UClass* userWidgetClass, const class FText& titleText, const class FText& bodyText, TArray<class FText> buttonTexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.AddGenericPopup");
		
		UPopupManager_AddGenericPopup_Params params {};
		params.userWidgetClass = userWidgetClass;
		params.titleText = titleText;
		params.bodyText = bodyText;
		params.buttonTexts = buttonTexts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1480
	 * 		Name   -> Function DreadGameUI.PopupManager.AddCustomPopup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      userWidgetClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPopupStackData UPopupManager::AddCustomPopup(class UClass* userWidgetClass, class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.PopupManager.AddCustomPopup");
		
		UPopupManager_AddCustomPopup_Params params {};
		params.userWidgetClass = userWidgetClass;
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopupManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopupManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.PopupManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0540
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.OnPaywallUrlReceived
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      transactionId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMarketInterpreter::OnPaywallUrlReceived(const class FString& URL, const class FString& transactionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.OnPaywallUrlReceived");
		
		UMarketInterpreter_OnPaywallUrlReceived_Params params {};
		params.URL = URL;
		params.transactionId = transactionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.MarketInterpreter.OnMarketPurchaseComplete__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMarketInterpreter::OnMarketPurchaseComplete__DelegateSignature(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.MarketInterpreter.OnMarketPurchaseComplete__DelegateSignature");
		
		UMarketInterpreter_OnMarketPurchaseComplete__DelegateSignature_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.MarketInterpreter.OnMarketDataRebuilt__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UMarketInterpreter::OnMarketDataRebuilt__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.MarketInterpreter.OnMarketDataRebuilt__DelegateSignature");
		
		UMarketInterpreter_OnMarketDataRebuilt__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.MarketInterpreter.OnMarketCatalogUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UMarketInterpreter::OnMarketCatalogUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.MarketInterpreter.OnMarketCatalogUpdated__DelegateSignature");
		
		UMarketInterpreter_OnMarketCatalogUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFA40
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.MarketPurchaseComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      offerId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMarketInterpreter::MarketPurchaseComplete(int32_t purchaseResult, const class FString& offerId, int32_t quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.MarketPurchaseComplete");
		
		UMarketInterpreter_MarketPurchaseComplete_Params params {};
		params.purchaseResult = purchaseResult;
		params.offerId = offerId;
		params.quantity = quantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0074C640
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.MarketManifestInitialized
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMarketInterpreter::MarketManifestInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.MarketManifestInitialized");
		
		UMarketInterpreter_MarketManifestInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF840
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.MarketDataRebuilt
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMarketInterpreter::MarketDataRebuilt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.MarketDataRebuilt");
		
		UMarketInterpreter_MarketDataRebuilt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF820
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.MarketCatalogUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMarketInterpreter::MarketCatalogUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.MarketCatalogUpdated");
		
		UMarketInterpreter_MarketCatalogUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDB30
	 * 		Name   -> Function DreadGameUI.MarketInterpreter.HandlePlayerConversionRequestDone
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMarketInterpreter::HandlePlayerConversionRequestDone(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.MarketInterpreter.HandlePlayerConversionRequestDone");
		
		UMarketInterpreter_HandlePlayerConversionRequestDone_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMarketInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMarketInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.MarketInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC30E0
	 * 		Name   -> Function DreadGameUI.NotificationData.SetIsNew
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNotificationData::SetIsNew(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.SetIsNew");
		
		UNotificationData_SetIsNew_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF220
	 * 		Name   -> Function DreadGameUI.NotificationData.IsNew
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UNotificationData::IsNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.IsNew");
		
		UNotificationData_IsNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCB80
	 * 		Name   -> Function DreadGameUI.NotificationData.GetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYAnnouncementType UNotificationData::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.GetType");
		
		UNotificationData_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC920
	 * 		Name   -> Function DreadGameUI.NotificationData.GetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UNotificationData::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.GetText");
		
		UNotificationData_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9490
	 * 		Name   -> Function DreadGameUI.NotificationData.GetNumButtons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UNotificationData::GetNumButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.GetNumButtons");
		
		UNotificationData_GetNumButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6350
	 * 		Name   -> Function DreadGameUI.NotificationData.GetID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UNotificationData::GetID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.GetID");
		
		UNotificationData_GetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3930
	 * 		Name   -> Function DreadGameUI.NotificationData.GetButtons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<ENotificationButtonType> UNotificationData::GetButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationData.GetButtons");
		
		UNotificationData_GetButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.NotificationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.NotificationsInterpreter.OnAnnouncementsChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UNotificationsInterpreter::OnAnnouncementsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.NotificationsInterpreter.OnAnnouncementsChanged__DelegateSignature");
		
		UNotificationsInterpreter_OnAnnouncementsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD7D0
	 * 		Name   -> Function DreadGameUI.NotificationsInterpreter.HandleOnAnnouncementsChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNotificationsInterpreter::HandleOnAnnouncementsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.NotificationsInterpreter.HandleOnAnnouncementsChanged");
		
		UNotificationsInterpreter_HandleOnAnnouncementsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationsInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationsInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.NotificationsInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0480
	 * 		Name   -> Function DreadGameUI.OnboardingInterpreter.OnFleetUnlocked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnboardingInterpreter::OnFleetUnlocked(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.OnboardingInterpreter.OnFleetUnlocked");
		
		UOnboardingInterpreter_OnFleetUnlocked_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.OnboardingInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPS4SystemsInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPS4SystemsInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.PS4SystemsInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.ShipInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.SocialInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIThemeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIThemeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UIThemeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3D90
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.SetUITheme
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Theme                                          theme                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadWidget::SetUITheme(EUI_Theme theme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.SetUITheme");
		
		UUI_DreadWidget_SetUITheme_Params params {};
		params.theme = theme;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC20D0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.SendAnalyticsEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screenId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticsButtonId                                 buttonID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            granularId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadWidget::SendAnalyticsEvent(EUI_Screen screenId, EAnalyticsButtonId buttonID, int32_t granularId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.SendAnalyticsEvent");
		
		UUI_DreadWidget_SendAnalyticsEvent_Params params {};
		params.screenId = screenId;
		params.buttonID = buttonID;
		params.granularId = granularId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.OnUIThemeReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Theme                                          theme                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadWidget::OnUIThemeReceived(EUI_Theme theme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.OnUIThemeReceived");
		
		UUI_DreadWidget_OnUIThemeReceived_Params params {};
		params.theme = theme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC06F0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.OnSynchronizeProperties
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UUI_DreadWidget::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.OnSynchronizeProperties");
		
		UUI_DreadWidget_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_DreadWidget::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.OnActionReceived");
		
		UUI_DreadWidget_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFF20
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.NavigateToTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadWidget::NavigateToTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.NavigateToTab");
		
		UUI_DreadWidget_NavigateToTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFD00
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.NavigateToScreen
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadWidget::NavigateToScreen(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.NavigateToScreen");
		
		UUI_DreadWidget_NavigateToScreen_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFC60
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.NavigateToPreviousScreen
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_DreadWidget::NavigateToPreviousScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.NavigateToPreviousScreen");
		
		UUI_DreadWidget_NavigateToPreviousScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF2B0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.IsPlatform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPlatform                                          platform                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_DreadWidget::IsPlatform(EPlatform platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.IsPlatform");
		
		UUI_DreadWidget_IsPlatform_Params params {};
		params.platform = platform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE5D0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.IsCurrentShipOwned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_DreadWidget::IsCurrentShipOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.IsCurrentShipOwned");
		
		UUI_DreadWidget_IsCurrentShipOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE510
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.IsCurrentModuleAVanityItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_DreadWidget::IsCurrentModuleAVanityItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.IsCurrentModuleAVanityItem");
		
		UUI_DreadWidget_IsCurrentModuleAVanityItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD490
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.HandleAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_DreadWidget::HandleAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.HandleAction");
		
		UUI_DreadWidget_HandleAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD300
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.GetViewportPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FVector2D UUI_DreadWidget::GetViewportPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.GetViewportPosition");
		
		UUI_DreadWidget_GetViewportPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCF00
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.GetUIDataForItemId
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_DreadWidget::GetUIDataForItemId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.GetUIDataForItemId");
		
		UUI_DreadWidget_GetUIDataForItemId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC9F0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.GetTooltipDataForItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipTechTreeItemData                    itemData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FYToolTipValue> UUI_DreadWidget::GetTooltipDataForItemData(const struct FYUIShipTechTreeItemData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.GetTooltipDataForItemData");
		
		UUI_DreadWidget_GetTooltipDataForItemData_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6740
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.GetImageLoader
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UYImageLoader* UUI_DreadWidget::GetImageLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.GetImageLoader");
		
		UUI_DreadWidget_GetImageLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3970
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.GetCachedAbsolutePosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UUI_DreadWidget::GetCachedAbsolutePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.GetCachedAbsolutePosition");
		
		UUI_DreadWidget_GetCachedAbsolutePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2CB0
	 * 		Name   -> Function DreadGameUI.UI_DreadWidget.DoesCurrentModuleHaveItemOffer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_DreadWidget::DoesCurrentModuleHaveItemOffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadWidget.DoesCurrentModuleHaveItemOffer");
		
		UUI_DreadWidget_DoesCurrentModuleHaveItemOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DreadWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DreadWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_DreadWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC40B0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowTierIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowTierIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowTierIcon");
		
		UUI_GenericButtonModuleWidget_ShouldShowTierIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4020
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowPreviousCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowPreviousCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowPreviousCost");
		
		UUI_GenericButtonModuleWidget_ShouldShowPreviousCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3FF0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowNewTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowNewTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowNewTag");
		
		UUI_GenericButtonModuleWidget_ShouldShowNewTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3F90
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowLockIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowLockIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowLockIcon");
		
		UUI_GenericButtonModuleWidget_ShouldShowLockIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4020
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowDiscountTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowDiscountTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowDiscountTag");
		
		UUI_GenericButtonModuleWidget_ShouldShowDiscountTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3F00
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowCurrentCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::ShouldShowCurrentCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.ShouldShowCurrentCost");
		
		UUI_GenericButtonModuleWidget_ShouldShowCurrentCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC27C0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.SetDataStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Data                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_GenericButtonModuleWidget::SetDataStruct(const struct FUIGenericButtonModuleData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.SetDataStruct");
		
		UUI_GenericButtonModuleWidget_SetDataStruct_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF6A0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsTechTreeItemAndNotOwned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsTechTreeItemAndNotOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsTechTreeItemAndNotOwned");
		
		UUI_GenericButtonModuleWidget_IsTechTreeItemAndNotOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF290
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsOwned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsOwned");
		
		UUI_GenericButtonModuleWidget_IsOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF270
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsOnSale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsOnSale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsOnSale");
		
		UUI_GenericButtonModuleWidget_IsOnSale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF250
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsNew
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsNew");
		
		UUI_GenericButtonModuleWidget_IsNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE630
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsEquipped");
		
		UUI_GenericButtonModuleWidget_IsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE540
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.IsCurrentModuleAVanityItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::IsCurrentModuleAVanityItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.IsCurrentModuleAVanityItem");
		
		UUI_GenericButtonModuleWidget_IsCurrentModuleAVanityItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE0E0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.HasPriceDiscount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::HasPriceDiscount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.HasPriceDiscount");
		
		UUI_GenericButtonModuleWidget_HasPriceDiscount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC9A0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_GenericButtonModuleWidget::GetTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetTier");
		
		UUI_GenericButtonModuleWidget_GetTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC750
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeResearchPrice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYUIItemPriceData UUI_GenericButtonModuleWidget::GetTechTreeResearchPrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeResearchPrice");
		
		UUI_GenericButtonModuleWidget_GetTechTreeResearchPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC5F0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreePurchasePrice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYUIItemPriceData UUI_GenericButtonModuleWidget::GetTechTreePurchasePrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreePurchasePrice");
		
		UUI_GenericButtonModuleWidget_GetTechTreePurchasePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC540
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeItemState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYTechTreeItemState UUI_GenericButtonModuleWidget::GetTechTreeItemState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetTechTreeItemState");
		
		UUI_GenericButtonModuleWidget_GetTechTreeItemState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA5A0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYUICurrency UUI_GenericButtonModuleWidget::GetPriceCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceCurrency");
		
		UUI_GenericButtonModuleWidget_GetPriceCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA580
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceAmount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUI_GenericButtonModuleWidget::GetPriceAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetPriceAmount");
		
		UUI_GenericButtonModuleWidget_GetPriceAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9510
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYUICurrency UUI_GenericButtonModuleWidget::GetOriginalPriceCurrency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceCurrency");
		
		UUI_GenericButtonModuleWidget_GetOriginalPriceCurrency_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB94F0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceAmount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUI_GenericButtonModuleWidget::GetOriginalPriceAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetOriginalPriceAmount");
		
		UUI_GenericButtonModuleWidget_GetOriginalPriceAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB92D0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetNewPriceAsPercentOfOldPrice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUI_GenericButtonModuleWidget::GetNewPriceAsPercentOfOldPrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetNewPriceAsPercentOfOldPrice");
		
		UUI_GenericButtonModuleWidget_GetNewPriceAsPercentOfOldPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9020
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleTexturePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_GenericButtonModuleWidget::GetModuleTexturePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleTexturePath");
		
		UUI_GenericButtonModuleWidget_GetModuleTexturePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8C40
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_GenericButtonModuleWidget::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetModuleName");
		
		UUI_GenericButtonModuleWidget_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6A40
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetItemID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_GenericButtonModuleWidget::GetItemID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetItemID");
		
		UUI_GenericButtonModuleWidget_GetItemID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6790
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_GenericButtonModuleWidget::GetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetIndex");
		
		UUI_GenericButtonModuleWidget_GetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6540
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetIconTexturePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_GenericButtonModuleWidget::GetIconTexturePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetIconTexturePath");
		
		UUI_GenericButtonModuleWidget_GetIconTexturePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4FD0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetDiscountTagText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_GenericButtonModuleWidget::GetDiscountTagText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetDiscountTagText");
		
		UUI_GenericButtonModuleWidget_GetDiscountTagText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4EF0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.GetDataStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FUIGenericButtonModuleData UUI_GenericButtonModuleWidget::GetDataStruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.GetDataStruct");
		
		UUI_GenericButtonModuleWidget_GetDataStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2CE0
	 * 		Name   -> Function DreadGameUI.UI_GenericButtonModuleWidget.DoesCurrentModuleHaveItemOffer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GenericButtonModuleWidget::DoesCurrentModuleHaveItemOffer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericButtonModuleWidget.DoesCurrentModuleHaveItemOffer");
		
		UUI_GenericButtonModuleWidget_DoesCurrentModuleHaveItemOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GenericButtonModuleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GenericButtonModuleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_GenericButtonModuleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTechTreeInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTechTreeInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.TechTreeInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC44D0
	 * 		Name   -> Function DreadGameUI.YMatchmakingInterpreter.StartQuickPlayMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UYMatchmakingInterpreter::StartQuickPlayMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.YMatchmakingInterpreter.StartQuickPlayMatchmaking");
		
		UYMatchmakingInterpreter_StartQuickPlayMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC43F0
	 * 		Name   -> Function DreadGameUI.YMatchmakingInterpreter.StartMatchmaking
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		EYGameModeType                                     gameModeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fullMapPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYMatchmakingInterpreter::StartMatchmaking(EYGameModeType gameModeType, const class FString& fullMapPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.YMatchmakingInterpreter.StartMatchmaking");
		
		UYMatchmakingInterpreter_StartMatchmaking_Params params {};
		params.gameModeType = gameModeType;
		params.fullMapPath = fullMapPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4250
	 * 		Name   -> Function DreadGameUI.YMatchmakingInterpreter.StartFavoritesMatchmaking
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		TArray<uint32_t>                                   gameModeTypes                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      fullMapPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYMatchmakingInterpreter::StartFavoritesMatchmaking(TArray<uint32_t> gameModeTypes, const class FString& fullMapPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.YMatchmakingInterpreter.StartFavoritesMatchmaking");
		
		UYMatchmakingInterpreter_StartFavoritesMatchmaking_Params params {};
		params.gameModeTypes = gameModeTypes;
		params.fullMapPath = fullMapPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.SquadMatchmakingStartedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::SquadMatchmakingStartedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.SquadMatchmakingStartedDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_SquadMatchmakingStartedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.ServerStartingDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::ServerStartingDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.ServerStartingDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_ServerStartingDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.QueueWaitingTimeAvailableDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            waitTimeSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYMatchmakingInterpreter::QueueWaitingTimeAvailableDelegate__DelegateSignature(int32_t waitTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.QueueWaitingTimeAvailableDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_QueueWaitingTimeAvailableDelegate__DelegateSignature_Params params {};
		params.waitTimeSeconds = waitTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStoppedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::MatchmakingTimerStoppedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStoppedDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_MatchmakingTimerStoppedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStartedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::MatchmakingTimerStartedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingTimerStartedDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_MatchmakingTimerStartedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingFailedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::MatchmakingFailedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.MatchmakingFailedDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_MatchmakingFailedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB24A0
	 * 		Name   -> Function DreadGameUI.YMatchmakingInterpreter.CancelMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UYMatchmakingInterpreter::CancelMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.YMatchmakingInterpreter.CancelMatchmaking");
		
		UYMatchmakingInterpreter_CancelMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.YMatchmakingInterpreter.BattleServerShutDownDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UYMatchmakingInterpreter::BattleServerShutDownDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.YMatchmakingInterpreter.BattleServerShutDownDelegate__DelegateSignature");
		
		UYMatchmakingInterpreter_BattleServerShutDownDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYMatchmakingInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYMatchmakingInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.YMatchmakingInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewStarted__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UHangarPreviewComponent::OnPreviewStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewStarted__DelegateSignature");
		
		UHangarPreviewComponent_OnPreviewStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewEnded__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UHangarPreviewComponent::OnPreviewEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.HangarPreviewComponent.OnPreviewEnded__DelegateSignature");
		
		UHangarPreviewComponent_OnPreviewEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDAB0
	 * 		Name   -> Function DreadGameUI.HangarPreviewComponent.HandleOnSubLevelLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UHangarPreviewComponent::HandleOnSubLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.HangarPreviewComponent.HandleOnSubLevelLoaded");
		
		UHangarPreviewComponent_HandleOnSubLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDA10
	 * 		Name   -> Function DreadGameUI.HangarPreviewComponent.HandleOnPreviewActorLoadoutAsyncLoaded
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UYShipLoadout*                               loadout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHangarPreviewComponent::HandleOnPreviewActorLoadoutAsyncLoaded(class UYShipLoadout* loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.HangarPreviewComponent.HandleOnPreviewActorLoadoutAsyncLoaded");
		
		UHangarPreviewComponent_HandleOnPreviewActorLoadoutAsyncLoaded_Params params {};
		params.loadout = loadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD8F0
	 * 		Name   -> Function DreadGameUI.HangarPreviewComponent.HandleOnOutpostTransitionCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EYOutpostSection                                   newSection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHangarPreviewComponent::HandleOnOutpostTransitionCompleted(EYOutpostSection newSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.HangarPreviewComponent.HandleOnOutpostTransitionCompleted");
		
		UHangarPreviewComponent_HandleOnOutpostTransitionCompleted_Params params {};
		params.newSection = newSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHangarPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHangarPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.HangarPreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.OnHangarStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHangarState                                       hangarState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFrontendHUD::OnHangarStateChanged(EHangarState hangarState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.OnHangarStateChanged");
		
		AFrontendHUD_OnHangarStateChanged_Params params {};
		params.hangarState = hangarState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFEA0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.NavigateToTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFrontendHUD::NavigateToTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.NavigateToTab");
		
		AFrontendHUD_NavigateToTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFC80
	 * 		Name   -> Function DreadGameUI.FrontendHUD.NavigateToScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFrontendHUD::NavigateToScreen(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.NavigateToScreen");
		
		AFrontendHUD_NavigateToScreen_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.LoadHangar
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFrontendHUD::LoadHangar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.LoadHangar");
		
		AFrontendHUD_LoadHangar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDE10
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HangarScreenTransitioned
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EUI_Screen                                         previousScreen                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUI_Screen                                         newScreen                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFrontendHUD::HangarScreenTransitioned(EUI_Screen previousScreen, EUI_Screen newScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HangarScreenTransitioned");
		
		AFrontendHUD_HangarScreenTransitioned_Params params {};
		params.previousScreen = previousScreen;
		params.newScreen = newScreen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDDF0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HangarPreviewStarted
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AFrontendHUD::HangarPreviewStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HangarPreviewStarted");
		
		AFrontendHUD_HangarPreviewStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDDD0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HangarPreviewEnded
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AFrontendHUD::HangarPreviewEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HangarPreviewEnded");
		
		AFrontendHUD_HangarPreviewEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDDB0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HangarLoadFinished
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AFrontendHUD::HangarLoadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HangarLoadFinished");
		
		AFrontendHUD_HangarLoadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDD90
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HandleShipPreviewFinalized
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AFrontendHUD::HandleShipPreviewFinalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HandleShipPreviewFinalized");
		
		AFrontendHUD_HandleShipPreviewFinalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD7F0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HandleOnControllerConnectionChange
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               isConnected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            userId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            userIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFrontendHUD::HandleOnControllerConnectionChange(bool isConnected, int32_t userId, int32_t userIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HandleOnControllerConnectionChange");
		
		AFrontendHUD_HandleOnControllerConnectionChange_Params params {};
		params.isConnected = isConnected;
		params.userId = userId;
		params.userIndex = userIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD5B0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HandleLogout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AFrontendHUD::HandleLogout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HandleLogout");
		
		AFrontendHUD_HandleLogout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD590
	 * 		Name   -> Function DreadGameUI.FrontendHUD.HandleLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AFrontendHUD::HandleLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.HandleLogin");
		
		AFrontendHUD_HandleLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA2F0
	 * 		Name   -> Function DreadGameUI.FrontendHUD.GetPopupManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPopupManager* AFrontendHUD::GetPopupManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.GetPopupManager");
		
		AFrontendHUD_GetPopupManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6720
	 * 		Name   -> Function DreadGameUI.FrontendHUD.GetImageLoader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UYImageLoader* AFrontendHUD::GetImageLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.GetImageLoader");
		
		AFrontendHUD_GetImageLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4340
	 * 		Name   -> Function DreadGameUI.FrontendHUD.GetCtAManagerInterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UYCtAManagerInterface* AFrontendHUD::GetCtAManagerInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.GetCtAManagerInterface");
		
		AFrontendHUD_GetCtAManagerInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2540
	 * 		Name   -> Function DreadGameUI.FrontendHUD.CheckLoginStreakPopup
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AFrontendHUD::CheckLoginStreakPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.FrontendHUD.CheckLoginStreakPopup");
		
		AFrontendHUD_CheckLoginStreakPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrontendHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontendHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.FrontendHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateBattleBonusConfirmationPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateBattleBonusConfirmationPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.ActivateBattleBonusConfirmationPopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMatchLobbyFleetSelectPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMatchLobbyFleetSelectPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.CustomMatchLobbyFleetSelectPopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGpToCreditsDetailsPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGpToCreditsDetailsPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.GpToCreditsDetailsPopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginStreakPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginStreakPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.LoginStreakPopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopupUpsellData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopupUpsellData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.PopupUpsellData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebPopupData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebPopupData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.WebPopupData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0950
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.RegisterListeners
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_BattleBonusWidget::RegisterListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.RegisterListeners");
		
		UUI_BattleBonusWidget_RegisterListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.OnFleetUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_BattleBonusWidget::OnFleetUpdated(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.OnFleetUpdated");
		
		UUI_BattleBonusWidget_OnFleetUpdated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.OnBattleBonusPurcahsed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_BattleBonusWidget::OnBattleBonusPurcahsed(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.OnBattleBonusPurcahsed");
		
		UUI_BattleBonusWidget_OnBattleBonusPurcahsed_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDED0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.HasBattleBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_BattleBonusWidget::HasBattleBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.HasBattleBonus");
		
		UUI_BattleBonusWidget_HasBattleBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB740
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.GetShipXpBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusWidget::GetShipXpBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.GetShipXpBonus");
		
		UUI_BattleBonusWidget_GetShipXpBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5B80
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.GetFreeXpBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusWidget::GetFreeXpBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.GetFreeXpBonus");
		
		UUI_BattleBonusWidget_GetFreeXpBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4280
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.GetCreditsBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusWidget::GetCreditsBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.GetCreditsBonus");
		
		UUI_BattleBonusWidget_GetCreditsBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB38A0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCreditsCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusWidget::GetBattleBonusCreditsCost(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCreditsCost");
		
		UUI_BattleBonusWidget_GetBattleBonusCreditsCost_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3810
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCooldown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUI_BattleBonusWidget::GetBattleBonusCooldown(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.GetBattleBonusCooldown");
		
		UUI_BattleBonusWidget_GetBattleBonusCooldown_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1FA0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusWidget.AttemptBattleReadinessPurchase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_BattleBonusWidget::AttemptBattleReadinessPurchase(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusWidget.AttemptBattleReadinessPurchase");
		
		UUI_BattleBonusWidget_AttemptBattleReadinessPurchase_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BattleBonusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BattleBonusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_BattleBonusWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0970
	 * 		Name   -> Function DreadGameUI.UI_ChatMessageListWidget.RegisterWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ChatMessageListWidget::RegisterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatMessageListWidget.RegisterWidget");
		
		UUI_ChatMessageListWidget_RegisterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6090
	 * 		Name   -> Function DreadGameUI.UI_ChatMessageListWidget.GetGroomedChatMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FChatMessageDefinition                      message                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ChatMessageListWidget::GetGroomedChatMessage(const struct FChatMessageDefinition& message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatMessageListWidget.GetGroomedChatMessage");
		
		UUI_ChatMessageListWidget_GetGroomedChatMessage_Params params {};
		params.message = message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3CB0
	 * 		Name   -> Function DreadGameUI.UI_ChatMessageListWidget.GetChatMessages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FChatMessageDefinition> UUI_ChatMessageListWidget::GetChatMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatMessageListWidget.GetChatMessages");
		
		UUI_ChatMessageListWidget_GetChatMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ChatMessageListWidget.ChatMessagesChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ChatMessageListWidget::ChatMessagesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatMessageListWidget.ChatMessagesChanged");
		
		UUI_ChatMessageListWidget_ChatMessagesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ChatMessageListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ChatMessageListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ChatMessageListWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.ShowChatWidgetRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::ShowChatWidgetRequested(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.ShowChatWidgetRequested");
		
		UUI_ChatWidget_ShowChatWidgetRequested_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.ShowChatWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::ShowChatWidget(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.ShowChatWidget");
		
		UUI_ChatWidget_ShowChatWidget_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3B90
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.SetSelectedRoomIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::SetSelectedRoomIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.SetSelectedRoomIndex");
		
		UUI_ChatWidget_SetSelectedRoomIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3170
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.SetIsVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::SetIsVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.SetIsVisible");
		
		UUI_ChatWidget_SetIsVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC21D0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.SendChatMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::SendChatMessage(const class FText& message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.SendChatMessage");
		
		UUI_ChatWidget_SendChatMessage_Params params {};
		params.message = message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0990
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.RegisterWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ChatWidget::RegisterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.RegisterWidget");
		
		UUI_ChatWidget_RegisterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF6D0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.IsTextChatEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ChatWidget::IsTextChatEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.IsTextChatEnabled");
		
		UUI_ChatWidget_IsTextChatEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD4B0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.HandleChatRoomCreated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldShow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::HandleChatRoomCreated(int32_t roomIndex, bool shouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.HandleChatRoomCreated");
		
		UUI_ChatWidget_HandleChatRoomCreated_Params params {};
		params.roomIndex = roomIndex;
		params.shouldShow = shouldShow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.HandleChatMessageReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            roomIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::HandleChatMessageReceived(int32_t roomIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.HandleChatMessageReceived");
		
		UUI_ChatWidget_HandleChatMessageReceived_Params params {};
		params.roomIndex = roomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAA30
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.GetSelectedRoomIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ChatWidget::GetSelectedRoomIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.GetSelectedRoomIndex");
		
		UUI_ChatWidget_GetSelectedRoomIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6950
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.GetIsVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ChatWidget::GetIsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.GetIsVisible");
		
		UUI_ChatWidget_GetIsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4570
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.GetCurrentChatRooms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FChatRoomDefinition> UUI_ChatWidget::GetCurrentChatRooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.GetCurrentChatRooms");
		
		UUI_ChatWidget_GetCurrentChatRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB25A0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.CloseChatRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ChatWidget::CloseChatRoom(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.CloseChatRoom");
		
		UUI_ChatWidget_CloseChatRoom_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ChatWidget.ChatRoomsChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ChatWidget::ChatRoomsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ChatWidget.ChatRoomsChanged");
		
		UUI_ChatWidget_ChatRoomsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ChatWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ChatWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ChatWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA050
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchPlayerCardWidget.GetPlayerUiData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerUIData UUI_CustomMatchPlayerCardWidget::GetPlayerUiData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchPlayerCardWidget.GetPlayerUiData");
		
		UUI_CustomMatchPlayerCardWidget_GetPlayerUiData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatchPlayerCardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatchPlayerCardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CustomMatchPlayerCardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA050
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchPlayerInviteCardWidget.GetPlayerUiData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerUIData UUI_CustomMatchPlayerInviteCardWidget::GetPlayerUiData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchPlayerInviteCardWidget.GetPlayerUiData");
		
		UUI_CustomMatchPlayerInviteCardWidget_GetPlayerUiData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatchPlayerInviteCardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatchPlayerInviteCardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CustomMatchPlayerInviteCardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4A70
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.TransitionOutComplete
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_DreadScreen::TransitionOutComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.TransitionOutComplete");
		
		UUI_DreadScreen_TransitionOutComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4A50
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.TransitionInComplete
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_DreadScreen::TransitionInComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.TransitionInComplete");
		
		UUI_DreadScreen_TransitionInComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_DreadScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.StartTransitionOut");
		
		UUI_DreadScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_DreadScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.StartTransitionIn");
		
		UUI_DreadScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_DreadScreen::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.OnTransitionOut");
		
		UUI_DreadScreen_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_DreadScreen::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.OnTransitionIn");
		
		UUI_DreadScreen_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadScreen::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.OnNavigationEvent");
		
		UUI_DreadScreen_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.OnChangeTab
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadScreen::OnChangeTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.OnChangeTab");
		
		UUI_DreadScreen_OnChangeTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD5D0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.HandleNavigationEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Input                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadScreen::HandleNavigationEvent(EUI_MenuActions GamePad_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.HandleNavigationEvent");
		
		UUI_DreadScreen_HandleNavigationEvent_Params params {};
		params.GamePad_Input = GamePad_Input;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4DA0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.GetCurrentUITheme
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EUI_Theme UUI_DreadScreen::GetCurrentUITheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.GetCurrentUITheme");
		
		UUI_DreadScreen_GetCurrentUITheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB24C0
	 * 		Name   -> Function DreadGameUI.UI_DreadScreen.ChangeTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadScreen::ChangeTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadScreen.ChangeTab");
		
		UUI_DreadScreen_ChangeTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DreadScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DreadScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_DreadScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3E40
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.ShouldBlockForHavocMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ManageFleetScreen::ShouldBlockForHavocMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.ShouldBlockForHavocMode");
		
		UUI_ManageFleetScreen_ShouldBlockForHavocMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2D70
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.SetFleetFlagship
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            loadoutindex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManageFleetScreen::SetFleetFlagship(int32_t shipID, int32_t loadoutindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.SetFleetFlagship");
		
		UUI_ManageFleetScreen_SetFleetFlagship_Params params {};
		params.shipID = shipID;
		params.loadoutindex = loadoutindex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2640
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.SetCurrentShipId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManageFleetScreen::SetCurrentShipId(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.SetCurrentShipId");
		
		UUI_ManageFleetScreen_SetCurrentShipId_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0A30
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.RemoveShipFromFleet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManageFleetScreen::RemoveShipFromFleet(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.RemoveShipFromFleet");
		
		UUI_ManageFleetScreen_RemoveShipFromFleet_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleetScreen::OnMatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStopped");
		
		UUI_ManageFleetScreen_OnMatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleetScreen::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.OnMatchmakingStarted");
		
		UUI_ManageFleetScreen_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutRemovedFromFleet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ManageFleetScreen::OnLoadoutRemovedFromFleet(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutRemovedFromFleet");
		
		UUI_ManageFleetScreen_OnLoadoutRemovedFromFleet_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutAddedToFleet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ManageFleetScreen::OnLoadoutAddedToFleet(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.OnLoadoutAddedToFleet");
		
		UUI_ManageFleetScreen_OnLoadoutAddedToFleet_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.OnFleetUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ManageFleetScreen::OnFleetUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.OnFleetUpdated");
		
		UUI_ManageFleetScreen_OnFleetUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDF60
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.HasBattleBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ManageFleetScreen::HasBattleBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.HasBattleBonus");
		
		UUI_ManageFleetScreen_HasBattleBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAB00
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.GetShipBonuses
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            shipTier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UUI_ManageFleetScreen::GetShipBonuses(int32_t shipTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.GetShipBonuses");
		
		UUI_ManageFleetScreen_GetShipBonuses_Params params {};
		params.shipTier = shipTier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5800
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.GetFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYFleetType UUI_ManageFleetScreen::GetFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.GetFleetType");
		
		UUI_ManageFleetScreen_GetFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB57D0
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.GetFleetFlagshipID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUI_ManageFleetScreen::GetFleetFlagshipID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.GetFleetFlagshipID");
		
		UUI_ManageFleetScreen_GetFleetFlagshipID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5750
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.GetFleetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIShipData> UUI_ManageFleetScreen::GetFleetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.GetFleetData");
		
		UUI_ManageFleetScreen_GetFleetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5720
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.GetFlagshipLoadoutIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUI_ManageFleetScreen::GetFlagshipLoadoutIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.GetFlagshipLoadoutIndex");
		
		UUI_ManageFleetScreen_GetFlagshipLoadoutIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2400
	 * 		Name   -> Function DreadGameUI.UI_ManageFleetScreen.CanStartMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ManageFleetScreen::CanStartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManageFleetScreen.CanStartMatchmaking");
		
		UUI_ManageFleetScreen_CanStartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManageFleetScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManageFleetScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ManageFleetScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.SettingsChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FYCustomMatchScreenSettings                 Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::SettingsChanged(const struct FYCustomMatchScreenSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.SettingsChanged");
		
		UUI_CustomMatchSettingsWidget_SettingsChanged_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3D10
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.SetTeamSize
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            teamSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::SetTeamSize(int32_t teamSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.SetTeamSize");
		
		UUI_CustomMatchSettingsWidget_SetTeamSize_Params params {};
		params.teamSize = teamSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3570
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.SetMap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Map                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::SetMap(const class FText& Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.SetMap");
		
		UUI_CustomMatchSettingsWidget_SetMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2EB0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.SetGameMode
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        GameMode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::SetGameMode(const class FText& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.SetGameMode");
		
		UUI_CustomMatchSettingsWidget_SetGameMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2CA0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.SetFillTeamWithAiFlag
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               fillWithAi                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::SetFillTeamWithAiFlag(EYCustomMatchTeam Team, bool fillWithAi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.SetFillTeamWithAiFlag");
		
		UUI_CustomMatchSettingsWidget_SetFillTeamWithAiFlag_Params params {};
		params.Team = Team;
		params.fillWithAi = fillWithAi;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.RoomStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  oldRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYCustomRoomState                                  newRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CustomMatchSettingsWidget::RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.RoomStateChanged");
		
		UUI_CustomMatchSettingsWidget_RoomStateChanged_Params params {};
		params.oldRoomState = oldRoomState;
		params.newRoomState = newRoomState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF070
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.IsLocalPlayerHost
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_CustomMatchSettingsWidget::IsLocalPlayerHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.IsLocalPlayerHost");
		
		UUI_CustomMatchSettingsWidget_IsLocalPlayerHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC190
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetTeamSize
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_CustomMatchSettingsWidget::GetTeamSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetTeamSize");
		
		UUI_CustomMatchSettingsWidget_GetTeamSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA9A0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetRoomState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	EYCustomRoomState UUI_CustomMatchSettingsWidget::GetRoomState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetRoomState");
		
		UUI_CustomMatchSettingsWidget_GetRoomState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8570
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMinTeamSize
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_CustomMatchSettingsWidget::GetMinTeamSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMinTeamSize");
		
		UUI_CustomMatchSettingsWidget_GetMinTeamSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7930
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapTexture
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UUI_CustomMatchSettingsWidget::GetMapTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapTexture");
		
		UUI_CustomMatchSettingsWidget_GetMapTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7870
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterOptions
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIAccordionFilterCategoryOptionData> UUI_CustomMatchSettingsWidget::GetMapFilterOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterOptions");
		
		UUI_CustomMatchSettingsWidget_GetMapFilterOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7790
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterIndex
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        Map                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_CustomMatchSettingsWidget::GetMapFilterIndex(const class FText& Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetMapFilterIndex");
		
		UUI_CustomMatchSettingsWidget_GetMapFilterIndex_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6040
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeIconPath
	 * 		Flags  -> (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FStringAssetReference UUI_CustomMatchSettingsWidget::GetGameModeIconPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeIconPath");
		
		UUI_CustomMatchSettingsWidget_GetGameModeIconPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5F80
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterOptions
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIAccordionFilterCategoryOptionData> UUI_CustomMatchSettingsWidget::GetGameModeFilterOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterOptions");
		
		UUI_CustomMatchSettingsWidget_GetGameModeFilterOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5EA0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterIndex
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        GameMode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_CustomMatchSettingsWidget::GetGameModeFilterIndex(const class FText& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.GetGameModeFilterIndex");
		
		UUI_CustomMatchSettingsWidget_GetGameModeFilterIndex_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.DoRefresh
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CustomMatchSettingsWidget::DoRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.DoRefresh");
		
		UUI_CustomMatchSettingsWidget_DoRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CustomMatchSettingsWidget.DataReady
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CustomMatchSettingsWidget::DataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CustomMatchSettingsWidget.DataReady");
		
		UUI_CustomMatchSettingsWidget_DataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomMatchSettingsWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomMatchSettingsWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CustomMatchSettingsWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.UserDataRefreshed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UI_CustomMatchScreen::UserDataRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.UserDataRefreshed");
		
		UI_CustomMatchScreen_UserDataRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC43B0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.StartMatchCountdown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UI_CustomMatchScreen::StartMatchCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.StartMatchCountdown");
		
		UI_CustomMatchScreen_StartMatchCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4390
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.StartMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UI_CustomMatchScreen::StartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.StartMatch");
		
		UI_CustomMatchScreen_StartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2E30
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.SetFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::SetFleetType(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.SetFleetType");
		
		UI_CustomMatchScreen_SetFleetType_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC28D0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.SetDefaultCustomRoomSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UYCustomMatchSettingsDataAsset*              defaultSettings                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::SetDefaultCustomRoomSettings(class UYCustomMatchSettingsDataAsset* defaultSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.SetDefaultCustomRoomSettings");
		
		UI_CustomMatchScreen_SetDefaultCustomRoomSettings_Params params {};
		params.defaultSettings = defaultSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2350
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.SendInviteToFriends
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FFriendsUserData>                    friendsList                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::SendInviteToFriends(TArray<struct FFriendsUserData> friendsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.SendInviteToFriends");
		
		UI_CustomMatchScreen_SendInviteToFriends_Params params {};
		params.friendsList = friendsList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.RoomStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomRoomState                                  oldRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYCustomRoomState                                  newRoomState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::RoomStateChanged(EYCustomRoomState oldRoomState, EYCustomRoomState newRoomState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.RoomStateChanged");
		
		UI_CustomMatchScreen_RoomStateChanged_Params params {};
		params.oldRoomState = oldRoomState;
		params.newRoomState = newRoomState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0AB0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.RemoveUserFromTeamSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::RemoveUserFromTeamSlot(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.RemoveUserFromTeamSlot");
		
		UI_CustomMatchScreen_RemoveUserFromTeamSlot_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFB60
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.MoveUserToOtherTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::MoveUserToOtherTeam(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.MoveUserToOtherTeam");
		
		UI_CustomMatchScreen_MoveUserToOtherTeam_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF730
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.IsUserHost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UI_CustomMatchScreen::IsUserHost(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.IsUserHost");
		
		UI_CustomMatchScreen_IsUserHost_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF070
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.IsLocalPlayerHost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UI_CustomMatchScreen::IsLocalPlayerHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.IsLocalPlayerHost");
		
		UI_CustomMatchScreen_IsLocalPlayerHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE6E0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.IsFillTeamWithAiFlagSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UI_CustomMatchScreen::IsFillTeamWithAiFlagSet(EYCustomMatchTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.IsFillTeamWithAiFlagSet");
		
		UI_CustomMatchScreen_IsFillTeamWithAiFlagSet_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.HandleOnPlayerSpeakingUpdated");
		
		UI_CustomMatchScreen_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC390
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetTeamUserData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPlayerUIData> UI_CustomMatchScreen::GetTeamUserData(EYCustomMatchTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetTeamUserData");
		
		UI_CustomMatchScreen_GetTeamUserData_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC280
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotUserName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UI_CustomMatchScreen::GetTeamSlotUserName(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotUserName");
		
		UI_CustomMatchScreen_GetTeamSlotUserName_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC1C0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYCustomRoomSlotType UI_CustomMatchScreen::GetTeamSlotType(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetTeamSlotType");
		
		UI_CustomMatchScreen_GetTeamSlotType_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA9A0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetRoomState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYCustomRoomState UI_CustomMatchScreen::GetRoomState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetRoomState");
		
		UI_CustomMatchScreen_GetRoomState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7290
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetListOfOptionsForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<EFriendOptionButton> UI_CustomMatchScreen::GetListOfOptionsForPlayer(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetListOfOptionsForPlayer");
		
		UI_CustomMatchScreen_GetListOfOptionsForPlayer_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5DA0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.GetFriendsAvailableToInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FFriendsUserData> UI_CustomMatchScreen::GetFriendsAvailableToInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.GetFriendsAvailableToInvite");
		
		UI_CustomMatchScreen_GetFriendsAvailableToInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.FleetTypeSelected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        oldFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYFleetType                                        newFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::FleetTypeSelected(EYFleetType oldFleetType, EYFleetType newFleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.FleetTypeSelected");
		
		UI_CustomMatchScreen_FleetTypeSelected_Params params {};
		params.oldFleetType = oldFleetType;
		params.newFleetType = newFleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.FleetTypeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        oldFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYFleetType                                        newFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::FleetTypeChanged(EYFleetType oldFleetType, EYFleetType newFleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.FleetTypeChanged");
		
		UI_CustomMatchScreen_FleetTypeChanged_Params params {};
		params.oldFleetType = oldFleetType;
		params.newFleetType = newFleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.FleetSelectReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYFleetType                                        maxFleetType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::FleetSelectReady(EYFleetType maxFleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.FleetSelectReady");
		
		UI_CustomMatchScreen_FleetSelectReady_Params params {};
		params.maxFleetType = maxFleetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3160
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.ExitFleetSelect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UI_CustomMatchScreen::ExitFleetSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.ExitFleetSelect");
		
		UI_CustomMatchScreen_ExitFleetSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB30E0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.EnterFleetSelect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UI_CustomMatchScreen::EnterFleetSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.EnterFleetSelect");
		
		UI_CustomMatchScreen_EnterFleetSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2AE0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.DoFriendOptionActionOnUser
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        userId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFriendOptionButton                                option                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.DoFriendOptionActionOnUser");
		
		UI_CustomMatchScreen_DoFriendOptionActionOnUser_Params params {};
		params.userId = userId;
		params.option = option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.DataReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UI_CustomMatchScreen::DataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.DataReady");
		
		UI_CustomMatchScreen_DataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.CountdownTimerUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            timeLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::CountdownTimerUpdated(int32_t timeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.CountdownTimerUpdated");
		
		UI_CustomMatchScreen_CountdownTimerUpdated_Params params {};
		params.timeLeft = timeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.CloseScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYCustomMatchScreenCloseReason                     reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UI_CustomMatchScreen::CloseScreen(EYCustomMatchScreenCloseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.CloseScreen");
		
		UI_CustomMatchScreen_CloseScreen_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2280
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.CanRemoveUserFromTeamSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UI_CustomMatchScreen::CanRemoveUserFromTeamSlot(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.CanRemoveUserFromTeamSlot");
		
		UI_CustomMatchScreen_CanRemoveUserFromTeamSlot_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2100
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.CanMoveUserToOtherTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCustomMatchTeam                                  Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UI_CustomMatchScreen::CanMoveUserToOtherTeam(EYCustomMatchTeam Team, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.CanMoveUserToOtherTeam");
		
		UI_CustomMatchScreen_CanMoveUserToOtherTeam_Params params {};
		params.Team = Team;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2460
	 * 		Name   -> Function DreadGameUI.I_CustomMatchScreen.CancelMatchCountdown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UI_CustomMatchScreen::CancelMatchCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.I_CustomMatchScreen.CancelMatchCountdown");
		
		UI_CustomMatchScreen_CancelMatchCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UI_CustomMatchScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UI_CustomMatchScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.I_CustomMatchScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2010
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.SelectCategoryFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipFilterWidget::SelectCategoryFilter(int32_t categoryIndex, int32_t filterIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.SelectCategoryFilter");
		
		UUI_ShipFilterWidget_SelectCategoryFilter_Params params {};
		params.categoryIndex = categoryIndex;
		params.filterIndex = filterIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCFC0
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.GetUIShipData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipTechData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FUIShipData UUI_ShipFilterWidget::GetUIShipData(const struct FYUIShipManufacturerTechItemData& shipTechData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.GetUIShipData");
		
		UUI_ShipFilterWidget_GetUIShipData_Params params {};
		params.shipTechData = shipTechData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3B00
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.GetCategoryFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FUIAccordionFilterData UUI_ShipFilterWidget::GetCategoryFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.GetCategoryFilters");
		
		UUI_ShipFilterWidget_GetCategoryFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB33F0
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByLoadouts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class UYShipLoadoutMmogbrain*>              shipLoadouts                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FYUIShipManufacturerTechItemData> UUI_ShipFilterWidget::FilterShipsByLoadouts(TArray<class UYShipLoadoutMmogbrain*> shipLoadouts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByLoadouts");
		
		UUI_ShipFilterWidget_FilterShipsByLoadouts_Params params {};
		params.shipLoadouts = shipLoadouts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3220
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByDataStructs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    shipDataArray                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FYUIShipManufacturerTechItemData> UUI_ShipFilterWidget::FilterShipsByDataStructs(TArray<struct FYUIShipManufacturerTechItemData> shipDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.FilterShipsByDataStructs");
		
		UUI_ShipFilterWidget_FilterShipsByDataStructs_Params params {};
		params.shipDataArray = shipDataArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2F30
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.DoesShipPassCurrentFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipLoadout                                                (Parm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ShipFilterWidget::DoesShipPassCurrentFilter(const struct FYUIShipManufacturerTechItemData& shipLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.DoesShipPassCurrentFilter");
		
		UUI_ShipFilterWidget_DoesShipPassCurrentFilter_Params params {};
		params.shipLoadout = shipLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2D10
	 * 		Name   -> Function DreadGameUI.UI_ShipFilterWidget.DoesLoudoutPassCurrentFilter
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UYShipLoadoutMmogbrain*                      shipLoadout                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ShipFilterWidget::DoesLoudoutPassCurrentFilter(class UYShipLoadoutMmogbrain* shipLoadout, struct FYUIShipManufacturerTechItemData* shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipFilterWidget.DoesLoudoutPassCurrentFilter");
		
		UUI_ShipFilterWidget_DoesLoudoutPassCurrentFilter_Params params {};
		params.shipLoadout = shipLoadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipData != nullptr)
			*shipData = params.shipData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipFilterWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipFilterWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipFilterWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3C10
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.SetSelectedShip
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_AddShipToFleetScreen::SetSelectedShip(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.SetSelectedShip");
		
		UUI_AddShipToFleetScreen_SetSelectedShip_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAB00
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.GetShipBonuses
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            shipTier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UUI_AddShipToFleetScreen::GetShipBonuses(int32_t shipTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.GetShipBonuses");
		
		UUI_AddShipToFleetScreen_GetShipBonuses_Params params {};
		params.shipTier = shipTier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5800
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.GetFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYFleetType UUI_AddShipToFleetScreen::GetFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.GetFleetType");
		
		UUI_AddShipToFleetScreen_GetFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB45F0
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.GetCurrentFleetTypeText
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_AddShipToFleetScreen::GetCurrentFleetTypeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.GetCurrentFleetTypeText");
		
		UUI_AddShipToFleetScreen_GetCurrentFleetTypeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3660
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.GetAvailableShipsForActiveFleetType
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FYUIShipManufacturerTechItemData> UUI_AddShipToFleetScreen::GetAvailableShipsForActiveFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.GetAvailableShipsForActiveFleetType");
		
		UUI_AddShipToFleetScreen_GetAvailableShipsForActiveFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1E50
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.AreMoreShipsAvailable
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_AddShipToFleetScreen::AreMoreShipsAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.AreMoreShipsAvailable");
		
		UUI_AddShipToFleetScreen_AreMoreShipsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1B40
	 * 		Name   -> Function DreadGameUI.UI_AddShipToFleetScreen.AddShipToFleet
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_AddShipToFleetScreen::AddShipToFleet(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_AddShipToFleetScreen.AddShipToFleet");
		
		UUI_AddShipToFleetScreen_AddShipToFleet_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AddShipToFleetScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AddShipToFleetScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_AddShipToFleetScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4720
	 * 		Name   -> Function DreadGameUI.UI_BugReportScreen.SubmitBugReport
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        issueType                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        title                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_BugReportScreen::SubmitBugReport(const class FText& issueType, const class FText& description, const class FText& title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BugReportScreen.SubmitBugReport");
		
		UUI_BugReportScreen_SubmitBugReport_Params params {};
		params.issueType = issueType;
		params.description = description;
		params.title = title;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_BugReportScreen.HandleOnBugReportSubmittedResult
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               succeeded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_BugReportScreen::HandleOnBugReportSubmittedResult(bool succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BugReportScreen.HandleOnBugReportSubmittedResult");
		
		UUI_BugReportScreen_HandleOnBugReportSubmittedResult_Params params {};
		params.succeeded = succeeded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6980
	 * 		Name   -> Function DreadGameUI.UI_BugReportScreen.GetIssueDropdownOptions
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIAccordionFilterCategoryOptionData> UUI_BugReportScreen::GetIssueDropdownOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BugReportScreen.GetIssueDropdownOptions");
		
		UUI_BugReportScreen_GetIssueDropdownOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9020
	 * 		Name   -> Function DreadGameUI.UI_BugReportScreen.GetCustomerSupportURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UUI_BugReportScreen::GetCustomerSupportURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BugReportScreen.GetCustomerSupportURL");
		
		UUI_BugReportScreen_GetCustomerSupportURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BugReportScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BugReportScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_BugReportScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4690
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.StopCaptainItemPreview
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bKeepCaptainInPreview                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::StopCaptainItemPreview(bool bKeepCaptainInPreview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.StopCaptainItemPreview");
		
		UUI_CaptainCustomizationScreen_StopCaptainItemPreview_Params params {};
		params.bKeepCaptainInPreview = bKeepCaptainInPreview;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemWidgets
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::ShowEquippableItemWidgets(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemWidgets");
		
		UUI_CaptainCustomizationScreen_ShowEquippableItemWidgets_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemDescriptionWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::ShowEquippableItemDescriptionWidget(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.ShowEquippableItemDescriptionWidget");
		
		UUI_CaptainCustomizationScreen_ShowEquippableItemDescriptionWidget_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1DE0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestViewMarketBundle
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool UUI_CaptainCustomizationScreen::RequestViewMarketBundle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestViewMarketBundle");
		
		UUI_CaptainCustomizationScreen_RequestViewMarketBundle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1770
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSetCharacterGender
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isFemale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUI_CaptainCustomizationScreen::RequestSetCharacterGender(bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSetCharacterGender");
		
		UUI_CaptainCustomizationScreen_RequestSetCharacterGender_Params params {};
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC16E0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectEquippableItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            clickedSlotItemId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_CaptainCustomizationScreen::RequestSelectEquippableItem(int32_t clickedSlotItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectEquippableItem");
		
		UUI_CaptainCustomizationScreen_RequestSelectEquippableItem_Params params {};
		params.clickedSlotItemId = clickedSlotItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1650
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectCategoryItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            clickedCategoryItemId                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_CaptainCustomizationScreen::RequestSelectCategoryItem(int32_t clickedCategoryItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestSelectCategoryItem");
		
		UUI_CaptainCustomizationScreen_RequestSelectCategoryItem_Params params {};
		params.clickedCategoryItemId = clickedCategoryItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0D80
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestEquipSelectedItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool UUI_CaptainCustomizationScreen::RequestEquipSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestEquipSelectedItem");
		
		UUI_CaptainCustomizationScreen_RequestEquipSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0B70
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RequestBuySelectedItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool UUI_CaptainCustomizationScreen::RequestBuySelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RequestBuySelectedItem");
		
		UUI_CaptainCustomizationScreen_RequestBuySelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippedItemWidgets
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   equippedItems                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::RefreshEquippedItemWidgets(TArray<struct FMarketItemUIData> equippedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippedItemWidgets");
		
		UUI_CaptainCustomizationScreen_RefreshEquippedItemWidgets_Params params {};
		params.equippedItems = equippedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemWidgets
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMarketItemUIData>                   equippableItems                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::RefreshEquippableItemWidgets(TArray<struct FMarketItemUIData> equippableItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemWidgets");
		
		UUI_CaptainCustomizationScreen_RefreshEquippableItemWidgets_Params params {};
		params.equippableItems = equippableItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemDescriptionWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           equippableItem                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::RefreshEquippableItemDescriptionWidget(const struct FMarketItemUIData& equippableItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshEquippableItemDescriptionWidget");
		
		UUI_CaptainCustomizationScreen_RefreshEquippableItemDescriptionWidget_Params params {};
		params.equippableItem = equippableItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshCharacterGenderWidgets
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFemale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CaptainCustomizationScreen::RefreshCharacterGenderWidgets(bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.RefreshCharacterGenderWidgets");
		
		UUI_CaptainCustomizationScreen_RefreshCharacterGenderWidgets_Params params {};
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBEE90
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemOwnedByPlayer
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_CaptainCustomizationScreen::IsItemOwnedByPlayer(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemOwnedByPlayer");
		
		UUI_CaptainCustomizationScreen_IsItemOwnedByPlayer_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBEC80
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemEquipped
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_CaptainCustomizationScreen::IsItemEquipped(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.IsItemEquipped");
		
		UUI_CaptainCustomizationScreen_IsItemEquipped_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE950
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.IsInTutorialMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_CaptainCustomizationScreen::IsInTutorialMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.IsInTutorialMode");
		
		UUI_CaptainCustomizationScreen_IsInTutorialMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA050
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.GetPlayerUiData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerUIData UUI_CaptainCustomizationScreen::GetPlayerUiData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.GetPlayerUiData");
		
		UUI_CaptainCustomizationScreen_GetPlayerUiData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB43C0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.GetCurrencyTypeForItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYCurrency UUI_CaptainCustomizationScreen::GetCurrencyTypeForItem(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.GetCurrencyTypeForItem");
		
		UUI_CaptainCustomizationScreen_GetCurrencyTypeForItem_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB41F0
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.GetCostForItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_CaptainCustomizationScreen::GetCostForItem(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.GetCostForItem");
		
		UUI_CaptainCustomizationScreen_GetCostForItem_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3560
	 * 		Name   -> Function DreadGameUI.UI_CaptainCustomizationScreen.FinalizeFirstTimeCaptainCustomization
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_CaptainCustomizationScreen::FinalizeFirstTimeCaptainCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CaptainCustomizationScreen.FinalizeFirstTimeCaptainCustomization");
		
		UUI_CaptainCustomizationScreen_FinalizeFirstTimeCaptainCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CaptainCustomizationScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CaptainCustomizationScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CaptainCustomizationScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1480
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.RequestPinCareerProgressionGoal
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CareerProgressionScreen::RequestPinCareerProgressionGoal(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.RequestPinCareerProgressionGoal");
		
		UUI_CareerProgressionScreen_RequestPinCareerProgressionGoal_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0BA0
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.RequestClaimCareerProgressionGoal
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CareerProgressionScreen::RequestClaimCareerProgressionGoal(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.RequestClaimCareerProgressionGoal");
		
		UUI_CareerProgressionScreen_RequestClaimCareerProgressionGoal_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionRewardClaimHandled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CareerProgressionScreen::HandleCareerProgressionRewardClaimHandled(const class FName& goalId, bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionRewardClaimHandled");
		
		UUI_CareerProgressionScreen_HandleCareerProgressionRewardClaimHandled_Params params {};
		params.goalId = goalId;
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_CareerProgressionScreen::HandleCareerProgressionDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionDataUpdated");
		
		UUI_CareerProgressionScreen_HandleCareerProgressionDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionCategoryUnlocked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYGoalCategory                                     unlockedCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CareerProgressionScreen::HandleCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.HandleCareerProgressionCategoryUnlocked");
		
		UUI_CareerProgressionScreen_HandleCareerProgressionCategoryUnlocked_Params params {};
		params.unlockedCategory = unlockedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB39E0
	 * 		Name   -> Function DreadGameUI.UI_CareerProgressionScreen.GetCareerProgressionUIData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FCareerProgressionUIData UUI_CareerProgressionScreen::GetCareerProgressionUIData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CareerProgressionScreen.GetCareerProgressionUIData");
		
		UUI_CareerProgressionScreen_GetCareerProgressionUIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CareerProgressionScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CareerProgressionScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CareerProgressionScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1F10
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.RerollContract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      questId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ContractsScreen::RerollContract(const class FString& questId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.RerollContract");
		
		UUI_ContractsScreen_RerollContract_Params params {};
		params.questId = questId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.HandleOnContractsUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ContractsScreen::HandleOnContractsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.HandleOnContractsUpdated");
		
		UUI_ContractsScreen_HandleOnContractsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC9C0
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.GetTimeUntilNextContractUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UUI_ContractsScreen::GetTimeUntilNextContractUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.GetTimeUntilNextContractUpdate");
		
		UUI_ContractsScreen_GetTimeUntilNextContractUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA900
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.GetRankRequiredToUnlockContracts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ContractsScreen::GetRankRequiredToUnlockContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.GetRankRequiredToUnlockContracts");
		
		UUI_ContractsScreen_GetRankRequiredToUnlockContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7040
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.GetListOfContracts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FContractData> UUI_ContractsScreen::GetListOfContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.GetListOfContracts");
		
		UUI_ContractsScreen_GetListOfContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2F00
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.DoesPlayerHaveEliteStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ContractsScreen::DoesPlayerHaveEliteStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.DoesPlayerHaveEliteStatus");
		
		UUI_ContractsScreen_DoesPlayerHaveEliteStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1E20
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.AreContractsUnlocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ContractsScreen::AreContractsUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.AreContractsUnlocked");
		
		UUI_ContractsScreen_AreContractsUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB13E0
	 * 		Name   -> Function DreadGameUI.UI_ContractsScreen.AcknowledgeCompletedContract
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      questId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ContractsScreen::AcknowledgeCompletedContract(const class FString& questId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ContractsScreen.AcknowledgeCompletedContract");
		
		UUI_ContractsScreen_AcknowledgeCompletedContract_Params params {};
		params.questId = questId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ContractsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ContractsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ContractsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_SubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.Show");
		
		UUI_SubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2740
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.SetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_SubPanel::SetData(class UObject* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.SetData");
		
		UUI_SubPanel_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.OnShow
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UUI_SubPanel::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.OnShow");
		
		UUI_SubPanel_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.OnInputReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_SubPanel::OnInputReceived(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.OnInputReceived");
		
		UUI_SubPanel_OnInputReceived_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0500
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.OnHide
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UUI_SubPanel::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.OnHide");
		
		UUI_SubPanel_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC03F0
	 * 		Name   -> Function DreadGameUI.UI_SubPanel.OnDataReceived
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_SubPanel::OnDataReceived(class UObject* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SubPanel.OnDataReceived");
		
		UUI_SubPanel_OnDataReceived_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_SubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_CtAWidget.OnRequestCtAClose__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UUI_CtAWidget*                               CtAWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CtAWidget::OnRequestCtAClose__DelegateSignature(class UUI_CtAWidget* CtAWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_CtAWidget.OnRequestCtAClose__DelegateSignature");
		
		UUI_CtAWidget_OnRequestCtAClose__DelegateSignature_Params params {};
		params.CtAWidget = CtAWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_CtAWidget.OnCtAClosed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UUI_CtAWidget*                               CtAWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_CtAWidget::OnCtAClosed__DelegateSignature(class UUI_CtAWidget* CtAWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_CtAWidget.OnCtAClosed__DelegateSignature");
		
		UUI_CtAWidget_OnCtAClosed__DelegateSignature_Params params {};
		params.CtAWidget = CtAWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CtAWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CtAWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CtAWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC38E0
	 * 		Name   -> Function DreadGameUI.UI_DreadPopup.SetPopupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadPopup::SetPopupData(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadPopup.SetPopupData");
		
		UUI_DreadPopup_SetPopupData_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_DreadPopup.OnPopupDataSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupData*                                  PopupData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DreadPopup::OnPopupDataSet(class UPopupData* PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_DreadPopup.OnPopupDataSet");
		
		UUI_DreadPopup_OnPopupDataSet_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DreadPopup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DreadPopup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_DreadPopup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB740
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusPurchasePopup.GetShipXpBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusPurchasePopup::GetShipXpBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusPurchasePopup.GetShipXpBonus");
		
		UUI_BattleBonusPurchasePopup_GetShipXpBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5B80
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusPurchasePopup.GetFreeXpBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusPurchasePopup::GetFreeXpBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusPurchasePopup.GetFreeXpBonus");
		
		UUI_BattleBonusPurchasePopup_GetFreeXpBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4280
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusPurchasePopup.GetCreditsBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusPurchasePopup::GetCreditsBonus(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusPurchasePopup.GetCreditsBonus");
		
		UUI_BattleBonusPurchasePopup_GetCreditsBonus_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB38A0
	 * 		Name   -> Function DreadGameUI.UI_BattleBonusPurchasePopup.GetBattleBonusCreditsCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_BattleBonusPurchasePopup::GetBattleBonusCreditsCost(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BattleBonusPurchasePopup.GetBattleBonusCreditsCost");
		
		UUI_BattleBonusPurchasePopup_GetBattleBonusCreditsCost_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BattleBonusPurchasePopup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BattleBonusPurchasePopup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_BattleBonusPurchasePopup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_UpsellPopup.OnMarketPurchaseComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_UpsellPopup::OnMarketPurchaseComplete(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_UpsellPopup.OnMarketPurchaseComplete");
		
		UUI_UpsellPopup_OnMarketPurchaseComplete_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDC40
	 * 		Name   -> Function DreadGameUI.UI_UpsellPopup.HandlePurchase
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_UpsellPopup::HandlePurchase(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_UpsellPopup.HandlePurchase");
		
		UUI_UpsellPopup_HandlePurchase_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_UpsellPopup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_UpsellPopup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_UpsellPopup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_EditShipScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.StartTransitionOut");
		
		UUI_EditShipScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_EditShipScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.StartTransitionIn");
		
		UUI_EditShipScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3490
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.SetLoadoutName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYLoadoutCategory                                  loadoutCategory                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipScreen::SetLoadoutName(EYLoadoutCategory loadoutCategory, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.SetLoadoutName");
		
		UUI_EditShipScreen_SetLoadoutName_Params params {};
		params.loadoutCategory = loadoutCategory;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3410
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.SetLoadoutCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYLoadoutCategory                                  loadoutCategory                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipScreen::SetLoadoutCategory(EYLoadoutCategory loadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.SetLoadoutCategory");
		
		UUI_EditShipScreen_SetLoadoutCategory_Params params {};
		params.loadoutCategory = loadoutCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF040
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.IsLoadoutNameEditable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_EditShipScreen::IsLoadoutNameEditable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.IsLoadoutNameEditable");
		
		UUI_EditShipScreen_IsLoadoutNameEditable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.HandleResearchCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipScreen::HandleResearchCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.HandleResearchCompleted");
		
		UUI_EditShipScreen_HandleResearchCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.HandlePurchaseCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipScreen::HandlePurchaseCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.HandlePurchaseCompleted");
		
		UUI_EditShipScreen_HandlePurchaseCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7510
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.GetLoadoutName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYLoadoutCategory                                  loadoutCategory                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_EditShipScreen::GetLoadoutName(EYLoadoutCategory loadoutCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.GetLoadoutName");
		
		UUI_EditShipScreen_GetLoadoutName_Params params {};
		params.loadoutCategory = loadoutCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5B50
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.GetFreeXP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_EditShipScreen::GetFreeXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.GetFreeXP");
		
		UUI_EditShipScreen_GetFreeXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4BF0
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.GetCurrentShipXp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_EditShipScreen::GetCurrentShipXp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.GetCurrentShipXp");
		
		UUI_EditShipScreen_GetCurrentShipXp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4AE0
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.GetCurrentShipItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FYUIShipManufacturerTechItemData UUI_EditShipScreen::GetCurrentShipItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.GetCurrentShipItemData");
		
		UUI_EditShipScreen_GetCurrentShipItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB20D0
	 * 		Name   -> Function DreadGameUI.UI_EditShipScreen.CanCurrentShipHaveLoadoutsBeEdited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_EditShipScreen::CanCurrentShipHaveLoadoutsBeEdited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipScreen.CanCurrentShipHaveLoadoutsBeEdited");
		
		UUI_EditShipScreen_CanCurrentShipHaveLoadoutsBeEdited_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShipScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShipScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EditShipScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4530
	 * 		Name   -> Function DreadGameUI.UI_FindNewFriendsScreen.StartSearchForUsers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        filterText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_FindNewFriendsScreen::StartSearchForUsers(const class FText& filterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FindNewFriendsScreen.StartSearchForUsers");
		
		UUI_FindNewFriendsScreen_StartSearchForUsers_Params params {};
		params.filterText = filterText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC22A0
	 * 		Name   -> Function DreadGameUI.UI_FindNewFriendsScreen.SendFriendInvites
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                newFriendInviteIds                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_FindNewFriendsScreen::SendFriendInvites(TArray<class FName> newFriendInviteIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FindNewFriendsScreen.SendFriendInvites");
		
		UUI_FindNewFriendsScreen_SendFriendInvites_Params params {};
		params.newFriendInviteIds = newFriendInviteIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_FindNewFriendsScreen.OnSearchForUsersResult
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFindNewFriendUserData>              foundUsers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_FindNewFriendsScreen::OnSearchForUsersResult(TArray<struct FFindNewFriendUserData> foundUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FindNewFriendsScreen.OnSearchForUsersResult");
		
		UUI_FindNewFriendsScreen_OnSearchForUsersResult_Params params {};
		params.foundUsers = foundUsers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDA90
	 * 		Name   -> Function DreadGameUI.UI_FindNewFriendsScreen.HandleOnShow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_FindNewFriendsScreen::HandleOnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FindNewFriendsScreen.HandleOnShow");
		
		UUI_FindNewFriendsScreen_HandleOnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FindNewFriendsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FindNewFriendsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_FindNewFriendsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3990
	 * 		Name   -> Function DreadGameUI.UI_FleetSelection.SetSelectedFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_FleetSelection::SetSelectedFleetType(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FleetSelection.SetSelectedFleetType");
		
		UUI_FleetSelection_SetSelectedFleetType_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_FleetSelection.OnBattleReadinessPurchaseApproved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               purchaseSuccessful                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_FleetSelection::OnBattleReadinessPurchaseApproved(bool purchaseSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FleetSelection.OnBattleReadinessPurchaseApproved");
		
		UUI_FleetSelection_OnBattleReadinessPurchaseApproved_Params params {};
		params.purchaseSuccessful = purchaseSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6320
	 * 		Name   -> Function DreadGameUI.UI_FleetSelection.GetHighestUnlockedFleet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYFleetType UUI_FleetSelection::GetHighestUnlockedFleet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FleetSelection.GetHighestUnlockedFleet");
		
		UUI_FleetSelection_GetHighestUnlockedFleet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1FA0
	 * 		Name   -> Function DreadGameUI.UI_FleetSelection.AttemptBattleReadinessPurchase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_FleetSelection::AttemptBattleReadinessPurchase(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FleetSelection.AttemptBattleReadinessPurchase");
		
		UUI_FleetSelection_AttemptBattleReadinessPurchase_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FleetSelection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FleetSelection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_FleetSelection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3A10
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.SetSelectedFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GameModeLaunchScreen::SetSelectedFleetType(EYFleetType fleetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.SetSelectedFleetType");
		
		UUI_GameModeLaunchScreen_SetSelectedFleetType_Params params {};
		params.fleetType = fleetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_GameModeLaunchScreen::OnMatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStopped");
		
		UUI_GameModeLaunchScreen_OnMatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_GameModeLaunchScreen::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.OnMatchmakingStarted");
		
		UUI_GameModeLaunchScreen_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA9D0
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.GetSelectedGameModeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYGameModeType UUI_GameModeLaunchScreen::GetSelectedGameModeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.GetSelectedGameModeType");
		
		UUI_GameModeLaunchScreen_GetSelectedGameModeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB84F0
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_GameModeLaunchScreen::GetMatchmakingGameModeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeText");
		
		UUI_GameModeLaunchScreen_GetMatchmakingGameModeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8470
	 * 		Name   -> Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeDescText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_GameModeLaunchScreen::GetMatchmakingGameModeDescText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeLaunchScreen.GetMatchmakingGameModeDescText");
		
		UUI_GameModeLaunchScreen_GetMatchmakingGameModeDescText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameModeLaunchScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameModeLaunchScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_GameModeLaunchScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4650
	 * 		Name   -> Function DreadGameUI.UI_GameModeSelectionScreen.StartTutorial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UUI_GameModeSelectionScreen::StartTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeSelectionScreen.StartTutorial");
		
		UUI_GameModeSelectionScreen_StartTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC40D0
	 * 		Name   -> Function DreadGameUI.UI_GameModeSelectionScreen.ShouldUseNewPlayBranchFlow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_GameModeSelectionScreen::ShouldUseNewPlayBranchFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeSelectionScreen.ShouldUseNewPlayBranchFlow");
		
		UUI_GameModeSelectionScreen_ShouldUseNewPlayBranchFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2F80
	 * 		Name   -> Function DreadGameUI.UI_GameModeSelectionScreen.SetGameMode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FYMenuGameModeDefinition                    GameMode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_GameModeSelectionScreen::SetGameMode(const struct FYMenuGameModeDefinition& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeSelectionScreen.SetGameMode");
		
		UUI_GameModeSelectionScreen_SetGameMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1630
	 * 		Name   -> Function DreadGameUI.UI_GameModeSelectionScreen.RequestSaveFavorites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UUI_GameModeSelectionScreen::RequestSaveFavorites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeSelectionScreen.RequestSaveFavorites");
		
		UUI_GameModeSelectionScreen_RequestSaveFavorites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB35E0
	 * 		Name   -> Function DreadGameUI.UI_GameModeSelectionScreen.GetAvailableGameModes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FYMenuGameModeDefinition> UUI_GameModeSelectionScreen::GetAvailableGameModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GameModeSelectionScreen.GetAvailableGameModes");
		
		UUI_GameModeSelectionScreen_GetAvailableGameModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GameModeSelectionScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GameModeSelectionScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_GameModeSelectionScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4670
	 * 		Name   -> Function DreadGameUI.UI_HomeLoadingScreen.StartTutorial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UUI_HomeLoadingScreen::StartTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeLoadingScreen.StartTutorial");
		
		UUI_HomeLoadingScreen_StartTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC45F0
	 * 		Name   -> Function DreadGameUI.UI_HomeLoadingScreen.StartTrainingMatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UUI_HomeLoadingScreen::StartTrainingMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeLoadingScreen.StartTrainingMatch");
		
		UUI_HomeLoadingScreen_StartTrainingMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeLoadingScreen.DownloadProgressUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentProgressPercentage                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_HomeLoadingScreen::DownloadProgressUpdated(float currentProgressPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeLoadingScreen.DownloadProgressUpdated");
		
		UUI_HomeLoadingScreen_DownloadProgressUpdated_Params params {};
		params.currentProgressPercentage = currentProgressPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HomeLoadingScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HomeLoadingScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_HomeLoadingScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC44F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.StartQuickPlayMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_HomeScreen::StartQuickPlayMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.StartQuickPlayMatchmaking");
		
		UUI_HomeScreen_StartQuickPlayMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ShowContractCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HomeScreen::ShowContractCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ShowContractCompleted");
		
		UUI_HomeScreen_ShowContractCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ShowCaptainProgressionCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HomeScreen::ShowCaptainProgressionCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ShowCaptainProgressionCompleted");
		
		UUI_HomeScreen_ShowCaptainProgressionCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4080
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ShouldShowQuickplayButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UUI_HomeScreen::ShouldShowQuickplayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ShouldShowQuickplayButton");
		
		UUI_HomeScreen_ShouldShowQuickplayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3F60
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ShouldShowExitButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_HomeScreen::ShouldShowExitButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ShouldShowExitButton");
		
		UUI_HomeScreen_ShouldShowExitButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3E10
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ShouldAttemptToPurchaseQuickplayBattleBonus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_HomeScreen::ShouldAttemptToPurchaseQuickplayBattleBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ShouldAttemptToPurchaseQuickplayBattleBonus");
		
		UUI_HomeScreen_ShouldAttemptToPurchaseQuickplayBattleBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0930
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.RefreshCaptainProgressionNotification
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUI_HomeScreen::RefreshCaptainProgressionNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.RefreshCaptainProgressionNotification");
		
		UUI_HomeScreen_RefreshCaptainProgressionNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.OnShowPromptForReturnAfterDisconnect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HomeScreen::OnShowPromptForReturnAfterDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.OnShowPromptForReturnAfterDisconnect");
		
		UUI_HomeScreen_OnShowPromptForReturnAfterDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.OnBattleReadinessPurchaseApproved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               purchaseSuccessful                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_HomeScreen::OnBattleReadinessPurchaseApproved(bool purchaseSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.OnBattleReadinessPurchaseApproved");
		
		UUI_HomeScreen_OnBattleReadinessPurchaseApproved_Params params {};
		params.purchaseSuccessful = purchaseSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF900
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.MarketItemSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_HomeScreen::MarketItemSelected(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.MarketItemSelected");
		
		UUI_HomeScreen_MarketItemSelected_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_HomeScreen::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.MarketDataUpdated");
		
		UUI_HomeScreen_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDD00
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.HandleResponseToReturnAfterDisconnectPrompt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		bool                                               reconnectToMatch                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_HomeScreen::HandleResponseToReturnAfterDisconnectPrompt(bool reconnectToMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.HandleResponseToReturnAfterDisconnectPrompt");
		
		UUI_HomeScreen_HandleResponseToReturnAfterDisconnectPrompt_Params params {};
		params.reconnectToMatch = reconnectToMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA8D0
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.GetQuickplayFleetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYFleetType UUI_HomeScreen::GetQuickplayFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.GetQuickplayFleetType");
		
		UUI_HomeScreen_GetQuickplayFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5510
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.GetFeaturedMarketItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FMarketItemUIData> UUI_HomeScreen::GetFeaturedMarketItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.GetFeaturedMarketItems");
		
		UUI_HomeScreen_GetFeaturedMarketItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9020
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.GetCustomerSupportURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UUI_HomeScreen::GetCustomerSupportURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.GetCustomerSupportURL");
		
		UUI_HomeScreen_GetCustomerSupportURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3180
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.ExitGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_HomeScreen::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.ExitGame");
		
		UUI_HomeScreen_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2020
	 * 		Name   -> Function DreadGameUI.UI_HomeScreen.AttemptBattleReadinessPurchase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_HomeScreen::AttemptBattleReadinessPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HomeScreen.AttemptBattleReadinessPurchase");
		
		UUI_HomeScreen_AttemptBattleReadinessPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HomeScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HomeScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_HomeScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0910
	 * 		Name   -> Function DreadGameUI.UI_IdleKickScreen.Reconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_IdleKickScreen::Reconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_IdleKickScreen.Reconnect");
		
		UUI_IdleKickScreen_Reconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB31A0
	 * 		Name   -> Function DreadGameUI.UI_IdleKickScreen.ExitGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_IdleKickScreen::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_IdleKickScreen.ExitGame");
		
		UUI_IdleKickScreen_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_IdleKickScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_IdleKickScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_IdleKickScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.UserDataRefreshed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Leaderboard_Screen::UserDataRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.UserDataRefreshed");
		
		UUI_Leaderboard_Screen_UserDataRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_Leaderboard_Screen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionOut");
		
		UUI_Leaderboard_Screen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_Leaderboard_Screen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.StartTransitionIn");
		
		UUI_Leaderboard_Screen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.SocialListUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Leaderboard_Screen::SocialListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.SocialListUpdated");
		
		UUI_Leaderboard_Screen_SocialListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1D80
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.RequestSocialUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_Leaderboard_Screen::RequestSocialUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.RequestSocialUpdate");
		
		UUI_Leaderboard_Screen_RequestSocialUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1030
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.RequestLeaderboardData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYGameModeType                                     GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timespan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYFleetType                                        fleetType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Previous                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_Leaderboard_Screen::RequestLeaderboardData(EYGameModeType GameMode, int32_t Timespan, EYFleetType fleetType, bool Previous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.RequestLeaderboardData");
		
		UUI_Leaderboard_Screen_RequestLeaderboardData_Params params {};
		params.GameMode = GameMode;
		params.Timespan = Timespan;
		params.fleetType = fleetType;
		params.Previous = Previous;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.HandleLeaderboardDataRecieved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Leaderboard_Screen::HandleLeaderboardDataRecieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.HandleLeaderboardDataRecieved");
		
		UUI_Leaderboard_Screen_HandleLeaderboardDataRecieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB73A0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.GetListOfOptionsForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLeaderboardUIEntry                         entry                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<EFriendOptionButton> UUI_Leaderboard_Screen::GetListOfOptionsForPlayer(const struct FLeaderboardUIEntry& entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.GetListOfOptionsForPlayer");
		
		UUI_Leaderboard_Screen_GetListOfOptionsForPlayer_Params params {};
		params.entry = entry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6FF0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardUserData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FPlayerUIData> UUI_Leaderboard_Screen::GetLeaderboardUserData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardUserData");
		
		UUI_Leaderboard_Screen_GetLeaderboardUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6FA0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLeaderboardUIData UUI_Leaderboard_Screen::GetLeaderboardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.GetLeaderboardData");
		
		UUI_Leaderboard_Screen_GetLeaderboardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2AE0
	 * 		Name   -> Function DreadGameUI.UI_Leaderboard_Screen.DoFriendOptionActionOnUser
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        userId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFriendOptionButton                                option                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Leaderboard_Screen::DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_Leaderboard_Screen.DoFriendOptionActionOnUser");
		
		UUI_Leaderboard_Screen_DoFriendOptionActionOnUser_Params params {};
		params.userId = userId;
		params.option = option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Leaderboard_Screen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Leaderboard_Screen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_Leaderboard_Screen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.StartTransitionOut
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.StartTransitionOut");
		
		UUI_LegalScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.StartTransitionIn
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.StartTransitionIn");
		
		UUI_LegalScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3E70
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.ShouldDisplayAnotherLegalItem
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LegalScreen::ShouldDisplayAnotherLegalItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.ShouldDisplayAnotherLegalItem");
		
		UUI_LegalScreen_ShouldDisplayAnotherLegalItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC09F0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.RejectCurrentLegalDocument
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::RejectCurrentLegalDocument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.RejectCurrentLegalDocument");
		
		UUI_LegalScreen_RejectCurrentLegalDocument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC08D0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.QuitLegalScreen
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::QuitLegalScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.QuitLegalScreen");
		
		UUI_LegalScreen_QuitLegalScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFC20
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.NavigateToNextScreen
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::NavigateToNextScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.NavigateToNextScreen");
		
		UUI_LegalScreen_NavigateToNextScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE4E0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.IsCurrentLegalItemAttestation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LegalScreen::IsCurrentLegalItemAttestation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.IsCurrentLegalItemAttestation");
		
		UUI_LegalScreen_IsCurrentLegalItemAttestation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE410
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.IsAcceptanceRequiredToProceed
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LegalScreen::IsAcceptanceRequiredToProceed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.IsAcceptanceRequiredToProceed");
		
		UUI_LegalScreen_IsAcceptanceRequiredToProceed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDBC0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.HandlePlayerDataAvailable
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUI_LegalScreen::HandlePlayerDataAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.HandlePlayerDataAvailable");
		
		UUI_LegalScreen_HandlePlayerDataAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDAD0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.HandleOnboardingInitialized
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UUI_LegalScreen::HandleOnboardingInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.HandleOnboardingInitialized");
		
		UUI_LegalScreen_HandleOnboardingInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.HandleLegalItemActionProcessed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_LegalScreen::HandleLegalItemActionProcessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.HandleLegalItemActionProcessed");
		
		UUI_LegalScreen_HandleLegalItemActionProcessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4720
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemTitle
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LegalScreen::GetCurrentLegalItemTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemTitle");
		
		UUI_LegalScreen_GetCurrentLegalItemTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB46A0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemBody
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LegalScreen::GetCurrentLegalItemBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.GetCurrentLegalItemBody");
		
		UUI_LegalScreen_GetCurrentLegalItemBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB31C0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.ExitGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.ExitGame");
		
		UUI_LegalScreen_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3100
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.EnterGame
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::EnterGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.EnterGame");
		
		UUI_LegalScreen_EnterGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1E00
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.AdvanceLegalItemQueue
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::AdvanceLegalItemQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.AdvanceLegalItemQueue");
		
		UUI_LegalScreen_AdvanceLegalItemQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB12E0
	 * 		Name   -> Function DreadGameUI.UI_LegalScreen.AcceptCurrentLegalDocument
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_LegalScreen::AcceptCurrentLegalDocument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LegalScreen.AcceptCurrentLegalDocument");
		
		UUI_LegalScreen_AcceptCurrentLegalDocument_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LegalScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LegalScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_LegalScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.StartTransitionOut");
		
		UUI_LoginGateScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.StartTransitionIn");
		
		UUI_LoginGateScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4050
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ShouldShowQueueText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginGateScreen::ShouldShowQueueText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ShouldShowQueueText");
		
		UUI_LoginGateScreen_ShouldShowQueueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3FC0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ShouldShowMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginGateScreen::ShouldShowMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ShouldShowMessage");
		
		UUI_LoginGateScreen_ShouldShowMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3F30
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ShouldShowEstimatedWait
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginGateScreen::ShouldShowEstimatedWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ShouldShowEstimatedWait");
		
		UUI_LoginGateScreen_ShouldShowEstimatedWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3ED0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ShouldShowCheckingProgressText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginGateScreen::ShouldShowCheckingProgressText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ShouldShowCheckingProgressText");
		
		UUI_LoginGateScreen_ShouldShowCheckingProgressText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3EA0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ShouldShowBurstSmoothingText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginGateScreen::ShouldShowBurstSmoothingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ShouldShowBurstSmoothingText");
		
		UUI_LoginGateScreen_ShouldShowBurstSmoothingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.SetupLoginGateScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_LoginGateScreen::SetupLoginGateScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.SetupLoginGateScreen");
		
		UUI_LoginGateScreen_SetupLoginGateScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC08F0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.QuitLoginGate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::QuitLoginGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.QuitLoginGate");
		
		UUI_LoginGateScreen_QuitLoginGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFC40
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.NavigateToNextScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::NavigateToNextScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.NavigateToNextScreen");
		
		UUI_LoginGateScreen_NavigateToNextScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDBE0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.HandlePlayerDataAvailable
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUI_LoginGateScreen::HandlePlayerDataAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.HandlePlayerDataAvailable");
		
		UUI_LoginGateScreen_HandlePlayerDataAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDAF0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.HandleOnboardingInitialized
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUI_LoginGateScreen::HandleOnboardingInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.HandleOnboardingInitialized");
		
		UUI_LoginGateScreen_HandleOnboardingInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA850
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetQueuePositionAsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LoginGateScreen::GetQueuePositionAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetQueuePositionAsText");
		
		UUI_LoginGateScreen_GetQueuePositionAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7610
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetLoginGateTitle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LoginGateScreen::GetLoginGateTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetLoginGateTitle");
		
		UUI_LoginGateScreen_GetLoginGateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB75E0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetLoginGateMessageState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EUILoginGateMessageType UUI_LoginGateScreen::GetLoginGateMessageState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetLoginGateMessageState");
		
		UUI_LoginGateScreen_GetLoginGateMessageState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5420
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetEstimatedWaitTimeAsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LoginGateScreen::GetEstimatedWaitTimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetEstimatedWaitTimeAsText");
		
		UUI_LoginGateScreen_GetEstimatedWaitTimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB48C0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetCurrentLoginState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	EUILoginGateState UUI_LoginGateScreen::GetCurrentLoginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetCurrentLoginState");
		
		UUI_LoginGateScreen_GetCurrentLoginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3D50
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.GetCheckingProgressTimeAsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_LoginGateScreen::GetCheckingProgressTimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.GetCheckingProgressTimeAsText");
		
		UUI_LoginGateScreen_GetCheckingProgressTimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB31E0
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.ExitGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.ExitGame");
		
		UUI_LoginGateScreen_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3120
	 * 		Name   -> Function DreadGameUI.UI_LoginGateScreen.EnterGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginGateScreen::EnterGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginGateScreen.EnterGame");
		
		UUI_LoginGateScreen_EnterGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginGateScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginGateScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_LoginGateScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4920
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen.SubmitLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      user                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               rememberUsername                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen::SubmitLogin(const class FString& user, const class FString& password, bool rememberUsername)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen.SubmitLogin");
		
		UUI_LoginScreen_SubmitLogin_Params params {};
		params.user = user;
		params.password = password;
		params.rememberUsername = rememberUsername;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen.OnLoginResultReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_LoginScreen::OnLoginResultReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen.OnLoginResultReceived");
		
		UUI_LoginScreen_OnLoginResultReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD1B0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen.GetUsername
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_LoginScreen::GetUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen.GetUsername");
		
		UUI_LoginScreen_GetUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9980
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen.GetPassword
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_LoginScreen::GetPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen.GetPassword");
		
		UUI_LoginScreen_GetPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_LoginScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4A90
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.TryCreateSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::TryCreateSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.TryCreateSession");
		
		UUI_LoginScreen_PS4_TryCreateSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4190
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.ShowReturnFromDisconnectMessages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::ShowReturnFromDisconnectMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.ShowReturnFromDisconnectMessages");
		
		UUI_LoginScreen_PS4_ShowReturnFromDisconnectMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.SetPolicyContent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPolicyContentResultData                    policyData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::SetPolicyContent(const struct FPolicyContentResultData& policyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.SetPolicyContent");
		
		UUI_LoginScreen_PS4_SetPolicyContent_Params params {};
		params.policyData = policyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.SessionRequestFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_LoginScreen_PS4::SessionRequestFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.SessionRequestFailed");
		
		UUI_LoginScreen_PS4_SessionRequestFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1DC0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestUserProfileSignIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::RequestUserProfileSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestUserProfileSignIn");
		
		UUI_LoginScreen_PS4_RequestUserProfileSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1610
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestTermsOfUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::RequestTermsOfUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestTermsOfUse");
		
		UUI_LoginScreen_PS4_RequestTermsOfUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1DA0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestSonyEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::RequestSonyEmail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestSonyEmail");
		
		UUI_LoginScreen_PS4_RequestSonyEmail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1610
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestPrivacyPolicy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_LoginScreen_PS4::RequestPrivacyPolicy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestPrivacyPolicy");
		
		UUI_LoginScreen_PS4_RequestPrivacyPolicy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1180
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestLinkAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      password                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::RequestLinkAccount(const class FString& email, const class FString& password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestLinkAccount");
		
		UUI_LoginScreen_PS4_RequestLinkAccount_Params params {};
		params.email = email;
		params.password = password;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestForceLogin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_LoginScreen_PS4::RequestForceLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestForceLogin");
		
		UUI_LoginScreen_PS4_RequestForceLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0C50
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.RequestCreateAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               allowPromotions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::RequestCreateAccount(const class FString& email, bool allowPromotions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.RequestCreateAccount");
		
		UUI_LoginScreen_PS4_RequestCreateAccount_Params params {};
		params.email = email;
		params.allowPromotions = allowPromotions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF370
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.IsSceaBuild
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_LoginScreen_PS4::IsSceaBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.IsSceaBuild");
		
		UUI_LoginScreen_PS4_IsSceaBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestProfileSignInComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestProfileSignInResultData             signInResultData                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleRequestProfileSignInComplete(const struct FRequestProfileSignInResultData& signInResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestProfileSignInComplete");
		
		UUI_LoginScreen_PS4_HandleRequestProfileSignInComplete_Params params {};
		params.signInResultData = signInResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestLinkAccountComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPS4RequestResultData                       Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleRequestLinkAccountComplete(const struct FPS4RequestResultData& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestLinkAccountComplete");
		
		UUI_LoginScreen_PS4_HandleRequestLinkAccountComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestCreateAccountComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FPS4RequestResultData                       Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleRequestCreateAccountComplete(const struct FPS4RequestResultData& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleRequestCreateAccountComplete");
		
		UUI_LoginScreen_PS4_HandleRequestCreateAccountComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleOnRequestSonyEmailComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FRequestSonyEmailResultData                 emailResultData                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleOnRequestSonyEmailComplete(const struct FRequestSonyEmailResultData& emailResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleOnRequestSonyEmailComplete");
		
		UUI_LoginScreen_PS4_HandleOnRequestSonyEmailComplete_Params params {};
		params.emailResultData = emailResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleOnReceivePlayerEmail
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      emailAddress                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleOnReceivePlayerEmail(const class FString& emailAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleOnReceivePlayerEmail");
		
		UUI_LoginScreen_PS4_HandleOnReceivePlayerEmail_Params params {};
		params.emailAddress = emailAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.HandleOnAcceptLegalDocumentComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               successful                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::HandleOnAcceptLegalDocumentComplete(bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.HandleOnAcceptLegalDocumentComplete");
		
		UUI_LoginScreen_PS4_HandleOnAcceptLegalDocumentComplete_Params params {};
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB96B0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.GetPSNId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_LoginScreen_PS4::GetPSNId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.GetPSNId");
		
		UUI_LoginScreen_PS4_GetPSNId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5310
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.GetErrorDisplayInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYTitleScreenError                                 screenError                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLoginScreenErrorPopupData UUI_LoginScreen_PS4::GetErrorDisplayInfo(EYTitleScreenError screenError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.GetErrorDisplayInfo");
		
		UUI_LoginScreen_PS4_GetErrorDisplayInfo_Params params {};
		params.screenError = screenError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1300
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.AcceptLegalDocument
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      documentType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::AcceptLegalDocument(const class FString& documentType, int32_t Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.AcceptLegalDocument");
		
		UUI_LoginScreen_PS4_AcceptLegalDocument_Params params {};
		params.documentType = documentType;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB11A0
	 * 		Name   -> Function DreadGameUI.UI_LoginScreen_PS4.AcceptAllLegalDocuments
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLegalDocumentData>                  documents                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUI_LoginScreen_PS4::AcceptAllLegalDocuments(TArray<struct FLegalDocumentData> documents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_LoginScreen_PS4.AcceptAllLegalDocuments");
		
		UUI_LoginScreen_PS4_AcceptAllLegalDocuments_Params params {};
		params.documents = documents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoginScreen_PS4.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoginScreen_PS4::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_LoginScreen_PS4");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3A90
	 * 		Name   -> Function DreadGameUI.UI_ManufacturersScreen.SetSelectedManufacturer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            manufacturerId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManufacturersScreen::SetSelectedManufacturer(int32_t manufacturerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturersScreen.SetSelectedManufacturer");
		
		UUI_ManufacturersScreen_SetSelectedManufacturer_Params params {};
		params.manufacturerId = manufacturerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7710
	 * 		Name   -> Function DreadGameUI.UI_ManufacturersScreen.GetManufacturersData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FYUIManufacturerInformationEntry> UUI_ManufacturersScreen::GetManufacturersData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturersScreen.GetManufacturersData");
		
		UUI_ManufacturersScreen_GetManufacturersData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManufacturersScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManufacturersScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ManufacturersScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3C10
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeScreen.SetSelectedShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManufacturerTechTreeScreen::SetSelectedShip(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeScreen.SetSelectedShip");
		
		UUI_ManufacturerTechTreeScreen_SetSelectedShip_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE230
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTreePaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUITechTreeShipNode>                 techTreePathNodes                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ManufacturerTechTreeScreen::InitializeTechTreePaths(TArray<struct FUITechTreeShipNode> techTreePathNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTreePaths");
		
		UUI_ManufacturerTechTreeScreen_InitializeTechTreePaths_Params params {};
		params.techTreePathNodes = techTreePathNodes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE130
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTree
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UUI_TechTreeWidget*                          Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ManufacturerTechTreeScreen::InitializeTechTree(class UUI_TechTreeWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeScreen.InitializeTechTree");
		
		UUI_ManufacturerTechTreeScreen_InitializeTechTree_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManufacturerTechTreeScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManufacturerTechTreeScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ManufacturerTechTreeScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC13C0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.RequestMarketItemPurchase
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_MarketScreen::RequestMarketItemPurchase(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.RequestMarketItemPurchase");
		
		UUI_MarketScreen_RequestMarketItemPurchase_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC07D0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.PlayerHasSufficientFundsToPurchaseItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_MarketScreen::PlayerHasSufficientFundsToPurchaseItem(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.PlayerHasSufficientFundsToPurchaseItem");
		
		UUI_MarketScreen_PlayerHasSufficientFundsToPurchaseItem_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.OnXpConversionRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketScreen::OnXpConversionRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.OnXpConversionRequested");
		
		UUI_MarketScreen_OnXpConversionRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.OnXpConversionDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketScreen::OnXpConversionDataUpdated(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.OnXpConversionDataUpdated");
		
		UUI_MarketScreen_OnXpConversionDataUpdated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.OnPlayerCurrencyAmountsUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketScreen::OnPlayerCurrencyAmountsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.OnPlayerCurrencyAmountsUpdated");
		
		UUI_MarketScreen_OnPlayerCurrencyAmountsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF9A0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.MarketItemSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketScreen::MarketItemSelected(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.MarketItemSelected");
		
		UUI_MarketScreen_MarketItemSelected_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD3F0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GpPackMarketItemSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketScreen::GpPackMarketItemSelected(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GpPackMarketItemSelected");
		
		UUI_MarketScreen_GpPackMarketItemSelected_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCC40
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromMarketItemUIData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EYUICurrency UUI_MarketScreen::GetUICurrencyTypeFromMarketItemUIData(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromMarketItemUIData");
		
		UUI_MarketScreen_GetUICurrencyTypeFromMarketItemUIData_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCBB0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromCurrency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYCurrency                                         currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUICurrency UUI_MarketScreen::GetUICurrencyTypeFromCurrency(EYCurrency currency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GetUICurrencyTypeFromCurrency");
		
		UUI_MarketScreen_GetUICurrencyTypeFromCurrency_Params params {};
		params.currency = currency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA5C0
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GetPriceValueFromMarketItemUIData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_MarketScreen::GetPriceValueFromMarketItemUIData(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GetPriceValueFromMarketItemUIData");
		
		UUI_MarketScreen_GetPriceValueFromMarketItemUIData_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9A60
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GetPlayerCurrencyAmounts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerCurrencyAmountsData UUI_MarketScreen::GetPlayerCurrencyAmounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GetPlayerCurrencyAmounts");
		
		UUI_MarketScreen_GetPlayerCurrencyAmounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4130
	 * 		Name   -> Function DreadGameUI.UI_MarketScreen.GetColorTheme
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EUIColorTheme UUI_MarketScreen::GetColorTheme(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketScreen.GetColorTheme");
		
		UUI_MarketScreen_GetColorTheme_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1590
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestPreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketBundleDetailsScreen::RequestPreview(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestPreview");
		
		UUI_MarketBundleDetailsScreen_RequestPreview_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1300
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestMarketItemPurchase
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_MarketBundleDetailsScreen::RequestMarketItemPurchase(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.RequestMarketItemPurchase");
		
		UUI_MarketBundleDetailsScreen_RequestMarketItemPurchase_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0710
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.PlayerHasSufficientFundsToPurchaseItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_MarketBundleDetailsScreen::PlayerHasSufficientFundsToPurchaseItem(const struct FMarketItemUIData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.PlayerHasSufficientFundsToPurchaseItem");
		
		UUI_MarketBundleDetailsScreen_PlayerHasSufficientFundsToPurchaseItem_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.OnMarketPurchaseComplete
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYPurchaseResult                                   purchaseResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketBundleDetailsScreen::OnMarketPurchaseComplete(EYPurchaseResult purchaseResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.OnMarketPurchaseComplete");
		
		UUI_MarketBundleDetailsScreen_OnMarketPurchaseComplete_Params params {};
		params.purchaseResult = purchaseResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9A00
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetPlayerCurrencyAmounts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerCurrencyAmountsData UUI_MarketBundleDetailsScreen::GetPlayerCurrencyAmounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetPlayerCurrencyAmounts");
		
		UUI_MarketBundleDetailsScreen_GetPlayerCurrencyAmounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7E70
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYMenuItemData                              marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUI_MarketBundleDetailsScreen::GetMarketBundleItemTexture(const struct FYMenuItemData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemTexture");
		
		UUI_MarketBundleDetailsScreen_GetMarketBundleItemTexture_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7CD0
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemDescriptions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        outOfferDescription                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        outCatalogDescription                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketBundleDetailsScreen::GetMarketBundleItemDescriptions(int32_t itemID, class FText* outOfferDescription, class FText* outCatalogDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemDescriptions");
		
		UUI_MarketBundleDetailsScreen_GetMarketBundleItemDescriptions_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outOfferDescription != nullptr)
			*outOfferDescription = params.outOfferDescription;
		if (outCatalogDescription != nullptr)
			*outCatalogDescription = params.outCatalogDescription;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B50
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYMenuItemData                              marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_MarketBundleDetailsScreen::GetMarketBundleItemData(const struct FYMenuItemData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleItemData");
		
		UUI_MarketBundleDetailsScreen_GetMarketBundleItemData_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7A40
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FMarketItemUIData UUI_MarketBundleDetailsScreen::GetMarketBundleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetMarketBundleData");
		
		UUI_MarketBundleDetailsScreen_GetMarketBundleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB39B0
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.GetCaptainCharacterGender
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYCharacterGender UUI_MarketBundleDetailsScreen::GetCaptainCharacterGender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.GetCaptainCharacterGender");
		
		UUI_MarketBundleDetailsScreen_GetCaptainCharacterGender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2370
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetailsScreen.CanShipItemBeEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_MarketBundleDetailsScreen::CanShipItemBeEquipped(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetailsScreen.CanShipItemBeEquipped");
		
		UUI_MarketBundleDetailsScreen_CanShipItemBeEquipped_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetailsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetailsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketBundleDetailsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8180
	 * 		Name   -> Function DreadGameUI.UI_MarketShipDetailsScreen.GetMarketItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FMarketItemUIData UUI_MarketShipDetailsScreen::GetMarketItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketShipDetailsScreen.GetMarketItemData");
		
		UUI_MarketShipDetailsScreen_GetMarketItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketShipDetailsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketShipDetailsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketShipDetailsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_ModuleDetailsScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionOut");
		
		UUI_ModuleDetailsScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_ModuleDetailsScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.StartTransitionIn");
		
		UUI_ModuleDetailsScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3B10
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.SetSelectedModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            moduleId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::SetSelectedModule(int32_t moduleId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.SetSelectedModule");
		
		UUI_ModuleDetailsScreen_SetSelectedModule_Params params {};
		params.moduleId = moduleId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1FB0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.ResearchModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ModuleDetailsScreen::ResearchModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.ResearchModule");
		
		UUI_ModuleDetailsScreen_ResearchModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0890
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.PurchaseModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ModuleDetailsScreen::PurchaseModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.PurchaseModule");
		
		UUI_ModuleDetailsScreen_PurchaseModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.OnShipXpUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shipXp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::OnShipXpUpdate(int32_t shipXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.OnShipXpUpdate");
		
		UUI_ModuleDetailsScreen_OnShipXpUpdate_Params params {};
		params.shipXp = shipXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_ModuleDetailsScreen.OnAsyncVideoLoaded__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UFileMediaSource*                            VideoMovieSource                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::OnAsyncVideoLoaded__DelegateSignature(class UFileMediaSource* VideoMovieSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_ModuleDetailsScreen.OnAsyncVideoLoaded__DelegateSignature");
		
		UUI_ModuleDetailsScreen_OnAsyncVideoLoaded__DelegateSignature_Params params {};
		params.VideoMovieSource = VideoMovieSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF190
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleLockedPrecastLoadout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            moduleId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_ModuleDetailsScreen::IsModuleLockedPrecastLoadout(int32_t moduleId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleLockedPrecastLoadout");
		
		UUI_ModuleDetailsScreen_IsModuleLockedPrecastLoadout_Params params {};
		params.moduleId = moduleId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF100
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleEquippedOnShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            moduleId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_ModuleDetailsScreen::IsModuleEquippedOnShip(int32_t moduleId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.IsModuleEquippedOnShip");
		
		UUI_ModuleDetailsScreen_IsModuleEquippedOnShip_Params params {};
		params.moduleId = moduleId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE600
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentShipOwned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::IsCurrentShipOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentShipOwned");
		
		UUI_ModuleDetailsScreen_IsCurrentShipOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE5A0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleOwned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::IsCurrentModuleOwned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleOwned");
		
		UUI_ModuleDetailsScreen_IsCurrentModuleOwned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE570
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleEquippedOnShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::IsCurrentModuleEquippedOnShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.IsCurrentModuleEquippedOnShip");
		
		UUI_ModuleDetailsScreen_IsCurrentModuleEquippedOnShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDFF0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToResearchCurrentModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::HasEnoughCurrencyToResearchCurrentModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToResearchCurrentModule");
		
		UUI_ModuleDetailsScreen_HasEnoughCurrencyToResearchCurrentModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDFC0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToPurchaseCurrentModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::HasEnoughCurrencyToPurchaseCurrentModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HasEnoughCurrencyToPurchaseCurrentModule");
		
		UUI_ModuleDetailsScreen_HasEnoughCurrencyToPurchaseCurrentModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HandleResearchCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::HandleResearchCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HandleResearchCompleted");
		
		UUI_ModuleDetailsScreen_HandleResearchCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HandlePurchaseCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::HandlePurchaseCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HandlePurchaseCompleted");
		
		UUI_ModuleDetailsScreen_HandlePurchaseCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDC20
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HandlePlayerPurchasesListUpdated
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUI_ModuleDetailsScreen::HandlePlayerPurchasesListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HandlePlayerPurchasesListUpdated");
		
		UUI_ModuleDetailsScreen_HandlePlayerPurchasesListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.HandleEquipCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::HandleEquipCompleted(bool wasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.HandleEquipCompleted");
		
		UUI_ModuleDetailsScreen_HandleEquipCompleted_Params params {};
		params.wasSuccessful = wasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD230
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetVanityItemData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                loadoutSlot                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FUIGenericButtonModuleData> UUI_ModuleDetailsScreen::GetVanityItemData(EYUILoadoutItemType loadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetVanityItemData");
		
		UUI_ModuleDetailsScreen_GetVanityItemData_Params params {};
		params.loadoutSlot = loadoutSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCE40
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_ModuleDetailsScreen::GetUiDataForItem(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForItem");
		
		UUI_ModuleDetailsScreen_GetUiDataForItem_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD160
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForCurrentItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYItemUIData UUI_ModuleDetailsScreen::GetUiDataForCurrentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetUiDataForCurrentItem");
		
		UUI_ModuleDetailsScreen_GetUiDataForCurrentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC4C0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetTechTreeData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIGenericButtonModuleData> UUI_ModuleDetailsScreen::GetTechTreeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetTechTreeData");
		
		UUI_ModuleDetailsScreen_GetTechTreeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC490
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetTechItemsRequiredForShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForShip");
		
		UUI_ModuleDetailsScreen_GetTechItemsRequiredForShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC460
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetTechItemsRequiredForModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsRequiredForModule");
		
		UUI_ModuleDetailsScreen_GetTechItemsRequiredForModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC430
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsOwnedForShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetTechItemsOwnedForShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetTechItemsOwnedForShip");
		
		UUI_ModuleDetailsScreen_GetTechItemsOwnedForShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAFD0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetShipData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYUIShipManufacturerTechItemData UUI_ModuleDetailsScreen::GetShipData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetShipData");
		
		UUI_ModuleDetailsScreen_GetShipData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAA00
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetSelectedModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetSelectedModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetSelectedModule");
		
		UUI_ModuleDetailsScreen_GetSelectedModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA930
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetRawShipXpCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetRawShipXpCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetRawShipXpCost");
		
		UUI_ModuleDetailsScreen_GetRawShipXpCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA6F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetPurchaseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYUITechTreeItemPurchaseData UUI_ModuleDetailsScreen::GetPurchaseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetPurchaseData");
		
		UUI_ModuleDetailsScreen_GetPurchaseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9AC0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetPlayerCurrencyAmounts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FShipCurrencyAmountsData UUI_ModuleDetailsScreen::GetPlayerCurrencyAmounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetPlayerCurrencyAmounts");
		
		UUI_ModuleDetailsScreen_GetPlayerCurrencyAmounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9660
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetOwnedTechTreeModuleCountForCurrentShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetOwnedTechTreeModuleCountForCurrentShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetOwnedTechTreeModuleCountForCurrentShip");
		
		UUI_ModuleDetailsScreen_GetOwnedTechTreeModuleCountForCurrentShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8F20
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleStillFromPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      imagePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUI_ModuleDetailsScreen::GetModuleStillFromPath(const class FString& imagePath, const class FString& directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleStillFromPath");
		
		UUI_ModuleDetailsScreen_GetModuleStillFromPath_Params params {};
		params.imagePath = imagePath;
		params.directory = directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8E90
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetModulePurchaseState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYTechTreeItemState UUI_ModuleDetailsScreen::GetModulePurchaseState(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetModulePurchaseState");
		
		UUI_ModuleDetailsScreen_GetModulePurchaseState_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8B00
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleDescription
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUITechTreeItemPurchaseData                moduleData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ModuleDetailsScreen::GetModuleDescription(const struct FYUITechTreeItemPurchaseData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleDescription");
		
		UUI_ModuleDetailsScreen_GetModuleDescription_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8900
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FUIGenericButtonModuleData UUI_ModuleDetailsScreen::GetModuleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetModuleData");
		
		UUI_ModuleDetailsScreen_GetModuleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6BE0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_ModuleDetailsScreen::GetItemType(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetItemType");
		
		UUI_ModuleDetailsScreen_GetItemType_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4920
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModulePurchaseState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYTechTreeItemState UUI_ModuleDetailsScreen::GetCurrentModulePurchaseState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModulePurchaseState");
		
		UUI_ModuleDetailsScreen_GetCurrentModulePurchaseState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB48F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleOfferCurrencyType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYCurrency UUI_ModuleDetailsScreen::GetCurrentModuleOfferCurrencyType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleOfferCurrencyType");
		
		UUI_ModuleDetailsScreen_GetCurrentModuleOfferCurrencyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAA00
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetCurrentModuleId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentModuleId");
		
		UUI_ModuleDetailsScreen_GetCurrentModuleId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4670
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYUILoadoutItemType UUI_ModuleDetailsScreen::GetCurrentItemType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetCurrentItemType");
		
		UUI_ModuleDetailsScreen_GetCurrentItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4310
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetCreditsCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetCreditsCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetCreditsCost");
		
		UUI_ModuleDetailsScreen_GetCreditsCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB35B0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedShipXpCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetAdjustedShipXpCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedShipXpCost");
		
		UUI_ModuleDetailsScreen_GetAdjustedShipXpCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3580
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedFreeXpCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_ModuleDetailsScreen::GetAdjustedFreeXpCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.GetAdjustedFreeXpCost");
		
		UUI_ModuleDetailsScreen_GetAdjustedFreeXpCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3140
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.EquipModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ModuleDetailsScreen::EquipModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.EquipModule");
		
		UUI_ModuleDetailsScreen_EquipModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2ED0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.DoesModuleRequireProgressToUnlock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::DoesModuleRequireProgressToUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.DoesModuleRequireProgressToUnlock");
		
		UUI_ModuleDetailsScreen_DoesModuleRequireProgressToUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2C80
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.DoesCurrentModuleBelongToAnyOwnedShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::DoesCurrentModuleBelongToAnyOwnedShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.DoesCurrentModuleBelongToAnyOwnedShip");
		
		UUI_ModuleDetailsScreen_DoesCurrentModuleBelongToAnyOwnedShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB21F0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_ModuleDetailsScreen::CanPurchaseModule(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseModule");
		
		UUI_ModuleDetailsScreen_CanPurchaseModule_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB21C0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseCurrentModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_ModuleDetailsScreen::CanPurchaseCurrentModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.CanPurchaseCurrentModule");
		
		UUI_ModuleDetailsScreen_CanPurchaseCurrentModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1EB0
	 * 		Name   -> Function DreadGameUI.UI_ModuleDetailsScreen.AsyncLoadVideoFromPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      videoPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ModuleDetailsScreen::AsyncLoadVideoFromPath(const class FString& videoPath, const class FString& directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ModuleDetailsScreen.AsyncLoadVideoFromPath");
		
		UUI_ModuleDetailsScreen_AsyncLoadVideoFromPath_Params params {};
		params.videoPath = videoPath;
		params.directory = directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ModuleDetailsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ModuleDetailsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ModuleDetailsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0520
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.RegisterWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_NotificationsScreen::RegisterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.RegisterWidget");
		
		UUI_NotificationsScreen_RegisterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.HandleNotificationsChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_NotificationsScreen::HandleNotificationsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.HandleNotificationsChanged");
		
		UUI_NotificationsScreen_HandleNotificationsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD650
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.HandleNotificationActionSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENotificationButtonType                            notificationAction                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NotificationsScreen::HandleNotificationActionSelected(class UNotificationData* NotificationData, ENotificationButtonType notificationAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.HandleNotificationActionSelected");
		
		UUI_NotificationsScreen_HandleNotificationActionSelected_Params params {};
		params.NotificationData = NotificationData;
		params.notificationAction = notificationAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB93C0
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.GetNotificationsByType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYAnnouncementType                                 notificationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UNotificationData*> UUI_NotificationsScreen::GetNotificationsByType(EYAnnouncementType notificationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.GetNotificationsByType");
		
		UUI_NotificationsScreen_GetNotificationsByType_Params params {};
		params.notificationType = notificationType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9300
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.GetNotification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EYAnnouncementType                                 notificationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            notificationId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNotificationData* UUI_NotificationsScreen::GetNotification(EYAnnouncementType notificationType, int32_t notificationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.GetNotification");
		
		UUI_NotificationsScreen_GetNotification_Params params {};
		params.notificationType = notificationType;
		params.notificationId = notificationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4950
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.GetCurrentNotification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UNotificationData* UUI_NotificationsScreen::GetCurrentNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.GetCurrentNotification");
		
		UUI_NotificationsScreen_GetCurrentNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3BE0
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.GetCategoryName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYAnnouncementType                                 notificationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_NotificationsScreen::GetCategoryName(EYAnnouncementType notificationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.GetCategoryName");
		
		UUI_NotificationsScreen_GetCategoryName_Params params {};
		params.notificationType = notificationType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3A20
	 * 		Name   -> Function DreadGameUI.UI_NotificationsScreen.GetCategoryFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FUIAccordionFilterData UUI_NotificationsScreen::GetCategoryFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationsScreen.GetCategoryFilters");
		
		UUI_NotificationsScreen_GetCategoryFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_NotificationsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3C90
	 * 		Name   -> Function DreadGameUI.UI_OwnedShipsScreen.SetSelectedShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_OwnedShipsScreen::SetSelectedShip(int32_t shipID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_OwnedShipsScreen.SetSelectedShip");
		
		UUI_OwnedShipsScreen_SetSelectedShip_Params params {};
		params.shipID = shipID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB95E0
	 * 		Name   -> Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipLoadouts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UYShipLoadoutMmogbrain*> UUI_OwnedShipsScreen::GetOwnedShipLoadouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipLoadouts");
		
		UUI_OwnedShipsScreen_GetOwnedShipLoadouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9530
	 * 		Name   -> Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipDataStructs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FYUIShipManufacturerTechItemData> UUI_OwnedShipsScreen::GetOwnedShipDataStructs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_OwnedShipsScreen.GetOwnedShipDataStructs");
		
		UUI_OwnedShipsScreen_GetOwnedShipDataStructs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OwnedShipsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OwnedShipsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_OwnedShipsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4E70
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.XpConversionNotificationCheck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              xpMultiplier                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            minTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_PersistentScreen::XpConversionNotificationCheck(float xpMultiplier, int32_t minTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.XpConversionNotificationCheck");
		
		UUI_PersistentScreen_XpConversionNotificationCheck_Params params {};
		params.xpMultiplier = xpMultiplier;
		params.minTier = minTier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_PersistentScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.StartTransitionOut");
		
		UUI_PersistentScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_PersistentScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.StartTransitionIn");
		
		UUI_PersistentScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4510
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.StartQuickPlayMatchmaking
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_PersistentScreen::StartQuickPlayMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.StartQuickPlayMatchmaking");
		
		UUI_PersistentScreen_StartQuickPlayMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC43D0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.StartMatchmaking
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_PersistentScreen::StartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.StartMatchmaking");
		
		UUI_PersistentScreen_StartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3960
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.SetPrevFleetType
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	EYFleetType UUI_PersistentScreen::SetPrevFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.SetPrevFleetType");
		
		UUI_PersistentScreen_SetPrevFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3660
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.SetNextFleetType
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	EYFleetType UUI_PersistentScreen::SetNextFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.SetNextFleetType");
		
		UUI_PersistentScreen_SetNextFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2BD0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.SetFavoriteMode
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EYGameModeType                                     GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isFavorite                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::SetFavoriteMode(EYGameModeType GameMode, bool isFavorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.SetFavoriteMode");
		
		UUI_PersistentScreen_SetFavoriteMode_Params params {};
		params.GameMode = GameMode;
		params.isFavorite = isFavorite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC09B0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.RegisterWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_PersistentScreen::RegisterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.RegisterWidget");
		
		UUI_PersistentScreen_RegisterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnServerStarting
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnServerStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnServerStarting");
		
		UUI_PersistentScreen_OnServerStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMmogConnectionLost
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnMmogConnectionLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMmogConnectionLost");
		
		UUI_PersistentScreen_OnMmogConnectionLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStopped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnMatchmakingTimerStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStopped");
		
		UUI_PersistentScreen_OnMatchmakingTimerStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0520
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStarted
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnMatchmakingTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMatchmakingTimerStarted");
		
		UUI_PersistentScreen_OnMatchmakingTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMatchmakingStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnMatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMatchmakingStarted");
		
		UUI_PersistentScreen_OnMatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMatchmakingFailed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnMatchmakingFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMatchmakingFailed");
		
		UUI_PersistentScreen_OnMatchmakingFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnMatchmakingAverageWaitTimeAvailable
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            waitTimeSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::OnMatchmakingAverageWaitTimeAvailable(int32_t waitTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnMatchmakingAverageWaitTimeAvailable");
		
		UUI_PersistentScreen_OnMatchmakingAverageWaitTimeAvailable_Params params {};
		params.waitTimeSeconds = waitTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnCTATriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UYCtA*                                       cta                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::OnCTATriggered(class UYCtA* cta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnCTATriggered");
		
		UUI_PersistentScreen_OnCTATriggered_Params params {};
		params.cta = cta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnCTAManagerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnCTAManagerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnCTAManagerReady");
		
		UUI_PersistentScreen_OnCTAManagerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnCheckCanReturnToMatch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanReturnToMatch                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::OnCheckCanReturnToMatch(bool CanReturnToMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnCheckCanReturnToMatch");
		
		UUI_PersistentScreen_OnCheckCanReturnToMatch_Params params {};
		params.CanReturnToMatch = CanReturnToMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.OnBattleServerShutdown
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::OnBattleServerShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.OnBattleServerShutdown");
		
		UUI_PersistentScreen_OnBattleServerShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_PersistentScreen.OnAnnouncementsChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_PersistentScreen::OnAnnouncementsChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_PersistentScreen.OnAnnouncementsChanged__DelegateSignature");
		
		UUI_PersistentScreen_OnAnnouncementsChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF700
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.IsTutorialMatchCompleted
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::IsTutorialMatchCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.IsTutorialMatchCompleted");
		
		UUI_PersistentScreen_IsTutorialMatchCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF0A0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.IsMatchmakingInProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::IsMatchmakingInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.IsMatchmakingInProgress");
		
		UUI_PersistentScreen_IsMatchmakingInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE770
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.IsFirstTimeCaptainCustomizationCompleted
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::IsFirstTimeCaptainCustomizationCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.IsFirstTimeCaptainCustomizationCompleted");
		
		UUI_PersistentScreen_IsFirstTimeCaptainCustomizationCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE650
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.IsFavoriteMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYGameModeType                                     GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_PersistentScreen::IsFavoriteMode(EYGameModeType GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.IsFavoriteMode");
		
		UUI_PersistentScreen_IsFavoriteMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE440
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.IsBattleServerStarting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::IsBattleServerStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.IsBattleServerStarting");
		
		UUI_PersistentScreen_IsBattleServerStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE020
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HasGpToConvertAllShipXp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            minTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_PersistentScreen::HasGpToConvertAllShipXp(int32_t minTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HasGpToConvertAllShipXp");
		
		UUI_PersistentScreen_HasGpToConvertAllShipXp_Params params {};
		params.minTier = minTier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HandleSquadUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::HandleSquadUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HandleSquadUpdated");
		
		UUI_PersistentScreen_HandleSquadUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HandlePlayerCardUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::HandlePlayerCardUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HandlePlayerCardUpdated");
		
		UUI_PersistentScreen_HandlePlayerCardUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HandleOnPlayerSpeakingUpdated");
		
		UUI_PersistentScreen_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HandleNotificationsChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_PersistentScreen::HandleNotificationsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HandleNotificationsChanged");
		
		UUI_PersistentScreen_HandleNotificationsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD710
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.HandleNotificationActionSelected
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            notificationId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENotificationButtonType                            notificationAction                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentScreen::HandleNotificationActionSelected(int32_t notificationId, ENotificationButtonType notificationAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.HandleNotificationActionSelected");
		
		UUI_PersistentScreen_HandleNotificationActionSelected_Params params {};
		params.notificationId = notificationId;
		params.notificationAction = notificationAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB7D0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetSquadData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FSquadUserData> UUI_PersistentScreen::GetSquadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetSquadData");
		
		UUI_PersistentScreen_GetSquadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB94C0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetNumNotifications
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_PersistentScreen::GetNumNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetNumNotifications");
		
		UUI_PersistentScreen_GetNumNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9250
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetNavigationContextFleetTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_PersistentScreen::GetNavigationContextFleetTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetNavigationContextFleetTier");
		
		UUI_PersistentScreen_GetNavigationContextFleetTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB83F0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetMatchmakingGameMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_PersistentScreen::GetMatchmakingGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetMatchmakingGameMode");
		
		UUI_PersistentScreen_GetMatchmakingGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8370
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetMatchmakingFleetTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_PersistentScreen::GetMatchmakingFleetTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetMatchmakingFleetTier");
		
		UUI_PersistentScreen_GetMatchmakingFleetTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4950
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetCurrentNotification
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UNotificationData* UUI_PersistentScreen::GetCurrentNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetCurrentNotification");
		
		UUI_PersistentScreen_GetCurrentNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB45C0
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetCurrentFleetType
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	EYFleetType UUI_PersistentScreen::GetCurrentFleetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetCurrentFleetType");
		
		UUI_PersistentScreen_GetCurrentFleetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4340
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.GetCtAManagerInterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UYCtAManagerInterface* UUI_PersistentScreen::GetCtAManagerInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.GetCtAManagerInterface");
		
		UUI_PersistentScreen_GetCtAManagerInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2560
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.ClearCurrentNotification
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_PersistentScreen::ClearCurrentNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.ClearCurrentNotification");
		
		UUI_PersistentScreen_ClearCurrentNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4080
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.CanStartQuickStartMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::CanStartQuickStartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.CanStartQuickStartMatchmaking");
		
		UUI_PersistentScreen_CanStartQuickStartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2430
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.CanStartMatchmaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::CanStartMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.CanStartMatchmaking");
		
		UUI_PersistentScreen_CanStartMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2340
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.CanReturnToMatch
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentScreen::CanReturnToMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.CanReturnToMatch");
		
		UUI_PersistentScreen_CanReturnToMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2480
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.CancelMatchmaking
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UUI_PersistentScreen::CancelMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.CancelMatchmaking");
		
		UUI_PersistentScreen_CancelMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2040
	 * 		Name   -> Function DreadGameUI.UI_PersistentScreen.CanBeFavorited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYGameModeType                                     GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_PersistentScreen::CanBeFavorited(EYGameModeType GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentScreen.CanBeFavorited");
		
		UUI_PersistentScreen_CanBeFavorited_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PersistentScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PersistentScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_PersistentScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA960
	 * 		Name   -> Function DreadGameUI.UI_RibbonsScreen.GetRibbonDataList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FPlayerRibbonButtonData> UUI_RibbonsScreen::GetRibbonDataList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_RibbonsScreen.GetRibbonDataList");
		
		UUI_RibbonsScreen_GetRibbonDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2950
	 * 		Name   -> Function DreadGameUI.UI_RibbonsScreen.CreateRibbonsButtonWidgetsAndPopulateDataList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      buttonWidgetClass                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPlayerRibbonButtonData> UUI_RibbonsScreen::CreateRibbonsButtonWidgetsAndPopulateDataList(class UClass* buttonWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_RibbonsScreen.CreateRibbonsButtonWidgetsAndPopulateDataList");
		
		UUI_RibbonsScreen_CreateRibbonsButtonWidgetsAndPopulateDataList_Params params {};
		params.buttonWidgetClass = buttonWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RibbonsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RibbonsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_RibbonsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_RootFrontendScreen.SetPersistentScreenVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_RootFrontendScreen::SetPersistentScreenVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_RootFrontendScreen.SetPersistentScreenVisible");
		
		UUI_RootFrontendScreen_SetPersistentScreenVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_RootFrontendScreen.SetHangarScrimVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_RootFrontendScreen::SetHangarScrimVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_RootFrontendScreen.SetHangarScrimVisible");
		
		UUI_RootFrontendScreen_SetHangarScrimVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF0D0
	 * 		Name   -> Function DreadGameUI.UI_RootFrontendScreen.IsMmogConnected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_RootFrontendScreen::IsMmogConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_RootFrontendScreen.IsMmogConnected");
		
		UUI_RootFrontendScreen_IsMmogConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RootFrontendScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RootFrontendScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_RootFrontendScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4D30
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.UpdateSettingValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FYUIUserSetting                             settingToUpdate                                            (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              newValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYUIUserSetting UUI_SettingsScreen::UpdateSettingValue(const struct FYUIUserSetting& settingToUpdate, float newValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.UpdateSettingValue");
		
		UUI_SettingsScreen_UpdateSettingValue_Params params {};
		params.settingToUpdate = settingToUpdate;
		params.newValue = newValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1FF0
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.ResetAllSettingsToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_SettingsScreen::ResetAllSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.ResetAllSettingsToDefault");
		
		UUI_SettingsScreen_ResetAllSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1950
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.RequestSettingsChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FYUIUserSetting>                     Audio                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUIUserSetting>                     Controls                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUIUserSetting>                     gameSettings                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUIUserSetting>                     Graphics                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUIUserSetting>                     advancedGraphics                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUI_SettingsScreen::RequestSettingsChange(TArray<struct FYUIUserSetting> Audio, TArray<struct FYUIUserSetting> Controls, TArray<struct FYUIUserSetting> gameSettings, TArray<struct FYUIUserSetting> Graphics, TArray<struct FYUIUserSetting> advancedGraphics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.RequestSettingsChange");
		
		UUI_SettingsScreen_RequestSettingsChange_Params params {};
		params.Audio = Audio;
		params.Controls = Controls;
		params.gameSettings = gameSettings;
		params.Graphics = Graphics;
		params.advancedGraphics = advancedGraphics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1800
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.RequestSettingChangePreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EYUISettingCategory                                uniqueCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYUISettingCategory                                groupCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GroupIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_SettingsScreen::RequestSettingChangePreview(EYUISettingCategory uniqueCategory, EYUISettingCategory groupCategory, int32_t GroupIndex, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.RequestSettingChangePreview");
		
		UUI_SettingsScreen_RequestSettingChangePreview_Params params {};
		params.uniqueCategory = uniqueCategory;
		params.groupCategory = groupCategory;
		params.GroupIndex = GroupIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0DF0
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.RequestKeybindChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               shiftDown                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               altDown                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ctrlDown                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_SettingsScreen::RequestKeybindChange(const class FString& ActionName, const struct FKey& Key, bool shiftDown, bool altDown, bool ctrlDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.RequestKeybindChange");
		
		UUI_SettingsScreen_RequestKeybindChange_Params params {};
		params.ActionName = ActionName;
		params.Key = Key;
		params.shiftDown = shiftDown;
		params.altDown = altDown;
		params.ctrlDown = ctrlDown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0DD0
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.RequestHotKeysReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_SettingsScreen::RequestHotKeysReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.RequestHotKeysReset");
		
		UUI_SettingsScreen_RequestHotKeysReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0A10
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.ReloadSavedSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_SettingsScreen::ReloadSavedSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.ReloadSavedSettings");
		
		UUI_SettingsScreen_ReloadSavedSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.OnSettingsUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsScreen::OnSettingsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.OnSettingsUpdated");
		
		UUI_SettingsScreen_OnSettingsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.OnHotKeysUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SettingsScreen::OnHotKeysUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.OnHotKeysUpdated");
		
		UUI_SettingsScreen_OnHotKeysUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAA60
	 * 		Name   -> Function DreadGameUI.UI_SettingsScreen.GetSettingsGroupData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESettingsScreenGroup                               Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FUISettingsGroupData> UUI_SettingsScreen::GetSettingsGroupData(ESettingsScreenGroup Group)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsScreen.GetSettingsGroupData");
		
		UUI_SettingsScreen_GetSettingsGroupData_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SettingsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_SettingsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA750
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsScreen.GetPurchaseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYUITechTreeItemPurchaseData UUI_ShipDetailsScreen::GetPurchaseData(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsScreen.GetPurchaseData");
		
		UUI_ShipDetailsScreen_GetPurchaseData_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipDetailsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipDetailsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipDetailsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3C10
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            shipItemId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::SetSelectedShip(int32_t shipItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedShip");
		
		UUI_ShipTechTreeScreen_SetSelectedShip_Params params {};
		params.shipItemId = shipItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC26C0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            moduleItemId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::SetSelectedModule(int32_t moduleItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.SetSelectedModule");
		
		UUI_ShipTechTreeScreen_SetSelectedModule_Params params {};
		params.moduleItemId = moduleItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC09D0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.RegisterWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ShipTechTreeScreen::RegisterWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.RegisterWidget");
		
		UUI_ShipTechTreeScreen_RegisterWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.OnShipXpUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            shipXp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::OnShipXpUpdate(int32_t shipXp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.OnShipXpUpdate");
		
		UUI_ShipTechTreeScreen_OnShipXpUpdate_Params params {};
		params.shipXp = shipXp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE7D0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.IsHeroShip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ShipTechTreeScreen::IsHeroShip(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.IsHeroShip");
		
		UUI_ShipTechTreeScreen_IsHeroShip_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE1B0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.InitializeTechTree
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            numModuleRows                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::InitializeTechTree(int32_t numModuleRows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.InitializeTechTree");
		
		UUI_ShipTechTreeScreen_InitializeTechTree_Params params {};
		params.numModuleRows = numModuleRows;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.HandleTechTreeDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUIGenericButtonModuleData>          moduleUiData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            techTreeRow                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::HandleTechTreeDataReceived(TArray<struct FUIGenericButtonModuleData> moduleUiData, int32_t techTreeRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.HandleTechTreeDataReceived");
		
		UUI_ShipTechTreeScreen_HandleTechTreeDataReceived_Params params {};
		params.moduleUiData = moduleUiData;
		params.techTreeRow = techTreeRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipProgressionDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    shipProgressionUiData                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::HandleShipProgressionDataReceived(TArray<struct FYUIShipManufacturerTechItemData> shipProgressionUiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipProgressionDataReceived");
		
		UUI_ShipTechTreeScreen_HandleShipProgressionDataReceived_Params params {};
		params.shipProgressionUiData = shipProgressionUiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipDataReceived
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipUiData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_ShipTechTreeScreen::HandleShipDataReceived(const struct FYUIShipManufacturerTechItemData& shipUiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.HandleShipDataReceived");
		
		UUI_ShipTechTreeScreen_HandleShipDataReceived_Params params {};
		params.shipUiData = shipUiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCE40
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetUiDataForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_ShipTechTreeScreen::GetUiDataForItem(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetUiDataForItem");
		
		UUI_ShipTechTreeScreen_GetUiDataForItem_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB5C0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetShipTier
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_ShipTechTreeScreen::GetShipTier(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetShipTier");
		
		UUI_ShipTechTreeScreen_GetShipTier_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB2E0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetShipName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUI_ShipTechTreeScreen::GetShipName(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetShipName");
		
		UUI_ShipTechTreeScreen_GetShipName_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAE10
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetShipClassificationIconPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ShipTechTreeScreen::GetShipClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetShipClassificationIconPath");
		
		UUI_ShipTechTreeScreen_GetShipClassificationIconPath_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA3E0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetPositionForStatsPopup
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   popupSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UUI_DreadWidget*                             moduleWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UUI_ShipTechTreeScreen::GetPositionForStatsPopup(const struct FVector2D& popupSize, class UUI_DreadWidget* moduleWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetPositionForStatsPopup");
		
		UUI_ShipTechTreeScreen_GetPositionForStatsPopup_Params params {};
		params.popupSize = popupSize;
		params.moduleWidget = moduleWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9B10
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetPlayerCurrencyAmounts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FShipCurrencyAmountsData UUI_ShipTechTreeScreen::GetPlayerCurrencyAmounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetPlayerCurrencyAmounts");
		
		UUI_ShipTechTreeScreen_GetPlayerCurrencyAmounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6BE0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_ShipTechTreeScreen::GetItemType(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetItemType");
		
		UUI_ShipTechTreeScreen_GetItemType_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4060
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                itemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ShipTechTreeScreen::GetClassificationIconPathForType(EYUILoadoutItemType itemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForType");
		
		UUI_ShipTechTreeScreen_GetClassificationIconPathForType_Params params {};
		params.itemType = itemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3F90
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForItemId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ShipTechTreeScreen::GetClassificationIconPathForItemId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeScreen.GetClassificationIconPathForItemId");
		
		UUI_ShipTechTreeScreen_GetClassificationIconPathForItemId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTreeScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTreeScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipTechTreeScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.UpdateSquadPlayerCard
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SocialScreen::UpdateSquadPlayerCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.UpdateSquadPlayerCard");
		
		UUI_SocialScreen_UpdateSquadPlayerCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.SocialListUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SocialScreen::SocialListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.SocialListUpdated");
		
		UUI_SocialScreen_SocialListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF7F0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.IsVirtualKeyboardFocused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_SocialScreen::IsVirtualKeyboardFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.IsVirtualKeyboardFocused");
		
		UUI_SocialScreen_IsVirtualKeyboardFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE470
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.IsBattleServerStarting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUI_SocialScreen::IsBattleServerStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.IsBattleServerStarting");
		
		UUI_SocialScreen_IsBattleServerStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE320
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.InviteUserToSquad_PS4
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      sceAccountId                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_SocialScreen::InviteUserToSquad_PS4(const class FString& sceAccountId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.InviteUserToSquad_PS4");
		
		UUI_SocialScreen_InviteUserToSquad_PS4_Params params {};
		params.sceAccountId = sceAccountId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.HandleOnPlayerSpeakingUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FSquadVoiceData                             UpdateData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_SocialScreen::HandleOnPlayerSpeakingUpdated(const struct FSquadVoiceData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.HandleOnPlayerSpeakingUpdated");
		
		UUI_SocialScreen_HandleOnPlayerSpeakingUpdated_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB7D0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.GetSquadList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FSquadUserData> UUI_SocialScreen::GetSquadList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.GetSquadList");
		
		UUI_SocialScreen_GetSquadList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA110
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.GetPlayerUserData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPlayerUserData UUI_SocialScreen::GetPlayerUserData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.GetPlayerUserData");
		
		UUI_SocialScreen_GetPlayerUserData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB70C0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.GetListOfOptionsForFriend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFriendsUserData                            friendData                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	TArray<EFriendOptionButton> UUI_SocialScreen::GetListOfOptionsForFriend(const struct FFriendsUserData& friendData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.GetListOfOptionsForFriend");
		
		UUI_SocialScreen_GetListOfOptionsForFriend_Params params {};
		params.friendData = friendData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5E20
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.GetFriendsListData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FFriendsUserData> UUI_SocialScreen::GetFriendsListData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.GetFriendsListData");
		
		UUI_SocialScreen_GetFriendsListData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5590
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.GetFilteredFriendsListData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        filterText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFriendsUserData> UUI_SocialScreen::GetFilteredFriendsListData(const class FText& filterText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.GetFilteredFriendsListData");
		
		UUI_SocialScreen_GetFilteredFriendsListData_Params params {};
		params.filterText = filterText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2BB0
	 * 		Name   -> Function DreadGameUI.UI_SocialScreen.DoFriendOptionActionOnUser
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        userId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFriendOptionButton                                option                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_SocialScreen::DoFriendOptionActionOnUser(const class FName& userId, EFriendOptionButton option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SocialScreen.DoFriendOptionActionOnUser");
		
		UUI_SocialScreen_DoFriendOptionActionOnUser_Params params {};
		params.userId = userId;
		params.option = option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SocialScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SocialScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_SocialScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4E50
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.UpdateStats
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UUI_StatisticsScreen::UpdateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.UpdateStats");
		
		UUI_StatisticsScreen_UpdateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.StartTransitionOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_StatisticsScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.StartTransitionOut");
		
		UUI_StatisticsScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.StartTransitionIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUI_StatisticsScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.StartTransitionIn");
		
		UUI_StatisticsScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC41D0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.SortFriendList
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EStatisticsUIType                                  sortCategory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_StatisticsScreen::SortFriendList(EStatisticsUIType sortCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.SortFriendList");
		
		UUI_StatisticsScreen_SortFriendList_Params params {};
		params.sortCategory = sortCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3810
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.SetPlayerForStats
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_StatisticsScreen::SetPlayerForStats(int32_t index, const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.SetPlayerForStats");
		
		UUI_StatisticsScreen_SetPlayerForStats_Params params {};
		params.index = index;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE110
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.InitPlayerComparison
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UUI_StatisticsScreen::InitPlayerComparison()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.InitPlayerComparison");
		
		UUI_StatisticsScreen_InitPlayerComparison_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.HandleStatisticsUIUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_StatisticsScreen::HandleStatisticsUIUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.HandleStatisticsUIUpdated");
		
		UUI_StatisticsScreen_HandleStatisticsUIUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.HandleFriendsUIUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_StatisticsScreen::HandleFriendsUIUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.HandleFriendsUIUpdated");
		
		UUI_StatisticsScreen_HandleFriendsUIUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC0D0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStringForStatisticsUIType
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_StatisticsScreen::STATIC_GetStringForStatisticsUIType(EStatisticsUIType statType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStringForStatisticsUIType");
		
		UUI_StatisticsScreen_GetStringForStatisticsUIType_Params params {};
		params.statType = statType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC010
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStringArrayForLeaderboardFilter
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FText> UUI_StatisticsScreen::GetStringArrayForLeaderboardFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStringArrayForLeaderboardFilter");
		
		UUI_StatisticsScreen_GetStringArrayForLeaderboardFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBF40
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatValueForPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUI_StatisticsScreen::GetStatValueForPlayer(EStatisticsUIType statType, const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatValueForPlayer");
		
		UUI_StatisticsScreen_GetStatValueForPlayer_Params params {};
		params.statType = statType;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBEB0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatValueForCurrentPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUI_StatisticsScreen::GetStatValueForCurrentPlayer(EStatisticsUIType statType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatValueForCurrentPlayer");
		
		UUI_StatisticsScreen_GetStatValueForCurrentPlayer_Params params {};
		params.statType = statType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBD90
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatTextForPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_StatisticsScreen::GetStatTextForPlayer(EStatisticsUIType statType, const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatTextForPlayer");
		
		UUI_StatisticsScreen_GetStatTextForPlayer_Params params {};
		params.statType = statType;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBCB0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatTextForCurrentPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_StatisticsScreen::GetStatTextForCurrentPlayer(EStatisticsUIType statType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatTextForCurrentPlayer");
		
		UUI_StatisticsScreen_GetStatTextForCurrentPlayer_Params params {};
		params.statType = statType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBC30
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatForLeaderboardIndex
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EStatisticsUIType UUI_StatisticsScreen::GetStatForLeaderboardIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatForLeaderboardIndex");
		
		UUI_StatisticsScreen_GetStatForLeaderboardIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBAB0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonByUsername
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        player1Id                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        player2Id                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FStatComparison UUI_StatisticsScreen::GetStatComparisonByUsername(EStatisticsUIType statType, const class FName& player1Id, const class FName& player2Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonByUsername");
		
		UUI_StatisticsScreen_GetStatComparisonByUsername_Params params {};
		params.statType = statType;
		params.player1Id = player1Id;
		params.player2Id = player2Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB950
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonBySlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EStatisticsUIType                                  statType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            player1SlotIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            player2SlotIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FStatComparison UUI_StatisticsScreen::GetStatComparisonBySlot(EStatisticsUIType statType, int32_t player1SlotIndex, int32_t player2SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetStatComparisonBySlot");
		
		UUI_StatisticsScreen_GetStatComparisonBySlot_Params params {};
		params.statType = statType;
		params.player1SlotIndex = player1SlotIndex;
		params.player2SlotIndex = player2SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA1E0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerUsernameForSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_StatisticsScreen::GetPlayerUsernameForSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerUsernameForSlot");
		
		UUI_StatisticsScreen_GetPlayerUsernameForSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA030
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsListCount
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_StatisticsScreen::GetPlayerStatisticsListCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsListCount");
		
		UUI_StatisticsScreen_GetPlayerStatisticsListCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9F50
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsList
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            startIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            endIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FStatisticsUIListPlayerData> UUI_StatisticsScreen::GetPlayerStatisticsList(int32_t startIndex, int32_t endIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsList");
		
		UUI_StatisticsScreen_GetPlayerStatisticsList_Params params {};
		params.startIndex = startIndex;
		params.endIndex = endIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9E80
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FStatisticsUIFullPlayerData UUI_StatisticsScreen::GetPlayerStatisticsForSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForSlot");
		
		UUI_StatisticsScreen_GetPlayerStatisticsForSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9DA0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForId
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FStatisticsUIFullPlayerData UUI_StatisticsScreen::GetPlayerStatisticsForId(const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerStatisticsForId");
		
		UUI_StatisticsScreen_GetPlayerStatisticsForId_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9CE0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerRankForSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetPlayerRankForSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerRankForSlot");
		
		UUI_StatisticsScreen_GetPlayerRankForSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9C20
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerNumberForSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetPlayerNumberForSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerNumberForSlot");
		
		UUI_StatisticsScreen_GetPlayerNumberForSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9B60
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPlayerIdForSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UUI_StatisticsScreen::GetPlayerIdForSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPlayerIdForSlot");
		
		UUI_StatisticsScreen_GetPlayerIdForSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9870
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayerSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            playersPerPage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            playerSlot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetPageStartIndexForPlayerSlot(int32_t playersPerPage, int32_t playerSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayerSlot");
		
		UUI_StatisticsScreen_GetPageStartIndexForPlayerSlot_Params params {};
		params.playersPerPage = playersPerPage;
		params.playerSlot = playerSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB97A0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            playersPerPage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetPageStartIndexForPlayer(int32_t playersPerPage, const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForPlayer");
		
		UUI_StatisticsScreen_GetPageStartIndexForPlayer_Params params {};
		params.playersPerPage = playersPerPage;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9700
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForCurrentPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            playersPerPage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetPageStartIndexForCurrentPlayer(int32_t playersPerPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetPageStartIndexForCurrentPlayer");
		
		UUI_StatisticsScreen_GetPageStartIndexForCurrentPlayer_Params params {};
		params.playersPerPage = playersPerPage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6880
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerSlotOnLeaderboard
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            playerSlot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetIndexForPlayerSlotOnLeaderboard(int32_t playerSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerSlotOnLeaderboard");
		
		UUI_StatisticsScreen_GetIndexForPlayerSlotOnLeaderboard_Params params {};
		params.playerSlot = playerSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB67E0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerOnLeaderboard
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_StatisticsScreen::GetIndexForPlayerOnLeaderboard(const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetIndexForPlayerOnLeaderboard");
		
		UUI_StatisticsScreen_GetIndexForPlayerOnLeaderboard_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB67B0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetIndexForCurrentPlayerOnLeaderboard
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_StatisticsScreen::GetIndexForCurrentPlayerOnLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetIndexForCurrentPlayerOnLeaderboard");
		
		UUI_StatisticsScreen_GetIndexForCurrentPlayerOnLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5D10
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetFriendIdAtIndex
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UUI_StatisticsScreen::GetFriendIdAtIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetFriendIdAtIndex");
		
		UUI_StatisticsScreen_GetFriendIdAtIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB59F0
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayerInSlot
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FShipUIStatData> UUI_StatisticsScreen::GetFlightLogStatsForAllShipsForPlayerInSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayerInSlot");
		
		UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForPlayerInSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5910
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PlayerId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FShipUIStatData> UUI_StatisticsScreen::GetFlightLogStatsForAllShipsForPlayer(const class FName& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForPlayer");
		
		UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForPlayer_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5830
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForCurrentPlayer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FShipUIStatData> UUI_StatisticsScreen::GetFlightLogStatsForAllShipsForCurrentPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetFlightLogStatsForAllShipsForCurrentPlayer");
		
		UUI_StatisticsScreen_GetFlightLogStatsForAllShipsForCurrentPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4980
	 * 		Name   -> Function DreadGameUI.UI_StatisticsScreen.GetCurrentPlayerStatistics
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FStatisticsUIFullPlayerData UUI_StatisticsScreen::GetCurrentPlayerStatistics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_StatisticsScreen.GetCurrentPlayerStatistics");
		
		UUI_StatisticsScreen_GetCurrentPlayerStatistics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatisticsScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatisticsScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_StatisticsScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.WebServicesConnectionFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_TitleScreen::WebServicesConnectionFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.WebServicesConnectionFailed");
		
		UUI_TitleScreen_WebServicesConnectionFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4A90
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.TryCreateSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_TitleScreen::TryCreateSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.TryCreateSession");
		
		UUI_TitleScreen_TryCreateSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4630
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.StartTransitionOut
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UUI_TitleScreen::StartTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.StartTransitionOut");
		
		UUI_TitleScreen_StartTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4610
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.StartTransitionIn
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UUI_TitleScreen::StartTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.StartTransitionIn");
		
		UUI_TitleScreen_StartTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC41B0
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.ShowReturnFromDisconnectMessages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_TitleScreen::ShowReturnFromDisconnectMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.ShowReturnFromDisconnectMessages");
		
		UUI_TitleScreen_ShowReturnFromDisconnectMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDC00
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.HandlePlayerDataAvailable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUI_TitleScreen::HandlePlayerDataAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.HandlePlayerDataAvailable");
		
		UUI_TitleScreen_HandlePlayerDataAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDB10
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.HandleOnboardingInitialized
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUI_TitleScreen::HandleOnboardingInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.HandleOnboardingInitialized");
		
		UUI_TitleScreen_HandleOnboardingInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3200
	 * 		Name   -> Function DreadGameUI.UI_TitleScreen.ExitGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_TitleScreen::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TitleScreen.ExitGame");
		
		UUI_TitleScreen_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TitleScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TitleScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_TitleScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA050
	 * 		Name   -> Function DreadGameUI.UI_EditAppearanceButtonCaptainCustomizationWidget.GetPlayerUiData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerUIData UUI_EditAppearanceButtonCaptainCustomizationWidget::GetPlayerUiData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditAppearanceButtonCaptainCustomizationWidget.GetPlayerUiData");
		
		UUI_EditAppearanceButtonCaptainCustomizationWidget_GetPlayerUiData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditAppearanceButtonCaptainCustomizationWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditAppearanceButtonCaptainCustomizationWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EditAppearanceButtonCaptainCustomizationWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB90E0
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleTier
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipTechTreeItemData                    moduleData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_GenericModuleTitleWidget::GetModuleTier(const struct FYUIShipTechTreeItemData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleTier");
		
		UUI_GenericModuleTitleWidget_GetModuleTier_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8CD0
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipTechTreeItemData                    moduleData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUI_GenericModuleTitleWidget::GetModuleName(const struct FYUIShipTechTreeItemData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleName");
		
		UUI_GenericModuleTitleWidget_GetModuleName_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB85A0
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleClassificationIconPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipTechTreeItemData                    moduleData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericModuleTitleWidget::GetModuleClassificationIconPath(const struct FYUIShipTechTreeItemData& moduleData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetModuleClassificationIconPath");
		
		UUI_GenericModuleTitleWidget_GetModuleClassificationIconPath_Params params {};
		params.moduleData = moduleData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6BE0
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_GenericModuleTitleWidget::GetItemType(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetItemType");
		
		UUI_GenericModuleTitleWidget_GetItemType_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4060
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                itemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericModuleTitleWidget::GetClassificationIconPathForType(EYUILoadoutItemType itemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForType");
		
		UUI_GenericModuleTitleWidget_GetClassificationIconPathForType_Params params {};
		params.itemType = itemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3F90
	 * 		Name   -> Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForItemId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericModuleTitleWidget::GetClassificationIconPathForItemId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericModuleTitleWidget.GetClassificationIconPathForItemId");
		
		UUI_GenericModuleTitleWidget_GetClassificationIconPathForItemId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GenericModuleTitleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GenericModuleTitleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_GenericModuleTitleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE7D0
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.IsHeroShip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_GenericShipTitleWidget::IsHeroShip(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.IsHeroShip");
		
		UUI_GenericShipTitleWidget_IsHeroShip_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB5C0
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetShipTier
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_GenericShipTitleWidget::GetShipTier(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetShipTier");
		
		UUI_GenericShipTitleWidget_GetShipTier_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB2E0
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetShipName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUI_GenericShipTitleWidget::GetShipName(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetShipName");
		
		UUI_GenericShipTitleWidget_GetShipName_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBAC50
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetShipClassificationIconPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericShipTitleWidget::GetShipClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetShipClassificationIconPath");
		
		UUI_GenericShipTitleWidget_GetShipClassificationIconPath_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6BE0
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_GenericShipTitleWidget::GetItemType(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetItemType");
		
		UUI_GenericShipTitleWidget_GetItemType_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4060
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                itemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericShipTitleWidget::GetClassificationIconPathForType(EYUILoadoutItemType itemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForType");
		
		UUI_GenericShipTitleWidget_GetClassificationIconPathForType_Params params {};
		params.itemType = itemType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3F90
	 * 		Name   -> Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForItemId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_GenericShipTitleWidget::GetClassificationIconPathForItemId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_GenericShipTitleWidget.GetClassificationIconPathForItemId");
		
		UUI_GenericShipTitleWidget_GetClassificationIconPathForItemId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GenericShipTitleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GenericShipTitleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_GenericShipTitleWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF520
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipOwned
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ManufacturerTechTreeWidget::IsShipOwned(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipOwned");
		
		UUI_ManufacturerTechTreeWidget_IsShipOwned_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF3A0
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipAvailable
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ManufacturerTechTreeWidget::IsShipAvailable(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsShipAvailable");
		
		UUI_ManufacturerTechTreeWidget_IsShipAvailable_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBED10
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsItemHeroShip
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ManufacturerTechTreeWidget::IsItemHeroShip(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.IsItemHeroShip");
		
		UUI_ManufacturerTechTreeWidget_IsItemHeroShip_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB5C0
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetTier
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_ManufacturerTechTreeWidget::GetTier(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetTier");
		
		UUI_ManufacturerTechTreeWidget_GetTier_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB2E0
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetShipName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUI_ManufacturerTechTreeWidget::GetShipName(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetShipName");
		
		UUI_ManufacturerTechTreeWidget_GetShipName_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6A60
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetItemID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_ManufacturerTechTreeWidget::GetItemID(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetItemID");
		
		UUI_ManufacturerTechTreeWidget_GetItemID_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6380
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetIconPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ManufacturerTechTreeWidget::GetIconPath(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetIconPath");
		
		UUI_ManufacturerTechTreeWidget_GetIconPath_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4C20
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetCurrentShipXp
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_ManufacturerTechTreeWidget::GetCurrentShipXp(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetCurrentShipXp");
		
		UUI_ManufacturerTechTreeWidget_GetCurrentShipXp_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3DD0
	 * 		Name   -> Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetClassificationIconPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUI_ManufacturerTechTreeWidget::GetClassificationIconPath(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ManufacturerTechTreeWidget.GetClassificationIconPath");
		
		UUI_ManufacturerTechTreeWidget_GetClassificationIconPath_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ManufacturerTechTreeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ManufacturerTechTreeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ManufacturerTechTreeWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5120
	 * 		Name   -> Function DreadGameUI.UI_EliteStatusInfoPanelData.GetEliteStatusBoostMultiplierTexts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EYBoostedTarget                                    boostTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYBoostedCurrency                                  boostCurrency                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UUI_EliteStatusInfoPanelData::GetEliteStatusBoostMultiplierTexts(EYBoostedTarget boostTarget, EYBoostedCurrency boostCurrency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EliteStatusInfoPanelData.GetEliteStatusBoostMultiplierTexts");
		
		UUI_EliteStatusInfoPanelData_GetEliteStatusBoostMultiplierTexts_Params params {};
		params.boostTarget = boostTarget;
		params.boostCurrency = boostCurrency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EliteStatusInfoPanelData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EliteStatusInfoPanelData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EliteStatusInfoPanelData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB160
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetShipDetails
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FYMenuItemData                              marketData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FMarketItemUIData UUI_MarketBundleDetails_InfoPanel::GetShipDetails(const struct FYMenuItemData& marketData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetShipDetails");
		
		UUI_MarketBundleDetails_InfoPanel_GetShipDetails_Params params {};
		params.marketData = marketData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5230
	 * 		Name   -> Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetEliteStatusInfoPanelData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UUI_EliteStatusInfoPanelData* UUI_MarketBundleDetails_InfoPanel::GetEliteStatusInfoPanelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketBundleDetails_InfoPanel.GetEliteStatusInfoPanelData");
		
		UUI_MarketBundleDetails_InfoPanel_GetEliteStatusInfoPanelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_InfoPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_InfoPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketBundleDetails_InfoPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketItemWidget.SetData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           itemData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketItemWidget::SetData(const struct FMarketItemUIData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketItemWidget.SetData");
		
		UUI_MarketItemWidget_SetData_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemUnhovered__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_MarketItemWidget::OnMarketItemUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemUnhovered__DelegateSignature");
		
		UUI_MarketItemWidget_OnMarketItemUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemHovered__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_MarketItemWidget::OnMarketItemHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DreadGameUI.UI_MarketItemWidget.OnMarketItemHovered__DelegateSignature");
		
		UUI_MarketItemWidget_OnMarketItemHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD570
	 * 		Name   -> Function DreadGameUI.UI_MarketItemWidget.HandleItemUnhovered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_MarketItemWidget::HandleItemUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketItemWidget.HandleItemUnhovered");
		
		UUI_MarketItemWidget_HandleItemUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3640
	 * 		Name   -> Function DreadGameUI.UI_MarketItemWidget.HandleItemHovered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_MarketItemWidget::HandleItemHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketItemWidget.HandleItemHovered");
		
		UUI_MarketItemWidget_HandleItemHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.OnPopupAdded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupStackData                             PopupData                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_NavigationWidget::OnPopupAdded(const struct FPopupStackData& PopupData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.OnPopupAdded");
		
		UUI_NavigationWidget_OnPopupAdded_Params params {};
		params.PopupData = PopupData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.OnNavigateToTabRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NavigationWidget::OnNavigateToTabRequested(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.OnNavigateToTabRequested");
		
		UUI_NavigationWidget_OnNavigateToTabRequested_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.OnNavigateToScreenRequested
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NavigationWidget::OnNavigateToScreenRequested(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.OnNavigateToScreenRequested");
		
		UUI_NavigationWidget_OnNavigateToScreenRequested_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFF20
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.NavigateToTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NavigationWidget::NavigateToTab(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.NavigateToTab");
		
		UUI_NavigationWidget_NavigateToTab_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFD00
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.NavigateToScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUI_Screen                                         screen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NavigationWidget::NavigateToScreen(EUI_Screen screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.NavigateToScreen");
		
		UUI_NavigationWidget_NavigateToScreen_Params params {};
		params.screen = screen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFC60
	 * 		Name   -> Function DreadGameUI.UI_NavigationWidget.NavigateToPreviousScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_NavigationWidget::NavigateToPreviousScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NavigationWidget.NavigateToPreviousScreen");
		
		UUI_NavigationWidget_NavigateToPreviousScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NavigationWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NavigationWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_NavigationWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PersistentLegendWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PersistentLegendWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_PersistentLegendWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4BB0
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.UpdateEliteTimeRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentPlayerCardWidget::UpdateEliteTimeRemaining(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.UpdateEliteTimeRemaining");
		
		UUI_PersistentPlayerCardWidget_UpdateEliteTimeRemaining_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2B50
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.SetEliteTimeRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_PersistentPlayerCardWidget::SetEliteTimeRemaining(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.SetEliteTimeRemaining");
		
		UUI_PersistentPlayerCardWidget_SetEliteTimeRemaining_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDF90
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.HasEliteTimeRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_PersistentPlayerCardWidget::HasEliteTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.HasEliteTimeRemaining");
		
		UUI_PersistentPlayerCardWidget_HasEliteTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA050
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.GetPlayerUiData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPlayerUIData UUI_PersistentPlayerCardWidget::GetPlayerUiData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.GetPlayerUiData");
		
		UUI_PersistentPlayerCardWidget_GetPlayerUiData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB52E0
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.GetEliteTimeRemainingInSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUI_PersistentPlayerCardWidget::GetEliteTimeRemainingInSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.GetEliteTimeRemainingInSeconds");
		
		UUI_PersistentPlayerCardWidget_GetEliteTimeRemainingInSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB26C0
	 * 		Name   -> Function DreadGameUI.UI_PersistentPlayerCardWidget.ComposeEliteStatusString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_PersistentPlayerCardWidget::ComposeEliteStatusString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentPlayerCardWidget.ComposeEliteStatusString");
		
		UUI_PersistentPlayerCardWidget_ComposeEliteStatusString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PersistentPlayerCardWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PersistentPlayerCardWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_PersistentPlayerCardWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB7D0
	 * 		Name   -> Function DreadGameUI.UI_PersistentSquadListWidget.GetSquadData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FSquadUserData> UUI_PersistentSquadListWidget::GetSquadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_PersistentSquadListWidget.GetSquadData");
		
		UUI_PersistentSquadListWidget_GetSquadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PersistentSquadListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PersistentSquadListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_PersistentSquadListWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB29F0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeItemButtonWidget.DetermineCurrencyAmount
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIItemPriceData                           priceData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_ShipTechTreeItemButtonWidget::DetermineCurrencyAmount(const struct FYUIItemPriceData& priceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeItemButtonWidget.DetermineCurrencyAmount");
		
		UUI_ShipTechTreeItemButtonWidget_DetermineCurrencyAmount_Params params {};
		params.priceData = priceData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTreeItemButtonWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTreeItemButtonWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipTechTreeItemButtonWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE980
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.IsItemAShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Item                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ShipTechTreeProgressionPathWidget::IsItemAShip(const struct FYUIShipManufacturerTechItemData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.IsItemAShip");
		
		UUI_ShipTechTreeProgressionPathWidget_IsItemAShip_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6C70
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.GetItemTypeFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Item                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_ShipTechTreeProgressionPathWidget::GetItemTypeFromStruct(const struct FYUIShipManufacturerTechItemData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionPathWidget.GetItemTypeFromStruct");
		
		UUI_ShipTechTreeProgressionPathWidget_GetItemTypeFromStruct_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTreeProgressionPathWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTreeProgressionPathWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipTechTreeProgressionPathWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBEB00
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionWidget.IsItemAShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Item                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	bool UUI_ShipTechTreeProgressionWidget::IsItemAShip(const struct FYUIShipManufacturerTechItemData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionWidget.IsItemAShip");
		
		UUI_ShipTechTreeProgressionWidget_IsItemAShip_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6DF0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemTypeFromStruct
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Item                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_ShipTechTreeProgressionWidget::GetItemTypeFromStruct(const struct FYUIShipManufacturerTechItemData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemTypeFromStruct");
		
		UUI_ShipTechTreeProgressionWidget_GetItemTypeFromStruct_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6BE0
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EYUILoadoutItemType UUI_ShipTechTreeProgressionWidget::GetItemType(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionWidget.GetItemType");
		
		UUI_ShipTechTreeProgressionWidget_GetItemType_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB2740
	 * 		Name   -> Function DreadGameUI.UI_ShipTechTreeProgressionWidget.ComposeModuleDataForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            Item                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	struct FUIGenericButtonModuleData UUI_ShipTechTreeProgressionWidget::ComposeModuleDataForItem(const struct FYUIShipManufacturerTechItemData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipTechTreeProgressionWidget.ComposeModuleDataForItem");
		
		UUI_ShipTechTreeProgressionWidget_ComposeModuleDataForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipTechTreeProgressionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipTechTreeProgressionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipTechTreeProgressionWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CongratsLoginPS4SubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CongratsLoginPS4SubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CongratsLoginPS4SubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateAccountLoginPS4SubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateAccountLoginPS4SubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CreateAccountLoginPS4SubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3200
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.SetItemOnCurrentShipAndSaveLoadout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  itemToSet                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipSubPanel::SetItemOnCurrentShipAndSaveLoadout(const struct FUIGenericButtonModuleData& itemToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.SetItemOnCurrentShipAndSaveLoadout");
		
		UUI_EditShipSubPanel_SetItemOnCurrentShipAndSaveLoadout_Params params {};
		params.itemToSet = itemToSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1510
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.RequestPreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipSubPanel::RequestPreview(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.RequestPreview");
		
		UUI_EditShipSubPanel_RequestPreview_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0C30
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.RequestClearLoadoutPreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_EditShipSubPanel::RequestClearLoadoutPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.RequestClearLoadoutPreview");
		
		UUI_EditShipSubPanel_RequestClearLoadoutPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBFD80
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.NavigateToScreenForItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Item                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipSubPanel::NavigateToScreenForItem(const struct FUIGenericButtonModuleData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.NavigateToScreenForItem");
		
		UUI_EditShipSubPanel_NavigateToScreenForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBEF20
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.IsItemOwnedByPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Item                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	bool UUI_EditShipSubPanel::IsItemOwnedByPlayer(const struct FUIGenericButtonModuleData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.IsItemOwnedByPlayer");
		
		UUI_EditShipSubPanel_IsItemOwnedByPlayer_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE7A0
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.IsHeroShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_EditShipSubPanel::IsHeroShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.IsHeroShip");
		
		UUI_EditShipSubPanel_IsHeroShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBE600
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.IsCurrentShipOwnedByPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_EditShipSubPanel::IsCurrentShipOwnedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.IsCurrentShipOwnedByPlayer");
		
		UUI_EditShipSubPanel_IsCurrentShipOwnedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCF00
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetUIDataForItemId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_EditShipSubPanel::GetUIDataForItemId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetUIDataForItemId");
		
		UUI_EditShipSubPanel_GetUIDataForItemId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBCD00
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetUiDataForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  itemToSet                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	struct FYItemUIData UUI_EditShipSubPanel::GetUiDataForItem(const struct FUIGenericButtonModuleData& itemToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetUiDataForItem");
		
		UUI_EditShipSubPanel_GetUiDataForItem_Params params {};
		params.itemToSet = itemToSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA310
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetPositionForStatsPopup
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   popupSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UUI_DreadWidget*                             moduleWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UUI_EditShipSubPanel::GetPositionForStatsPopup(const struct FVector2D& popupSize, class UUI_DreadWidget* moduleWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetPositionForStatsPopup");
		
		UUI_EditShipSubPanel_GetPositionForStatsPopup_Params params {};
		params.popupSize = popupSize;
		params.moduleWidget = moduleWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB89E0
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetModuleDataFromId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            itemID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUIGenericButtonModuleData UUI_EditShipSubPanel::GetModuleDataFromId(int32_t itemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetModuleDataFromId");
		
		UUI_EditShipSubPanel_GetModuleDataFromId_Params params {};
		params.itemID = itemID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB8750
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetModuleData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  itemData                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	struct FUIGenericButtonModuleData UUI_EditShipSubPanel::GetModuleData(const struct FUIGenericButtonModuleData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetModuleData");
		
		UUI_EditShipSubPanel_GetModuleData_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB6600
	 * 		Name   -> Function DreadGameUI.UI_EditShipSubPanel.GetIdForItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FUIGenericButtonModuleData                  Item                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_EditShipSubPanel::GetIdForItem(const struct FUIGenericButtonModuleData& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipSubPanel.GetIdForItem");
		
		UUI_EditShipSubPanel_GetIdForItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShipSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShipSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EditShipSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC26C0
	 * 		Name   -> Function DreadGameUI.UI_EditShipAppearanceSubPanel.SetCurrentShipModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            moduleId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipAppearanceSubPanel::SetCurrentShipModule(int32_t moduleId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipAppearanceSubPanel.SetCurrentShipModule");
		
		UUI_EditShipAppearanceSubPanel_SetCurrentShipModule_Params params {};
		params.moduleId = moduleId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD230
	 * 		Name   -> Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetPossibleAppearanceDataForShipSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                loadoutSlot                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FUIGenericButtonModuleData> UUI_EditShipAppearanceSubPanel::GetPossibleAppearanceDataForShipSlot(EYUILoadoutItemType loadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetPossibleAppearanceDataForShipSlot");
		
		UUI_EditShipAppearanceSubPanel_GetPossibleAppearanceDataForShipSlot_Params params {};
		params.loadoutSlot = loadoutSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4450
	 * 		Name   -> Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetCurrentAppearanceDataForShipSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                loadoutSlot                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUIGenericButtonModuleData UUI_EditShipAppearanceSubPanel::GetCurrentAppearanceDataForShipSlot(EYUILoadoutItemType loadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipAppearanceSubPanel.GetCurrentAppearanceDataForShipSlot");
		
		UUI_EditShipAppearanceSubPanel_GetCurrentAppearanceDataForShipSlot_Params params {};
		params.loadoutSlot = loadoutSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShipAppearanceSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShipAppearanceSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EditShipAppearanceSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3690
	 * 		Name   -> Function DreadGameUI.UI_EditShipLoadoutSubPanel.SetNextShipModule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            moduleId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_EditShipLoadoutSubPanel::SetNextShipModule(int32_t moduleId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipLoadoutSubPanel.SetNextShipModule");
		
		UUI_EditShipLoadoutSubPanel_SetNextShipModule_Params params {};
		params.moduleId = moduleId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA4B0
	 * 		Name   -> Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetPossibleLoadoutDataForShipSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                loadoutSlot                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FUIGenericButtonModuleData> UUI_EditShipLoadoutSubPanel::GetPossibleLoadoutDataForShipSlot(EYUILoadoutItemType loadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetPossibleLoadoutDataForShipSlot");
		
		UUI_EditShipLoadoutSubPanel_GetPossibleLoadoutDataForShipSlot_Params params {};
		params.loadoutSlot = loadoutSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB47A0
	 * 		Name   -> Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetCurrentLoadoutDataForShipSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYUILoadoutItemType                                loadoutSlot                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUIGenericButtonModuleData UUI_EditShipLoadoutSubPanel::GetCurrentLoadoutDataForShipSlot(EYUILoadoutItemType loadoutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipLoadoutSubPanel.GetCurrentLoadoutDataForShipSlot");
		
		UUI_EditShipLoadoutSubPanel_GetCurrentLoadoutDataForShipSlot_Params params {};
		params.loadoutSlot = loadoutSlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1E80
	 * 		Name   -> Function DreadGameUI.UI_EditShipLoadoutSubPanel.AreOfficerModulesAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_EditShipLoadoutSubPanel::AreOfficerModulesAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EditShipLoadoutSubPanel.AreOfficerModulesAvailable");
		
		UUI_EditShipLoadoutSubPanel_AreOfficerModulesAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EditShipLoadoutSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EditShipLoadoutSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EditShipLoadoutSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1FD0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.ResearchShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ShipDetailsSubPanel::ResearchShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.ResearchShip");
		
		UUI_ShipDetailsSubPanel_ResearchShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC08B0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.PurchaseShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_ShipDetailsSubPanel::PurchaseShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.PurchaseShip");
		
		UUI_ShipDetailsSubPanel_PurchaseShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.HandleInventoryUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ShipDetailsSubPanel::HandleInventoryUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.HandleInventoryUpdated");
		
		UUI_ShipDetailsSubPanel_HandleInventoryUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC560
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetTechTreeProgressionData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               includePrecastModules                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FYTechTreeProgressData UUI_ShipDetailsSubPanel::GetTechTreeProgressionData(bool includePrecastModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetTechTreeProgressionData");
		
		UUI_ShipDetailsSubPanel_GetTechTreeProgressionData_Params params {};
		params.includePrecastModules = includePrecastModules;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB570
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FYShipStatsEntry> UUI_ShipDetailsSubPanel::GetShipStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipStats");
		
		UUI_ShipDetailsSubPanel_GetShipStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB540
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchPurchaseState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EYShipResearchPurchaseState UUI_ShipDetailsSubPanel::GetShipResearchPurchaseState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchPurchaseState");
		
		UUI_ShipDetailsSubPanel_GetShipResearchPurchaseState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB4F0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYShipPrice UUI_ShipDetailsSubPanel::GetShipResearchCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipResearchCost");
		
		UUI_ShipDetailsSubPanel_GetShipResearchCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB4A0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipPurchaseCost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYShipPrice UUI_ShipDetailsSubPanel::GetShipPurchaseCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipPurchaseCost");
		
		UUI_ShipDetailsSubPanel_GetShipPurchaseCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB0E0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UUI_ShipDetailsSubPanel::GetShipDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipDescription");
		
		UUI_ShipDetailsSubPanel_GetShipDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBABD0
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipClassIconPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_ShipDetailsSubPanel::GetShipClassIconPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetShipClassIconPath");
		
		UUI_ShipDetailsSubPanel_GetShipClassIconPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA810
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetPurchaseRequirementsData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FYPurchaseRequirementsData UUI_ShipDetailsSubPanel::GetPurchaseRequirementsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetPurchaseRequirementsData");
		
		UUI_ShipDetailsSubPanel_GetPurchaseRequirementsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7690
	 * 		Name   -> Function DreadGameUI.UI_ShipDetailsSubPanel.GetManufacturerIconPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UUI_ShipDetailsSubPanel::GetManufacturerIconPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_ShipDetailsSubPanel.GetManufacturerIconPath");
		
		UUI_ShipDetailsSubPanel_GetManufacturerIconPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShipDetailsSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShipDetailsSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_ShipDetailsSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LinkAccountLoginPS4SubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LinkAccountLoginPS4SubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_LinkAccountLoginPS4SubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_MarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_MarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketSubPanel.Show");
		
		UUI_MarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3640
	 * 		Name   -> Function DreadGameUI.UI_MarketSubPanel.SetMarketGridDataReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_MarketSubPanel::SetMarketGridDataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketSubPanel.SetMarketGridDataReady");
		
		UUI_MarketSubPanel_SetMarketGridDataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_MarketSubPanel.MarketDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_MarketSubPanel::MarketDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_MarketSubPanel.MarketDataUpdated");
		
		UUI_MarketSubPanel_MarketDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_MarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4AB0
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.UpdateBundleCategoryFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               filterEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_BundlesMarketSubPanel::UpdateBundleCategoryFilters(int32_t categoryIndex, int32_t filterIndex, bool filterEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.UpdateBundleCategoryFilters");
		
		UUI_BundlesMarketSubPanel_UpdateBundleCategoryFilters_Params params {};
		params.categoryIndex = categoryIndex;
		params.filterIndex = filterIndex;
		params.filterEnabled = filterEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_BundlesMarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.Show");
		
		UUI_BundlesMarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7FD0
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FUIPromotionFilterData>              filters                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMarketItemUIData> UUI_BundlesMarketSubPanel::GetMarketBundles(TArray<struct FUIPromotionFilterData> filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundles");
		
		UUI_BundlesMarketSubPanel_GetMarketBundles_Params params {};
		params.filters = filters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7A90
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FUIPromotionFilterData> UUI_BundlesMarketSubPanel::GetMarketBundleFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleFilters");
		
		UUI_BundlesMarketSubPanel_GetMarketBundleFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7960
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleCategoryFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FUIAccordionFilterData UUI_BundlesMarketSubPanel::GetMarketBundleCategoryFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.GetMarketBundleCategoryFilters");
		
		UUI_BundlesMarketSubPanel_GetMarketBundleCategoryFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB56A0
	 * 		Name   -> Function DreadGameUI.UI_BundlesMarketSubPanel.GetFilteredMarketBundles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FMarketItemUIData> UUI_BundlesMarketSubPanel::GetFilteredMarketBundles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_BundlesMarketSubPanel.GetFilteredMarketBundles");
		
		UUI_BundlesMarketSubPanel_GetFilteredMarketBundles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BundlesMarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BundlesMarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_BundlesMarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.UpdateXpConversionScreenData
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CurrencyMarketSubPanel::UpdateXpConversionScreenData(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.UpdateXpConversionScreenData");
		
		UUI_CurrencyMarketSubPanel_UpdateXpConversionScreenData_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CurrencyMarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.Show");
		
		UUI_CurrencyMarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1EF0
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConvertAllShips
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_CurrencyMarketSubPanel::RequestXpConvertAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConvertAllShips");
		
		UUI_CurrencyMarketSubPanel_RequestXpConvertAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1E10
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConversion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRequestXpConversionShip>            shipsToConvertXpFrom                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUI_CurrencyMarketSubPanel::RequestXpConversion(TArray<struct FRequestXpConversionShip> shipsToConvertXpFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestXpConversion");
		
		UUI_CurrencyMarketSubPanel_RequestXpConversion_Params params {};
		params.shipsToConvertXpFrom = shipsToConvertXpFrom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC0DB0
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestGpPackItemPsnPurchase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_CurrencyMarketSubPanel::RequestGpPackItemPsnPurchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.RequestGpPackItemPsnPurchase");
		
		UUI_CurrencyMarketSubPanel_RequestGpPackItemPsnPurchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD340
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.GetXpConversionData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FUiXpConversionData UUI_CurrencyMarketSubPanel::GetXpConversionData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.GetXpConversionData");
		
		UUI_CurrencyMarketSubPanel_GetXpConversionData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB81D0
	 * 		Name   -> Function DreadGameUI.UI_CurrencyMarketSubPanel.GetMarketItemsByCurrencyPanelID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ECurrencyMarketPanels                              currencyPanel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMarketItemUIData> UUI_CurrencyMarketSubPanel::GetMarketItemsByCurrencyPanelID(ECurrencyMarketPanels currencyPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_CurrencyMarketSubPanel.GetMarketItemsByCurrencyPanelID");
		
		UUI_CurrencyMarketSubPanel_GetMarketItemsByCurrencyPanelID_Params params {};
		params.currencyPanel = currencyPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CurrencyMarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CurrencyMarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_CurrencyMarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_EliteStatusMarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_EliteStatusMarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EliteStatusMarketSubPanel.Show");
		
		UUI_EliteStatusMarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC2420
	 * 		Name   -> Function DreadGameUI.UI_EliteStatusMarketSubPanel.SetBoostArrays
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UUI_EliteStatusMarketSubPanel::SetBoostArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EliteStatusMarketSubPanel.SetBoostArrays");
		
		UUI_EliteStatusMarketSubPanel_SetBoostArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5260
	 * 		Name   -> Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteStatusMarketItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FMarketItemUIData> UUI_EliteStatusMarketSubPanel::GetEliteStatusMarketItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteStatusMarketItems");
		
		UUI_EliteStatusMarketSubPanel_GetEliteStatusMarketItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5050
	 * 		Name   -> Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteBoostDisplayPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYBoostedTarget                                    boostTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EYBoostedCurrency                                  currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUI_EliteStatusMarketSubPanel::GetEliteBoostDisplayPercentage(EYBoostedTarget boostTarget, EYBoostedCurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_EliteStatusMarketSubPanel.GetEliteBoostDisplayPercentage");
		
		UUI_EliteStatusMarketSubPanel_GetEliteBoostDisplayPercentage_Params params {};
		params.boostTarget = boostTarget;
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EliteStatusMarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EliteStatusMarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_EliteStatusMarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_FeaturedMarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_FeaturedMarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FeaturedMarketSubPanel.Show");
		
		UUI_FeaturedMarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF860
	 * 		Name   -> Function DreadGameUI.UI_FeaturedMarketSubPanel.MarketItemSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMarketItemUIData                           marketItem                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void UUI_FeaturedMarketSubPanel::MarketItemSelected(const struct FMarketItemUIData& marketItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FeaturedMarketSubPanel.MarketItemSelected");
		
		UUI_FeaturedMarketSubPanel_MarketItemSelected_Params params {};
		params.marketItem = marketItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB82A0
	 * 		Name   -> Function DreadGameUI.UI_FeaturedMarketSubPanel.GetMarketItemsByPromotionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EYMarketItemPromotionFlags                         promotionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMarketItemUIData> UUI_FeaturedMarketSubPanel::GetMarketItemsByPromotionType(EYMarketItemPromotionFlags promotionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_FeaturedMarketSubPanel.GetMarketItemsByPromotionType");
		
		UUI_FeaturedMarketSubPanel_GetMarketItemsByPromotionType_Params params {};
		params.promotionType = promotionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_FeaturedMarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_FeaturedMarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_FeaturedMarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4C30
	 * 		Name   -> Function DreadGameUI.UI_HeroShipMarketSubPanel.UpdateHeroShipCategoryFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            filterIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               filterEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_HeroShipMarketSubPanel::UpdateHeroShipCategoryFilter(int32_t categoryIndex, int32_t filterIndex, bool filterEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HeroShipMarketSubPanel.UpdateHeroShipCategoryFilter");
		
		UUI_HeroShipMarketSubPanel_UpdateHeroShipCategoryFilter_Params params {};
		params.categoryIndex = categoryIndex;
		params.filterIndex = filterIndex;
		params.filterEnabled = filterEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4100
	 * 		Name   -> Function DreadGameUI.UI_HeroShipMarketSubPanel.Show
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ShowPanel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_HeroShipMarketSubPanel::Show(bool ShowPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HeroShipMarketSubPanel.Show");
		
		UUI_HeroShipMarketSubPanel_Show_Params params {};
		params.ShowPanel = ShowPanel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB62A0
	 * 		Name   -> Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShips
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FMarketItemUIData> UUI_HeroShipMarketSubPanel::GetHeroShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShips");
		
		UUI_HeroShipMarketSubPanel_GetHeroShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB61C0
	 * 		Name   -> Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShipCategoryFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FUIAccordionFilterData UUI_HeroShipMarketSubPanel::GetHeroShipCategoryFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_HeroShipMarketSubPanel.GetHeroShipCategoryFilters");
		
		UUI_HeroShipMarketSubPanel_GetHeroShipCategoryFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HeroShipMarketSubPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HeroShipMarketSubPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_HeroShipMarketSubPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC3710
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.SetNotificationData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NotificationPanelWidget::SetNotificationData(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.SetNotificationData");
		
		UUI_NotificationPanelWidget_SetNotificationData_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.NotificationDataReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_NotificationPanelWidget::NotificationDataReceived(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.NotificationDataReceived");
		
		UUI_NotificationPanelWidget_NotificationDataReceived_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB850
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.GetSquadInviteAnnouncementData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYSquadInviteAnnouncement UUI_NotificationPanelWidget::GetSquadInviteAnnouncementData(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.GetSquadInviteAnnouncementData");
		
		UUI_NotificationPanelWidget_GetSquadInviteAnnouncementData_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5C10
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.GetFriendAnnouncementData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYFriendRequestAnnouncement UUI_NotificationPanelWidget::GetFriendAnnouncementData(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.GetFriendAnnouncementData");
		
		UUI_NotificationPanelWidget_GetFriendAnnouncementData_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4DF0
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.GetCustomMatchAnnouncementData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYCustomMatchInviteAnnouncement UUI_NotificationPanelWidget::GetCustomMatchAnnouncementData(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.GetCustomMatchAnnouncementData");
		
		UUI_NotificationPanelWidget_GetCustomMatchAnnouncementData_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB3710
	 * 		Name   -> Function DreadGameUI.UI_NotificationPanelWidget.GetBaseAnnouncementData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UNotificationData*                           NotificationData                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FYAnnouncement UUI_NotificationPanelWidget::GetBaseAnnouncementData(class UNotificationData* NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_NotificationPanelWidget.GetBaseAnnouncementData");
		
		UUI_NotificationPanelWidget_GetBaseAnnouncementData_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationPanelWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationPanelWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_NotificationPanelWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF7F0
	 * 		Name   -> Function DreadGameUI.UI_SettingsPanel.IsUsingVitaRemoteConnection
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUI_SettingsPanel::IsUsingVitaRemoteConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsPanel.IsUsingVitaRemoteConnection");
		
		UUI_SettingsPanel_IsUsingVitaRemoteConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC8B0
	 * 		Name   -> Function DreadGameUI.UI_SettingsPanel.GetTermsOfUseLegalData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLegalDocumentData UUI_SettingsPanel::GetTermsOfUseLegalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsPanel.GetTermsOfUseLegalData");
		
		UUI_SettingsPanel_GetTermsOfUseLegalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBA680
	 * 		Name   -> Function DreadGameUI.UI_SettingsPanel.GetPrivacyPolicyLegalData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLegalDocumentData UUI_SettingsPanel::GetPrivacyPolicyLegalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsPanel.GetPrivacyPolicyLegalData");
		
		UUI_SettingsPanel_GetPrivacyPolicyLegalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB54A0
	 * 		Name   -> Function DreadGameUI.UI_SettingsPanel.GetEulaLegalData
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLegalDocumentData UUI_SettingsPanel::GetEulaLegalData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_SettingsPanel.GetEulaLegalData");
		
		UUI_SettingsPanel_GetEulaLegalData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SettingsPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SettingsPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_SettingsPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_TechTreePathNodeWidget.CreatePathToOtherNode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_TechTreePathNodeWidget*                  otherNode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_TechTreePathNodeWidget::CreatePathToOtherNode(class UUI_TechTreePathNodeWidget* otherNode, bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TechTreePathNodeWidget.CreatePathToOtherNode");
		
		UUI_TechTreePathNodeWidget_CreatePathToOtherNode_Params params {};
		params.otherNode = otherNode;
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TechTreePathNodeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TechTreePathNodeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_TechTreePathNodeWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DreadGameUI.UI_TechTreeWidget.InitializeTechTree
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUITechTreeConnectionData>          ConnectionData                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_TechTreeWidget::InitializeTechTree(TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData, TArray<struct FYUITechTreeConnectionData> ConnectionData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UI_TechTreeWidget.InitializeTechTree");
		
		UUI_TechTreeWidget_InitializeTechTree_Params params {};
		params.shipData = shipData;
		params.ConnectionData = ConnectionData;
		params.HeroShipData = HeroShipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TechTreeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TechTreeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UI_TechTreeWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD990
	 * 		Name   -> Function DreadGameUI.UiManager.HandleOnPlayerControllerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AYPlayerControllerBase*                      PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUiManager::HandleOnPlayerControllerSet(class AYPlayerControllerBase* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DreadGameUI.UiManager.HandleOnPlayerControllerSet");
		
		UUiManager_HandleOnPlayerControllerSet_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUiManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUiManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DreadGameUI.UiManager");
		return ptr;
	}

}


