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
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class EBeaconConnectionState : uint8_t
	{
		Invalid = 0,
		Closed  = 1,
		Pending = 2,
		Open    = 3,
		MAX     = 4
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		NoResult                   = 0,
		RequestPending             = 1,
		GeneralError               = 2,
		PartyLimitReached          = 3,
		IncorrectPlayerCount       = 4,
		RequestTimedOut            = 5,
		ReservationDuplicate       = 6,
		ReservationNotFound        = 7,
		ReservationAccepted        = 8,
		ReservationDenied          = 9,
		ReservationDenied_Banned   = 10,
		ReservationRequestCanceled = 11,
		ReservationInvalid         = 12,
		BadSessionId               = 13,
		MAX                        = 14
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class EClientRequestType : uint8_t
	{
		NonePending                = 0,
		ExistingSessionReservation = 1,
		ReservationUpdate          = 2,
		EmptyServerReservation     = 3,
		Reconnect                  = 4,
		MAX                        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x00B8
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_LLAH[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PlayerReservation
	 * Size -> 0x0030
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) Transient, NativeAccessSpecifierPublic
		class FString                                              ValidationStr;                                           // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WDU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyReservation
	 * Size -> 0x0030
	 */
	struct FPartyReservation
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAJE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0018) Transient, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
	 * Size -> 0x0040
	 */
	struct FPIELoginSettingsInternal
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      TokenBytes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
