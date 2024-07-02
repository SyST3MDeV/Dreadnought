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
	 * 		Name   -> Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.AddNewline
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UDeveloperCredits_PC_Library_BC_C::STATIC_AddNewline(const class FText& InText, int32_t Count, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.AddNewline");
		
		UDeveloperCredits_PC_Library_BC_C_AddNewline_Params params {};
		params.InText = InText;
		params.Count = Count;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextName
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FYS_MENUDeveloperCreditsName                Data                                                       (Parm, OutParm, ReferenceParm)
	 * 		bool                                               InShouldAddTitle                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ResultText                                                 (Parm, OutParm)
	 */
	void UDeveloperCredits_PC_Library_BC_C::STATIC_BuildPCRichTextName(class FText* InText, struct FYS_MENUDeveloperCreditsName* Data, bool* InShouldAddTitle, class UObject* __WorldContext, class FText* ResultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextName");
		
		UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InText != nullptr)
			*InText = params.InText;
		if (Data != nullptr)
			*Data = params.Data;
		if (InShouldAddTitle != nullptr)
			*InShouldAddTitle = params.InShouldAddTitle;
		if (ResultText != nullptr)
			*ResultText = params.ResultText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextSection
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FYS_MENUDeveloperCreditsSection             SectionData                                                (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ResultText                                                 (Parm, OutParm)
	 */
	void UDeveloperCredits_PC_Library_BC_C::STATIC_BuildPCRichTextSection(class FText* InText, struct FYS_MENUDeveloperCreditsSection* SectionData, class UObject* __WorldContext, class FText* ResultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextSection");
		
		UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextSection_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InText != nullptr)
			*InText = params.InText;
		if (SectionData != nullptr)
			*SectionData = params.SectionData;
		if (ResultText != nullptr)
			*ResultText = params.ResultText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextGroup
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, OutParm, ReferenceParm)
	 * 		struct FYS_MENUDeveloperCreditsRow                 GroupData                                                  (Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ResultText                                                 (Parm, OutParm)
	 */
	void UDeveloperCredits_PC_Library_BC_C::STATIC_BuildPCRichTextGroup(class FText* InText, struct FYS_MENUDeveloperCreditsRow* GroupData, class UObject* __WorldContext, class FText* ResultText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextGroup");
		
		UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextGroup_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InText != nullptr)
			*InText = params.InText;
		if (GroupData != nullptr)
			*GroupData = params.GroupData;
		if (ResultText != nullptr)
			*ResultText = params.ResultText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutCreditsRichText                                         (Parm, OutParm)
	 */
	void UDeveloperCredits_PC_Library_BC_C::STATIC_BuildPCRichText(class UObject* __WorldContext, class FText* OutCreditsRichText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichText");
		
		UDeveloperCredits_PC_Library_BC_C_BuildPCRichText_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCreditsRichText != nullptr)
			*OutCreditsRichText = params.OutCreditsRichText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeveloperCredits_PC_Library_BC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeveloperCredits_PC_Library_BC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C");
		return ptr;
	}

}


