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
	 * UserDefinedStruct UI_Struct_FriendData.UI_Struct_FriendData
	 * Size -> 0x0079
	 */
	struct FUI_Struct_FriendData
	{
	public:
		class FName                                                ID_12_3444C59042AE6EBBC176E7AE22641F49;                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              Name_8_92EB4A8549FE00BF3C4AE78AE811495D;                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    UserNumber_20_922F2C0842F69D90920FC1A3BB19B365;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XT0H[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CaptainIconPath_15_748A6E8049CB01F5090BBCA2C34009DB;     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       InSquad_11_3E03A16F4FFBD72186567A923E1ED055;             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EYUIFriendStatus                                           Status_10_2051D458499D35E0EC4BC3BEB01712B6;              // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UB3U[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SceAccountId_23_0BDD58114DA2EF48BD66349E3E4765FE;        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    Rank_33_0160772F49031B8CE33D51A1A9AC2299;                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A80Q[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RankName_32_11FDB8E24164B734704809B3B542D7FB;            // 0x0050(0x0018) Edit, BlueprintVisible
		class FString                                              RankImage_31_C1E150974C3C3BD5810430A5E61CE8DC;           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       IsElite_34_FC6897D341FD930725799B80E992F7A0;             // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
