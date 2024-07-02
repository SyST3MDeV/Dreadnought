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
	 * Enum YMmogbrain.EYScoringEventRewardCategory
	 */
	enum class EYScoringEventRewardCategory : uint8_t
	{
		EYSERC_None        = 0,
		EYSERC_Base        = 1,
		EYSERC_Performance = 2,
		EYSERC_MAX         = 3
	};

	/**
	 * Enum YMmogbrain.EYScoringEventID
	 */
	enum class EYScoringEventID : uint8_t
	{
		YSEID_CaptainKill_SameTier                 = 0,
		YSEID_CaptainKill_LowerTier1               = 1,
		YSEID_CaptainKill_LowerTier2               = 2,
		YSEID_CaptainKill_HigherTier1              = 3,
		YSEID_CaptainKill_HigherTier2              = 4,
		YSEID_CriticalAssist_SameTier              = 5,
		YSEID_CriticalAssist_LowerTier1            = 6,
		YSEID_CriticalAssist_LowerTier2            = 7,
		YSEID_CriticalAssist_HigherTier1           = 8,
		YSEID_CriticalAssist_HigherTier2           = 9,
		YSEID_Assist                               = 10,
		YSEID_Repair                               = 11,
		YSEID_Guardian                             = 12,
		YSEID_Payback                              = 13,
		YSEID_Suppression                          = 14,
		YSEID_AITargetL                            = 15,
		YSEID_AITargetM                            = 16,
		YSEID_AITargetH                            = 17,
		YSEID_AITargetLAssist                      = 18,
		YSEID_AITargetMAssist                      = 19,
		YSEID_AITargetHAssist                      = 20,
		YSEID_Dominator                            = 21,
		YSEID_Rampage                              = 22,
		YSEID_Comeback                             = 23,
		YSEID_FirstStrike                          = 24,
		YSEID_Desolator                            = 25,
		YSEID_Warfare                              = 26,
		YSEID_Vanguard                             = 27,
		YSEID_Winner                               = 28,
		YSEID_GoodSport                            = 29,
		YSEID_Saviour                              = 30,
		YSEID_Ninja                                = 31,
		YSEID_Saboteur                             = 32,
		YSEID_Avenger                              = 33,
		YSEID_EagleEye                             = 34,
		YSEID_Mayham                               = 35,
		YSEID_Intervention                         = 36,
		YSEID_CutTheLifeline                       = 37,
		YSEID_Parry                                = 38,
		YSEID_Marksman                             = 39,
		YSEID_MatchEnd                             = 40,
		YSEID_ManOfTheDay                          = 41,
		YSEID_MVP                                  = 42,
		YSEID_GoalOriented                         = 43,
		YSEID_Supporter                            = 44,
		YSEID_BloodThurst                          = 45,
		YSEID_SecondHand                           = 46,
		YSEID_Concentrator                         = 47,
		YSEID_Fearless                             = 48,
		YSEID_Finisher                             = 49,
		YSEID_Predator                             = 50,
		YSEID_FinalBlow                            = 51,
		YSEID_TerritoryContribution                = 52,
		YSEID_TerritoryKill                        = 53,
		YSEID_TerritoryCleared                     = 54,
		YSEID_TerritoryCapturedPoint               = 55,
		YSEID_TerritoryCapturingPoint              = 56,
		YSEID_BossCarrierCaptainKill               = 57,
		YSEID_BossCarrierCriticalAssist            = 58,
		YSEID_transportCaptainKill                 = 59,
		YSEID_transportCriticalAssist              = 60,
		YSEID_droneCaptainKill                     = 61,
		YSEID_droneCriticalAssist                  = 62,
		YSEID_PlayTime                             = 63,
		YSEID_IncomingRawDamage                    = 64,
		YSEID_IncomingRawDamageThisLife            = 65,
		YSEID_IncomingRawDamageThisLife2           = 66,
		YSEID_RecentIncomingRawDamageXCloseEnemies = 67,
		YSEID_HavocXPKill                          = 68,
		YSEID_HavocXPPickup                        = 69,
		YSEID_HavocXPBossPickup                    = 70,
		YSEID_PVEQuickKill                         = 71,
		YSEID_Cheat                                = 72,
		YSEID_TerritoryProtectCP                   = 73,
		YSEID_PODTDMPickup                         = 74,
		YSEID_Invalid                              = 75,
		YSEID_Max                                  = 76
	};

	/**
	 * Enum YMmogbrain.EYFleetType
	 */
	enum class EYFleetType : uint8_t
	{
		EYFT_None      = 0,
		EYFT_Recruit   = 1,
		EYFT_Veteran   = 2,
		EYFT_Legendary = 3,
		EYFT_MAX       = 4
	};

	/**
	 * Enum YMmogbrain.EYCurrency
	 */
	enum class EYCurrency : uint8_t
	{
		YC_HardCurrency  = 0,
		YC_SoftCurrency  = 1,
		YC_RealCurrency  = 2,
		YC_NumCurrencies = 3,
		YC_MAX           = 4
	};

	/**
	 * Enum YMmogbrain.EYAIType
	 */
	enum class EYAIType : uint8_t
	{
		EYFT_Default   = 0,
		EYFT_Sheltered = 1,
		EYFT_MAX       = 2
	};

	/**
	 * Enum YMmogbrain.EYPurchaseResult
	 */
	enum class EYPurchaseResult : uint8_t
	{
		NoError           = 0,
		InvalidOffer      = 1,
		OfferExpired      = 2,
		MaxAmountExceeded = 3,
		ItemNotUnlocked   = 4,
		InvalidCampaign   = 5,
		InactiveCampaign  = 6,
		BadPlayerData     = 7,
		PurchaseFailure   = 8,
		MAX               = 9
	};

	/**
	 * Enum YMmogbrain.EYPlayerStatsCounterSubId
	 */
	enum class EYPlayerStatsCounterSubId : uint8_t
	{
		None                     = 0,
		ClassDestroyer           = 1,
		ClassDreadnought         = 2,
		ClassCorvette            = 3,
		ClassArtilleryCruiser    = 4,
		ClassTacticalCruiser     = 5,
		ClassFighterJet          = 6,
		ClassCommandShip         = 7,
		GameModeOnslaught        = 8,
		GameModeTeamDeathMatch   = 9,
		GameModeTeamElimination  = 10,
		GameModeTerritory        = 11,
		GameModeHavoc            = 12,
		GameModePVE              = 13,
		GameModeBootCamp         = 14,
		GameModeCustomGame       = 15,
		Tier1                    = 16,
		Tier2                    = 17,
		Tier3                    = 18,
		Tier4                    = 19,
		Tier5                    = 20,
		PlayerStateEnemyDebuffed = 21,
		PlayerStateInSquad       = 22,
		PlayerStateIsDead        = 23,
		WeaponPrimary            = 24,
		WeaponSecondary          = 25,
		FleetRecruit             = 26,
		FleetVeteran             = 27,
		FleetLegendary           = 28,
		COUNT                    = 29,
		MAX                      = 30
	};

	/**
	 * Enum YMmogbrain.EYPlayerStatsCounterId
	 */
	enum class EYPlayerStatsCounterId : uint8_t
	{
		DealDmg          = 0,
		DealDmgClass     = 1,
		FinishContracts  = 2,
		HealHP           = 3,
		KillPlayers      = 4,
		KillPlayersClass = 5,
		KillPlayersMode  = 6,
		KillPlayersState = 7,
		KillsOfClass     = 8,
		DoubleKill       = 9,
		TripleKill       = 10,
		KillWithWeapon   = 11,
		PlayMatches      = 12,
		PlayMatchesClass = 13,
		PlayMatchesMode  = 14,
		TimeUseShipClass = 15,
		TimeUseShipTier  = 16,
		WinMatches       = 17,
		WinMatchesClass  = 18,
		WinMatchesMode   = 19,
		WinMatchesFleet  = 20,
		MatchesNoDieMode = 21,
		AssistPlayer     = 22,
		Besties          = 23,
		MVP              = 24,
		HavocHasty       = 25,
		MaxHavocWave     = 26,
		HpFullRecovery   = 27,
		COUNT            = 28,
		MAX              = 29
	};

	/**
	 * Enum YMmogbrain.EYPlayerStatsCounterType
	 */
	enum class EYPlayerStatsCounterType : uint8_t
	{
		YCT_PLAY_MATCHES      = 0,
		YCT_TIME_USE_SHIP     = 1,
		YCT_WIN_MATCHES       = 2,
		YCT_KILL_PLAYERS      = 3,
		YCT_DAMAGE_CAUSED     = 4,
		YCT_HEAL_CAUSED       = 5,
		YCT_QUEST_COMPLETED   = 6,
		YCT_ASSIST_PLAYERS    = 7,
		YCT_MVP               = 8,
		YCT_DEATHLESS_MATCHES = 9,
		YCT_HAVOC             = 10,
		YCT_SELF_HEAL         = 11,
		COUNT                 = 12,
		MAX                   = 13
	};

	/**
	 * Enum YMmogbrain.EYFleetMaintenanceType
	 */
	enum class EYFleetMaintenanceType : uint8_t
	{
		FMT_Dummy     = 0,
		FMT_TimeBased = 1,
		FMT_MAX       = 2
	};

	/**
	 * Enum YMmogbrain.EYReputationType
	 */
	enum class EYReputationType : uint8_t
	{
		REP_DREADNOUGHT_L = 0,
		REP_DREADNOUGHT_M = 1,
		REP_DREADNOUGHT_H = 2,
		REP_ASSAULT_L     = 3,
		REP_ASSAULT_M     = 4,
		REP_ASSAULT_H     = 5,
		REP_SCOUT_L       = 6,
		REP_SCOUT_M       = 7,
		REP_SCOUT_H       = 8,
		REP_SNIPER_L      = 9,
		REP_SNIPER_M      = 10,
		REP_SNIPER_H      = 11,
		REP_SUPPORT_L     = 12,
		REP_SUPPORT_M     = 13,
		REP_SUPPORT_H     = 14,
		REP_GENERAL       = 15,
		COUNT             = 16,
		MAX               = 17
	};

	/**
	 * Enum YMmogbrain.EYRepShipClasses
	 */
	enum class EYRepShipClasses : uint8_t
	{
		YRSC_DREADNOUGHT_L = 0,
		YRSC_DREADNOUGHT_M = 1,
		YRSC_DREADNOUGHT_H = 2,
		YRSC_ASSAULT_L     = 3,
		YRSC_ASSAULT_M     = 4,
		YRSC_ASSAULT_H     = 5,
		YRSC_SCOUT_L       = 6,
		YRSC_SCOUT_M       = 7,
		YRSC_SCOUT_H       = 8,
		YRSC_SNIPER_L      = 9,
		YRSC_SNIPER_M      = 10,
		YRSC_SNIPER_H      = 11,
		YRSC_SUPPORT_L     = 12,
		YRSC_SUPPORT_M     = 13,
		YRSC_SUPPORT_H     = 14,
		COUNT              = 15,
		MAX                = 16
	};

	/**
	 * Enum YMmogbrain.EYFriendStatus
	 */
	enum class EYFriendStatus : uint8_t
	{
		FRIEND_NONE            = 0,
		FRIEND_PENDING_REQUEST = 1,
		FRIEND_PENDING_ACCEPT  = 2,
		FRIEND_ACCEPTED        = 3,
		FRIEND_ONLINE          = 4,
		FRIEND_PLAYING         = 5,
		FRIEND_BLOCKED         = 6,
		FRIEND_MAX             = 7
	};

	/**
	 * Enum YMmogbrain.EYCustomMatchSettingID
	 */
	enum class EYCustomMatchSettingID : uint8_t
	{
		TeamSize        = 0,
		Team1FillWithAI = 1,
		Team2FillWithAI = 2,
		Metadata        = 3,
		COUNT           = 4,
		MAX             = 5
	};

	/**
	 * Enum YMmogbrain.EYCustomMatchTeam
	 */
	enum class EYCustomMatchTeam : uint8_t
	{
		Team1   = 0,
		Team2   = 1,
		COUNT   = 2,
		INVALID = 3,
		MAX     = 4
	};

	/**
	 * Enum YMmogbrain.EChatType
	 */
	enum class EChatType : uint8_t
	{
		Invalid     = 0,
		MatchAll    = 1,
		MatchTeam   = 2,
		Squad       = 3,
		Whisper     = 4,
		Universal   = 5,
		Error       = 6,
		Global      = 7,
		Language    = 8,
		Warning     = 9,
		CustomLobby = 10,
		System      = 11,
		Admin       = 12,
		MAX         = 13
	};

	/**
	 * Enum YMmogbrain.EYRoomState
	 */
	enum class EYRoomState : uint8_t
	{
		Created               = 0,
		ReadyToStart          = 1,
		ServerFinishedLoading = 2,
		LateJoiningDisabled   = 3,
		MatchOver             = 4,
		PostMatch             = 5,
		Closed                = 6,
		MAX                   = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct YMmogbrain.YPlayerStatsCounterData
	 * Size -> 0x0010
	 */
	struct FYPlayerStatsCounterData
	{
	public:
		unsigned char                                              UnknownData_63LU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct YMmogbrain.YCounterData
	 * Size -> 0x0018
	 */
	struct FYCounterData
	{
	public:
		unsigned char                                              UnknownData_PEW2[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct YMmogbrain.YRequeueRoomUser
	 * Size -> 0x0010
	 */
	struct FYRequeueRoomUser
	{
	public:
		unsigned char                                              UnknownData_S4JN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
