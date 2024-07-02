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
	 * UserDefinedStruct UI_Struct_FriendList.UI_Struct_FriendList
	 * Size -> 0x0029
	 */
	struct FUI_Struct_FriendList
	{
	public:
		class FText                                                Label_2_0B260B0C4002D1DDFE8D4C93ADB1706E;                // 0x0000(0x0018) Edit, BlueprintVisible
		TArray<struct FUI_Struct_FriendData>                       FriendList_6_15ABD9A0484AB36B19A3EEB691E3339B;           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		ESocialSection                                             SocialSection_10_501036EC43D1DCA86A4C09B7E8643B88;       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
