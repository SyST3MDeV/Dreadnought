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
	 * UserDefinedStruct UI_Struct_ShipLoadout.UI_Struct_ShipLoadout
	 * Size -> 0x0078
	 */
	struct FUI_Struct_ShipLoadout
	{
	public:
		struct FUI_Struct_ModuleList                               Weapons_16_2AF217D246E3112889CF35AC35081CCB;             // 0x0000(0x0028) Edit, BlueprintVisible
		struct FUI_Struct_ModuleList                               Modules_17_CFB2EF42491C8B18880AD39454A1B020;             // 0x0028(0x0028) Edit, BlueprintVisible
		struct FUI_Struct_ModuleList                               OfficerBriefings_18_DDFC86CE4D6633F594CB25B8FAB02B15;    // 0x0050(0x0028) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
