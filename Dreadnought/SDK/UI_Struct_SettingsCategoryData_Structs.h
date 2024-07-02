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
	 * UserDefinedStruct UI_Struct_SettingsCategoryData.UI_Struct_SettingsCategoryData
	 * Size -> 0x0018
	 */
	struct FUI_Struct_SettingsCategoryData
	{
	public:
		EYUISettingCategory                                        Group_7_33BC394347A92D9484C43E9AD23A968B;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJ6V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIUserSetting>                             Settings_6_76B97AB34FCBA722EA21F0926AC8BD5C;             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
