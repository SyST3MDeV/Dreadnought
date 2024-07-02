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
	 * UserDefinedStruct UI_Struct_AccordionFilterData.UI_Struct_AccordionFilterData
	 * Size -> 0x0040
	 */
	struct FUI_Struct_AccordionFilterData
	{
	public:
		class FText                                                Header_7_C146094743183D8C63224A8B52923827;               // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_9_194AD15C429D3808EC769C93B0E0D0FF;          // 0x0018(0x0018) Edit, BlueprintVisible
		TArray<struct FUI_Struct_AccordionFilterCategoryData>      OptionData_3_7DCB613144D32517AB7D6A8545572EC6;           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
