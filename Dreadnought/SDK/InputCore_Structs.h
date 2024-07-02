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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum InputCore.ETouchIndex
	 */
	enum class ETouchIndex : uint8_t
	{
		Touch1  = 0,
		Touch2  = 1,
		Touch3  = 2,
		Touch4  = 3,
		Touch5  = 4,
		Touch6  = 5,
		Touch7  = 6,
		Touch8  = 7,
		Touch9  = 8,
		Touch10 = 9,
		MAX     = 10
	};

	/**
	 * Enum InputCore.EControllerHand
	 */
	enum class EControllerHand : uint8_t
	{
		Left           = 0,
		Right          = 1,
		Pad            = 2,
		ExternalCamera = 3,
		Special        = 4,
		Special01      = 5,
		Special02      = 6,
		Special03      = 7,
		Special04      = 8,
		Special05      = 9,
		Special06      = 10,
		Special07      = 11,
		Special08      = 12,
		MAX            = 13
	};

	/**
	 * Enum InputCore.ETouchType
	 */
	enum class ETouchType : uint8_t
	{
		Began      = 0,
		Moved      = 1,
		Stationary = 2,
		Ended      = 3,
		NumTypes   = 4,
		MAX        = 5
	};

	/**
	 * Enum InputCore.EConsoleForGamepadLabels
	 */
	enum class EConsoleForGamepadLabels : uint8_t
	{
		None    = 0,
		XBoxOne = 1,
		PS4     = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InputCore.Key
	 * Size -> 0x0018
	 */
	struct FKey
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R8EH[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
