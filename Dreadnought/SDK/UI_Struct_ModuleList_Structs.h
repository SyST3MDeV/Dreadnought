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
	 * UserDefinedStruct UI_Struct_ModuleList.UI_Struct_ModuleList
	 * Size -> 0x0028
	 */
	struct FUI_Struct_ModuleList
	{
	public:
		class FText                                                Title_4_3DB62A9D412454532EE179857B6EFDDB;                // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<struct FUI_Struct_ModuleListRow>                    Modules_8_340BB1CB41A2AC9C08579998487C9FC5;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
