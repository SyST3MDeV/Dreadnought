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
	 * Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetDataFromStruct
	 */
	struct UUI_Generic_Module_TitleWidget_C_SetDataFromStruct_Params
	{
	public:
		struct FUIGenericButtonModuleData                          moduleData;                                              // 0x0000(0x00C0)  (Parm)
	};

	/**
	 * Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.SetData
	 */
	struct UUI_Generic_Module_TitleWidget_C_SetData_Params
	{
	public:
		class UTexture2D*                                          ClassIcon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          TierIcon;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ModuleName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    ModuleTier;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.Construct
	 */
	struct UUI_Generic_Module_TitleWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.UpdateIconsAndText
	 */
	struct UUI_Generic_Module_TitleWidget_C_UpdateIconsAndText_Params
	{
	public:
		class UTexture2D*                                          ClassIcon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          TierIcon;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ModuleName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    ModuleTier;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C.ExecuteUbergraph_UI_Generic_Module_TitleWidget
	 */
	struct UUI_Generic_Module_TitleWidget_C_ExecuteUbergraph_UI_Generic_Module_TitleWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2CVL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
