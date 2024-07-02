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
	 * UserDefinedStruct UI_Struct_ModuleListRow.UI_Struct_ModuleListRow
	 * Size -> 0x003C
	 */
	struct FUI_Struct_ModuleListRow
	{
	public:
		class FText                                                Name_8_A790D179491BA70FBD2345BBC4804687;                 // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_7_F8F357CE44F8C0FA9E134D88908A121D;          // 0x0018(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          Icon_6_837F97F24B4A8D8F93B28D941860A8E6;                 // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Tier_11_EBFE1C5642A0E0A3E79A8A858EDD11DF;                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
