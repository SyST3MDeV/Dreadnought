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
	 * UserDefinedStruct UI_Struct_TabButtonData.UI_Struct_TabButtonData
	 * Size -> 0x0022
	 */
	struct FUI_Struct_TabButtonData
	{
	public:
		int32_t                                                    Index_7_A8600824406B6AA65D6A59B2B774D560;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EPOP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Label_8_A4E470B44C44C34829699380434504D0;                // 0x0008(0x0018) Edit, BlueprintVisible
		bool                                                       Closable_10_F45B71114F84CCE1A70BBB9781FFDC19;            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsGold_13_B6956D284A221F7B3C030A84008B755D;              // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
