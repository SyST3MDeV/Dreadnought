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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UEasyAntiCheatNetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L6G8[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMessage(TArray<unsigned char> message);
		void ClientMessage(TArray<unsigned char> message);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
