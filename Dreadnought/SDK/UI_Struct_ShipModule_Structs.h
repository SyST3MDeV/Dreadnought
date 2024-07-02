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
	 * UserDefinedStruct UI_Struct_ShipModule.UI_Struct_ShipModule
	 * Size -> 0x0020
	 */
	struct FUI_Struct_ShipModule
	{
	public:
		bool                                                       IsEquipped_1_8E4F88F64B990D291B3F528E5792F8F3;           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NIHD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Tier_4_6C5813D443766C4AE2FF689DDFBAF068;                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          IconTexture_8_547B859541A6D41FA89B0CB9AB07F25F;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              ModuleName_11_731858B34DC524673E363387220C33AF;          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
