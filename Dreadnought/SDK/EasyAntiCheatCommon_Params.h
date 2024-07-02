#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
	 */
	struct UEasyAntiCheatNetComponent_ServerMessage_Params
	{
	public:
		TArray<unsigned char>                                      message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
	 */
	struct UEasyAntiCheatNetComponent_ClientMessage_Params
	{
	public:
		TArray<unsigned char>                                      message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
