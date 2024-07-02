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
	 * Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.AddNewline
	 */
	struct UDeveloperCredits_PC_Library_BC_C_AddNewline_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm)
		int32_t                                                    Count;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_09CM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                OutText;                                                 // 0x0028(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextName
	 */
	struct UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		struct FYS_MENUDeveloperCreditsName                        Data;                                                    // 0x0018(0x0030)  (Parm, OutParm, ReferenceParm)
		bool                                                       InShouldAddTitle;                                        // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HPGU[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ResultText;                                              // 0x0058(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextSection
	 */
	struct UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextSection_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		struct FYS_MENUDeveloperCreditsSection                     SectionData;                                             // 0x0018(0x0028)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ResultText;                                              // 0x0048(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichTextGroup
	 */
	struct UDeveloperCredits_PC_Library_BC_C_BuildPCRichTextGroup_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		struct FYS_MENUDeveloperCreditsRow                         GroupData;                                               // 0x0018(0x0030)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ResultText;                                              // 0x0050(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DeveloperCredits_PC_Library_BC.DeveloperCredits_PC_Library_BC_C.BuildPCRichText
	 */
	struct UDeveloperCredits_PC_Library_BC_C_BuildPCRichText_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                OutCreditsRichText;                                      // 0x0008(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
