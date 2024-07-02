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
	 * UserDefinedStruct UI_Struct_NotificationButtonText.UI_Struct_NotificationButtonText
	 * Size -> 0x0020
	 */
	struct FUI_Struct_NotificationButtonText
	{
	public:
		ENotificationButtonType                                    ButtonType_2_49C120DB42A5DDD6A401B9A340F63152;           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSEO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Label_5_5BC5944A469CB02319E31FA09C2BF001;                // 0x0008(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
