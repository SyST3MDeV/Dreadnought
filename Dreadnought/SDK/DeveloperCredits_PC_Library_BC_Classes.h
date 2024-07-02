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
	 * BlueprintGeneratedClass DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeveloperCredits_PC_Library_BC_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AddNewline(const class FText& InText, int32_t Count, class UObject* __WorldContext, class FText* OutText);
		void STATIC_BuildPCRichTextName(class FText* InText, struct FYS_MENUDeveloperCreditsName* Data, bool* InShouldAddTitle, class UObject* __WorldContext, class FText* ResultText);
		void STATIC_BuildPCRichTextSection(class FText* InText, struct FYS_MENUDeveloperCreditsSection* SectionData, class UObject* __WorldContext, class FText* ResultText);
		void STATIC_BuildPCRichTextGroup(class FText* InText, struct FYS_MENUDeveloperCreditsRow* GroupData, class UObject* __WorldContext, class FText* ResultText);
		void STATIC_BuildPCRichText(class UObject* __WorldContext, class FText* OutCreditsRichText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
