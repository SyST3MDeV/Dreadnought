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
	 * UserDefinedStruct UI_Struct_AccordionFilterCategoryData.UI_Struct_AccordionFilterCategoryData
	 * Size -> 0x0028
	 */
	struct FUI_Struct_AccordionFilterCategoryData
	{
	public:
		class FText                                                Label_4_96659D034C6C27A0091487983DDEBFF7;                // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<struct FUI_Struct_AccordionFilterCategoryOptionData> Options_7_02FDB5004321D2522085E7BA0D5FA497;              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
