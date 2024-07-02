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
	 * UserDefinedStruct UI_Struct_FriendOptionList.UI_Struct_FriendOptionList
	 * Size -> 0x0010
	 */
	struct FUI_Struct_FriendOptionList
	{
	public:
		TArray<struct FUI_Struct_FriendOptionNamePair>             FriendOptionsList_3_BFA746554046507328B0229BD30DA31D;    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
