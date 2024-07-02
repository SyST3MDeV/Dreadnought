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
	 * Enum DreadGame.EYSoftCollisionSector
	 */
	enum class EYSoftCollisionSector : uint8_t
	{
		YCSE_FRONT = 0,
		YCSE_BACK  = 1,
		YCSE_TOP   = 2,
		YCSE_DOWN  = 3,
		YCSE_LEFT  = 4,
		YCSE_RIGHT = 5,
		YCSE_MAX   = 6
	};

	/**
	 * Enum DreadGame.EYEnergyWheelSelection
	 */
	enum class EYEnergyWheelSelection : uint8_t
	{
		YEWS_NONE     = 0,
		YEWS_THRUSTER = 1,
		YEWS_SHIELD   = 2,
		YEWS_WEAPON   = 3,
		YEWS_OFF      = 4,
		YEWS_MAX      = 5
	};

	/**
	 * Enum DreadGame.EYMeshPartType
	 */
	enum class EYMeshPartType : uint8_t
	{
		YMPT_HULL       = 0,
		YMPT_STERN      = 1,
		YMPT_FORECASTLE = 2,
		YMPT_BRIDGE     = 3,
		YMPT_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYPlayerMatchStatMedalType
	 */
	enum class EYPlayerMatchStatMedalType : uint8_t
	{
		YPMSMT_Gold    = 0,
		YPMSMT_NoneMAX = 1,
		YPMSMT_MAX     = 2
	};

	/**
	 * Enum DreadGame.EYPlayerMatchStatComparison
	 */
	enum class EYPlayerMatchStatComparison : uint8_t
	{
		YPMSC_NONE            = 0,
		YPMSC_TopRankInMatch  = 1,
		YPMSC_TopRankInTeam   = 2,
		YPMSC_AvgRankInMatch  = 3,
		YPMSC_AvgRankInCareer = 4,
		YPMSC_PureStat        = 5,
		YPMSC_MAX             = 6
	};

	/**
	 * Enum DreadGame.EYPlayerMatchStatisticsCategoryID
	 */
	enum class EYPlayerMatchStatisticsCategoryID : uint8_t
	{
		YPMSCID_NONE                         = 0,
		YPMSCID_Assists                      = 1,
		YPMSCID_Kills                        = 2,
		YPMSCID_DoubleKills                  = 3,
		YPMSCID_DamageCausedDestroyer        = 4,
		YPMSCID_DamageCausedDreadnought      = 5,
		YPMSCID_DamageCausedCorvette         = 6,
		YPMSCID_DamageCausedArtilleryCruiser = 7,
		YPMSCID_DamageCausedTacticalCruiser  = 8,
		YPMSCID_DamageCausedByAbilities      = 9,
		YPMSCID_PowerUsage                   = 10,
		YPMSCID_Healing                      = 11,
		YPMSCID_ControlPointsCaptured        = 12,
		YPMSCID_ControlPointDefenseKills     = 13,
		YPMSCID_TotalAmountTerritoryClaimed  = 14,
		YPMSCID_TotalAmountTerritoryCleared  = 15,
		YPMSCID_MAX                          = 16
	};

	/**
	 * Enum DreadGame.EYShipClass
	 */
	enum class EYShipClass : uint8_t
	{
		YSC_NONE                = 0,
		YSC_DREADNOUGHT_LIGHT   = 1,
		YSC_SCOUT_LIGHT         = 2,
		YSC_SNIPER_LIGHT        = 3,
		YSC_SUPPORT_LIGHT       = 4,
		YSC_ASSAULT_LIGHT       = 5,
		YSC_DREADNOUGHT_MEDIUM  = 6,
		YSC_DREADNOUGHT_HEAVY   = 7,
		YSC_SCOUT_MEDIUM        = 8,
		YSC_SCOUT_HEAVY         = 9,
		YSC_SNIPER_MEDIUM       = 10,
		YSC_SNIPER_HEAVY        = 11,
		YSC_SUPPORT_MEDIUM      = 12,
		YSC_SUPPORT_HEAVY       = 13,
		YSC_ASSAULT_MEDIUM      = 14,
		YSC_ASSAULT_HEAVY       = 15,
		YSC_RESPAWNJET          = 16,
		YSC_MINE                = 17,
		YSC_TURRETS             = 18,
		YSC_RESPAWNJET2         = 19,
		YSC_RESPAWNJET3         = 20,
		YSC_RESPAWNJET4         = 21,
		YSC_CREEP               = 22,
		YSC_BOSS_CARRIER        = 23,
		YSC_PASSENGER_TRANSPORT = 24,
		YSC_CARGO_TRANSPORT     = 25,
		YSC_TRAINING_DRONE      = 26,
		YSC_AI_CREEP_SMALL      = 27,
		YSC_AI_CREEP_MEDIUM     = 28,
		YSC_AI_CREEP_LARGE      = 29,
		YSC_MAX                 = 30
	};

	/**
	 * Enum DreadGame.EYTeam
	 */
	enum class EYTeam : uint8_t
	{
		YT_NONE   = 0,
		YT_TEAM1  = 1,
		YT_TEAM2  = 2,
		YT_TEAM3  = 3,
		YT_IGNORE = 4,
		YT_MAX    = 5
	};

	/**
	 * Enum DreadGame.EYTuneRepState
	 */
	enum class EYTuneRepState : uint8_t
	{
		EYTRP_Meta          = 0,
		EYTRP_Abilities     = 1,
		EYTRP_Weapons       = 2,
		EYTRP_Projectiles   = 3,
		EYTRP_Officers      = 4,
		EYTRP_Feats         = 5,
		EYTRP_Havoc         = 6,
		EYTRP_GameModifiers = 7,
		EYTRP_Completed     = 8,
		EYTRP_MAX           = 9
	};

	/**
	 * Enum DreadGame.EYTechTreeItemState
	 */
	enum class EYTechTreeItemState : uint8_t
	{
		Invalid    = 0,
		Locked     = 1,
		Available  = 2,
		Researched = 3,
		Owned      = 4,
		Max        = 5,
		MAX        = 6
	};

	/**
	 * Enum DreadGame.EYMenuSubState
	 */
	enum class EYMenuSubState : uint8_t
	{
		YMSS_NONE                                = 0,
		YMSS_HANGAR_LOADOUT_SELECTION            = 1,
		YMSS_HANGAR_LOADOUT_CUSTOMIZATION        = 2,
		YMSS_HANGAR_LOADOUT_DETAIL               = 3,
		YMSS_HANGAR_LOADOUT_APPEARANCE           = 4,
		YMSS_QUARTER_CAPTAIN                     = 5,
		YMSS_QUARTER_OFFICER                     = 6,
		YMSS_MARKET_FEATURED                     = 7,
		YMSS_MARKET_SHIPS                        = 8,
		YMSS_MARKET_ABILITIES                    = 9,
		YMSS_MARKET_CREW_PERKS                   = 10,
		YMSS_MARKET_APPEARANCE                   = 11,
		YMSS_MARKET_APPEARANCE_COATINGS          = 12,
		YMSS_MARKET_APPEARANCE_PATTERNS          = 13,
		YMSS_MARKET_APPEARANCE_EMBLEMS           = 14,
		YMSS_MARKET_APPEARANCE_DECALS            = 15,
		YMSS_MARKET_TRADER_SHIPS                 = 16,
		YMSS_MARKET_GOLD_MEMBERSHIP              = 17,
		YMSS_MARKET_CURRENCY_EXCHANGE            = 18,
		YMSS_MARKET_XP_EXCHANGE                  = 19,
		YMSS_MARKET_SEARCH                       = 20,
		YMSS_MARKET_ITEM_DETAILS                 = 21,
		YMSS_MARKET_QUICKPURCHASE_SOFTCURRENCY   = 22,
		YMSS_MARKET_QUICKPURCHASE_HARDCURRENCY   = 23,
		YMSS_MARKET_PAYWALL                      = 24,
		YMSS_COMMUNITY_FEATURED                  = 25,
		YMSS_COMMUNITY_STATISTICS                = 26,
		YMSS_MARKET_COMMUNITY_FEATURED           = 27,
		YMSS_MARKET_COMMUNITY_STATISTICS         = 28,
		YMSS_SHIP_MANUFACTURER_TECH_TREE_REGULAR = 29,
		YMSS_SHIP_MANUFACTURER_TECH_TREE_HERO    = 30,
		YMSS_SHIP_TECH_TREE_HANGAR_CUSTOMIZATION = 31,
		YMSS_MARKET_CAPTAIN                      = 32,
		YMSS_MARKET_BUNDLE                       = 33,
		YMSS_MARKET_VANITY                       = 34,
		YMSS_MARKET_SHIP_VANITY                  = 35,
		YMSS_MARKET_CAPTAIN_VANITY               = 36,
		YMSS_ACCOUNT_LINKING_WELCOME             = 37,
		YMSS_ACCOUNT_LINKING_CREATE              = 38,
		YMSS_ACCOUNT_LINKING_LINK                = 39,
		YMSS_ACCOUNT_LINKING_CONGRATS            = 40,
		YMSS_ACCOUNT_LINKING_POLICY              = 41,
		YMSS_ACCOUNT_LINKING_VERIFY              = 42,
		YMSS_ACCOUNT_LINKING_EULA                = 43,
		YMSS_ACCOUNT_LINKING_REACCEPT_POLICY     = 44,
		YMSS_PLAY_VERSUS                         = 45,
		YMSS_PLAY_PVE                            = 46,
		YMSS_PLAY_TEAM_DEATHMATCH                = 47,
		YMSS_PLAY_TRAINING                       = 48,
		YMSS_PLAY_TRAINING_MENU                  = 49,
		YMSS_PLAY_TUTORIAL                       = 50,
		YMSS_PLAY_VERSUS_TEAM_ELIMINATION        = 51,
		YMSS_PLAY_VERSUS_TERRITORY               = 52,
		YMSS_PLAY_COOP_ONSLAUGHT                 = 53,
		YMSS_PLAY_COOP_PVE                       = 54,
		YMSS_PLAY_COOP_HAVOC                     = 55,
		YMSS_PLAY_CUSTOM_MATCH                   = 56,
		YMSS_MAX                                 = 57
	};

	/**
	 * Enum DreadGame.EYMenuState
	 */
	enum class EYMenuState : uint8_t
	{
		YMS_INIT                        = 0,
		YMS_NONE                        = 1,
		YMS_TITLESCREEN                 = 2,
		YMS_ACCOUNT_LINKING             = 3,
		YMS_LOGIN                       = 4,
		YMS_HANGAR                      = 5,
		YMS_MARKET                      = 6,
		YMS_COMMUNITYSCREEN             = 7,
		YMS_QUARTER                     = 8,
		YMS_CHARACTER_CREATION          = 9,
		YMS_EULA_PAGE                   = 10,
		YMS_SPLASH_PAGE                 = 11,
		YMS_SHIP_MANUFACTURER_TECH_TREE = 12,
		YMS_SHIP_TECH_TREE              = 13,
		YMS_PURCHASE_SCREEN             = 14,
		YMS_DEVELOPER_CREDITS           = 15,
		YMS_STATISTICS_SCREEN           = 16,
		YMS_PLAY                        = 17,
		YMS_SQUAD                       = 18,
		YMS_OUTPOST                     = 19,
		YMS_ITEM_LIST                   = 20,
		YMS_HANGAR_ENTRY                = 21,
		YMS_HANGAR_ALL                  = 22,
		YMS_HANGAR_FLEET                = 23,
		YMS_SHIP_DETAIL                 = 24,
		YMS_SHIP_FLEET_DETAIL           = 25,
		YMS_QUARTERS_ENTRY              = 26,
		YMS_QUARTERS_OFFICERS_OVERVIEW  = 27,
		YMS_QUARTERS_OFFICER            = 28,
		YMS_QUARTERS_OFFICER_PERKS      = 29,
		YMS_QUARTERS_OFFICER_APPEARANCE = 30,
		YMS_QUARTERS_CAPTAIN            = 31,
		YMS_QUARTERS_CAPTAIN_APPEARANCE = 32,
		YMS_MANUFACTORY_ENTRY           = 33,
		YMS_MANUFACTORY_SHIPS           = 34,
		YMS_MANUFACTORY_ABILITIES       = 35,
		YMS_MANUFACTORY_WEAPONS         = 36,
		YMS_SHOP_ENTRY                  = 37,
		YMS_SHOP_FRONTPAGE              = 38,
		YMS_SHOP_CATEGORY               = 39,
		YMS_SHOP_CATEGORYVIEW           = 40,
		YMS_SHOP_PRODUCTVIEW            = 41,
		YMS_SHOP_CURRENCY_PURCHASEVIEW  = 42,
		YMS_EXPLORATION_VIEW            = 43,
		YMS_MAX                         = 44
	};

	/**
	 * Enum DreadGame.EYUILoadoutItemType
	 */
	enum class EYUILoadoutItemType : uint8_t
	{
		NONE                  = 0,
		WEAPON_FIRST          = 1,
		WEAPON_SECOND         = 2,
		ABILITY_FIRST         = 3,
		ABILITY_SECOND        = 4,
		ABILITY_THIRD         = 5,
		ABILITY_FOURTH        = 6,
		OFFICER_FIRST         = 7,
		OFFICER_SECOND        = 8,
		OFFICER_THIRD         = 9,
		OFFICER_FOURTH        = 10,
		APPEARANCE_COATING    = 11,
		APPEARANCE_PATTERN    = 12,
		APPEARANCE_EMBLEM     = 13,
		APPEARANCE_DECAL      = 14,
		APPEARANCE_FORECASTLE = 15,
		APPEARANCE_HULL       = 16,
		APPEARANCE_BRIDGE     = 17,
		APPEARANCE_STERN      = 18,
		SHIP_CLASS            = 19,
		ELITE_STATUS          = 20,
		MAX                   = 21,
		MAX01                 = 22
	};

	/**
	 * Enum DreadGame.EYCameraPreviewComponentType
	 */
	enum class EYCameraPreviewComponentType : uint8_t
	{
		EYCPC_None             = 0,
		EYCPC_Ship             = 1,
		EYCPC_PrimaryAbility   = 2,
		EYCPC_SecondaryAbility = 3,
		EYCPC_PerimeterAbility = 4,
		EYCPC_InternalAbility  = 5,
		EYCPC_PrimaryWeapon    = 6,
		EYCPC_SecondaryWeapon  = 7,
		EYCPC_Paint            = 8,
		EYCPC_Emblem           = 9,
		EYCPC_Decal            = 10,
		EYCPC_Bridge           = 11,
		EYCPC_Stern            = 12,
		EYCPC_Hull             = 13,
		EYCPC_Forecastle       = 14,
		EYCPC_Character        = 15,
		EYCPC_CharacterHair    = 16,
		EYCPC_CharacterHead    = 17,
		EYCPC_CharacterBody    = 18,
		EYCPC_MAX              = 19
	};

	/**
	 * Enum DreadGame.EComparisonType
	 */
	enum class EComparisonType : uint8_t
	{
		HigherBetter = 0,
		LowerBetter  = 1,
		NoComparison = 2,
		MAX          = 3
	};

	/**
	 * Enum DreadGame.EYToolTipValueType
	 */
	enum class EYToolTipValueType : uint8_t
	{
		ETTVT_Bar   = 0,
		ETTVT_Num   = 1,
		ETTVT_Text  = 2,
		ETTVT_Icons = 3,
		ETTVT_MAX   = 4
	};

	/**
	 * Enum DreadGame.EYAbilityCategory
	 */
	enum class EYAbilityCategory : uint8_t
	{
		YAC_PRIMARY   = 0,
		YAC_SECONDARY = 1,
		YAC_PERIMETER = 2,
		YAC_MOVEMENT  = 3,
		YAC_MAX       = 4
	};

	/**
	 * Enum DreadGame.EYOutpostSection
	 */
	enum class EYOutpostSection : uint8_t
	{
		EYOS_None                 = 0,
		EYOS_Login                = 1,
		EYOS_Hangar               = 2,
		EYOS_HangarCustomization  = 3,
		EYOS_Quarter              = 4,
		EYOS_QuarterCaptain       = 5,
		EYOS_QuarterCaptainMarket = 6,
		EYOS_QuarterOfficers      = 7,
		EYOS_TechTree             = 8,
		EYOS_Market               = 9,
		EYOS_PurchaseScreen       = 10,
		EYOS_Dashboard            = 11,
		EYOS_StatisticsScreen     = 12,
		EYOS_MAX                  = 13
	};

	/**
	 * Enum DreadGame.EYGameModeType
	 */
	enum class EYGameModeType : uint8_t
	{
		YGMT_NONE             = 0,
		YGMT_SINGLE_PLAYER    = 1,
		YGMT_OUTPOST          = 2,
		YGMT_TDM              = 3,
		YGMT_POD_TDM          = 4,
		YGMT_TE               = 5,
		YGMT_TER              = 6,
		YGMT_TUTORIAL         = 7,
		YGMT_TM               = 8,
		YGMT_TMBASIC          = 9,
		YGMT_VISUALATTRACTION = 10,
		YGMT_BENCHMARK        = 11,
		YGMT_DEMOMODE         = 12,
		YGMT_HORDE            = 13,
		YGMT_ESCORT           = 14,
		YGMT_DESTROY          = 15,
		YGMT_INVASION         = 16,
		YGMT_HAVOC            = 17,
		YGMT_BOOTCAMP         = 18,
		YGMT_PVE              = 19,
		YGMT_CUSTOMGAME       = 20,
		YGMT_TURBO_TDM        = 21,
		YGMT_MAX              = 22
	};

	/**
	 * Enum DreadGame.EYItemActionAvailability
	 */
	enum class EYItemActionAvailability : uint8_t
	{
		YIPA_UNKNOWN                       = 0,
		YIPA_AVAILABLE                     = 1,
		YIPA_NOT_ENOUGHT_MONEY             = 2,
		YIPA_NOT_ENOUGH_XP                 = 3,
		YIPA_RESEARCH_REQUIREMENTS_NOT_MET = 4,
		YIPA_NOT_FOR_PURCHASE              = 5,
		YIPA_OWNED                         = 6,
		YIPA_XP_CONVERSION_AVAILABLE       = 7,
		YIPA_NOT_ENOUGH_OWNED_ITEMS        = 8,
		Y_MAX                              = 9,
		MAX                                = 10
	};

	/**
	 * Enum DreadGame.EYPurchaseItemType
	 */
	enum class EYPurchaseItemType : uint8_t
	{
		YPIT_NONE                              = 0,
		YPIT_SHIP                              = 1,
		YPIT_HERO_SHIP                         = 2,
		YPIT_HAVOC_UNLOCKABLE_HERO_SHIP        = 3,
		YPIT_BUNDLE                            = 4,
		YPIT_HAVOC_UNLOCKABLE_HERO_SHIP_BUNDLE = 5,
		YPIT_WMB                               = 6,
		YPIT_VANITY                            = 7,
		YPIT_HARDCURRENCY                      = 8,
		YPIT_ELITE_STATUS                      = 9,
		YPIT_MAX                               = 10
	};

	/**
	 * Enum DreadGame.EYUIInformationPanelType
	 */
	enum class EYUIInformationPanelType : uint8_t
	{
		Bar              = 0,
		Number           = 1,
		Text             = 2,
		Icon             = 3,
		Loadout          = 4,
		SingleText       = 5,
		Warning          = 6,
		WarningAlt       = 7,
		PriceData        = 8,
		ShipHeader       = 9,
		MyShipHeader     = 10,
		Line             = 11,
		CustomIcon       = 12,
		PriceData2       = 13,
		CalloutTextShort = 14,
		CalloutTextLong  = 15,
		TraderShipHeader = 16,
		ShipCaptainIcon  = 17,
		MAX              = 18
	};

	/**
	 * Enum DreadGame.EYGoldMemberShipTresholdsTypes
	 */
	enum class EYGoldMemberShipTresholdsTypes : uint8_t
	{
		EYGMTT_None         = 0,
		EYGMTT_Days         = 1,
		EYGMTT_Hours        = 2,
		EYGMTT_SingleHour   = 3,
		EYGMTT_Minutes      = 4,
		EYGMTT_SingleMinute = 5,
		EYGMTT_ZeroMinutes  = 6,
		EYGMTT_Default      = 7,
		EYGMTT_MAX          = 8
	};

	/**
	 * Enum DreadGame.EYPS4ButtonIcon
	 */
	enum class EYPS4ButtonIcon : uint8_t
	{
		YPS4BI_NONE      = 0,
		YPS4BI_UP        = 1,
		YPS4BI_LEFT      = 2,
		YPS4BI_RIGHT     = 3,
		YPS4BI_DOWN      = 4,
		YPS4BI_TRIANGLE  = 5,
		YPS4BI_SQUARE    = 6,
		YPS4BI_CROSS     = 7,
		YPS4BI_CIRCLE    = 8,
		YPS4BI_L1        = 9,
		YPS4BI_L2        = 10,
		YPS4BI_L3        = 11,
		YPS4BI_R1        = 12,
		YPS4BI_R2        = 13,
		YPS4BI_R3        = 14,
		YPS4BI_TOUCH_PAD = 15,
		YPS4BI_OPTIONS   = 16,
		YPS4BI_L_STICK   = 17,
		YPS4BI_R_STICK   = 18,
		YPS4BI_MAX       = 19
	};

	/**
	 * Enum DreadGame.EYLiveTileType
	 */
	enum class EYLiveTileType : uint8_t
	{
		LIVE_TILE_TYPE_NONE               = 0,
		LIVE_TILE_TYPE_MARKET             = 1,
		LIVE_TILE_TYPE_LINK               = 2,
		LIVE_TILE_TYPE_CAROUSEL           = 3,
		LIVE_TILE_TYPE_PSN_STORE_PRODUCT  = 4,
		LIVE_TILE_TYPE_PSN_STORE_CATEGORY = 5,
		LIVE_TILE_TYPE_CONTRACT           = 6,
		LIVE_TILE_TYPE_CAREER_PROGRESSION = 7,
		LIVE_TILE_TYPE_MAX                = 8
	};

	/**
	 * Enum DreadGame.EYMenuMetaState
	 */
	enum class EYMenuMetaState : uint8_t
	{
		YMMS_NONE                         = 0,
		YMMS_PLAY                         = 1,
		YMMS_OVERLAYMENU                  = 2,
		YMMS_LOGBOOK                      = 3,
		YMMS_HELP                         = 4,
		YMMS_SETTINGS                     = 5,
		YMMS_CHAT                         = 6,
		YMMS_FRIEND_LIST                  = 7,
		YMMS_SQUAD                        = 8,
		YMMS_CLAN                         = 9,
		YMMS_BACK                         = 10,
		YMMS_CURRENCY_CONVERSION          = 11,
		YMMS_FREE_XP_CONVERSION           = 12,
		YMMS_CAREER_PROGRESSION           = 13,
		YMMS_FLEET_SELECTOR               = 14,
		YMMS_CURRENCY_CONVERSION_SELECTOR = 15,
		YMMS_COMPLETED_CONTRACT           = 16,
		YMMS_DASHBOARD                    = 17,
		YMMS_MAX                          = 18
	};

	/**
	 * Enum DreadGame.EYMenuTilePlayGoVisibility
	 */
	enum class EYMenuTilePlayGoVisibility : uint8_t
	{
		NoRestriction   = 0,
		PlayGoOnly      = 1,
		FullInstallOnly = 2,
		PlayGoLocked    = 3,
		MAX             = 4
	};

	/**
	 * Enum DreadGame.EYUIMenuSearchFilterType
	 */
	enum class EYUIMenuSearchFilterType : uint8_t
	{
		Ship            = 0,
		WeaponAbilities = 1,
		Appearance      = 2,
		Officer         = 3,
		Captain         = 4,
		Bundle          = 5,
		Total           = 6,
		Coatings        = 7,
		Patterns        = 8,
		Emblems         = 9,
		Decals          = 10,
		MAX             = 11
	};

	/**
	 * Enum DreadGame.EYMarketItemSortingCriteria
	 */
	enum class EYMarketItemSortingCriteria : uint8_t
	{
		YMISC_None                    = 0,
		YMISC_ByPlayerRelatedFlags    = 1,
		YMISC_ByUnlockRankAsc         = 2,
		YMISC_ByUnlockRankDesc        = 3,
		YMISC_ByPriceSocialPointsAsc  = 4,
		YMISC_ByPriceSocialPointsDesc = 5,
		YMISC_ByPriceCreditsAsc       = 6,
		YMISC_ByPriceCreditsDesc      = 7,
		YMISC_ByNameAsc               = 8,
		YMISC_ByNameDesc              = 9,
		YMISC_ByReleaseDateAsc        = 10,
		YMISC_ByReleaseDateDesc       = 11,
		YMISC_ByUnlockedTimeStampAsc  = 12,
		YMISC_ByUnlockedTimeStampDesc = 13,
		YMISC_ByHighlights            = 14,
		YMISC_MAX                     = 15
	};

	/**
	 * Enum DreadGame.EYGoalCategory
	 */
	enum class EYGoalCategory : uint8_t
	{
		YGC_RECRUIT     = 0,
		YGC_CAPTAIN     = 1,
		YGC_ACHIEVEMENT = 2,
		YGC_NONE        = 3,
		YGC_MAX         = 4
	};

	/**
	 * Enum DreadGame.EYGoalRewardType
	 */
	enum class EYGoalRewardType : uint8_t
	{
		YGR_GP          = 0,
		YGR_CREDITS     = 1,
		YGR_FREEXP      = 2,
		YGR_ID          = 3,
		YGR_ACHIEVEMENT = 4,
		YGR_MEMBERSHIP  = 5,
		YGR_NONE        = 6,
		YGR_MAX         = 7
	};

	/**
	 * Enum DreadGame.EYGoalPlatformVisibility
	 */
	enum class EYGoalPlatformVisibility : uint8_t
	{
		YGPV_PC   = 0,
		YGPV_PS4  = 1,
		YGPV_BOTH = 2,
		YGPV_NONE = 3,
		YGPV_MAX  = 4
	};

	/**
	 * Enum DreadGame.EYThrusterPosition
	 */
	enum class EYThrusterPosition : uint8_t
	{
		YTP_BACK        = 0,
		YTP_FRONT       = 1,
		YTP_RIGHT       = 2,
		YTP_LEFT        = 3,
		YTP_BOTTOM      = 4,
		YTP_TOP         = 5,
		YTP_BOOSTERBACK = 6,
		YTP_MAX         = 7
	};

	/**
	 * Enum DreadGame.EYInputAssociation
	 */
	enum class EYInputAssociation : uint8_t
	{
		GAMEPLAY  = 0,
		SPECTATOR = 1,
		GLOBAL    = 2,
		MAX       = 3
	};

	/**
	 * Enum DreadGame.EYAxisMappingType
	 */
	enum class EYAxisMappingType : uint8_t
	{
		YAMT_BUTTON_TRIGGER = 0,
		YAMT_BUTTON_HOLD    = 1,
		YAMT_AXIS           = 2,
		YAMT_MAX_BUTTON     = 3,
		YAMT_MIN_BUTTON     = 4,
		YAMT_MAX            = 5
	};

	/**
	 * Enum DreadGame.EYLateJoinState
	 */
	enum class EYLateJoinState : uint8_t
	{
		EYL_LateInMatch           = 0,
		EYL_LateInWaitForNewRound = 1,
		EYL_None                  = 2,
		EYL_MAX                   = 3
	};

	/**
	 * Enum DreadGame.EYUIShortCommands
	 */
	enum class EYUIShortCommands : uint8_t
	{
		EYUISC_PointAtTarget = 0,
		EYUISC_AttackTarget  = 1,
		EYUISC_NeedBackup    = 2,
		EYUISC_FollowMe      = 3,
		EYUISC_NeedRepair    = 4,
		EYUISC_ReGroup       = 5,
		EYUISC_DestroyTarget = 6,
		EYUISC_Thanks        = 7,
		EYUISC_MAX           = 8
	};

	/**
	 * Enum DreadGame.EYHudState
	 */
	enum class EYHudState : uint8_t
	{
		EHS_HUD            = 0,
		EHS_ClassSelection = 1,
		EHS_SpectatorView  = 2,
		EHS_Clean          = 3,
		EHS_Intro          = 4,
		EHS_PostDeath      = 5,
		EHS_RoundOver      = 6,
		EHS_MatchOver      = 7,
		EHS_VideoPlayer    = 8,
		EHS_HUD_Scrambled  = 9,
		EHS_KillcamView    = 10,
		EHS_Tutorial       = 11,
		EHS_Test_HUD       = 12,
		EHS_Init           = 13,
		EHS_MAX            = 14
	};

	/**
	 * Enum DreadGame.EYCameraRestrictionType
	 */
	enum class EYCameraRestrictionType : uint8_t
	{
		EYCRT_RestrictCamera = 0,
		EYCRT_AllowCamera    = 1,
		EYCRT_IgnoreCamera   = 2,
		EYCRT_MAX            = 3
	};

	/**
	 * Enum DreadGame.EYPCMatchState
	 */
	enum class EYPCMatchState : uint8_t
	{
		Intro              = 0,
		Match              = 1,
		Outro              = 2,
		EndOfMatch         = 3,
		WaitingForNewRound = 4,
		MAX                = 5
	};

	/**
	 * Enum DreadGame.EYTouchPadZone
	 */
	enum class EYTouchPadZone : uint8_t
	{
		None      = 0,
		LeftSide  = 1,
		RightSide = 2,
		MAX       = 3
	};

	/**
	 * Enum DreadGame.EYMenuMatchMakingState
	 */
	enum class EYMenuMatchMakingState : uint8_t
	{
		YMMMS_NONE                     = 0,
		YMMMS_SOLO_IDLE                = 1,
		YMMMS_SOLO_SEARCHING           = 2,
		YMMMS_SQUAD_IDLE               = 3,
		YMMMS_SQUAD_SEARCHING          = 4,
		YMMMS_SQUAD_MATCHMAKING_LOCKED = 5,
		YMMMS_SERVER_STARTING          = 6,
		YMMMS_CANCELLING_PROCESS       = 7,
		YMMMS_MAX                      = 8
	};

	/**
	 * Enum DreadGame.EYUIOverlayType
	 */
	enum class EYUIOverlayType : uint8_t
	{
		None                 = 0,
		Frontend             = 1,
		NewPlayerTraining    = 2,
		Tutorial             = 3,
		Multiplayer          = 4,
		Singleplayer         = 5,
		DialogConnectionLost = 6,
		EndOfMatch           = 7,
		DialogRequireRestart = 8,
		MAX                  = 9
	};

	/**
	 * Enum DreadGame.EYMatchResult
	 */
	enum class EYMatchResult : uint8_t
	{
		YGS_NONE  = 0,
		YGS_TEAM1 = 1,
		YGS_TEAM2 = 2,
		YGS_DRAW  = 3,
		YGS_MAX   = 4
	};

	/**
	 * Enum DreadGame.EYObjectiveState
	 */
	enum class EYObjectiveState : uint8_t
	{
		YOS_INACTIVE  = 0,
		YOS_ACTIVE    = 1,
		YOS_COMPLETED = 2,
		YOS_FAILED    = 3,
		YOS_MAX       = 4
	};

	/**
	 * Enum DreadGame.EYObjectiveType
	 */
	enum class EYObjectiveType : uint8_t
	{
		YOT_GENERIC = 0,
		YOT_KILL    = 1,
		YOT_ESCORT  = 2,
		YOT_HORDE   = 3,
		YOT_DESTROY = 4,
		YOT_DEFEND  = 5,
		YOT_MAX     = 6
	};

	/**
	 * Enum DreadGame.EYHordeWaveState
	 */
	enum class EYHordeWaveState : uint8_t
	{
		YHWS_None       = 0,
		YHWS_Starting   = 1,
		YHWS_InProgress = 2,
		YHWS_Over       = 3,
		YHWS_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYQualityLevel
	 */
	enum class EYQualityLevel : uint8_t
	{
		EQL_None    = 0,
		EQL_Low     = 1,
		EQL_Medium  = 2,
		EQL_High    = 3,
		EQL_Premium = 4,
		EQL_MAX     = 5
	};

	/**
	 * Enum DreadGame.EYShipBaseClass
	 */
	enum class EYShipBaseClass : uint8_t
	{
		YSBC_DREADNOUGHT = 0,
		YSBC_SCOUT       = 1,
		YSBC_SNIPER      = 2,
		YSBC_SUPPORT     = 3,
		YSBC_ASSAULT     = 4,
		YSBC_NONE        = 5,
		YSBC_INVALID     = 6,
		YSBC_BOSS        = 7,
		YSBC_CIVILIAN    = 8,
		YSBC_DRONE       = 9,
		YSBC_JET         = 10,
		YSBC_AITARGET    = 11,
		YSBC_COMMANDSHIP = 12,
		YSBC_MAX         = 13
	};

	/**
	 * Enum DreadGame.EYStreamingOperationType
	 */
	enum class EYStreamingOperationType : uint8_t
	{
		EYSOT_LoadLevel   = 0,
		EYSOT_UnloadLevel = 1,
		EYSOT_MAX         = 2
	};

	/**
	 * Enum DreadGame.EYOutpostCharacterType
	 */
	enum class EYOutpostCharacterType : uint8_t
	{
		EOCT_Com        = 0,
		EOCT_Weapons    = 1,
		EOCT_Navigation = 2,
		EOCT_Engineer   = 3,
		EOCT_Detail     = 4,
		EOCT_Captain    = 5,
		EOCT_MAX        = 6
	};

	/**
	 * Enum DreadGame.EYPVEDifficulty
	 */
	enum class EYPVEDifficulty : uint8_t
	{
		YPVED_None      = 0,
		YPVED_Recruit   = 1,
		YPVED_Veteran   = 2,
		YPVED_Legendary = 3,
		YPVED_MAX       = 4
	};

	/**
	 * Enum DreadGame.EYUIQuestMarker
	 */
	enum class EYUIQuestMarker : uint8_t
	{
		EYUIQM_Remove            = 0,
		EYUIQM_HostileTarget     = 1,
		EYUIQM_PrimaryTarget     = 2,
		EYUIQM_ProtectionTarget  = 3,
		EYUIQM_FollowTarget      = 4,
		EYUIQM_TargetDestination = 5,
		EYUIQM_Regroup           = 6,
		EYUIQM_DestroyTarget     = 7,
		EYUIQM_OptionalTarget    = 8,
		EYUIQM_LastTargetAlive   = 9,
		EYUIQM_Incoming          = 10,
		EYUIQM_MAX               = 11
	};

	/**
	 * Enum DreadGame.EYMedal
	 */
	enum class EYMedal : uint8_t
	{
		YM_NONE   = 0,
		YM_BRONZE = 1,
		YM_SILVER = 2,
		YM_GOLD   = 3,
		YM_DEV    = 4,
		YM_MAX    = 5
	};

	/**
	 * Enum DreadGame.EYHavocState
	 */
	enum class EYHavocState : uint8_t
	{
		YHS_UpgradeSelection = 0,
		YHS_WaveStarting     = 1,
		YHS_WaveInProgress   = 2,
		YHS_WaveComplete     = 3,
		YHS_GameOver         = 4,
		YHS_MAX              = 5
	};

	/**
	 * Enum DreadGame.EYHavocRewardType
	 */
	enum class EYHavocRewardType : uint8_t
	{
		YHRT_FREEXP  = 0,
		YHRT_CREDITS = 1,
		YHRT_ITEM    = 2,
		YHRT_NONE    = 3,
		YHRT_MAX     = 4
	};

	/**
	 * Enum DreadGame.EYHavocPermanentEnemyModifierCategory
	 */
	enum class EYHavocPermanentEnemyModifierCategory : uint8_t
	{
		YHPEMC_DAMAGEBOOST = 0,
		YHPEMC_HEALTHBOOST = 1,
		YHPEMC_NONE        = 2,
		YHPEMC_MAX         = 3
	};

	/**
	 * Enum DreadGame.EYHavocModifierAffectedTeam
	 */
	enum class EYHavocModifierAffectedTeam : uint8_t
	{
		YHMAT_ALL     = 0,
		YHMAT_PLAYERS = 1,
		YHMAT_ENEMIES = 2,
		YHMAT_NONE    = 3,
		YHMAT_MAX     = 4
	};

	/**
	 * Enum DreadGame.EYHavocUpgradeState
	 */
	enum class EYHavocUpgradeState : uint8_t
	{
		YHUS_Undefined   = 0,
		YHUS_Available   = 1,
		YHUS_Acquired    = 2,
		YHUS_Unavailable = 3,
		YHUS_NotEnoughXp = 4,
		YHUS_MAX         = 5
	};

	/**
	 * Enum DreadGame.EYHavocUpgradeCategory
	 */
	enum class EYHavocUpgradeCategory : uint8_t
	{
		YHUC_DEFENSIVE      = 0,
		YHUC_UTILITY        = 1,
		YHUC_OFFENSIVE      = 2,
		YHUC_NEXTHIGHERTIER = 3,
		YHUC_NONE           = 4,
		YHUC_MAX            = 5
	};

	/**
	 * Enum DreadGame.EYMatchOutcome
	 */
	enum class EYMatchOutcome : uint8_t
	{
		YBMR_WIN  = 0,
		YBMR_LOSE = 1,
		YBMR_TIE  = 2,
		YBMR_NONE = 3,
		YBMR_MAX  = 4
	};

	/**
	 * Enum DreadGame.EYPVERewardUnlocked
	 */
	enum class EYPVERewardUnlocked : uint8_t
	{
		NotUnlocked            = 0,
		Success                = 1,
		SuccessAlreadyUnlocked = 2,
		ErrorInvalidId         = 3,
		MAX                    = 4,
		MAX01                  = 5
	};

	/**
	 * Enum DreadGame.EYUnlockType
	 */
	enum class EYUnlockType : uint8_t
	{
		YUST_LEVEL_CLASS_DREADNOUGHT_LIGHT  = 0,
		YUST_LEVEL_CLASS_DREADNOUGHT_MEDIUM = 1,
		YUST_LEVEL_CLASS_DREADNOUGHT_HEAVY  = 2,
		YUST_LEVEL_CLASS_ASSAULT_LIGHT      = 3,
		YUST_LEVEL_CLASS_ASSAULT_MEDIUM     = 4,
		YUST_LEVEL_CLASS_ASSAULT_HEAVY      = 5,
		YUST_LEVEL_CLASS_SCOUT_LIGHT        = 6,
		YUST_LEVEL_CLASS_SCOUT_MEDIUM       = 7,
		YUST_LEVEL_CLASS_SCOUT_HEAVY        = 8,
		YUST_LEVEL_CLASS_SNIPER_LIGHT       = 9,
		YUST_LEVEL_CLASS_SNIPER_MEDIUM      = 10,
		YUST_LEVEL_CLASS_SNIPER_HEAVY       = 11,
		YUST_LEVEL_CLASS_SUPPORT_LIGHT      = 12,
		YUST_LEVEL_CLASS_SUPPORT_MEDIUM     = 13,
		YUST_LEVEL_CLASS_SUPPORT_HEAVY      = 14,
		YUST_LEVEL_PLAYER                   = 15,
		YUST_LEVEL_FACTION                  = 16,
		YUST_SHOP                           = 17,
		YUST_MISC                           = 18,
		YUST_UNLOCKED                       = 19,
		YUST_AVAILABLE                      = 20,
		YUST_NONE                           = 21,
		YUST_MAX                            = 22
	};

	/**
	 * Enum DreadGame.YUIAudioEnum
	 */
	enum class EYUIAudioEnum : uint8_t
	{
		YUIAudioEnumEYA_None                                    = 0,
		YUIAudioEnumEYA_ButtonOver                              = 1,
		YUIAudioEnumEYA_ButtonClicked                           = 2,
		YUIAudioEnumEYA_ButtonHighlighted                       = 3,
		YUIAudioEnumEYA_SliderClickedOrDragged                  = 4,
		YUIAudioEnumEYA_DropDownClicked                         = 5,
		YUIAudioEnumEYA_ButtonYesClicked                        = 6,
		YUIAudioEnumEYA_ButtonNoClicked                         = 7,
		YUIAudioEnumEYA_OpenEscMenu                             = 8,
		YUIAudioEnumEYA_CloseEscMenu                            = 9,
		YUIAudioEnumEYA_KeyStroke                               = 10,
		YUIAudioEnumEYA_NotificationChat                        = 11,
		YUIAudioEnumEYA_MenuNotificationSocial                  = 12,
		YUIAudioEnumEYA_MenuToasterMessage                      = 13,
		YUIAudioEnumEYA_MenuProceedToHangar                     = 14,
		YUIAudioEnumEYA_MenuNewQuest                            = 15,
		YUIAudioEnumEYA_MenuDevCreditsMusicStart                = 16,
		YUIAudioEnumEYA_MenuDevCreditsMusicStop                 = 17,
		YUIAudioEnumEYA_MenuResearchProgressUnlock              = 18,
		YUIAudioEnumEYA_HudOpenLoadoutSelection                 = 19,
		YUIAudioEnumEYA_HudCloseLoadoutSelection                = 20,
		YUIAudioEnumEYA_HudOpenLoadoutInfo                      = 21,
		YUIAudioEnumEYA_HudCloseLoadoutInfo                     = 22,
		YUIAudioEnumEYA_EomBonusStartsAppearing                 = 23,
		YUIAudioEnumEYA_EomFleetStartsAppearing                 = 24,
		YUIAudioEnumEYA_EomCurrencyAdded                        = 25,
		YUIAudioEnumEYA_EomMVPPlayerHighestScoreAppearing       = 26,
		YUIAudioEnumEYA_EomMVPPlayerSecondHighestScoreAppearing = 27,
		YUIAudioEnumEYA_EomMVPPlayerThirdHighestScoreAppearing  = 28,
		YUIAudioEnumEYA_EomStatsAppearing                       = 29,
		YUIAudioEnumEYA_EomStatsBestOfMatchMedal                = 30,
		YUIAudioEnumEYA_EomStatsBestOfTeamMedal                 = 31,
		YUIAudioEnumEYA_EomStatsAverageCareer                   = 32,
		YUIAudioEnumEYA_EomStatsAverageMatch                    = 33,
		YUIAudioEnumEYA_EomStatsMatchStatistic                  = 34,
		YUIAudioEnumEYA_EomStatsSkipping                        = 35,
		YUIAudioEnumEYA_EomRequeueingPurchaseBattleBonus        = 36,
		YUIAudioEnumEYA_EomRequeueingStarted                    = 37,
		YUIAudioEnumEYA_EomRequeueingAboutToExpire              = 38,
		YUIAudioEnumEYA_EomRequeueingTimeExpired                = 39,
		YUIAudioEnumEYA_EomRewardsGenericReward                 = 40,
		YUIAudioEnumEYA_EomRewardsIntermediateResult            = 41,
		YUIAudioEnumEYA_EomRewardsEliteReward                   = 42,
		YUIAudioEnumEYA_EomRewardsTotalShipReward               = 43,
		YUIAudioEnumEYA_EomRewardsTotalReward                   = 44,
		YUIAudioEnumEYA_EomRewardsSkipping                      = 45,
		YUIAudioEnumEYA_EomPveScoreOpen                         = 46,
		YUIAudioEnumEYA_EomPveScoreGameMode                     = 47,
		YUIAudioEnumEYA_EomPveScoreTotal                        = 48,
		YUIAudioEnumEYA_EomPveRewardsEventUnlock                = 49,
		YUIAudioEnumEYA_EomPveRewardsEventUnlockStop            = 50,
		YUIAudioEnumEYA_EomPveRewardsSeasonalUnlock             = 51,
		YUIAudioEnumEYA_EomPveRewardsSeasonalUnlockStop         = 52,
		YUIAudioEnumEYA_EomPveRewardsProgressBar                = 53,
		YUIAudioEnumEYA_EomPveRewardsProgressBarStop            = 54,
		YUIAudioEnumEYA_EomPveTeamTag                           = 55,
		YUIAudioEnumEYA_CustomMatchCountdownStarted             = 56,
		YUIAudioEnumEYA_CustomMatchCountdownTick                = 57,
		YUIAudioEnumEYA_CustomMatchMatchStarting                = 58,
		YUIAudioEnumEYA_MAX                                     = 59
	};

	/**
	 * Enum DreadGame.EYEOMState
	 */
	enum class EYEOMState : uint8_t
	{
		EYEOMS_Intro        = 0,
		EYEOMS_EarningsFlow = 1,
		EYEOMS_Progression  = 2,
		EYEOMS_Scoreboard   = 3,
		EYEOMS_CustomGame   = 4,
		EYEOMS_Clean        = 5,
		EYEOMS_MAX          = 6
	};

	/**
	 * Enum DreadGame.EYEOMBonusBannerState
	 */
	enum class EYEOMBonusBannerState : uint8_t
	{
		EYEOMBBS_None                = 0,
		EYEOMBBS_GenericBonus        = 1,
		EYEOMBBS_EliteStatusInactive = 2,
		EYEOMBBS_EliteStatusActive   = 3,
		EYEOMBBS_BattleBonus         = 4,
		EYEOMBBS_MAX                 = 5
	};

	/**
	 * Enum DreadGame.EYInputDevice
	 */
	enum class EYInputDevice : uint8_t
	{
		YID_UNKNOWN  = 0,
		YID_KEYBOARD = 1,
		YID_MOUSE    = 2,
		YID_GAMEPAD  = 3,
		YID_MAX      = 4
	};

	/**
	 * Enum DreadGame.EYTouchPadUseType
	 */
	enum class EYTouchPadUseType : uint8_t
	{
		None                        = 0,
		Disable                     = 1,
		EnergyWheel                 = 2,
		Abilities                   = 3,
		EnergyWheelAndShortCommands = 4,
		MAX                         = 5
	};

	/**
	 * Enum DreadGame.EYPlayerActionName
	 */
	enum class EYPlayerActionName : uint8_t
	{
		YPAN_None              = 0,
		YPAN_MoveUp            = 1,
		YPAN_MoveDown          = 2,
		YPAN_MoveForward       = 3,
		YPAN_MoveBackward      = 4,
		YPAN_TurnLeft          = 5,
		YPAN_TurnRight         = 6,
		YPAN_OpenMenu          = 7,
		YPAN_OpenEnergyWheel   = 8,
		YPAN_OpenShortCommands = 9,
		YPAN_Shoot             = 10,
		YPAN_Aim               = 11,
		YPAN_SwitchWeapon      = 12,
		YPAN_Reload            = 13,
		YPAN_Ability1          = 14,
		YPAN_Ability2          = 15,
		YPAN_Ability3          = 16,
		YPAN_Ability4          = 17,
		YPAN_OpenHudHelp       = 18,
		YPAN_MoveCamera        = 19,
		YPAN_Touchpad          = 20,
		YPAN_Max               = 21
	};

	/**
	 * Enum DreadGame.EYPromptType
	 */
	enum class EYPromptType : uint8_t
	{
		YPT_None                                   = 0,
		YPT_PromptInformation                      = 1,
		YPT_PromptOpenEnergyWheel                  = 2,
		YPT_OverlaySelectEnergyWheelThrusterOption = 3,
		YPT_OverlayCloseEnergyWheel                = 4,
		YPT_OverlayOpenHelpScreen                  = 5,
		YPT_OverlayMoveToBattleZone                = 6,
		YPT_OverlayHitTargetWithWeapon             = 7,
		YPT_OverlayFireMissileAtTarget             = 8,
		YPT_OverlayEnergyWheel                     = 9,
		YPT_OverlayFinishMatch                     = 10,
		YPT_Max                                    = 11
	};

	/**
	 * Enum DreadGame.EYEnergySystemState
	 */
	enum class EYEnergySystemState : uint8_t
	{
		YESS_READY        = 0,
		YESS_COOLING_DOWN = 1,
		YESS_CONSUMING    = 2,
		YESS_REGENERATING = 3,
		YESS_MAX          = 4
	};

	/**
	 * Enum DreadGame.EYActionMappingTextType
	 */
	enum class EYActionMappingTextType : uint8_t
	{
		YPTT_None        = 0,
		YPTT_DefaultText = 1,
		YPTT_KeybindText = 2,
		YPTT_GamepadIcon = 3,
		YPTT_MAX         = 4
	};

	/**
	 * Enum DreadGame.EYTutorialComponentLock
	 */
	enum class EYTutorialComponentLock : uint8_t
	{
		ETCL_ENERGY_WHEEL     = 0,
		ETCL_ENERGY_DISPLAY   = 1,
		ETCL_ABILITY_OFFENSE  = 2,
		ETCL_ABILITY_DEFENSE  = 3,
		ETCL_WEAPON_PRIMARY   = 4,
		ETCL_WEAPON_SECONDARY = 5,
		ETCL_CROSSHAIR        = 6,
		ETCL_HEALTH_DISPLAY   = 7,
		ETCL_MINIMAP          = 8,
		ETCL_MAX              = 9
	};

	/**
	 * Enum DreadGame.ELoginGateState
	 */
	enum class ELoginGateState : uint8_t
	{
		ELoginGateNone                = 0,
		ELoginGateConnectingToServer  = 1,
		ELoginGateMaxCcu              = 2,
		ELoginGateBurstSmoothing      = 3,
		ELoginGateDownForMaintenance  = 4,
		ELoginGateMaintenanceComplete = 5,
		ELoginGateLoggingIn           = 6,
		ELoginGateLoginComplete       = 7,
		ELoginGateMax                 = 8,
		MAX                           = 9
	};

	/**
	 * Enum DreadGame.EYCachedItemType
	 */
	enum class EYCachedItemType : uint8_t
	{
		ShipVanity      = 0,
		Ability         = 1,
		Weapon          = 2,
		Perk            = 3,
		Loadout         = 4,
		CharacterVanity = 5,
		EliteStatus     = 6,
		MAX             = 7
	};

	/**
	 * Enum DreadGame.EYScoringAchievementType
	 */
	enum class EYScoringAchievementType : uint8_t
	{
		EYSAT_None   = 0,
		EYSAT_Event  = 1,
		EYSAT_Ribbon = 2,
		EYSAT_MAX    = 3
	};

	/**
	 * Enum DreadGame.EYRequeuingState
	 */
	enum class EYRequeuingState : uint8_t
	{
		EYRS_WAIT_FOR_OWN_PLAYER_TO_JOIN     = 0,
		EYRS_WAIT_FOR_OTHERS_FROM_LAST_MATCH = 1,
		EYRS_FIND_MORE_PLAYERS_GLOBAL        = 2,
		EYRS_MATCHMAKING_FAILED              = 3,
		EYRS_INVALID                         = 4,
		EYRS_MAX                             = 5
	};

	/**
	 * Enum DreadGame.EYCombatSceneBehavior
	 */
	enum class EYCombatSceneBehavior : uint8_t
	{
		YCSB_CRUISE         = 0,
		YCSB_RUNNER         = 1,
		YCSB_STAND          = 2,
		YCSB_HOLD           = 3,
		YCSB_ESCORT         = 4,
		YCSB_ESCORT_TANK    = 5,
		YCSB_ESCORT_SHY     = 6,
		YCSB_ESCORT_FLANK   = 7,
		YCSB_PATROL         = 8,
		YCSB_ENGAGE         = 9,
		YCSB_SKIRMISH       = 10,
		YCSB_AVOID          = 11,
		YCSB_HIDE           = 12,
		YCSB_SPOT           = 13,
		YCSB_ESCAPE         = 14,
		YCSB_GOTO           = 15,
		YCSB_ROUTE          = 16,
		YCSB_DEFAULT_CRUISE = 17,
		YCSB_DEFAULT_STAND  = 18,
		YCSB_DEFAULT_ESCORT = 19,
		YCSB_NONE           = 20,
		YCSB_MAX            = 21
	};

	/**
	 * Enum DreadGame.EYMeshComponentOptimizationLevel
	 */
	enum class EYMeshComponentOptimizationLevel : uint8_t
	{
		YMCOL_Low    = 0,
		YMCOL_Medium = 1,
		YMCOL_High   = 2,
		YMCOL_Epic   = 3,
		YMCOL_MAX    = 4
	};

	/**
	 * Enum DreadGame.EYHitIndicatorType
	 */
	enum class EYHitIndicatorType : uint8_t
	{
		Normal  = 0,
		Ability = 1,
		Hitzone = 2,
		MAX     = 3
	};

	/**
	 * Enum DreadGame.EYAlternativeBeamType
	 */
	enum class EYAlternativeBeamType : uint8_t
	{
		YABT_NONE                = 0,
		YABT_AMPLIFICATION       = 1,
		YABT_APPLYSTATUSENEMY    = 2,
		YABT_APPLYSTATUSFRIENDLY = 3,
		YABT_APPLYSTATUSALL      = 4,
		YABT_MAX                 = 5
	};

	/**
	 * Enum DreadGame.EYCreditsPoolType
	 */
	enum class EYCreditsPoolType : uint8_t
	{
		RankUp                  = 0,
		Scoring                 = 1,
		ScoringBase             = 2,
		ScoringPerformance      = 3,
		Quest                   = 4,
		BoosterWin              = 5,
		BoosterFirstWinOfTheDay = 6,
		GoldMembership          = 7,
		TeammatesGoldMembership = 8,
		BattleReadyRecruit      = 9,
		BattleReadyVeteran      = 10,
		BattleReadyLegendary    = 11,
		None                    = 12,
		MAX                     = 13,
		MAX01                   = 14
	};

	/**
	 * Enum DreadGame.EYReputationPoolType
	 */
	enum class EYReputationPoolType : uint8_t
	{
		EYRPT_Scoring                 = 0,
		EYRPT_GenericReward           = 1,
		EYRPT_BoosterWin              = 2,
		EYRPT_BoosterFirstWinOfTheDay = 3,
		EYRPT_BattleReadyRecruit      = 4,
		EYRPT_BattleReadyVeteran      = 5,
		EYRPT_BattleReadyLegendary    = 6,
		EYRPT_None                    = 7,
		EYRPT_MAX                     = 8
	};

	/**
	 * Enum DreadGame.EYXPPoolType
	 */
	enum class EYXPPoolType : uint8_t
	{
		Scoring                 = 0,
		ScoringBase             = 1,
		ScoringPerformance      = 2,
		BoosterWin              = 3,
		BoosterFirstWinOfTheDay = 4,
		GoldMembership          = 5,
		TeammatesGoldMembership = 6,
		BattleReadyRecruit      = 7,
		BattleReadyVeteran      = 8,
		BattleReadyLegendary    = 9,
		FreeXPFleetBonus        = 10,
		FreeXPFleetBonusBoosted = 11,
		None                    = 12,
		MAX                     = 13,
		MAX01                   = 14
	};

	/**
	 * Enum DreadGame.EYProjectileRangeFilter
	 */
	enum class EYProjectileRangeFilter : uint8_t
	{
		YPRF_ALL       = 0,
		YPRF_MISSILE   = 1,
		YPRF_BALLISTIC = 2,
		YPRF_MAX       = 3
	};

	/**
	 * Enum DreadGame.EYDamageCategory
	 */
	enum class EYDamageCategory : uint8_t
	{
		YDC_Low    = 0,
		YDC_Medium = 1,
		YDC_High   = 2,
		YDC_MAX    = 3
	};

	/**
	 * Enum DreadGame.EYWeaponState
	 */
	enum class EYWeaponState : uint8_t
	{
		YWS_INIT        = 0,
		YWS_READY       = 1,
		YWS_CHARGING    = 2,
		YWS_FIRING      = 3,
		YWS_COOLINGDOWN = 4,
		YWS_MAX         = 5
	};

	/**
	 * Enum DreadGame.EYButtonStateAfterClick
	 */
	enum class EYButtonStateAfterClick : uint8_t
	{
		Disable     = 0,
		StayCallout = 1,
		Enabled     = 2,
		MAX         = 3
	};

	/**
	 * Enum DreadGame.EYOfficerType
	 */
	enum class EYOfficerType : uint8_t
	{
		YOT_COM        = 0,
		YOT_WEAPONS    = 1,
		YOT_NAVIGATION = 2,
		YOT_ENGINEER   = 3,
		YOT_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYUICustomizationSlotType
	 */
	enum class EYUICustomizationSlotType : uint8_t
	{
		ADD_SLOT     = 0,
		SHIP_SLOT    = 1,
		ACQUIRE_SLOT = 2,
		LOCKED_SLOT  = 3,
		MAX          = 4,
		MAX01        = 5
	};

	/**
	 * Enum DreadGame.EYBuffType
	 */
	enum class EYBuffType : uint8_t
	{
		EYBT_None       = 0,
		EYBT_ArmorDec   = 1,
		EYBT_SpeedDec   = 2,
		EYBT_EnergyDec  = 3,
		EYBT_FireDec    = 4,
		EYBT_AbilityDec = 5,
		EYBT_Scramble   = 6,
		EYBT_DebuffMAX  = 7,
		EYBT_FireInc    = 8,
		EYBT_SpeedInc   = 9,
		EYBT_EnergyInc  = 10,
		EYBT_AbilityInc = 11,
		EYBT_ArmorInc   = 12,
		EYBT_HealthInc  = 13,
		EYBT_Turbo      = 14,
		EYBT_BuffMAX    = 15,
		EYBT_MAX        = 16
	};

	/**
	 * Enum DreadGame.EYUICharacterCustomizationSlotType
	 */
	enum class EYUICharacterCustomizationSlotType : uint8_t
	{
		NONE     = 0,
		HEAD     = 1,
		HEADWEAR = 2,
		SUIT     = 3,
		EYES     = 4,
		TATTOO   = 5,
		SCAR     = 6,
		TINT     = 7,
		MAX      = 8,
		MAX01    = 9
	};

	/**
	 * Enum DreadGame.EYUICharacterItemType
	 */
	enum class EYUICharacterItemType : uint8_t
	{
		NONE               = 0,
		CHARACTER_HEAD     = 1,
		CHARACTER_SUIT     = 2,
		CHARACTER_HEADWEAR = 3,
		CHARACTER_EYES     = 4,
		CHARACTER_TATTOO   = 5,
		CHARACTER_SCAR     = 6,
		CHARACTER_TINT     = 7,
		MAX                = 8,
		MAX01              = 9
	};

	/**
	 * Enum DreadGame.EYCharacterGender
	 */
	enum class EYCharacterGender : uint8_t
	{
		NONE         = 0,
		HUMAN_MALE   = 1,
		HUMAN_FEMALE = 2,
		HUMAN_BOTH   = 3,
		MAX          = 4,
		MAX01        = 5
	};

	/**
	 * Enum DreadGame.EYWeaponAssistedTargetState
	 */
	enum class EYWeaponAssistedTargetState : uint8_t
	{
		EVERYTHING = 0,
		ONLY_ZOOM  = 1,
		NONE       = 2,
		MAX        = 3
	};

	/**
	 * Enum DreadGame.EYSlotType
	 */
	enum class EYSlotType : uint8_t
	{
		YST_Primary   = 0,
		YST_Secondary = 1,
		YST_Ability   = 2,
		YST_MAX       = 3
	};

	/**
	 * Enum DreadGame.EYContextActionType
	 */
	enum class EYContextActionType : uint8_t
	{
		YCAT_None          = 0,
		YCAT_Explode       = 1,
		YCAT_CancelAbility = 2,
		YCAT_MAX           = 3
	};

	/**
	 * Enum DreadGame.EYTargetType
	 */
	enum class EYTargetType : uint8_t
	{
		YTT_NONE     = 0,
		YTT_FRIENDLY = 1,
		YTT_ENEMY    = 2,
		YTT_ALL      = 3,
		YTT_MAX      = 4
	};

	/**
	 * Enum DreadGame.EYCharacterRenderLevelType
	 */
	enum class EYCharacterRenderLevelType : uint8_t
	{
		YCRLT_PreMatch               = 0,
		YCRLT_InMatch                = 1,
		YCRLT_PostMatch              = 2,
		YCRLT_PostMatchSingleTeam    = 3,
		YCRLT_PostMatchPersonalStats = 4,
		YCRLT_PostMatchPVE           = 5,
		YCRLT_Spectator              = 6,
		YCRLT_Outpost                = 7,
		YCRLT_Custom                 = 8,
		YCRLT_Current                = 9,
		YCRLT_Max                    = 10
	};

	/**
	 * Enum DreadGame.EYCharacterVanityItemMenuCategory
	 */
	enum class EYCharacterVanityItemMenuCategory : uint8_t
	{
		YCVIC_HEAD     = 0,
		YCVIC_SUIT     = 1,
		YCVIC_HEADWEAR = 2,
		YCVIC_SCAR     = 3,
		YCVIC_TATTOO   = 4,
		YCVIC_EYES     = 5,
		YCVIC_TINT     = 6,
		YCVIC_MAX      = 7
	};

	/**
	 * Enum DreadGame.EYVanityItemMenuCategorie
	 */
	enum class EYVanityItemMenuCategorie : uint8_t
	{
		YVIC_NONE       = 0,
		YVIC_PAINT      = 1,
		YVIC_PATTERN    = 2,
		YVIC_EMBLEM     = 3,
		YVIC_DECAL      = 4,
		YVIC_BRIDGE     = 5,
		YVIC_STERN      = 6,
		YVIC_HULL       = 7,
		YVIC_FORECASTLE = 8,
		YVIC_MAX        = 9
	};

	/**
	 * Enum DreadGame.EYLoadoutCategory
	 */
	enum class EYLoadoutCategory : uint8_t
	{
		LOADOUT_A   = 0,
		LOADOUT_B   = 1,
		LOADOUT_MAX = 2
	};

	/**
	 * Enum DreadGame.EYUICurrency
	 */
	enum class EYUICurrency : uint8_t
	{
		YUIC_ShipXp        = 0,
		YUIC_FreeXp        = 1,
		YUIC_SoftCurrency  = 2,
		YUIC_HardCurrency  = 3,
		YUIC_RealCurrency  = 4,
		YUIC_NumCurrencies = 5,
		YUIC_MAX           = 6
	};

	/**
	 * Enum DreadGame.EYAnnouncementLevel
	 */
	enum class EYAnnouncementLevel : uint8_t
	{
		GENERIC = 0,
		WARNING = 1,
		MAX     = 2,
		MAX01   = 3
	};

	/**
	 * Enum DreadGame.EYUICustomShaderTargetGeneric
	 */
	enum class EYUICustomShaderTargetGeneric : uint8_t
	{
		All = 0,
		MAX = 1
	};

	/**
	 * Enum DreadGame.EYUICustomShaderTargetPlayerReputation
	 */
	enum class EYUICustomShaderTargetPlayerReputation : uint8_t
	{
		Icon                  = 0,
		IconAndBackgroundIcon = 1,
		BackgroundIcon        = 2,
		Overlay               = 3,
		MAX                   = 4
	};

	/**
	 * Enum DreadGame.EYUICustomShaderTargetButton
	 */
	enum class EYUICustomShaderTargetButton : uint8_t
	{
		All          = 0,
		Icon         = 1,
		CategoryIcon = 2,
		Overlay      = 3,
		IconsAndBack = 4,
		MAX          = 5
	};

	/**
	 * Enum DreadGame.EYUIFriendStatus
	 */
	enum class EYUIFriendStatus : uint8_t
	{
		OFFLINE       = 0,
		ONLINE        = 1,
		PLAYING       = 2,
		AWAY          = 3,
		ACCEPT_FRIEND = 4,
		ACCEPT_SQUAD  = 5,
		BLOCKED       = 6,
		SENT_INVITE   = 7,
		INVALID       = 8,
		MAX           = 9
	};

	/**
	 * Enum DreadGame.EYUIMenuFriendListActions
	 */
	enum class EYUIMenuFriendListActions : uint8_t
	{
		WHISPER              = 0,
		INVITESQUAD          = 1,
		REMOVEFRIEND         = 2,
		CANCELSENTREQUEST    = 3,
		ACCEPTREQUEST        = 4,
		IGNOREREQUEST        = 5,
		ACCEPT_SQUAD_REQUEST = 6,
		IGNORE_SQUAD_REQUEST = 7,
		BLOCK                = 8,
		UNBLOCK              = 9,
		ADD_FRIEND           = 10,
		MAX                  = 11
	};

	/**
	 * Enum DreadGame.EYDialogResponseCode
	 */
	enum class EYDialogResponseCode : uint8_t
	{
		NO     = 0,
		YES    = 1,
		CANCEL = 2,
		MAX    = 3,
		MAX01  = 4
	};

	/**
	 * Enum DreadGame.EYUserInteractionType
	 */
	enum class EYUserInteractionType : uint8_t
	{
		NONE                     = 0,
		SWAP_LOADOUT             = 1,
		PURCHASE_SOFT_CURRENCY   = 2,
		PURCHASE_HARD_CURRENCY   = 3,
		PURCHASE_REAL_CURRENCY   = 4,
		PROMOTION_DIALOG         = 5,
		RETURN_AFTER_DISCONNECT  = 6,
		EXIT_TO_DESKTOP          = 7,
		GO_TO_CREDITEXCHANGE     = 8,
		GO_TO_HANGER_FROM_MARKET = 9,
		START_SPECIALMAP_WARNING = 10,
		MAX                      = 11,
		MAX01                    = 12
	};

	/**
	 * Enum DreadGame.EYUIPositioningEnum
	 */
	enum class EYUIPositioningEnum : uint8_t
	{
		TopLeft      = 0,
		TopRight     = 1,
		BottomLeft   = 2,
		BottomRight  = 3,
		Center       = 4,
		CenterLeft   = 5,
		CenterRight  = 6,
		TopCenter    = 7,
		BottomCenter = 8,
		Max          = 9,
		MAX          = 10
	};

	/**
	 * Enum DreadGame.EFriendOptionButtonStatusIndex
	 */
	enum class EFriendOptionButtonStatusIndex : uint8_t
	{
		FOBSI_FRIEND_NOT_IN_SQUAD   = 0,
		FOBSI_FRIEND_IN_SQUAD       = 1,
		FOBSI_PENDING               = 2,
		FOBSI_BLOCKED_NOT_IN_SQUAD  = 3,
		FOBSI_BLOCKED_IN_SQUAD      = 4,
		FOBSI_LOCAL_PLAYER_IN_SQUAD = 5,
		FOBSI_SQUAD_USER            = 6,
		FOBSI_EMPTY                 = 7,
		FOBSI_MAX                   = 8
	};

	/**
	 * Enum DreadGame.EFriendOptionButton
	 */
	enum class EFriendOptionButton : uint8_t
	{
		FOB_NONE                     = 0,
		FOB_INVITE_TO_SQUAD          = 1,
		FOB_REMOVE_FROM_SQUAD        = 2,
		FOB_REMOVE_FRIEND            = 3,
		FOB_BLOCK_FRIEND             = 4,
		FOB_UNBLOCK_FRIEND           = 5,
		FOB_ACCEPT_FRIEND_REQUEST    = 6,
		FOB_REJECT_FRIEND_REQUEST    = 7,
		FOB_LEAVE_SQUAD              = 8,
		FOB_WHISPER                  = 9,
		FOB_MESSAGE_SQUAD            = 10,
		FOB_COMPARE_STATS            = 11,
		FOB_MUTE_PLAYER              = 12,
		FOB_UNMUTE_PLAYER            = 13,
		FOB_CLOSE                    = 14,
		FOB_REPORT_PLAYER            = 15,
		FOB_VIEW_PSN_PROFILE         = 16,
		FOB_LEAVE_CUSTOM_MATCH       = 17,
		FOB_REMOVE_FROM_CUSTOM_MATCH = 18,
		FOB_SEND_FRIEND_REQUEST      = 19,
		FOB_MAX                      = 20
	};

	/**
	 * Enum DreadGame.ESocialSection
	 */
	enum class ESocialSection : uint8_t
	{
		SS_NONE    = 0,
		SS_ONLINE  = 1,
		SS_PENDING = 2,
		SS_OFFLINE = 3,
		SS_BLOCKED = 4,
		SS_MAX     = 5
	};

	/**
	 * Enum DreadGame.EYFireState
	 */
	enum class EYFireState : uint8_t
	{
		YFS_NONE       = 0,
		YFS_START      = 1,
		YFS_STOP       = 2,
		YFS_NOTALLOWED = 3,
		YFS_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYAbilityState
	 */
	enum class EYAbilityState : uint8_t
	{
		YAS_AVAILABLE   = 0,
		YAS_ACTIVE      = 1,
		YAS_COOLINGDOWN = 2,
		YAS_MAX         = 3
	};

	/**
	 * Enum DreadGame.EYProjectileIntegrationMethod
	 */
	enum class EYProjectileIntegrationMethod : uint8_t
	{
		YPIM_Euler         = 0,
		YPIM_ImprovedEuler = 1,
		YPIM_RungeKutta4   = 2,
		YPIM_MAX           = 3
	};

	/**
	 * Enum DreadGame.EYProjectilePriorityType
	 */
	enum class EYProjectilePriorityType : uint8_t
	{
		Regular = 0,
		Nuke    = 1,
		Deploy  = 2,
		Pawn    = 3,
		MAX     = 4
	};

	/**
	 * Enum DreadGame.EYImpactVFX
	 */
	enum class EYImpactVFX : uint8_t
	{
		IVFX_default                = 0,
		IVFX_BallisticHighExplosive = 1,
		IVFX_BallisticArmorPiercing = 2,
		IVFX_BallisticFlak          = 3,
		IVFX_ParticleCannonStream   = 4,
		IVFX_ParticleCannonBlast    = 5,
		IVFX_Plasma                 = 6,
		IVFX_DamageMissile          = 7,
		IVFX_DamageTorpedo          = 8,
		IVFX_DamagePulse            = 9,
		IVFX_DamageMines            = 10,
		IVFX_SuperWeaponLight       = 11,
		IVFX_SuperWeaponHeavy       = 12,
		IVFX_WeakenLight            = 13,
		IVFX_WeakenHeavy            = 14,
		IVFX_AbilityAmmo            = 15,
		IVFX_AbilityMissileTorpedo  = 16,
		IVFX_AbilityBeam            = 17,
		IVFX_MAX                    = 18
	};

	/**
	 * Enum DreadGame.EYProjectileType
	 */
	enum class EYProjectileType : uint8_t
	{
		YPT_PROJECTILE = 0,
		YPT_BALLISTIC  = 1,
		YPT_MISSILE    = 2,
		YPT_MAX        = 3
	};

	/**
	 * Enum DreadGame.EYSoftCollisionShape
	 */
	enum class EYSoftCollisionShape : uint8_t
	{
		YCS_BOX    = 0,
		YCS_SPHERE = 1,
		YCS_MAX    = 2
	};

	/**
	 * Enum DreadGame.EYPveScoreBuckets
	 */
	enum class EYPveScoreBuckets : uint8_t
	{
		Time         = 0,
		PlayersAlive = 1,
		Kills        = 2,
		Defense      = 3,
		MAX          = 4,
		MAX01        = 5
	};

	/**
	 * Enum DreadGame.EYScoringSummaryCategory
	 */
	enum class EYScoringSummaryCategory : uint8_t
	{
		YSSC_Kill    = 0,
		YSSC_Support = 1,
		YSSC_Extra   = 2,
		YSSC_Max     = 3
	};

	/**
	 * Enum DreadGame.EYBoostedTarget
	 */
	enum class EYBoostedTarget : uint8_t
	{
		YBTT_NONE      = 0,
		YBTT_SELF      = 1,
		YBTT_TEAMMATES = 2,
		YBTT_MAX       = 3
	};

	/**
	 * Enum DreadGame.EYBoostedCurrency
	 */
	enum class EYBoostedCurrency : uint8_t
	{
		YBT_NONE       = 0,
		YBT_REPUTATION = 1,
		YBT_CREDITS    = 2,
		YBT_SHIPXP     = 3,
		YBT_FREEXP     = 4,
		YBT_MAX        = 5
	};

	/**
	 * Enum DreadGame.EYBoosterType
	 */
	enum class EYBoosterType : uint8_t
	{
		YBT_WIN                  = 0,
		YBT_FIRSTWINOFTHEDAY     = 1,
		YBT_GOLDMEMBERSHIP       = 2,
		YBT_BATTLEREADYRECRUIT   = 3,
		YBT_BATTLEREADYVETERAN   = 4,
		YBT_BATTLEREADYLEGENDARY = 5,
		YBT_MAX                  = 6
	};

	/**
	 * Enum DreadGame.EYEnableInteractiveButtonState
	 */
	enum class EYEnableInteractiveButtonState : uint8_t
	{
		ENABLE_ONLY_CALLOUT = 0,
		ENABLE_ALL          = 1,
		DISABLE_ALL         = 2,
		MAX                 = 3
	};

	/**
	 * Enum DreadGame.EYShipState
	 */
	enum class EYShipState : uint8_t
	{
		YSS_INIT   = 0,
		YSS_ACTIVE = 1,
		YSS_DYING  = 2,
		YSS_DEAD   = 3,
		YSS_MAX    = 4
	};

	/**
	 * Enum DreadGame.EYUIAbilityState
	 */
	enum class EYUIAbilityState : uint8_t
	{
		EYUIS_Available             = 0,
		EYUIS_LockedOn              = 1,
		EYUIS_Active                = 2,
		EYUIS_Coolingdown           = 3,
		EYUIS_Depleting             = 4,
		EYUIS_GlobalCooldown        = 5,
		EYUIS_ContextActionCancel   = 6,
		EYUIS_ContextActionDetonate = 7,
		EYUIS_MAX                   = 8
	};

	/**
	 * Enum DreadGame.EYMarkerShipType
	 */
	enum class EYMarkerShipType : uint8_t
	{
		EYMST_Dreadnought      = 0,
		EYMST_Corvette         = 1,
		EYMST_ArtilleryCruiser = 2,
		EYMST_TacticalCruiser  = 3,
		EYMST_Destroyer        = 4,
		EYMST_JetFighter       = 5,
		EYMST_Mine             = 6,
		EYMST_Turret           = 7,
		EYMST_Creep            = 8,
		EYMST_CreepSmall       = 9,
		EYMST_CreepMedium      = 10,
		EYMST_CreepLarge       = 11,
		EYMST_MAX              = 12
	};

	/**
	 * Enum DreadGame.EYAILevel
	 */
	enum class EYAILevel : uint8_t
	{
		YAIL_SHELTERED = 0,
		YAIL_RECRUIT   = 1,
		YAIL_VETERAN   = 2,
		YAIL_LEGENDARY = 3,
		YAIL_MAX       = 4
	};

	/**
	 * Enum DreadGame.EYCustomRoomSlotType
	 */
	enum class EYCustomRoomSlotType : uint8_t
	{
		PlayerSlot = 0,
		AiSlot     = 1,
		EmptySlot  = 2,
		MAX        = 3,
		INVALID    = 4,
		MAX01      = 5
	};

	/**
	 * Enum DreadGame.EYCustomRoomPlayerUIState
	 */
	enum class EYCustomRoomPlayerUIState : uint8_t
	{
		InLobby = 0,
		InMatch = 1,
		MAX     = 2,
		INVALID = 3,
		MAX01   = 4
	};

	/**
	 * Enum DreadGame.EYCustomRoomAccess
	 */
	enum class EYCustomRoomAccess : uint8_t
	{
		None        = 0,
		Host        = 1,
		Participant = 2,
		MAX         = 3,
		INVALID     = 4,
		MAX01       = 5
	};

	/**
	 * Enum DreadGame.EYCustomRoomState
	 */
	enum class EYCustomRoomState : uint8_t
	{
		None           = 0,
		Preparation    = 1,
		FleetSelection = 2,
		Countdown      = 3,
		MatchStarting  = 4,
		MAX            = 5,
		MAX01          = 6
	};

	/**
	 * Enum DreadGame.EYAnnouncementType
	 */
	enum class EYAnnouncementType : uint8_t
	{
		FriendRequest     = 0,
		SquadInvite       = 1,
		CustomMatchInvite = 2,
		System            = 3,
		Contracts         = 4,
		Goals             = 5,
		COUNT             = 6,
		INVALID           = 7,
		MAX               = 8
	};

	/**
	 * Enum DreadGame.EYUISettingApplyType
	 */
	enum class EYUISettingApplyType : uint8_t
	{
		IniLookup      = 0,
		ConsoleVar     = 1,
		ConsoleCommand = 2,
		MAX            = 3
	};

	/**
	 * Enum DreadGame.EYUISettingType
	 */
	enum class EYUISettingType : uint8_t
	{
		None       = 0,
		Carousel   = 1,
		Slider     = 2,
		GammaImage = 3,
		DropDown   = 4,
		HotKey     = 5,
		MAX        = 6
	};

	/**
	 * Enum DreadGame.EYUISettingCategory
	 */
	enum class EYUISettingCategory : uint8_t
	{
		Game                                = 0,
		Controls                            = 1,
		Audio                               = 2,
		Graphics                            = 3,
		AdvancedGraphics                    = 4,
		GraphicsPreset                      = 5,
		ScreenResolution                    = 6,
		ScreenMode                          = 7,
		GammaSlider                         = 8,
		GammaPicture                        = 9,
		VSync                               = 10,
		DX12                                = 11,
		AutoPlayModuleVideo                 = 12,
		AutoSkipPurchaseAnimation           = 13,
		AVSM                                = 14,
		ShadowQuality                       = 15,
		MaterialQuality                     = 16,
		Hitmasks                            = 17,
		UITargetMarkerHUD                   = 18,
		UITargetMarkerMinimap               = 19,
		Sharpen                             = 20,
		TextureCategory                     = 21,
		PostProcessQuality                  = 22,
		VisualEffectsQuality                = 23,
		ResolutionQuality                   = 24,
		AntiAliasing                        = 25,
		AmbientOcclusion                    = 26,
		ParticleLightRendering              = 27,
		VisualEffectsRelevancy              = 28,
		ShipMeshDetails                     = 29,
		EnvironmentDetails                  = 30,
		HLODDrawDistance                    = 31,
		AIFighterDetails                    = 32,
		LightShafts                         = 33,
		Reflections                         = 34,
		UIQuality                           = 35,
		TexturePoolSize                     = 36,
		AnisotropicFiltering                = 37,
		EnvironmentTextureQuality           = 38,
		ShipTextureQuality                  = 39,
		CharacterTextureQuality             = 40,
		EffectsTextureQuality               = 41,
		LightingTextureQuality              = 42,
		MasterVolume                        = 43,
		MusicVolume                         = 44,
		SFXVolume                           = 45,
		VOVolume                            = 46,
		ChannelSetup                        = 47,
		VoiceChat                           = 48,
		VoiceChatVolume                     = 49,
		Subtitles                           = 50,
		ChatProfanityFilter                 = 51,
		AimVignette                         = 52,
		RotateMinimap                       = 53,
		StatusEffectMessages                = 54,
		AutoplayModuleVideos                = 55,
		PeripheralEffects                   = 56,
		DamageNumbers                       = 57,
		MouseSensitivity                    = 58,
		MouseInvertX                        = 59,
		MouseInvertY                        = 60,
		UseAssistedTargeting                = 61,
		GamepadLayout                       = 62,
		GamepadSpeaker                      = 63,
		GamepadSpeakerVolume                = 64,
		GamepadLightBar                     = 65,
		GamepadVibration                    = 66,
		GamepadMoveInvertX                  = 67,
		GamepadMoveInvertY                  = 68,
		HotKeys                             = 69,
		MatchmakingFleet                    = 70,
		MatchmakingMode                     = 71,
		MatchmakingFavorites                = 72,
		AutoPurchaseBattleBonusForQuickplay = 73,
		MAX                                 = 74
	};

	/**
	 * Enum DreadGame.EYCharacterRenderingLOD
	 */
	enum class EYCharacterRenderingLOD : uint8_t
	{
		CRL_Use2DImages          = 0,
		CRL_UseRealtimeRendering = 1,
		CRL_MAX                  = 2
	};

	/**
	 * Enum DreadGame.EYPreset
	 */
	enum class EYPreset : uint8_t
	{
		EYP_Low    = 0,
		EYP_Medium = 1,
		EYP_High   = 2,
		EYP_Epic   = 3,
		EYP_Custom = 4,
		EYP_MAX    = 5
	};

	/**
	 * Enum DreadGame.YE_MCType
	 */
	enum class EYE_MCType : uint8_t
	{
		YMCT_CriticalError      = 0,
		YMCT_Error              = 1,
		YMCT_PerformanceWarning = 2,
		YMCT_Warning            = 3,
		YMCT_Info               = 4,
		YMCT_None               = 5,
		YMCT_MAX                = 6
	};

	/**
	 * Enum DreadGame.EYHelperHUDInstructionType
	 */
	enum class EYHelperHUDInstructionType : uint8_t
	{
		EnergyWheelInstructions  = 0,
		ShortCommandInstructions = 1,
		OptionsInstructions      = 2,
		MAX                      = 3
	};

	/**
	 * Enum DreadGame.EYBoosterConditionType
	 */
	enum class EYBoosterConditionType : uint8_t
	{
		YBCT_NONE                   = 0,
		YBCT_DATE                   = 1,
		YBCT_TIME_SINCE_LAST_MATCH  = 2,
		YBCT_MATCH_OUTCOME          = 3,
		YBCT_AFK                    = 4,
		YBCT_LEAVING_MATCH          = 5,
		YBCT_GOLDMEMBER             = 6,
		YBCT_USED_TRADER_SHIP       = 7,
		YBCT_FIRST_WIN_OF_THE_DAY   = 8,
		YBCT_BATTLE_READY_RECRUIT   = 9,
		YBCT_BATTLE_READY_VETERAN   = 10,
		YBCT_BATTLE_READY_LEGENDARY = 11,
		YBCT_MAX                    = 12
	};

	/**
	 * Enum DreadGame.EYGameModeFavourite
	 */
	enum class EYGameModeFavourite : uint8_t
	{
		YGMF_NONE = 0,
		YGMF_ALL  = 1,
		YGMF_TDM  = 2,
		YGMF_TE   = 3,
		YGMF_TER  = 4,
		YGMF_MAX  = 5
	};

	/**
	 * Enum DreadGame.EYCapturePointState
	 */
	enum class EYCapturePointState : uint8_t
	{
		ECPS_Neutral          = 0,
		ECPS_Friendly         = 1,
		ECPS_Hostile          = 2,
		ECPS_FriendlyCaptured = 3,
		ECPS_HostileCaptured  = 4,
		ECPS_MAX              = 5
	};

	/**
	 * Enum DreadGame.EYCapturePointObjective
	 */
	enum class EYCapturePointObjective : uint8_t
	{
		YTCP_CAPTURE = 0,
		YTCP_DESTROY = 1,
		YTCP_MAX     = 2
	};

	/**
	 * Enum DreadGame.EYFireAtTargetType
	 */
	enum class EYFireAtTargetType : uint8_t
	{
		YFT_NONE               = 0,
		YFT_FRIENDLY           = 1,
		YFT_ENEMY              = 2,
		YFT_DAMAGED_FRIENDLY   = 3,
		YFT_LOWENERGY_FRIENDLY = 4,
		YFT_MAX                = 5
	};

	/**
	 * Enum DreadGame.EYCharacterCustomizationMaterialParameterType
	 */
	enum class EYCharacterCustomizationMaterialParameterType : uint8_t
	{
		Vector  = 0,
		Texture = 1,
		Scalar  = 2,
		MAX     = 3
	};

	/**
	 * Enum DreadGame.EYShipCloakingModifier
	 */
	enum class EYShipCloakingModifier : uint8_t
	{
		YSCM_COLLISION        = 0,
		YSCM_TAKEDAMAGE       = 1,
		YSCM_FIRING           = 2,
		YSCM_MOVEMENT         = 3,
		YSCM_ABILITYACTIVATED = 4,
		YSCM_WARP             = 5,
		YSCM_MAX              = 6
	};

	/**
	 * Enum DreadGame.EYShipCloakingState
	 */
	enum class EYShipCloakingState : uint8_t
	{
		YSCS_DECLOAKED  = 0,
		YSCS_CLOAKING   = 1,
		YSCS_CLOAKED    = 2,
		YSCS_DECLOAKING = 3,
		YSCS_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYVoiceLineAudioTemplate
	 */
	enum class EYVoiceLineAudioTemplate : uint8_t
	{
		YVLAT_3D_Default          = 0,
		YVLAT_3D_DefaultAutoRadio = 1,
		YVLAT_3D_Radio            = 2,
		YVLAT_2D_Default          = 3,
		YVLAT_2D_Radio            = 4,
		YVLAT_MAX                 = 5
	};

	/**
	 * Enum DreadGame.YE_VoicePlaybackBehavior
	 */
	enum class EYE_VoicePlaybackBehavior : uint8_t
	{
		YVPB_PlayOnlyIfHigher = 0,
		YVPB_PlayEvenIfEqual  = 1,
		YVPB_PlayEvenIfLower  = 2,
		YVPB_MAX              = 3
	};

	/**
	 * Enum DreadGame.YE_VoicePlaybackPriority
	 */
	enum class EYE_VoicePlaybackPriority : uint8_t
	{
		YVPP_Breath = 0,
		YVPP_Effort = 1,
		YVPP_Speech = 2,
		YVPP_MAX    = 3
	};

	/**
	 * Enum DreadGame.YE_VoiceLineInterruptBehavior
	 */
	enum class EYE_VoiceLineInterruptBehavior : uint8_t
	{
		YVLIB_CannotBeInterrupted   = 0,
		YVLIB_RepeatWhenInterrupted = 1,
		YVLIB_SkipWhenInterrupted   = 2,
		YVLIB_MAX                   = 3
	};

	/**
	 * Enum DreadGame.YE_VoiceLinePlaybackBehavior
	 */
	enum class EYE_VoiceLinePlaybackBehavior : uint8_t
	{
		YVLPB_PlayOnlyIfHigherPriority = 0,
		YVLPB_PlayEvenIfEqualPriority  = 1,
		YVLPB_PlayEvenIfLowerPriority  = 2,
		YVLPB_MAX                      = 3
	};

	/**
	 * Enum DreadGame.EYCampaignTag
	 */
	enum class EYCampaignTag : uint8_t
	{
		noneTag     = 0,
		discountTag = 1,
		hotTag      = 2,
		limitedTag  = 3,
		newTag      = 4,
		maxTag      = 5,
		MAX         = 6
	};

	/**
	 * Enum DreadGame.EYFeedbackAnimationType
	 */
	enum class EYFeedbackAnimationType : uint8_t
	{
		Good    = 0,
		Bad     = 1,
		Neutral = 2,
		None    = 3,
		COUNT   = 4,
		MAX     = 5
	};

	/**
	 * Enum DreadGame.EYUIColorStyle
	 */
	enum class EYUIColorStyle : uint8_t
	{
		YUICS_AbilityReady            = 0,
		YUICS_AbilityTargeted         = 1,
		YUICS_AbilityReadyGlow        = 2,
		YUICS_AbilityTargetedGlow     = 3,
		YUICS_Buff                    = 4,
		YUICS_BuffGlow                = 5,
		YUICS_Debuff                  = 6,
		YUICS_DebuffGlow              = 7,
		YUICS_Admin                   = 8,
		YUICS_Generic                 = 9,
		YUICS_Server                  = 10,
		YUICS_Whisper                 = 11,
		YUICS_Active                  = 12,
		YUICS_ActiveGlow              = 13,
		YUICS_Inactive                = 14,
		YUICS_InactiveGlow            = 15,
		YUICS_Neutral                 = 16,
		YUICS_Ally                    = 17,
		YUICS_Enemy                   = 18,
		YUICS_Faction                 = 19,
		YUICS_Faction01               = 20,
		YUICS_Faction02               = 21,
		YUICS_Faction03               = 22,
		YUICS_Faction04               = 23,
		YUICS_Faction05               = 24,
		YUICS_Faction06               = 25,
		YUICS_Faction07               = 26,
		YUICS_DeadPawn                = 27,
		YUICS_DeadPawnGlow            = 28,
		YUICS_DrawStateGlow           = 29,
		YUICS_CriticalDamageGlow      = 30,
		YUICS_DamageGlow              = 31,
		YUICS_WarningGlow             = 32,
		YUICS_TextFieldFocused        = 33,
		YUICS_TextFieldNoInputFocused = 34,
		YUICS_TextFieldNotFocused     = 35,
		YUICS_CriticalDamage          = 36,
		YUICS_Damage                  = 37,
		YUICS_Default                 = 38,
		YUICS_Energy                  = 39,
		YUICS_Health                  = 40,
		YUICS_Warning                 = 41,
		YUICS_Weapon                  = 42,
		YUICS_EnergyGlow              = 43,
		YUICS_HealthGlow              = 44,
		YUICS_WeaponGlow              = 45,
		YUICS_MainQuest               = 46,
		YUICS_MainQuestGlow           = 47,
		YUICS_SideQuest               = 48,
		YUICS_SideQuestGlow           = 49,
		YUICS_Squad                   = 50,
		YUICS_Text_Defeat             = 51,
		YUICS_Text_DefeatEOM          = 52,
		YUICS_Text_Draw               = 53,
		YUICS_Text_DrawEOM            = 54,
		YUICS_Text_Victory            = 55,
		YUICS_Text_VictoryEOM         = 56,
		YUICS_InRange                 = 57,
		YUICS_InRangeGlow             = 58,
		YUICS_MidRange                = 59,
		YUICS_MidRangeGlow            = 60,
		YUICS_OutOfRange              = 61,
		YUICS_OutOfRangeGlow          = 62,
		YUICS_NeutralGlow             = 63,
		YUICS_AllyGlow                = 64,
		YUICS_EnemyGlow               = 65,
		YUICS_Faction_3Glow           = 66,
		YUICS_Faction_4Glow           = 67,
		YUICS_Faction_5Glow           = 68,
		YUICS_Faction_6Glow           = 69,
		YUICS_Faction_7Glow           = 70,
		YUICS_Faction_8Glow           = 71,
		YUICS_Faction_9Glow           = 72,
		YUICS_Faction_10Glow          = 73,
		YUICS_AbilityInactive         = 74,
		YUICS_AbilityInactiveGlow     = 75,
		YUICS_HeroShipFreeXP          = 76,
		YUICS_SoftCurrency            = 77,
		YUICS_Custom                  = 78,
		YUICS_MAX                     = 79
	};

	/**
	 * Enum DreadGame.EYUIComponentType
	 */
	enum class EYUIComponentType : uint8_t
	{
		YUICT_GENERIC_BUTTON       = 0,
		YUICT_PILLAR_BUTTON        = 1,
		YUICT_NAVIGATION_BUTTON    = 2,
		YUICT_ICON_BUTTON          = 3,
		YUICT_PROFILE_BUTTON       = 4,
		YUICT_PLAY_BUTTON          = 5,
		YUICT_GOLD_MEMBER_BUTTON   = 6,
		YUICT_CURRENCY_BUTTON      = 7,
		YUICT_TAB_BUTTON           = 8,
		YUICT_SHIP_TYPE_BUTTON     = 9,
		YUICT_SOFT_CURRENCY_BUTTON = 10,
		YUICT_HARD_CURRENCY_BUTTON = 11,
		YUICT_VERTICAL_TAB_BUTTON  = 12,
		YUICT_VERIFY_YES_BUTTON    = 13,
		YUICT_VERIFY_NO_BUTTON     = 14,
		YUICT_PREVIOUS_BUTTON      = 15,
		YUICT_NEXT_BUTTON          = 16,
		YUICT_CLOSE_BUTTON         = 17,
		YUICT_FLEET_BUTTON         = 18,
		YUICT_FREE_XP_BUTTON       = 19,
		YUICT_MAX                  = 20
	};

	/**
	 * Enum DreadGame.EYUIAnchor
	 */
	enum class EYUIAnchor : uint8_t
	{
		YUIA_TOP_LEFT      = 0,
		YUIA_TOP_RIGHT     = 1,
		YUIA_BOTTOM_LEFT   = 2,
		YUIA_BOTTOM_RIGHT  = 3,
		YUIA_CENTER        = 4,
		YUIA_CENTER_LEFT   = 5,
		YUIA_CENTER_RIGHT  = 6,
		YUIA_TOP_CENTER    = 7,
		YUIA_BOTTOM_CENTER = 8,
		YUIA_MAX           = 9
	};

	/**
	 * Enum DreadGame.EYScoreboardClassType
	 */
	enum class EYScoreboardClassType : uint8_t
	{
		None             = 0,
		Dreadnought      = 1,
		Corvette         = 2,
		ArtilleryCrusier = 3,
		TacticalCruiser  = 4,
		Destroyer        = 5,
		FighterJet       = 6,
		Unknown          = 7,
		MAX              = 8
	};

	/**
	 * Enum DreadGame.EYPVERewardLevel
	 */
	enum class EYPVERewardLevel : uint8_t
	{
		BRONZE = 0,
		SILVER = 1,
		GOLD   = 2,
		COUNT  = 3,
		MAX    = 4
	};

	/**
	 * Enum DreadGame.EYPVERewardType
	 */
	enum class EYPVERewardType : uint8_t
	{
		NONE     = 0,
		EVENT    = 1,
		SEASONAL = 2,
		MAX      = 3,
		MAX01    = 4
	};

	/**
	 * Enum DreadGame.EYEndOfMatchMode
	 */
	enum class EYEndOfMatchMode : uint8_t
	{
		None        = 0,
		PVP         = 1,
		PVE         = 2,
		CustomMatch = 3,
		MAX         = 4,
		MAX01       = 5
	};

	/**
	 * Enum DreadGame.EYEOMPageIntroAnimationState
	 */
	enum class EYEOMPageIntroAnimationState : uint8_t
	{
		NotStarted = 0,
		Started    = 1,
		Skipping   = 2,
		Finished   = 3,
		Max        = 4,
		MAX        = 5
	};

	/**
	 * Enum DreadGame.EYEndOfMatchTabs
	 */
	enum class EYEndOfMatchTabs : uint8_t
	{
		MVP           = 0,
		PersonalStats = 1,
		Rewards       = 2,
		PveTeam       = 3,
		PveScore      = 4,
		PveRewards    = 5,
		Scoreboard    = 6,
		MAX           = 7,
		MAX01         = 8
	};

	/**
	 * Enum DreadGame.EYMVPType
	 */
	enum class EYMVPType : uint8_t
	{
		HighestScore       = 0,
		SecondHighestScore = 1,
		ThirdHighestScore  = 2,
		Max                = 3,
		MAX                = 4
	};

	/**
	 * Enum DreadGame.EYCustomMatchError
	 */
	enum class EYCustomMatchError : uint8_t
	{
		None                           = 0,
		CreatingRoom                   = 1,
		EnterFleetSelect               = 2,
		ChangeSettings                 = 3,
		JoinRoomRoomFull               = 4,
		JoinRoomVersionMismatch        = 5,
		JoinRoomSameRoom               = 6,
		JoinRoomUnknown                = 7,
		TeamSwitchTeamInvalid          = 8,
		TeamSwitchUserNotInRoom        = 9,
		TeamSwitchSameTeam             = 10,
		TeamSwitchSwapWithSelf         = 11,
		TeamSwitchTeamFull             = 12,
		TeamSwitchUserNotOnDesiredTeam = 13,
		TeamSwitchUnknown              = 14,
		StartCountdownInvalidFleet     = 15,
		StartCountdownFleetNotFound    = 16,
		StartCountdownUnknown          = 17,
		ChangingHostAlreadyHost        = 18,
		ChangingHost                   = 19,
		Rejoin                         = 20,
		StartingGame                   = 21,
		COUNT                          = 22,
		MAX                            = 23
	};

	/**
	 * Enum DreadGame.EYCustomMatchState
	 */
	enum class EYCustomMatchState : uint8_t
	{
		none         = 0,
		CreatingRoom = 1,
		JoiningRoom  = 2,
		InRoom       = 3,
		COUNT        = 4,
		MAX          = 5
	};

	/**
	 * Enum DreadGame.EYItemType
	 */
	enum class EYItemType : uint8_t
	{
		YIT_Loot         = 0,
		YIT_AdvancedItem = 1,
		YIT_None         = 2,
		YIT_MAX          = 3
	};

	/**
	 * Enum DreadGame.EYItemRarity
	 */
	enum class EYItemRarity : uint8_t
	{
		YIR_COMMON    = 0,
		YIR_UNCOMMON  = 1,
		YIR_RARE      = 2,
		YIR_EPIC      = 3,
		YIR_LEGENDARY = 4,
		YIR_MAX       = 5
	};

	/**
	 * Enum DreadGame.EYRewardType
	 */
	enum class EYRewardType : uint8_t
	{
		YRT_NONE         = 0,
		YRT_TRIGGEREVENT = 1,
		YRT_IMMEDIATELY  = 2,
		YRT_WINBATTLE    = 3,
		YRT_MAX          = 4
	};

	/**
	 * Enum DreadGame.EYCareerProgressionRewardState
	 */
	enum class EYCareerProgressionRewardState : uint8_t
	{
		YCPS_CAN_CLAIM   = 0,
		YCPS_NOT_REACHED = 1,
		YCPS_WAS_CLAIMED = 2,
		YCPS_NONE        = 3,
		YCPS_MAX         = 4
	};

	/**
	 * Enum DreadGame.EYCounterSource
	 */
	enum class EYCounterSource : uint8_t
	{
		YCS_BATTLE_SERVER = 0,
		YCS_BACKEND       = 1,
		YCS_CLIENT        = 2,
		YSC_NONE          = 3,
		MAX               = 4
	};

	/**
	 * Enum DreadGame.EYCareerProgressionHowToStepEnum_PS4
	 */
	enum class EYCareerProgressionHowToStepEnum_PS4 : uint8_t
	{
		YCPHTS_NONE                          = 0,
		YCPHTS_PLAY                          = 1,
		YCPTHS_PLAY_TEAM_DEATHMATCH          = 2,
		YCPTHS_PLAY_TEAM_ELIMINATION         = 3,
		YCPTHS_PLAY_ONSLAUGHT                = 4,
		YCPTHS_PLAY_PROVING_GROUNDS          = 5,
		EYCareerProgressionHowToStepEnum_MAX = 6
	};

	/**
	 * Enum DreadGame.EYStartSpecialMapWarningType
	 */
	enum class EYStartSpecialMapWarningType : uint8_t
	{
		YSSMW_Ok                  = 0,
		YSSMW_Matchmaking         = 1,
		YSSMW_Squad               = 2,
		YSSMW_MatchmakingAndSquad = 3,
		YSSMW_MAX                 = 4
	};

	/**
	 * Enum DreadGame.EYMatchmakingStartResult
	 */
	enum class EYMatchmakingStartResult : uint8_t
	{
		YMMSR_Allowed          = 0,
		YMMSR_SquadNotTogether = 1,
		YMMSR_MAX              = 2
	};

	/**
	 * Enum DreadGame.EYMenuItemList
	 */
	enum class EYMenuItemList : uint8_t
	{
		YMIL_SHIPS     = 0,
		YMIL_CHARACTER = 1,
		YMIL_MAX       = 2
	};

	/**
	 * Enum DreadGame.EYDifficultyLevel
	 */
	enum class EYDifficultyLevel : uint8_t
	{
		YDL_NORMAL  = 0,
		YDL_VETERAN = 1,
		YDL_MAX     = 2
	};

	/**
	 * Enum DreadGame.EYAITargetType
	 */
	enum class EYAITargetType : uint8_t
	{
		YAIT_NONE     = 0,
		YAIT_FRIENDLY = 1,
		YAIT_ENEMY    = 2,
		YAIT_ALL      = 3,
		YAIT_MAX      = 4
	};

	/**
	 * Enum DreadGame.EYUITeamEliminationIcon
	 */
	enum class EYUITeamEliminationIcon : uint8_t
	{
		EYUITEI_Unseen     = 0,
		EYUITEI_Eliminated = 1,
		EYUITEI_MAX        = 2
	};

	/**
	 * Enum DreadGame.EYTargetShipType
	 */
	enum class EYTargetShipType : uint8_t
	{
		YTST_CAPITALSHIP = 0,
		YTST_CREEP       = 1,
		YTST_JET         = 2,
		YTST_MAX         = 3
	};

	/**
	 * Enum DreadGame.EYSearchManagerView
	 */
	enum class EYSearchManagerView : uint8_t
	{
		YSMV_AABB    = 0,
		YSMV_SWEEPS  = 1,
		YSMV_COVER   = 2,
		YSMV_DYNAMIC = 3,
		YSMV_MAX     = 4
	};

	/**
	 * Enum DreadGame.EYEndOfMatchStages
	 */
	enum class EYEndOfMatchStages : uint8_t
	{
		NotAValidStage               = 0,
		Init                         = 1,
		FadeToBlackLoadingSequence   = 2,
		UnloadSublevels              = 3,
		LoadLevel                    = 4,
		LoadContent                  = 5,
		SetupUIWidgets               = 6,
		SetupScene                   = 7,
		FadeFromBlackLoadingSequence = 8,
		ActivateInput                = 9,
		MvpNonSkippable              = 10,
		StatsNonSkippable            = 11,
		StatsPageAnimated            = 12,
		RewardsPageAnimated          = 13,
		MvpStatic                    = 14,
		ScoreboardStatic             = 15,
		Swap                         = 16,
		PveTeamPageNonSkippable      = 17,
		PveTeamPageStatic            = 18,
		PveScorePageAnimated         = 19,
		PveRewardsPageAnimated       = 20,
		MAX                          = 21,
		MAX01                        = 22
	};

	/**
	 * Enum DreadGame.EYShipSelectionAnimationPhase
	 */
	enum class EYShipSelectionAnimationPhase : uint8_t
	{
		EYSSAP_ShipRightFadeOut = 0,
		EYSSAP_ShipRightFadeIn  = 1,
		EYSSAP_ShipLeftFadeOut  = 2,
		EYSSAP_ShipLeftFadeIn   = 3,
		EYSSAP_MAX              = 4
	};

	/**
	 * Enum DreadGame.EYQuestDifficulty
	 */
	enum class EYQuestDifficulty : uint8_t
	{
		EYQD_Easy   = 0,
		EYQD_Medium = 1,
		EYQD_Hard   = 2,
		EYQD_MAX    = 3
	};

	/**
	 * Enum DreadGame.EYMultiplayerQuestType
	 */
	enum class EYMultiplayerQuestType : uint8_t
	{
		EYMQT_None            = 0,
		EYMQT_PlayerKill      = 1,
		EYMQT_GamePlayed      = 2,
		EYMQT_AbilityUsed     = 3,
		EYMQT_Healing         = 4,
		EYMQT_DamageDealt     = 5,
		EYMQT_Ribbon          = 6,
		EYMQT_EndOfMatchScore = 7,
		EYMQT_MAX             = 8
	};

	/**
	 * Enum DreadGame.EYGameModeModifierAffectedTeam
	 */
	enum class EYGameModeModifierAffectedTeam : uint8_t
	{
		YHMAT_ALL     = 0,
		YHMAT_PLAYERS = 1,
		YHMAT_ENEMIES = 2,
		YHMAT_NONE    = 3,
		YHMAT_MAX     = 4
	};

	/**
	 * Enum DreadGame.EYLoadoutType
	 */
	enum class EYLoadoutType : uint8_t
	{
		None        = 0,
		Development = 1,
		Custom      = 2,
		Trader      = 3,
		Special     = 4,
		Hero        = 5,
		COUNT       = 6,
		MAX         = 7
	};

	/**
	 * Enum DreadGame.EYQuestRewardType
	 */
	enum class EYQuestRewardType : uint8_t
	{
		EYQRT_NONE       = 0,
		EYQRT_REPUTATION = 1,
		EYQRT_ITEM       = 2,
		EYQRT_MAX        = 3
	};

	/**
	 * Enum DreadGame.EHangarState
	 */
	enum class EHangarState : uint8_t
	{
		Default = 0,
		Preview = 1,
		MAX     = 2
	};

	/**
	 * Enum DreadGame.EYHoveringFXState
	 */
	enum class EYHoveringFXState : uint8_t
	{
		YHS_INACTIVE         = 0,
		YHS_NOHIT            = 1,
		YHS_NOPHYSMAT        = 2,
		YHS_PHYSMAT_NOTFOUND = 3,
		YHS_HIT              = 4,
		YHS_MAX              = 5
	};

	/**
	 * Enum DreadGame.EYCharacterTalkPosture
	 */
	enum class EYCharacterTalkPosture : uint8_t
	{
		YCTP_Stand = 0,
		YCTP_Knee  = 1,
		YCTP_Sit   = 2,
		YCTP_MAX   = 3
	};

	/**
	 * Enum DreadGame.YE_LEDKeyMode
	 */
	enum class EYE_LEDKeyMode : uint8_t
	{
		YLKM_STATIC   = 0,
		YLKM_FLASHING = 1,
		YLKM_PULSING  = 2,
		YLKM_MAX      = 3
	};

	/**
	 * Enum DreadGame.YE_LEDAbilityKeyState
	 */
	enum class EYE_LEDAbilityKeyState : uint8_t
	{
		YLKS_NONE               = 0,
		YLKS_ACTIVE             = 1,
		YLKS_FLASHING_AVAILABLE = 2,
		YLKS_AVAILABLE          = 3,
		YLKS_HAS_TARGET_LOCK    = 4,
		YLKS_COOLDOWN           = 5,
		YLKS_GLOBAL_COOLDOWN    = 6,
		YLKS_IS_TARGETED        = 7,
		YLKS_MAX                = 8
	};

	/**
	 * Enum DreadGame.YE_LEDKeyName
	 */
	enum class EYE_LEDKeyName : uint8_t
	{
		YLKN_W          = 0,
		YLKN_A          = 1,
		YLKN_S          = 2,
		YLKN_D          = 3,
		YLKN_Q          = 4,
		YLKN_E          = 5,
		YLKN_R          = 6,
		YLKN_F          = 7,
		YLKN_C          = 8,
		YLKN_T          = 9,
		YLKN_SPACE      = 10,
		YLKN_LEFT_SHIFT = 11,
		YLKN_ASTERIK    = 12,
		YLKN_ONE        = 13,
		YLKN_TWO        = 14,
		YLKN_THREE      = 15,
		YLKN_FOUR       = 16,
		YLKN_ESC        = 17,
		YLKN_TAB        = 18,
		YLKN_MAX        = 19
	};

	/**
	 * Enum DreadGame.EParseLocTextMacroStringResult
	 */
	enum class EParseLocTextMacroStringResult : uint8_t
	{
		IncorrectFormat        = 0,
		LocalizedText          = 1,
		NamespaceLocalizedText = 2,
		MAX                    = 3
	};

	/**
	 * Enum DreadGame.EYMovieManagerTargetPlatform
	 */
	enum class EYMovieManagerTargetPlatform : uint8_t
	{
		Any     = 0,
		Windows = 1,
		PS4     = 2,
		MAX     = 3
	};

	/**
	 * Enum DreadGame.EYMusicManagerState
	 */
	enum class EYMusicManagerState : uint8_t
	{
		NotSet         = 0,
		Orbit          = 1,
		OrbitCountdown = 2,
		IntroMatch     = 3,
		EarlyMatch     = 4,
		MidMatch       = 5,
		LateMatch      = 6,
		MAX            = 7
	};

	/**
	 * Enum DreadGame.EYOnboardingLoadoutType
	 */
	enum class EYOnboardingLoadoutType : uint8_t
	{
		YOLT_ANY    = 0,
		YOLT_Trader = 1,
		YOLT_Custom = 2,
		YOLT_MAX    = 3
	};

	/**
	 * Enum DreadGame.EYShopPurchaseSource
	 */
	enum class EYShopPurchaseSource : uint8_t
	{
		YSPS_ANY           = 0,
		YSPS_MARKET        = 1,
		YSPS_QUICKPURCHASE = 2,
		YSPS_MAX           = 3
	};

	/**
	 * Enum DreadGame.EYOnboardingEvent
	 */
	enum class EYOnboardingEvent : uint8_t
	{
		YOBE_NONE                      = 0,
		YOBE_TRIGGERED                 = 1,
		YOBE_WINDOW_CLICKED            = 2,
		YOBE_BUTTON_CLICKED            = 3,
		YOBE_ITEM_EQUIPED              = 4,
		YOBE_ITEM_UNLOCKED             = 5,
		YOBE_ITEM_BOUGHT               = 6,
		YOBE_LEVEL_REACHED             = 7,
		YOBE_MENU_REACHED              = 8,
		YOBE_MENU_REACHED_WITH_CLASS   = 9,
		YOBE_MENU_REACHED_WITH_SHIP    = 10,
		YOBE_MENU_CREDITS              = 11,
		YOBE_MENU_COMMUNITYPOINTS      = 12,
		YOBE_MENU_META_REACHED         = 13,
		YOBE_CHARACTER_AVATAR_FINISHED = 14,
		YOBE_TUTORIAL_POPUP_NO         = 15,
		YOBE_TUTORIAL_POPUP_YES        = 16,
		YOBE_TUTORIAL_FINISHED         = 17,
		YOBE_TRAINING_MATCH_POPUP_NO   = 18,
		YOBE_TRAINING_MATCH_POPUP_YES  = 19,
		YOBE_ITEM_RESEARCHED           = 20,
		YOBE_LOGIN                     = 21,
		YOBE_MAX                       = 22
	};

	/**
	 * Enum DreadGame.EYCameraState
	 */
	enum class EYCameraState : uint8_t
	{
		EYCS_None            = 0,
		EYCS_NormalView      = 1,
		EYCS_PreviewPosition = 2,
		EYCS_Previewing      = 3,
		EYCS_MAX             = 4
	};

	/**
	 * Enum DreadGame.EYPlayerRestrictions
	 */
	enum class EYPlayerRestrictions : uint8_t
	{
		EYPC_Abilities            = 0,
		EYPC_Weapons              = 1,
		EYPC_SwitchWeapons        = 2,
		EYPC_EnergyWheel          = 3,
		EYPC_OfficerNotifications = 4,
		EYPC_Chat                 = 5,
		EYPC_Ability1             = 6,
		EYPC_Ability2             = 7,
		EYPC_Ability3             = 8,
		EYPC_Ability4             = 9,
		EYPC_ShortCommands        = 10,
		EYPC_MAX                  = 11
	};

	/**
	 * Enum DreadGame.EYFighterDroneState
	 */
	enum class EYFighterDroneState : uint8_t
	{
		YFDS_ENGAGE_IN  = 0,
		YFDS_ENGAGE_OUT = 1,
		YFDS_NONE       = 2,
		YFDS_MAX        = 3
	};

	/**
	 * Enum DreadGame.EYPlayerBotGoal
	 */
	enum class EYPlayerBotGoal : uint8_t
	{
		YPB_ENGAGE_PLAYER = 0,
		YPB_CAPTURE_CP    = 1,
		YPB_MAX           = 2
	};

	/**
	 * Enum DreadGame.EYCameraTuningMode
	 */
	enum class EYCameraTuningMode : uint8_t
	{
		ZOOM_GAMEPLAY_TUNING  = 0,
		ZOOM_GAMEPLAY_TUNING2 = 1,
		GAMEPLAY_TUNING       = 2,
		SPECTATING_TUNING     = 3,
		MAX                   = 4,
		MAX01                 = 5
	};

	/**
	 * Enum DreadGame.EYFunctionUnlockType
	 */
	enum class EYFunctionUnlockType : uint8_t
	{
		YFUT_None                 = 0,
		YFUT_UnlockDailyContracts = 1,
		YFUT_MAX                  = 2
	};

	/**
	 * Enum DreadGame.EYShipDebrisState
	 */
	enum class EYShipDebrisState : uint8_t
	{
		YSDS_Inactive              = 0,
		YSDS_Initialized           = 1,
		YSDS_Active                = 2,
		YSDS_DestructionRequested  = 3,
		YSDS_DestructionInProgress = 4,
		YSDS_MAX                   = 5
	};

	/**
	 * Enum DreadGame.EYMarketItemFlags
	 */
	enum class EYMarketItemFlags : uint8_t
	{
		YMIF_None           = 0,
		YMIF_GoldMembership = 1,
		YMIF_FoundersPack   = 2,
		YMIF_Credits        = 3,
		YMIF_MAX            = 4
	};

	/**
	 * Enum DreadGame.EYPlayerRelatedFlagsType
	 */
	enum class EYPlayerRelatedFlagsType : uint8_t
	{
		None    = 0,
		Locked  = 1,
		Owned   = 2,
		Invalid = 3,
		MAX     = 4
	};

	/**
	 * Enum DreadGame.EYMarketItemPromotionFlags
	 */
	enum class EYMarketItemPromotionFlags : uint8_t
	{
		YMIPF_Featured      = 0,
		YMIPF_Spotlight     = 1,
		YMIPF_OnSale        = 2,
		YMIPF_Recommended   = 3,
		YMIPF_Popular       = 4,
		YMIPF_ShipVanity    = 5,
		YMIPF_CaptainVanity = 6,
		YMIPF_HavocReward   = 7,
		YMIPF_MAX           = 8
	};

	/**
	 * Enum DreadGame.EYVerticalDirection
	 */
	enum class EYVerticalDirection : uint8_t
	{
		YVD_BOTH = 0,
		YVD_DOWN = 1,
		YVD_UP   = 2,
		YVD_MAX  = 3
	};

	/**
	 * Enum DreadGame.EYSteeringDirection
	 */
	enum class EYSteeringDirection : uint8_t
	{
		YSD_BOTH  = 0,
		YSD_LEFT  = 1,
		YSD_RIGHT = 2,
		YSD_MAX   = 3
	};

	/**
	 * Enum DreadGame.EYAnimationTriggerState
	 */
	enum class EYAnimationTriggerState : uint8_t
	{
		EATS_None     = 0,
		EATS_Ready    = 1,
		EATS_Charge   = 2,
		EATS_Firing   = 3,
		EATS_Cooldown = 4,
		EAT_MAX       = 5,
		MAX           = 6
	};

	/**
	 * Enum DreadGame.EYWarpState
	 */
	enum class EYWarpState : uint8_t
	{
		YWS_NotWarping = 0,
		YWS_Charging   = 1,
		YWS_WarpingIn  = 2,
		YWS_InWarpGate = 3,
		YWS_WarpingOut = 4,
		YWS_MAX        = 5
	};

	/**
	 * Enum DreadGame.EYBeamState
	 */
	enum class EYBeamState : uint8_t
	{
		YBS_NONE        = 0,
		YBS_HEAL        = 1,
		YBS_HEAL_ALT    = 2,
		YBS_DAMAGE      = 3,
		YBS_DAMAGE_ALT  = 4,
		YBS_POINTER     = 5,
		YBS_POINTER_ALT = 6,
		YBS_MAX         = 7
	};

	/**
	 * Enum DreadGame.EYBeamTargetType
	 */
	enum class EYBeamTargetType : uint8_t
	{
		YBTT_NONE           = 0,
		YBTT_MISC           = 1,
		YBTT_ENEMY          = 2,
		YBTT_ENEMYSHIELD    = 3,
		YBTT_FRIENDLY       = 4,
		YBTT_FRIENDLYSHIELD = 5,
		YBTT_MAX            = 6
	};

	/**
	 * Enum DreadGame.EYShootingMode
	 */
	enum class EYShootingMode : uint8_t
	{
		YSM_Invalid               = 0,
		YSM_OneBarrelOneShoot     = 1,
		YSM_OneBarrelMultiShot    = 2,
		YSM_MultiBarrelOneShoot   = 3,
		YSM_MultiBarrelAllShoot   = 4,
		YSM_MultiBarrelMultiShoot = 5,
		YSM_MAX                   = 6
	};

	/**
	 * Enum DreadGame.EYEOMEarningsType
	 */
	enum class EYEOMEarningsType : uint8_t
	{
		EYEOMET_Base             = 0,
		EYEOMET_GenericBooster   = 1,
		EYEOMET_FirstWinOfTheDay = 2,
		EYEOMET_BattleBonus      = 3,
		EYEOMET_EliteBonus       = 4,
		EYEOMET_EliteShareBonus  = 5,
		EYEOMET_Invalid          = 6,
		EYEOMET_MAX              = 7
	};

	/**
	 * Enum DreadGame.EYOrbitReadyState
	 */
	enum class EYOrbitReadyState : uint8_t
	{
		EYORS_Orbit_NotReady        = 0,
		EYORS_Orbit_Ready           = 1,
		EYORS_Respawn_NotReady      = 2,
		EYORS_Respawn_Ready         = 3,
		EYORS_Respawn_LockedReady   = 4,
		EYORS_Respawn_AutoCountdown = 5,
		EYORS_MAX                   = 6
	};

	/**
	 * Enum DreadGame.EYCrosshairRangeType
	 */
	enum class EYCrosshairRangeType : uint8_t
	{
		YCRT_NONE       = 0,
		YCRT_INRANGE    = 1,
		YCRT_MIDRANGE   = 2,
		YCRT_OUTOFRANGE = 3,
		YCRT_MAX        = 4
	};

	/**
	 * Enum DreadGame.EYPauseMenuOption
	 */
	enum class EYPauseMenuOption : uint8_t
	{
		EYPMO_AudioVideo      = 0,
		EYPMO_Controls        = 1,
		EYPMO_CustomerSupport = 2,
		EYPMO_Eula            = 3,
		EYPMO_ExitMatch       = 4,
		EYPMO_HelperHUD       = 5,
		EYPMO_Resume          = 6,
		EYPMO_UserSettings    = 7,
		EYPMO_Tutorial        = 8,
		EYPMO_AVSMShowcase    = 9,
		EYPMO_Benchmark       = 10,
		EYPMO_ReturnToOutpost = 11,
		EYPMO_Credits         = 12,
		EYPMO_Count           = 13,
		EYPMO_MAX             = 14
	};

	/**
	 * Enum DreadGame.EYBugReporterSelection
	 */
	enum class EYBugReporterSelection : uint8_t
	{
		EYBRS_IssueType    = 0,
		EYBRS_UserMessage  = 1,
		EYBRS_SubmitButton = 2,
		EYBRS_Invalid      = 3,
		EYBRS_MAX          = 4
	};

	/**
	 * Enum DreadGame.EYScoringEventLevel
	 */
	enum class EYScoringEventLevel : uint8_t
	{
		YSEL_MINOR  = 0,
		YSEL_MEDIUM = 1,
		YSEL_MAJOR  = 2,
		YSEL_RIBBON = 3,
		YSEL_MAX    = 4
	};

	/**
	 * Enum DreadGame.EYTitleScreenError
	 */
	enum class EYTitleScreenError : uint8_t
	{
		NONE                           = 0,
		NETWORK_DISCONNECT_EVENT       = 1,
		SIGNED_OUT_OF_PSN              = 2,
		NO_NETWORK_CONNECTION          = 3,
		SERVER_CONNECTION_LOST         = 4,
		LOGIN_SERVER_CONNECTION_FAILED = 5,
		DUAL_LOGIN                     = 6,
		KICKED                         = 7,
		SERVER_MAINTENANCE             = 8,
		PRIVILEGE_CHECK_FAILED         = 9,
		AGE_RESTRICTED                 = 10,
		PATCH_REQUIRED                 = 11,
		SYSTEM_UPDATE_REQUIRED         = 12,
		ACCOUNT_TYPE_FAILURE           = 13,
		NOT_SIGNED_UP                  = 14,
		INVALID_USER                   = 15,
		LOAD_NETWORK_MANIFEST_FAILED   = 16,
		LOAD_MARKET_MANIFEST_FAILED    = 17,
		LOAD_DASHBOARD_MANIFEST_FAILED = 18,
		LOAD_SAVE_DATA_FAILED          = 19,
		ACCOUNT_BANNED                 = 20,
		ACCOUNT_LOCKED                 = 21,
		SONY_ACCOUNT_ALREADY_LINKED    = 22,
		GREYBOX_ACCOUNT_ALREADY_LINKED = 23,
		ACCOUNT_ALREADY_EXISTS         = 24,
		ACCOUNT_NOT_FOUND              = 25,
		ACCOUNT_NOT_VERIFIED           = 26,
		EMAIL_AUTHENTICATION_FAILED    = 27,
		INVALID_EMAIL_PROVIDED         = 28,
		UNKNOWN_ERROR                  = 29,
		MAX                            = 30
	};

	/**
	 * Enum DreadGame.EYUIPerfTest
	 */
	enum class EYUIPerfTest : uint8_t
	{
		None         = 0,
		AbilityOne   = 1,
		AbilityTwo   = 2,
		AbilityThree = 3,
		AbilityFour  = 4,
		Count        = 5,
		MAX          = 6
	};

	/**
	 * Enum DreadGame.EYEventCycleContext
	 */
	enum class EYEventCycleContext : uint8_t
	{
		YECC_Singleplayer = 0,
		YECC_Multiplayer  = 1,
		YECC_SPTravel     = 2,
		YECC_SPSpaceport  = 3,
		YECC_MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DreadGame.YGameMap
	 * Size -> 0x0068
	 */
	struct FYGameMap
	{
	public:
		class FName                                                m_mapName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_mapNameForPlayer;                                      // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                m_mapPath;                                               // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_loadingScreenDescription;                              // 0x0028(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_loadingScreen;                                         // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, Transient, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMUN[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       m_isTutorial;                                            // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5DT[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMPGameMap
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FYMPGameMap : public FYGameMap
	{
	public:
		bool                                                       m_avaliableTM;                                           // 0x0068(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO0M[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLoadingScreenGameModeData
	 * Size -> 0x00A0
	 */
	struct FYLoadingScreenGameModeData
	{
	public:
		class FString                                              m_gameModeID;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_gameModeName;                                          // 0x0010(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_gameModeObjective;                                     // 0x0028(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_gameModeTextOne;                                       // 0x0040(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_gameModeTextTwo;                                       // 0x0058(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_gameModeTextThree;                                     // 0x0070(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_firstIcon;                                             // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_secondIcon;                                            // 0x0090(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_thirdIcon;                                             // 0x0098(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMenuGameModeDefinition
	 * Size -> 0x0070
	 */
	struct FYMenuGameModeDefinition
	{
	public:
		class FString                                              m_gameMode;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_calloutName;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_gameModeName;                                          // 0x0020(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_gameModeDescription;                                   // 0x0038(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EYGameModeType                                             m_gameModeType;                                          // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6M6[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               m_iconPath;                                              // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       m_canFavorite;                                           // 0x0068(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isPVEEventActive;                                      // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_locked;                                                // 0x006A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1M0O[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMenuFleetTypeDetail
	 * Size -> 0x0028
	 */
	struct FYMenuFleetTypeDetail
	{
	public:
		EYFleetType                                                m_fleetType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0A1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTNO[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YUIManufacturerInformationEntry
	 * Size -> 0x00A8
	 */
	struct FYUIManufacturerInformationEntry
	{
	public:
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S59G[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_heroShipIcon;                                          // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PKF[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                m_name;                                                  // 0x0040(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_heroShipName;                                          // 0x0058(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_slogan;                                                // 0x0070(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0088(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    m_id;                                                    // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPNV[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YToolTipValue
	 * Size -> 0x0048
	 */
	struct FYToolTipValue
	{
	public:
		unsigned char                                              UnknownData_72UU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYToolTipValueType                                         m_type;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSD1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0010(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_value;                                                 // 0x0028(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      m_modifier;                                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonType                                            m_comparisonType;                                        // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ADR[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YItemUIData
	 * Size -> 0x00D0
	 */
	struct FYItemUIData
	{
	public:
		class FText                                                m_headline;                                              // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_subline;                                               // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0048(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITR0[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_highResIcon;                                           // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0I4X[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FYToolTipValue>                              m_toolTipValues;                                         // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_compatibilityInfoText;                                 // 0x00B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		bool                                                       m_hasMarket3DPreview;                                    // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYCameraPreviewComponentType                               m_cameraPreviewComponentType;                            // 0x00C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPVY[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YItemMetaData
	 * Size -> 0x0003
	 */
	struct FYItemMetaData
	{
	public:
		EYQualityLevel                                             m_qualityLevel;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_internalOnly;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_publicReady;                                           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWeaponStateInfo
	 * Size -> 0x0014
	 */
	struct FYWeaponStateInfo
	{
	public:
		unsigned char                                              UnknownData_P1NY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_timeStamp;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_randomSeed;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentSpread;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isInitialShot;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X5W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YWeaponDataTableRow
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FYWeaponDataTableRow : public FTableRowBase
	{
	public:
		EYSlotType                                                 m_slotType;                                              // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80EL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_class;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageHigh;                                            // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageHighRange;                                       // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageMedium;                                          // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageMediumRange;                                     // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageLow;                                             // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageHigh;                                   // 0x0034(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageMedium;                                 // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageLow;                                    // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxRange;                                              // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageRadius;                                          // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_ignoreShields;                                         // 0x0048(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_friendlyFire;                                          // 0x0049(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_exactHitDetection;                                     // 0x004A(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II11[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_instigatorIgnoreTime;                                  // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_weaponChargeUpTime;                                    // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_weaponCooldownTime;                                    // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_amplifiedCoolDownMultiplierTime;                       // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_abilityDamage;                                         // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_initialSpeed;                                          // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxFlightSpeed;                                        // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_gravityScale;                                          // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ammoMagazinSize;                                       // 0x006C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_ammoMagazinReloadTime;                                 // 0x0070(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_amplifiedAmmoMagazinReloadTime;                        // 0x0074(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadBaseValue;                                       // 0x0078(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadMaxValue;                                        // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadEase;                                            // 0x0080(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadBonusAim;                                        // 0x0084(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyMovement;                                 // 0x0088(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyShooting;                                 // 0x008C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyDamageMultiplier;                         // 0x0090(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_proximityDistance;                                     // 0x0094(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_proximityAgainstCreeps;                                // 0x0098(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYF6[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_highHealing;                                           // 0x009C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_highHealingRange;                                      // 0x00A0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_mediumHealing;                                         // 0x00A4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_mediumHealingRange;                                    // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_lowHealing;                                            // 0x00AC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxHealingRange;                                       // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hitImpactForce;                                        // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_fireRecoilForce;                                       // 0x00B8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_amplifiedEnergyCost;                                   // 0x00BC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitzoneDamageMultiplier;                               // 0x00C0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitzoneHitPenetrationDistance;                         // 0x00C4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_preciseAimingRange;                                    // 0x00C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBWI[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YWeaponAngleInfo
	 * Size -> 0x0020
	 */
	struct FYWeaponAngleInfo
	{
	public:
		float                                                      m_minYawAngle;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxYawAngle;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxYawDifference;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_yawRotationRate;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minPitchAngle;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxPitchAngle;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxPitchDifference;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pitchRotationRate;                                     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YItemSystemData
	 * Size -> 0x0028
	 */
	struct FYItemSystemData
	{
	public:
		int32_t                                                    m_itemID;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFYW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_itemBaseClass;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_itemTier;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8PC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYShipClass>                                        m_compatibleShips;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTargetInfo
	 * Size -> 0x0054
	 */
	struct FYTargetInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               m_actor;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FVector                                             m_endLocation;                                           // 0x0008(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_crossHairLocation;                                     // 0x0014(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_startLocation;                                         // 0x0020(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_camEndLocation;                                        // 0x002C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_camStartLocation;                                      // 0x0038(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_hasHit;                                                // 0x0044(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_weaponHasHit;                                          // 0x0045(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1JL[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             m_bestWeaponShootLocation;                               // 0x0048(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMergedGameplayComponentData
	 * Size -> 0x0030
	 */
	struct FYMergedGameplayComponentData
	{
	public:
		unsigned char                                              UnknownData_1WOE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              m_mergedSkeletalMeshComponent;                           // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI1U[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YWeaponFireInfo
	 * Size -> 0x0080
	 */
	struct FYWeaponFireInfo
	{
	public:
		EYFireState                                                m_fireState;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RRH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_timeStamp;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_randomSeed;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentSpread;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shotCounter;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_abilityIdx;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_nextProjectileIDs;                                     // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FYTargetInfo                                        m_targetInfo;                                            // 0x0028(0x0054) NativeAccessSpecifierPublic
		bool                                                       m_isInitialShot;                                         // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO5D[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDamageDistanceEntry
	 * Size -> 0x0008
	 */
	struct FYDamageDistanceEntry
	{
	public:
		int32_t                                                    m_rangeMax;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_relativeDamage;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YReplicatedTargetInfo
	 * Size -> 0x0020
	 */
	struct FYReplicatedTargetInfo
	{
	public:
		struct FVector                                             m_camEndLocation;                                        // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9HI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              m_actor;                                                 // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_hasHit;                                                // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_weaponHasHit;                                          // 0x0019(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYLI[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_nextRepTime;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAmmoCounterReplicationData
	 * Size -> 0x0008
	 */
	struct FYAmmoCounterReplicationData
	{
	public:
		int32_t                                                    m_weaponAmmoCounter;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_weaponGroupIdx;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAmmoReloadReplicationData
	 * Size -> 0x000C
	 */
	struct FYAmmoReloadReplicationData
	{
	public:
		bool                                                       m_isReloading;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4G6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_weaponGroupIdx;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_reloadTime;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWeaponGroupInfo
	 * Size -> 0x0018
	 */
	struct FYWeaponGroupInfo
	{
	public:
		class FName                                                m_socketTag;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxWeaponsFiringAtTheSameTime;                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4WG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_weaponClass;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDamageLevel
	 * Size -> 0x0008
	 */
	struct FYDamageLevel
	{
	public:
		float                                                      m_maxDistance;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damage;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCachedDamageModifierData
	 * Size -> 0x000C
	 */
	struct FYCachedDamageModifierData
	{
	public:
		float                                                      m_damageModifier;                                        // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_shieldDamageModifer;                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileSpeedModifer;                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YProjectileOfflineDataTableRow
	 * Size -> 0x0210 (FullSize[0x0218] - InheritedSize[0x0008])
	 */
	struct FYProjectileOfflineDataTableRow : public FTableRowBase
	{
	public:
		TAssetPtr<class UParticleSystem>                           m_projectileParticleSystem;                              // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7M1[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_projectileImpactParticleSystem;                        // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_927L[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_onShipVFXParticleSystem;                               // 0x0048(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6ZZ[0x4];                                   // 0x0064(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_projectileFizzleOutParticleSystem;                     // 0x0068(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JC0W[0x4];                                   // 0x0084(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_projectileDestroyedParticleSystem;                     // 0x0088(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCCM[0x4];                                   // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UMaterialInterface>                        m_impactDecalMaterial;                                   // 0x00A8(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQ43[0x4];                                   // 0x00C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      m_impactDecalSize;                                       // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitmaskSize;                                           // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitmaskColorMultiplier;                                // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYImpactVFX                                                m_impactVFXType;                                         // 0x00D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_createAudioComponent;                                  // 0x00D5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_debugDisableDataTable;                                 // 0x00D6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_debugLineTrace;                                        // 0x00D7(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_minimumUpdate;                                         // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_decalAlwaysRelevant;                                   // 0x00DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_impactFxAlwaysRelevant;                                // 0x00DD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isUseAsyncCollisionCheck : 1;                          // 0x00DE(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_updateVelocityInScript;                                // 0x00DF(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_updateCollisionInScript;                               // 0x00E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H61[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxFrameTimeForPhysics;                                // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_despawningDelay;                                       // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_radiusDamageTime;                                      // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_armingTime;                                            // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_unarmedDamage;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_damageType;                                            // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_radialDamageFalloff;                                   // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_ignoreShields;                                         // 0x0108(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_notifyAllEnemies;                                      // 0x0109(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_notifyTarget;                                          // 0x010A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_friendlyFire;                                          // 0x010B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_exactHitDetection;                                     // 0x010C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBD0[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UAkAudioEvent>                             m_audioEventProjectileStart;                             // 0x0110(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY53[0x4];                                   // 0x012C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventProjectileStop;                              // 0x0130(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I7R[0x4];                                   // 0x014C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventExplosionDefault;                            // 0x0150(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0V7[0x4];                                   // 0x016C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventExplosionShield;                             // 0x0170(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8QH[0x4];                                   // 0x018C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventImpactDefault;                               // 0x0190(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPMF[0x4];                                   // 0x01AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventImpactShip;                                  // 0x01B0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUJ0[0x4];                                   // 0x01CC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventImpactShield;                                // 0x01D0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD4L[0x4];                                   // 0x01EC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventImpactNotArmed;                              // 0x01F0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGHJ[0x4];                                   // 0x020C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EYProjectilePriorityType                                   m_priorityType;                                          // 0x0210(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bTraceComplex;                                         // 0x0211(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSDN[0x6];                                   // 0x0212(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YBeamModifierEffects
	 * Size -> 0x00B8
	 */
	struct FYBeamModifierEffects
	{
	public:
		float                                                      m_duration;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UParticleSystem>                           m_beamHealAlternate;                                     // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMGV[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_beamDamageAlternate;                                   // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGFE[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_beamPointerAlternate;                                  // 0x0048(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI6C[0x4];                                   // 0x0064(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_impactHealAlternate;                                   // 0x0068(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSG1[0x4];                                   // 0x0084(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UParticleSystem>                           m_impactDamageAlternate;                                 // 0x0088(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRGJ[0x4];                                   // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UAkAudioEvent*                                       m_switchAlternateSoundOn;                                // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_switchAlternateSoundOff;                               // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionSpheresSetup
	 * Size -> 0x0028
	 */
	struct FYSoftCollisionSpheresSetup
	{
	public:
		float                                                      m_radiusFactor;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_offestFactor;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_centerOffestFactor;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadFactor;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_turnForceAmountFront;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pushForceAmountFront;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_turnForceAmountBack;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pushForceAmountBack;                                   // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pushForceAmountPawnVsPawn;                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_turnForceAmountPawnVsPawn;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionBoxesSetup
	 * Size -> 0x0014
	 */
	struct FYSoftCollisionBoxesSetup
	{
	public:
		float                                                      m_spreadFactor;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_widthUpDown;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_widthLeftRight;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pushForceAmount;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pushForceAmountPawnVsPawn;                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionParticleSystemComponentSetup
	 * Size -> 0x0030
	 */
	struct FYSoftCollisionParticleSystemComponentSetup
	{
	public:
		class UParticleSystem*                                     m_softImpactBoxTemplate;                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     m_softImpactSphereTemplate;                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     m_softImpactPawnVsPawnTemplate;                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_playPSCOnce;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_playPawnVsPawnPSCOnce;                                 // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM8O[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_pscOffsetTopDown;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pscOffsetLeftRight;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pscOffsetFrontBack;                                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxPSC;                                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K0Z[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionInfo
	 * Size -> 0x0050
	 */
	struct FYSoftCollisionInfo
	{
	public:
		EYSoftCollisionShape                                       m_collisionShape;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYSoftCollisionSector                                      m_collisionSector;                                       // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLD9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             m_relativeLocation;                                      // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_relativeSize;                                          // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_forceLocalDirection;                                   // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_forceAmount;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_forceAmountXAxis;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bIsOverlaping;                                         // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_bPawnVsPawn;                                           // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_bLastOverlaping;                                       // 0x0032(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXBW[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             m_pscLocation;                                           // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            m_pscRotation;                                           // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    m_pscID;                                                 // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionPSCEntry
	 * Size -> 0x0014
	 */
	struct FYSoftCollisionPSCEntry
	{
	public:
		TWeakObjectPtr<class UParticleSystemComponent>             m_particleSystemComponent;                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       m_inUse;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIVU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_timeStamp;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_id;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YABilityMovementForce
	 * Size -> 0x0028
	 */
	struct FYABilityMovementForce
	{
	public:
		struct FVector                                             m_forceDirection;                                        // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_forceAmount;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_forceCurveModifier;                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_socketName;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_invertOnTurn;                                          // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDUJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSoftCollisionOverlapResult
	 * Size -> 0x0010
	 */
	struct FYSoftCollisionOverlapResult
	{
	public:
		bool                                                       m_pawnVsPawn;                                            // 0x0000(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYSoftCollisionSector                                      m_sector;                                                // 0x0001(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XRK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             m_overlapShapeLocation;                                  // 0x0004(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.PulseTargettingClasses
	 * Size -> 0x0010
	 */
	struct FPulseTargettingClasses
	{
	public:
		class UClass*                                              m_actorClass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYProjectilePriorityType                                   m_priorityType;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_includeDerivedClasses;                                 // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUUV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.AbilityPerimeterClasses
	 * Size -> 0x0010
	 */
	struct FAbilityPerimeterClasses
	{
	public:
		float                                                      m_maxDistanceTowardsActor;                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minDistanceTowardsActor;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_priority;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYProjectilePriorityType                                   m_priorityType;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQ6J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YReplicatedAbility
	 * Size -> 0x001C
	 */
	struct FYReplicatedAbility
	{
	public:
		EYAbilityState                                             m_currentState;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTB8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_currentCoolDown;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentActiveTime;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentContextActionTime;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_globalCooldown;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_supply;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_stateChangeCount;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.AbilityPerimeterTargetInfo
	 * Size -> 0x0010
	 */
	struct FAbilityPerimeterTargetInfo
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               m_actor;                                                 // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    m_weaponId;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPooledActors
	 * Size -> 0x0010
	 */
	struct FYPooledActors
	{
	public:
		class AActor*                                              m_object;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isInUse : 1;                                           // 0x0008(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM5G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YNavigationNodeData
	 * Size -> 0x000C
	 */
	struct FYNavigationNodeData
	{
	public:
		TWeakObjectPtr<class AYCreepNavigation>                    m_NextWaypoint;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       m_blocked;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6WJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YBaseClassShipScoring
	 * Size -> 0x001C
	 */
	struct FYBaseClassShipScoring
	{
	public:
		EYShipBaseClass                                            m_class;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RHH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_friendlyRadius;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0A5A[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_hostileRadius;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKWK[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_friendlyShipScore;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hostileShipScore;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBaseClassShipCenterOfMassWeight
	 * Size -> 0x0008
	 */
	struct FYBaseClassShipCenterOfMassWeight
	{
	public:
		EYShipBaseClass                                            m_class;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS79[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_comWeight;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPlayerEventInfo
	 * Size -> 0x0050
	 */
	struct FYPlayerEventInfo
	{
	public:
		TWeakObjectPtr<class AInfo>                                m_playerInfo;                                            // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AInfo>                                m_supportedInfo;                                         // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQPV[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMultiplierAdditive
	 * Size -> 0x0018
	 */
	struct FYMultiplierAdditive
	{
	public:
		class FString                                              m_name;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_value;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAFV[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YBoosterEffect
	 * Size -> 0x0040
	 */
	struct FYBoosterEffect
	{
	public:
		EYBoostedCurrency                                          m_type;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYBoostedTarget                                            m_target;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFXX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYCreditsPoolType>                                  m_appliesToCreditsPool;                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EYReputationPoolType>                               m_appliesToReputationPool;                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      m_multiplier;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7OY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYMultiplierAdditive>                        m_multiplierAdditives;                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEventInfo
	 * Size -> 0x000C
	 */
	struct FYEventInfo
	{
	public:
		TWeakObjectPtr<class AInfo>                                m_playerInfo;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      m_timeStamp;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWeaponAngleInfoOverride
	 * Size -> 0x0028
	 */
	struct FYWeaponAngleInfoOverride
	{
	public:
		class FName                                                m_socketName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYWeaponAngleInfo                                   m_overrideData;                                          // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTargetMarkerProperties
	 * Size -> 0x0020
	 */
	struct FYTargetMarkerProperties
	{
	public:
		bool                                                       m_showOnHud;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6QN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxVisibleDistance;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_displayOnAllies;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCTG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            m_canvasTexture;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_displayOnMinimap;                                      // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZJW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YReplicatedRecentHitData
	 * Size -> 0x0038
	 */
	struct FYReplicatedRecentHitData
	{
	public:
		int32_t                                                    m_itemID;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageDone;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZBQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_captainIcon;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_rank;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7SK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPawnDeathData
	 * Size -> 0x00A0
	 */
	struct FYPawnDeathData
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0KJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0028) NativeAccessSpecifierPublic
		class APawn*                                               InstigatingPawn;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_deathForceParamSetIndex;                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_itemIDThatKilled;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYReplicatedRecentHitData>                   m_replicatedRecentHits;                                  // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FYReplicatedRecentHitData                           m_replicatedKillingBlow;                                 // 0x0058(0x0038) NativeAccessSpecifierPublic
		TArray<struct FYReplicatedRecentHitData>                   m_replicatedAssists;                                     // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPawnDeathForceParams
	 * Size -> 0x001C
	 */
	struct FYPawnDeathForceParams
	{
	public:
		struct FVector                                             m_forcePosition;                                         // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_forceDirection;                                        // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_forceAmount;                                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YKillAssistData
	 * Size -> 0x001C
	 */
	struct FYKillAssistData
	{
	public:
		TWeakObjectPtr<class AInfo>                                m_controllerInfo;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      m_timeStamp;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_totalDamageDealt;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_totalDamageDealtLifetime;                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifetimeDamageWithWeapons;                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifetimeDamageWithAbilities;                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipLoadoutInfo
	 * Size -> 0x0078
	 */
	struct FYShipLoadoutInfo
	{
	public:
		class FName                                                m_loadoutID;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMPV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_primaryWeaponItemId;                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_secondaryWeaponItemId;                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S47A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_abilityItemIds;                                        // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_perkNames;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_perkIds;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              m_loadoutName;                                           // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_displayInfo;                                           // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_loadoutComplete;                                       // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJKR[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_precastLoadoutID;                                      // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_loadoutTier;                                           // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AMB[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCameraTuningInfo
	 * Size -> 0x000C
	 */
	struct FYCameraTuningInfo
	{
	public:
		float                                                      m_distanceOffSet;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_zOffSet;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_zOffSetZoomed;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCameraPostProcessDefinition
	 * Size -> 0x0018
	 */
	struct FYCameraPostProcessDefinition
	{
	public:
		class UMaterialInstance*                                   m_materialInstance;                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_parameterName;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_animationCurve;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCameraDeathInfo
	 * Size -> 0x0010
	 */
	struct FYCameraDeathInfo
	{
	public:
		class UCurveFloat*                                         m_deathCameraDistanceCurve;                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_transitionDuration;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_finalDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YProjectileServerData
	 * Size -> 0x0008
	 */
	struct FYProjectileServerData
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_squaredDistance;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipAppeareaceContainer
	 * Size -> 0x0030
	 */
	struct FYShipAppeareaceContainer
	{
	public:
		TArray<class UYShipVanityMeshPart*>                        m_heroShipParts;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UYShipVanityEmblem*                                  m_emblem;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityPaint*                                   m_paint;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityPattern*                                 m_pattern;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityDecal*                                   m_decal;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipImportLoadoutInfo
	 * Size -> 0x0070
	 */
	struct FYShipImportLoadoutInfo
	{
	public:
		class FName                                                m_loadoutID;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_pid;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_precastLoadoutID;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKZX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_name;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipClass;                                             // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIFH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_displayInfo;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_weaponIDs;                                             // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_abilityIDs;                                            // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_perkIds;                                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPlayerMatchStatisticsCategory
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYPlayerMatchStatisticsCategory : public FTableRowBase
	{
	public:
		EYPlayerMatchStatisticsCategoryID                          m_id;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_289I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    m_priority;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFSS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCreditsInfo
	 * Size -> 0x0028
	 */
	struct FYCreditsInfo
	{
	public:
		TArray<int32_t>                                            m_credits;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_finalized;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9S9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_battleID;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YJsonObjectRep
	 * Size -> 0x0040
	 */
	struct FYJsonObjectRep
	{
	public:
		bool                                                       m_head;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQPR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_id;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_type;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87HO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      m_keys;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_childrenIds;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              m_sValue;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YScoringEvent
	 * Size -> 0x00B8
	 */
	struct FYScoringEvent
	{
	public:
		EYScoringEventID                                           m_id;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P8C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_name;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_eventNameForPlayer;                                    // 0x0018(0x0018) NativeAccessSpecifierPublic
		class FString                                              m_gameModes;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_summaryCategory;                                       // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_parameters;                                            // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_ribbonName;                                            // 0x0060(0x0018) NativeAccessSpecifierPublic
		class FText                                                m_ribbonDescription;                                     // 0x0078(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    m_eventVisibility;                                       // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventScore;                                            // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventXP;                                               // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventCredits;                                          // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numEventsForRibbon;                                    // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonScore;                                           // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonXP;                                              // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonCredits;                                         // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bNotifyDuringMatch;                                    // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_assignXPToAllShips;                                    // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_applyVeteranMlt;                                       // 0x00B2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_applyPremiumMlt;                                       // 0x00B3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_applyTierBonus;                                        // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYScoringEventRewardCategory                               m_rewardCategory;                                        // 0x00B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GBO[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPlayerMatchStat
	 * Size -> 0x0048
	 */
	struct FYPlayerMatchStat
	{
	public:
		class FName                                                m_pid;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYPlayerMatchStatisticsCategory                     m_category;                                              // 0x0008(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EYPlayerMatchStatComparison                                m_comparison;                                            // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNR5[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_stat;                                                  // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_statDiffToAvg;                                         // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYPlayerMatchStatMedalType                                 m_medal;                                                 // 0x0044(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZU8A[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEventResponse
	 * Size -> 0x002C
	 */
	struct FYEventResponse
	{
	public:
		int32_t                                                    m_id;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_ribbonAchieved;                                        // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWDC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_shipId;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventScore;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonScore;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventReward;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonReward;                                          // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_eventCredits;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ribbonCredits;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_visibility;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_requiresHUDUpdate;                                     // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYScoringEventRewardCategory                               m_rewardCategory;                                        // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9WR[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCombatSceneBehaviorData
	 * Size -> 0x0028
	 */
	struct FYCombatSceneBehaviorData
	{
	public:
		float                                                      m_behaviorTime;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCQS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYCombatSceneBehavior                                      m_behaviorType;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDSV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_newControlValues;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AYCreepNavigation*                                   m_location;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_targetActor;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQYS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YnpcHUD
	 * Size -> 0x0028
	 */
	struct FYnpcHUD
	{
	public:
		float                                                      m_currentHealth;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxHealth;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_hudName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_hudMisc;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTeam                                                     m_team;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAVY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_image;                                                 // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCombatSceneSpawnData
	 * Size -> 0x00A8
	 */
	struct FYCombatSceneSpawnData
	{
	public:
		float                                                      m_spawnTime;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D76L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_spawnName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_spawnTier;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6O8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_spawnByDataSet_ShipID;                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_pawnClass;                                             // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_pawnAIControllerClass;                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              m_spawnPoint;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTeam                                                     m_team;                                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G6H[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYCombatSceneBehaviorData>                   m_scriptBehavior;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_showHUD;                                               // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_showQuestMarker;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYUIQuestMarker                                            m_markerType;                                            // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQC2[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYnpcHUD                                            m_hudData;                                               // 0x0058(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V649[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_disabeBehaviourTree;                                   // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B5P[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YAnimationsForEndOfMatchEntry
	 * Size -> 0x0010
	 */
	struct FYAnimationsForEndOfMatchEntry
	{
	public:
		TArray<TAssetPtr<class UAnimSequence>>                     m_endOfMatchAnimations;                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCustomMatchInvite
	 * Size -> 0x0028
	 */
	struct FYCustomMatchInvite
	{
	public:
		class FName                                                m_roomId;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_inviterId;                                             // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_inviterName;                                           // 0x0010(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCharacterCustomizationData
	 * Size -> 0x0058
	 */
	struct FYCharacterCustomizationData
	{
	public:
		class UYCharacterCustomizationMesh*                        m_meshHead;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMesh*                        m_meshSuit;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMesh*                        m_meshHeadWear;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMesh*                        m_meshEyeWear;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMaterial*                    m_materialScar;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMaterial*                    m_materialTattoo;                                        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMaterial*                    m_materialEye;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterCustomizationMaterial*                    m_materialTint;                                          // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bIgnoreAdditionalMeshes;                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGTK[0x17];                                  // 0x0041(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterAppearance
	 * Size -> 0x0068
	 */
	struct FYCharacterAppearance
	{
	public:
		class UTexture2D*                                          m_characterImage;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYCharacterTemplate*                                 m_characterTemplate;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FYCharacterCustomizationData                        m_customizationData;                                     // 0x0010(0x0058) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DreadGame.YUISettingTypeCarousel
	 * Size -> 0x0018
	 */
	struct FYUISettingTypeCarousel
	{
	public:
		TArray<class FText>                                        m_carouselOptions;                                       // 0x0000(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		int32_t                                                    m_numberOfOptions;                                       // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bUseCustomOptionValues;                                // 0x0014(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5UN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUISettingTypeSlider
	 * Size -> 0x000C
	 */
	struct FYUISettingTypeSlider
	{
	public:
		float                                                      m_sliderRangeMin;                                        // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_sliderRangeMax;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_snapInterval;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YKeyboardInputUIData
	 * Size -> 0x0048
	 */
	struct FYKeyboardInputUIData
	{
	public:
		class FString                                              m_actionName;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_keyName;                                               // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_descriptionName;                                       // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              m_association;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV7L[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIUserSetting
	 * Size -> 0x0100
	 */
	struct FYUIUserSetting
	{
	public:
		float                                                      m_value;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBSH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_displayName;                                           // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EYUISettingCategory                                        m_category;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUISettingType                                            m_type;                                                  // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUISettingApplyType                                       m_applyType;                                             // 0x0022(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39GR[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_toolTip;                                               // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FText>                                        m_displayOptions;                                        // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FYUISettingTypeCarousel                             m_carousel;                                              // 0x0050(0x0018) Deprecated, NativeAccessSpecifierPublic
		struct FYUISettingTypeSlider                               m_slider;                                                // 0x0068(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       m_accessible;                                            // 0x0074(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEFL[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYKeyboardInputUIData                               m_hotkeyData;                                            // 0x0078(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       m_bShowSlider;                                           // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FLAM[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_gameSettingsGroup;                                     // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bUseDNSettingsGroup;                                   // 0x00D8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYT0[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_settingToggleCVar;                                     // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0AZ[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUICustomMatchSetting
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	struct FYUICustomMatchSetting : public FYUIUserSetting
	{
	public:
		EYCustomMatchSettingID                                     m_id;                                                    // 0x0100(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JCQ[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_defaultValue;                                          // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSquadUserDataBP
	 * Size -> 0x0018
	 */
	struct FYSquadUserDataBP
	{
	public:
		class FName                                                m_pid;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFriendDataBP
	 * Size -> 0x0020
	 */
	struct FYFriendDataBP
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_status;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5NT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDamageableActorInfo
	 * Size -> 0x0010
	 */
	struct FYDamageableActorInfo
	{
	public:
		unsigned char                                              UnknownData_JKKV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YInputDescription
	 * Size -> 0x0050
	 */
	struct FYInputDescription
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_actionName;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_actionNameStop;                                        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_name;                                                  // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EYAxisMappingType                                          m_type;                                                  // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYInputAssociation                                         m_inputAssociation;                                      // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isRebinadableInUI;                                     // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U842[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YBoosterContainer
	 * Size -> 0x0020
	 */
	struct FYBoosterContainer
	{
	public:
		int32_t                                                    m_boosterID;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0HU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_ownerID;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYBoosterCondition*                                  m_condition;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYBoosterAssetBase*                                  m_boosterAsset;                                          // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YBuff
	 * Size -> 0x0070
	 */
	struct FYBuff
	{
	public:
		class AController*                                         m_activator;                                             // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JHL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYBuffType                                                 m_buffType;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DPY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_activationTime;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_duration;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYRK[0x54];                                  // 0x001C(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YRelatedItemEntry
	 * Size -> 0x0008
	 */
	struct FYRelatedItemEntry
	{
	public:
		unsigned char                                              m_identifier;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HY4B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   m_itemID;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.CachedItemIDDataEntry
	 * Size -> 0x0118
	 */
	struct FCachedItemIDDataEntry
	{
	public:
		TArray<struct FYRelatedItemEntry>                          m_relatedItemIDs;                                        // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FYItemUIData                                        m_uiData;                                                // 0x0010(0x00D0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_compatabilityInfo;                                     // 0x00E0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    m_tier;                                                  // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_itemID;                                                // 0x00FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_categoryValueIndex;                                    // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_cachedItemType;                                        // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_previousItemId;                                        // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              m_loadoutItemType;                                       // 0x010C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              m_shipClass;                                             // 0x010D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              m_characterItemTypeForUI;                                // 0x010E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              m_applicableGender;                                      // 0x010F(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isInternal : 1;                                        // 0x0110(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C930[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPerceptedPawnData
	 * Size -> 0x0014
	 */
	struct FYPerceptedPawnData
	{
	public:
		TWeakObjectPtr<class AYPawn>                               m_pawn;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      m_distSqr;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_reactTime;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0XI[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YControlTower
	 * Size -> 0x0020
	 */
	struct FYControlTower
	{
	public:
		unsigned char                                              UnknownData_ER9W[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCreepSpawn
	 * Size -> 0x0040
	 */
	struct FYCreepSpawn
	{
	public:
		class UClass*                                              m_creepPawn;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_creepNeutralPawn;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_creepMaxSpawns;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_creepSpawnIntervalIni;                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_creepSpawnIntervalMin;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_creepSpawnIntervalMax;                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_creepSpawnPause;                                       // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7HJO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AYCreepNavigation*>                           m_creepSpawnPoints;                                      // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRDE[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YFactoryTargetData
	 * Size -> 0x0018
	 */
	struct FYFactoryTargetData
	{
	public:
		class AYCreepNavigation*                                   m_creepAttackNavigationStart;                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AYCreepNavigation*                                   m_creepAttackNavigationEnd;                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AYCreepFactory*                                      m_creepTargetBase;                                       // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCreepControl
	 * Size -> 0x0018
	 */
	struct FYCreepControl
	{
	public:
		int32_t                                                    m_creepDefenders;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2407[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYFactoryTargetData>                         m_targetFactorys;                                        // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCreepGuide
	 * Size -> 0x0028
	 */
	struct FYCreepGuide
	{
	public:
		bool                                                       m_spawnGuideCreeps;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBNM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AYCreepNavigation*>                           m_creepGuideSpawnPointsTeam1;                            // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AYCreepNavigation*>                           m_creepGuideSpawnPointsTeam2;                            // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCharacterCustomizationMaterialSet
	 * Size -> 0x0040
	 */
	struct FYCharacterCustomizationMaterialSet
	{
	public:
		class FName                                                m_parameter;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        m_paramVector;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_paramTexture;                                          // 0x0018(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WMH[0x4];                                   // 0x0034(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      m_paramScalar;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCharacterCustomizationMaterialParameterType              m_type;                                                  // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNB5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterUIData
	 * Size -> 0x0020
	 */
	struct FYCharacterUIData
	{
	public:
		class FText                                                m_name;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    m_rank;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO5H[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterRenderLevelData
	 * Size -> 0x0020
	 */
	struct FYCharacterRenderLevelData
	{
	public:
		class FString                                              m_levelName;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_offset;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQKM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterDescription
	 * Size -> 0x0070
	 */
	struct FYCharacterDescription
	{
	public:
		class FName                                                m_name;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYCharacterAppearance                               m_characterAppearance;                                   // 0x0008(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YProjectileDebugInfo
	 * Size -> 0x0010
	 */
	struct FYProjectileDebugInfo
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_location;                                              // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipCloakingModifier
	 * Size -> 0x0020
	 */
	struct FYShipCloakingModifier
	{
	public:
		EYShipCloakingModifier                                     m_modifier;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7N4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_modifierParamName;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_modifierFalloff;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_shouldBreakCloaking;                                   // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GR80[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCloakSetting
	 * Size -> 0x0028
	 */
	struct FYCloakSetting
	{
	public:
		class FName                                                m_settingName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   m_cloakingMID;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_shipMatlFalloff;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_cloakedMatlFalloff;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYShipCloakingModifier>                      m_cloakingModifiers;                                     // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_PlayVoiceLinesQueueEntry
	 * Size -> 0x0010
	 */
	struct FYS_PlayVoiceLinesQueueEntry
	{
	public:
		class UYVoiceLine*                                         m_voiceLine;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYVoiceLineAudioTemplate                                   m_audioTemplate;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L51K[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_queueTimestamp;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YVoiceLinesQueueEntry
	 * Size -> 0x0018
	 */
	struct FYVoiceLinesQueueEntry
	{
	public:
		class UYVoiceLineUnique*                                   m_voiceLine;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             m_character;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_expireTimestamp;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56M6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCtASaveEntry
	 * Size -> 0x0030
	 */
	struct FYCtASaveEntry
	{
	public:
		int32_t                                                    m_id;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_groupId;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isForLocalSessions;                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFHK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_numTriggered;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numShown;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7YF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           m_lastTimeTriggered;                                     // 0x0018(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           m_lastTimeShown;                                         // 0x0020(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_linkClicked;                                           // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWZU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMarketSortingCriteriaData
	 * Size -> 0x0020
	 */
	struct FYMarketSortingCriteriaData
	{
	public:
		EYMarketItemSortingCriteria                                m_sortingCriterium;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RN46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_displayName;                                           // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFilterCategory
	 * Size -> 0x0030
	 */
	struct FYFilterCategory
	{
	public:
		EYUIMenuSearchFilterType                                   m_filterType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VAL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_filterName;                                            // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UYUIFilterNavigationElement*>                 m_filters;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFilterCategories
	 * Size -> 0x0010
	 */
	struct FYFilterCategories
	{
	public:
		TArray<struct FYFilterCategory>                            m_SearchFilters;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDeveloperCreditsData
	 * Size -> 0x0020
	 */
	struct FYDeveloperCreditsData
	{
	public:
		TArray<class FText>                                        m_localizableStrings;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              m_htmlCreditsText;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUILegendElement
	 * Size -> 0x0038
	 */
	struct FYUILegendElement
	{
	public:
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_379T[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                m_label;                                                 // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUICarouselTileInfo
	 * Size -> 0x00B0
	 */
	struct FYUICarouselTileInfo
	{
	public:
		bool                                                       m_isOwned;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N33M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_buttonID;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuState                                                m_state;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuSubState                                             m_subState;                                              // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuMetaState                                            m_metaState;                                             // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIUG[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_label;                                                 // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                m_sublabel;                                              // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDG4[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              m_iconPath;                                              // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYLiveTileType                                             m_liveTileType;                                          // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYA8[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_webAddress;                                            // 0x0078(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                m_PSNStoreItemID;                                        // 0x0090(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7GM[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIMetroGridInfo
	 * Size -> 0x00C8
	 */
	struct FYUIMetroGridInfo
	{
	public:
		int32_t                                                    m_buttonID;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuState                                                m_state;                                                 // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuSubState                                             m_subState;                                              // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuMetaState                                            m_metaState;                                             // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFMT[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_label;                                                 // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                m_sublabel;                                              // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    m_units;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5B6O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8QY[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              m_iconPath;                                              // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYUILegendElement>                           m_legend;                                                // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_hidden;                                                // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYMenuTilePlayGoVisibility                                 m_playGoVisibility;                                      // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGameModeType                                             m_gameMode;                                              // 0x0082(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYLiveTileType                                             m_liveTileType;                                          // 0x0083(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKIV[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_webAddress;                                            // 0x0088(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                m_PSNStoreItemID;                                        // 0x00A0(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<struct FYUICarouselTileInfo>                        m_carouselTiles;                                         // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupLegendInfo
	 * Size -> 0x0020
	 */
	struct FYUIPopupLegendInfo
	{
	public:
		EYPS4ButtonIcon                                            m_icon;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IX08[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_label;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupInfo
	 * Size -> 0x0060
	 */
	struct FYUIPopupInfo
	{
	public:
		class FString                                              m_popupId;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_headerText;                                            // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		struct FColor                                              m_headerColor;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEB6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_bodyText;                                              // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       m_dimBackground;                                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAYR[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIPopupLegendInfo>                         m_legend;                                                // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGoldMembershipThreshold
	 * Size -> 0x0020
	 */
	struct FYGoldMembershipThreshold
	{
	public:
		EYGoldMemberShipTresholdsTypes                             m_thresholdType;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9794[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_thresholdValue;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_text;                                                  // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSpecialGameMap
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FYSpecialGameMap : public FYGameMap
	{
	public:
		TAssetPtr<class UClass>                                    m_gameMode;                                              // 0x0068(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3973[0x4];                                   // 0x0084(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YMenuShopSpecialCategory
	 * Size -> 0x0028
	 */
	struct FYMenuShopSpecialCategory
	{
	public:
		class FString                                              m_categoryCode;                                          // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_categoryName;                                          // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShopPreviewManager
	 * Size -> 0x0058
	 */
	struct FYShopPreviewManager
	{
	public:
		unsigned char                                              UnknownData_8ODR[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYShipLoadout*                                       m_loadoutInPreview;                                      // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UYCaptain*                                           m_captainInPreview;                                      // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     m_itemsInPreview;                                        // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZD4B[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YShipVideoPreviewInfo
	 * Size -> 0x0018
	 */
	struct FYShipVideoPreviewInfo
	{
	public:
		EYShipClass                                                m_shipClass;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UGN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_itemID;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_videoLink;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMenuLockedSpecificTierInformation
	 * Size -> 0x0028
	 */
	struct FYMenuLockedSpecificTierInformation
	{
	public:
		int32_t                                                    m_maxTier;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minTier;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_unlockTier;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O34[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_message;                                               // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMenuLockedTierInformation
	 * Size -> 0x0018
	 */
	struct FYMenuLockedTierInformation
	{
	public:
		TArray<struct FYMenuLockedSpecificTierInformation>         m_lockedInformation;                                     // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EYUILoadoutItemType                                        m_itemType;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCK3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLegendButtonMap
	 * Size -> 0x0020
	 */
	struct FYLegendButtonMap
	{
	public:
		TArray<struct FKey>                                        m_buttons;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  m_textures;                                              // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIInformationPanelStatData
	 * Size -> 0x0040
	 */
	struct FYUIInformationPanelStatData
	{
	public:
		EYUIInformationPanelType                                   m_type;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3JI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_statName;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      m_valueNumber;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_valueBarPercentage;                                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_valueText;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPB0[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIItemPriceData
	 * Size -> 0x0030
	 */
	struct FYUIItemPriceData
	{
	public:
		int32_t                                                    m_shipXP;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXP;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_softCurrency;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_realCurrency;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXO3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_currencyCode;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_hasPriceChanged;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AR9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIItemPurchaseData
	 * Size -> 0x01D8
	 */
	struct FYUIItemPurchaseData
	{
	public:
		unsigned char                                              UnknownData_2IYS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIInformationPanelStatData>                m_itemStats;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_additionalText;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EYPurchaseItemType                                         m_itemType;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RC8[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_itemID;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_discount;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NFR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_name;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_image;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_imageTexture;                                          // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGBQ[0x4];                                   // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              m_description;                                           // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryIcon;                                          // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_categoryIconTexture;                                   // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryName;                                          // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryDescription;                                   // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_parentCategoryName;                                    // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_onSale;                                                // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_tierPath;                                              // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_tierIconTexture;                                       // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYUIItemPriceData                                   m_priceData;                                             // 0x00F8(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EYItemActionAvailability                                   m_actionAvailability;                                    // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isOwned;                                               // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isNew;                                                 // 0x012A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LA4[0x1];                                   // 0x012B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_manufacturerID;                                        // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8P6[0xA8];                                  // 0x0130(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUITechTreeItemPurchaseData
	 * Size -> 0x0028 (FullSize[0x0200] - InheritedSize[0x01D8])
	 */
	struct FYUITechTreeItemPurchaseData : public FYUIItemPurchaseData
	{
	public:
		EYTechTreeItemState                                        m_itemState;                                             // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVPO[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIInformationPanelStatData>                m_previousStats;                                         // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y0V[0x10];                                  // 0x01F0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIVanityItemPurchaseData
	 * Size -> 0x0000 (FullSize[0x0200] - InheritedSize[0x0200])
	 */
	struct FYUIVanityItemPurchaseData : public FYUITechTreeItemPurchaseData
	{	};

	/**
	 * ScriptStruct DreadGame.YUIBundleItemPurchaseData
	 * Size -> 0x0050 (FullSize[0x0228] - InheritedSize[0x01D8])
	 */
	struct FYUIBundleItemPurchaseData : public FYUIItemPurchaseData
	{
	public:
		unsigned char                                              UnknownData_P634[0x50];                                  // 0x01D8(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.LevelData
	 * Size -> 0x000C
	 */
	struct FLevelData
	{
	public:
		int32_t                                                    m_amountToComplete;                                      // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_reward;                                                // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGoalRewardType                                           m_rewardType;                                            // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29RZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YGoalData
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FYGoalData : public FTableRowBase
	{
	public:
		class FName                                                m_id;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x0010(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0028(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		bool                                                       m_uiGuideAvailable;                                      // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZTG[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_counterID;                                             // 0x0048(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_counterSubId;                                          // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGoalCategory                                             m_category;                                              // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGoalPlatformVisibility                                   m_platformVisibility;                                    // 0x0061(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99ZU[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLevelData>                                  m_stageData;                                             // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAIDirectEnergyWheel
	 * Size -> 0x0070
	 */
	struct FYAIDirectEnergyWheel
	{
	public:
		bool                                                       m_includeAITargets;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_includeAICmdShip;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_includeFighterJets;                                    // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7Z4[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_energyWheelPawnFeat;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_useEnabled;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWQU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_rulePriority;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_hasBehaviourTarget;                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYCombatSceneBehavior                                      m_currentBehaviour;                                      // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HVN[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_minIncomingProjectiles;                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minIncomingProjectilesRange;                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3WK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_takingDamagePerSecondAmount;                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_takingDamagePerSecondTime;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxSelfHealth;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTargetHealth;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_fireingAtEnemy;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ICB[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_minEnemies;                                            // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minEnemiesRange;                                       // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FBE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxDistanceToBehaviourTarget;                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUE4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_minDistanceToBehaviourTarget;                          // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZZY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_minimunEnergyToActivate;                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minimunEnergyToMantain;                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_disableOnlyOnMinimunEnergyReached;                     // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48Y1[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_controllerArrayIndexOverride;                          // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_debugString;                                           // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAIFireAbility
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FYAIFireAbility : public FTableRowBase
	{
	public:
		int32_t                                                    m_abilityIndex;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OD5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_abilityClass;                                          // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_fireAbility;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_targetEnemy;                                           // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_targetOnlyBehaviourTarget;                             // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_targetOnlyBehaviourSecondaryTarget;                    // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_requiresTargetTargeted;                                // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_requiresAbilityTargeted;                               // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_requiresLineOfSight;                                   // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF3E[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_minSelfDamage;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minTargetDamage;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minTargetHealth;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minAllyDamage;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minAllyDamageRange;                                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEOG[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYCombatSceneBehavior                                      m_currentBehaviour;                                      // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCombatSceneBehavior                                      m_NPCTargetBehaviour;                                    // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_useTargetSpeed;                                        // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNTP[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_minTargetSpeed;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTargetSpeed;                                        // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_useOnlyIfNoDeployedActors;                             // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_useDistanceVariation;                                  // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4RD[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_minDistanceVariation;                                  // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxDistanceVariation;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minDotPawnfaceTarget;                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_freeTunnelLocalDirection;                              // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_freeTunnelRadius;                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_incomingFireRange;                                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_incomingFireCount;                                     // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_incomingBoardingRange;                                 // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_incomingBoardingSpeed;                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxEnergy;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minAbilitiesInCooldown;                                // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minIncomingProjectiles;                                // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minIncomingPerimeterTargetedProjectiles;               // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minIncomingProjectilesRange;                           // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ81[0x4];                                   // 0x0088(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_minEnemies;                                            // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minEnemiesRange;                                       // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VR3[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxFireDistance;                                       // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKK7[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_minFireDistance;                                       // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYH3[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_recalculatePath;                                       // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_validUpdatesToCheck;                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SX9D[0x4];                                   // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_chancePerCheck;                                        // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_availableWhenScrambled;                                // 0x00B8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_useWhenScrambled;                                      // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_useContextActivation;                                  // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6WJ[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActivationProbability;                          // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActivationExplodeDistance;                      // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVEF[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDefendScoringData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYDefendScoringData : public FTableRowBase
	{
	public:
		class FName                                                m_objectID;                                              // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxScore;                                              // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxDamage;                                             // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minDamage;                                             // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UF7N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDefendScoringResult
	 * Size -> 0x0008
	 */
	struct FYDefendScoringResult
	{
	public:
		int32_t                                                    m_maxScore;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_score;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipCardData
	 * Size -> 0x0048
	 */
	struct FYShipCardData
	{
	public:
		class FString                                              m_shipName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_shipImage;                                             // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDR7[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EYShipBaseClass                                            m_shipBaseClassIconType;                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMGN[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_shipTier;                                              // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isFullyResearched;                                     // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GV8[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_percentBonusFullyResearched;                           // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isHeroShip;                                            // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DCU[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YColumnRewardData
	 * Size -> 0x0088
	 */
	struct FYColumnRewardData
	{
	public:
		bool                                                       m_hasEliteStatus;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYUICurrency                                               m_currency;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7S7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_allRewards;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_sumScoringEvents;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_sumRewards;                                            // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYShipCardData                                      m_shipData;                                              // 0x0020(0x0048) NativeAccessSpecifierPublic
		bool                                                       m_showBoostPercentages;                                  // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61DW[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_boosterPercent;                                        // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EYFleetType                                                m_fleetType;                                             // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10UX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEoMRewardData_MP
	 * Size -> 0x0060
	 */
	struct FYEoMRewardData_MP
	{
	public:
		TArray<class FString>                                      m_eliteFromPlayers;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_sumHeroShipFreeXP;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_sumHeroShipXP;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYColumnRewardData>                          m_rewardColumns;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_boosterShipXPPercent;                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EYFleetType                                                m_fleetType;                                             // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UIK[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_totalMatchEarnings;                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               m_bActiveBoosters;                                       // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPVEEventRewardMeta
	 * Size -> 0x0090
	 */
	struct FYPVEEventRewardMeta
	{
	public:
		TAssetPtr<class UTexture2D>                                m_rewardImage;                                           // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0SC[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TMap<EYUICurrency, int32_t>                                m_currencyRewards;                                       // 0x0020(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0070(0x0018) NativeAccessSpecifierPublic
		EYPVERewardUnlocked                                        m_rewardUnlocked;                                        // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDX4[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPVESeasonRewardMeta
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	struct FYPVESeasonRewardMeta : public FYPVEEventRewardMeta
	{
	public:
		int32_t                                                    m_unlockAtEventRewardsNum;                               // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZTC[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEoMRewardData_PVE
	 * Size -> 0x0070
	 */
	struct FYEoMRewardData_PVE
	{
	public:
		bool                                                       m_gameModeGoalReached;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29O2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_teamScore;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_seasonTitle;                                           // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FText                                                m_seasonDescription;                                     // 0x0020(0x0018) NativeAccessSpecifierPublic
		TArray<struct FYPVEEventRewardMeta>                        m_eventRewards;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYPVESeasonRewardMeta>                       m_seasonRewards;                                         // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_currentEventRewardsAmount;                             // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M7G[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_unlockEventRewardsAtScore;                             // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMVPEntryData
	 * Size -> 0x0090
	 */
	struct FYMVPEntryData
	{
	public:
		EYMVPType                                                  m_mvpType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_playerName;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_playerScore;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isFriendlyTeam;                                        // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP9O[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYCharacterDescription                              m_characterDescription;                                  // 0x0020(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEndOfMatchStageGraphDataContainer
	 * Size -> 0x00D0
	 */
	struct FYEndOfMatchStageGraphDataContainer
	{
	public:
		class UYWidget_EndOfMatchContainer*                        m_endOfMatchWidgetContainer;                             // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYGFxMoviePlayer_YEndOfMatch*                        m_endOfMatchMoviePlayer;                                 // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYEndOfMatchDataManager*                             m_dataManager;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AYGameState_MP*                                      m_gameState;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AYPlayerController*                                  m_playerController;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>                                    m_endOfMatchWidgetContainerClass;                        // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGBH[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      m_scoreboardFadeInTime;                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTC1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_activeCamera;                                          // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1BW[0x50];                                  // 0x0058(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_singleCharacterSpawnerTag;                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        m_multipleCharacterSpawnerTags;                          // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                m_introLevelSequenceTag;                                 // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDAR[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YReplicatedAttributeModifierValue
	 * Size -> 0x000C
	 */
	struct FYReplicatedAttributeModifierValue
	{
	public:
		float                                                      m_percentageMultiplier;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_staticModifier;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_globalPercentage;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEnergyFeedbackInfo
	 * Size -> 0x0010
	 */
	struct FYEnergyFeedbackInfo
	{
	public:
		float                                                      m_energyValue;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RMO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_triggerID;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEnergyShieldDataTableRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYEnergyShieldDataTableRow : public FTableRowBase
	{
	public:
		class UStaticMesh*                                         m_staticMesh;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageModifier;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damagePassThroughFactor;                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFeatDataTableEntry
	 * Size -> 0x0010
	 */
	struct FYFeatDataTableEntry
	{
	public:
		class UDataTable*                                          m_dataTable;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_autoAddFeats;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXYJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YFleet
	 * Size -> 0x0050
	 */
	struct FYFleet
	{
	public:
		TArray<int32_t>                                            m_loadoutList;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               m_loadoutVeteranStatus;                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5NGW[0x30];                                  // 0x0020(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YFleetTierConfigData
	 * Size -> 0x0028
	 */
	struct FYFleetTierConfigData
	{
	public:
		TArray<int32_t>                                            m_allowedTiers;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      m_fleetRatingMin;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_fleetRatingCost;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_baseMaintenanceCost;                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maintenanceTime;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numShipsToUnlockFleet;                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYFleetType                                                m_fleetType;                                             // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0XC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLoadingScreenInitializationData
	 * Size -> 0x00E8
	 */
	struct FYLoadingScreenInitializationData
	{
	public:
		class UTexture2D*                                          m_background;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_firstIcon;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_secondIcon;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_thirdIcon;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWYJ[0xC8];                                  // 0x0020(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YGameInstanceLoadingScreenLogoData
	 * Size -> 0x0030
	 */
	struct FYGameInstanceLoadingScreenLogoData
	{
	public:
		class UTexture2D*                                          m_base;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_textHighlight;                                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_blockHighlight;                                        // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_textHighlightRevealCurve;                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_textHighlightGlowCurve;                                // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         m_blockHighlightGlowCurve;                               // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGameInstanceLoadingScreenLayoutData
	 * Size -> 0x01E0
	 */
	struct FYGameInstanceLoadingScreenLayoutData
	{
	public:
		struct FSlateFontInfo                                      m_gameModeFont;                                          // 0x0000(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      m_gameModeObjectiveFont;                                 // 0x0040(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      m_objectiveDetailsFont;                                  // 0x0080(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      m_mapNameFont;                                           // 0x00C0(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      m_mapDescriptionFont;                                    // 0x0100(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      m_loadingFont;                                           // 0x0140(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLinearColor                                        m_primaryColor;                                          // 0x0180(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        m_secondaryColor;                                        // 0x0190(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_defaultBackground;                                     // 0x01A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   m_dropShadowMaterial;                                    // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYGameInstanceLoadingScreenLogoData                 m_logoData;                                              // 0x01B0(0x0030) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOutpostCharacter
	 * Size -> 0x0078
	 */
	struct FYOutpostCharacter
	{
	public:
		class AYCharacterSpawner*                                  m_charSpawner;                                           // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHPZ[0x70];                                  // 0x0008(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YOfficersOverview
	 * Size -> 0x0058
	 */
	struct FYOfficersOverview
	{
	public:
		unsigned char                                              UnknownData_Y5C2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EYOutpostCharacterType, struct FYOutpostCharacter>    m_outpostCharacters;                                     // 0x0008(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YStreamingOperation
	 * Size -> 0x0010
	 */
	struct FYStreamingOperation
	{
	public:
		EYStreamingOperationType                                   m_type;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIZM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_levelName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YObjectiveData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FYObjectiveData : public FTableRowBase
	{
	public:
		class FName                                                m_id;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYObjectiveType                                            m_type;                                                  // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYObjectiveState                                           m_state;                                                 // 0x0011(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_mainObjective;                                         // 0x0012(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1Y6[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_message;                                               // 0x0018(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_markerText;                                            // 0x0030(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    m_amountToComplete;                                      // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentAmount;                                         // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE9B[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMinimapVisibilityRulesByDesign
	 * Size -> 0x000A
	 */
	struct FYMinimapVisibilityRulesByDesign
	{
	public:
		bool                                                       m_playerOnly;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_playerTeam;                                            // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_playerTeamAI;                                          // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_playerSquad;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_enemyTeam;                                             // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_enemyTeamAI;                                           // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onSight;                                               // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onFiredAt;                                             // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onAbilityAt;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onShortCommand;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YObjectiveCount
	 * Size -> 0x0010
	 */
	struct FYObjectiveCount
	{
	public:
		TArray<int32_t>                                            m_objectiveCounts;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMPQuestState
	 * Size -> 0x0028
	 */
	struct FYMPQuestState
	{
	public:
		unsigned char                                              UnknownData_MGQC[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMPActiveQuest
	 * Size -> 0x0030
	 */
	struct FYMPActiveQuest
	{
	public:
		class UYMPQuest*                                           m_quest;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYMPQuestState                                      m_state;                                                 // 0x0008(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTrainingMatchAI
	 * Size -> 0x0038
	 */
	struct FYTrainingMatchAI
	{
	public:
		class FName                                                m_TMNpcName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTeam                                                     m_team;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DXF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        m_npcSpawnIDs;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EYFleetType                                                m_aiFleetType;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFMG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYCharacterPreset*                                   m_characterPreset;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1IC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YAISpawnTier
	 * Size -> 0x0024
	 */
	struct FYAISpawnTier
	{
	public:
		EYAILevel                                                  m_aiTier_aiDificultyLevel;                               // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN7S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_aiTier_MatchScoreMod;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_MatchScoreBonus_Team1;                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_HumanPlayersNumMod;                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_HumanPlayersTierMod;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_PlayersTierMod;                                 // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_DefaultTier;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_DefaultTierMod_Team1;                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aiTier_Random;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEOMTime
	 * Size -> 0x0008
	 */
	struct FYEOMTime
	{
	public:
		int32_t                                                    m_EOMDurationIfNoRequeuing;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_travelBackTimeWhenRoomDisbanded;                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTerritoryShipInfluenceRadius
	 * Size -> 0x0008
	 */
	struct FYTerritoryShipInfluenceRadius
	{
	public:
		EYShipClass                                                m_shipClass;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVGZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_influenceRadius;                                       // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWaveScoringData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYWaveScoringData : public FTableRowBase
	{
	public:
		int32_t                                                    m_maxBonus;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_timeLimitA;                                            // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_timeLimitB;                                            // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_pointsLostPerSecond;                                   // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76V4[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YKillScoringData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYKillScoringData : public FTableRowBase
	{
	public:
		int32_t                                                    m_starterKillScore;                                      // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_deductionTime;                                         // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_scoreToDeduct;                                         // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXL3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YRemainingPlayerScoringData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYRemainingPlayerScoringData : public FTableRowBase
	{
	public:
		int32_t                                                    m_bonusOneLeft;                                          // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_bonusTwoLeft;                                          // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_bonusThreeLeft;                                        // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_bonusFourLeft;                                         // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_bonusFiveLeft;                                         // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_bonusDecreasePerDeath;                                 // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWaveScoringResult
	 * Size -> 0x0018
	 */
	struct FYWaveScoringResult
	{
	public:
		int32_t                                                    m_waveIdx;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_neededTime;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_scoreTimeBonus;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxTimeBonus;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_killScore;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_remainingPlayersScore;                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMedalScoringData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYMedalScoringData : public FTableRowBase
	{
	public:
		EYMedal                                                    m_medal;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUNZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_teamScoreNeeded;                                       // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_reward;                                                // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63LE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMedal
	 * Size -> 0x0020
	 */
	struct FYMedal
	{
	public:
		EYMedal                                                    m_medal;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQWT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_reputation;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_medalName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YWaveModifierImpactSetup
	 * Size -> 0x0008
	 */
	struct FYWaveModifierImpactSetup
	{
	public:
		int32_t                                                    m_waveIndex;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxImpact;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGameModifierTableRowBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FYGameModifierTableRowBase : public FTableRowBase
	{	};

	/**
	 * ScriptStruct DreadGame.YGameModifierDataTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYGameModifierDataTableRow : public FYGameModifierTableRowBase
	{
	public:
		class FString                                              m_gameModeName;                                          // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_excludes;                                              // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_feats;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGameModeModifierAffectedTeam                             m_affectedTeam;                                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN5C[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocTableRowBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FYHavocTableRowBase : public FTableRowBase
	{	};

	/**
	 * ScriptStruct DreadGame.YHavocBoostsDataTableRow
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FYHavocBoostsDataTableRow : public FYHavocTableRowBase
	{
	public:
		class FText                                                m_title;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FString                                              m_feats;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_iconPath;                                              // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_weight;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_cost;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocUpgradeCategory                                     m_category;                                              // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J96H[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocLoadoutsDataTableRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYHavocLoadoutsDataTableRow : public FYHavocTableRowBase
	{
	public:
		class FString                                              m_waveAppearances;                                       // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_weight;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_loadoutItemID;                                         // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_loadoutItemIDNextTier;                                 // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocUpgradeCategory                                     m_category;                                              // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MI6A[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocModifiersDataTableRow
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FYHavocModifiersDataTableRow : public FYHavocTableRowBase
	{
	public:
		class FText                                                m_title;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_subtitle;                                              // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FString                                              m_iconPath;                                              // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_excludes;                                              // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_feats;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minWave;                                               // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxWave;                                               // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_weight;                                                // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_impact;                                                // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isAlwaysLoadedForUI;                                   // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYHavocModifierAffectedTeam                                m_affectedTeam;                                          // 0x0091(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_008N[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocPermanentEnemyModifiersDataTableRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYHavocPermanentEnemyModifiersDataTableRow : public FYHavocTableRowBase
	{
	public:
		class FString                                              m_feats;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_effect;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_wave;                                                  // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_impact;                                                // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocPermanentEnemyModifierCategory                      m_category;                                              // 0x0024(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3FS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocRewardDataTableRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYHavocRewardDataTableRow : public FYHavocTableRowBase
	{
	public:
		int32_t                                                    m_highscore;                                             // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocRewardType                                          m_rewardType;                                            // 0x000C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D5R[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_value;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRFS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLoadoutEntry
	 * Size -> 0x0030
	 */
	struct FYLoadoutEntry
	{
	public:
		TArray<class UYShipLoadout*>                               m_loadouts;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P72M[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YVOLimitedFleetEntry
	 * Size -> 0x0020
	 */
	struct FYVOLimitedFleetEntry
	{
	public:
		class FString                                              m_overridenName;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_loadoutPath;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YHavocHUDTeamInfo
	 * Size -> 0x0038
	 */
	struct FYHavocHUDTeamInfo
	{
	public:
		unsigned char                                              UnknownData_9ENA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      m_playerID;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            m_classID;                                               // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               m_eliminated;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YUIHavocUpgrade
	 * Size -> 0x01B8
	 */
	struct FYUIHavocUpgrade
	{
	public:
		TAssetPtr<class UTexture2D>                                m_iconPath;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DBK[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_priWeaponIconPath;                                     // 0x0020(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW5S[0x4];                                   // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_secWeaponIconPath;                                     // 0x0040(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQZL[0x4];                                   // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_ability1IconPath;                                      // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVGN[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_ability2IconPath;                                      // 0x0080(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXJ7[0x4];                                   // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_ability3IconPath;                                      // 0x00A0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3QR[0x4];                                   // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_ability4IconPath;                                      // 0x00C0(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q8V[0x4];                                   // 0x00DC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                m_upgradeID;                                             // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x00E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0100(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_priWeaponName;                                         // 0x0118(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_secWeaponName;                                         // 0x0130(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_ability1Name;                                          // 0x0148(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_ability2Name;                                          // 0x0160(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_ability3Name;                                          // 0x0178(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_ability4Name;                                          // 0x0190(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    m_cost;                                                  // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_loadoutTier;                                           // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isLoadout;                                             // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYHavocUpgradeCategory                                     m_category;                                              // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x01B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocUpgradeState                                        m_state;                                                 // 0x01B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN0X[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIHavocModifier
	 * Size -> 0x00A8
	 */
	struct FYUIHavocModifier
	{
	public:
		TAssetPtr<class UTexture2D>                                m_iconPath;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOWG[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                m_modifierID;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x0028(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_subtitle;                                              // 0x0040(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0058(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              m_excludes;                                              // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_feats;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_minWave;                                               // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxWave;                                               // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_weight;                                                // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_impact;                                                // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isAlwaysLoadedForUI;                                   // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYHavocModifierAffectedTeam                                m_affectedTeam;                                          // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5EA[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YKillTrackerInfo
	 * Size -> 0x0010
	 */
	struct FYKillTrackerInfo
	{
	public:
		class AController*                                         m_killer;                                                // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         m_killed;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YRound
	 * Size -> 0x0018
	 */
	struct FYRound
	{
	public:
		int32_t                                                    m_roundNumber;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMatchResult                                              m_winner;                                                // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYUK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYKillTrackerInfo>                           m_killsTracker;                                          // 0x0008(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTeamEliminationHUDTeamInfo
	 * Size -> 0x0058
	 */
	struct FYTeamEliminationHUDTeamInfo
	{
	public:
		unsigned char                                              UnknownData_XXQE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      m_playerID;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            m_classID;                                               // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               m_eliminated;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               m_spotted;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            m_teamID;                                                // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YS_VoiceLineContext
	 * Size -> 0x0038
	 */
	struct FYS_VoiceLineContext
	{
	public:
		class FString                                              m_contextConditionsConstructionString;                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UYVoiceLineUnique*>                           m_voiceLines;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVLX[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_GenericVoiceLineInfo
	 * Size -> 0x0028
	 */
	struct FYS_GenericVoiceLineInfo
	{
	public:
		class FName                                                m_characterName;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UYGenericCharacterVoiceLines>              m_characterVoiceLines;                                   // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6Y9[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YTextFieldInputCharRestrictions
	 * Size -> 0x0020
	 */
	struct FYTextFieldInputCharRestrictions
	{
	public:
		class FString                                              m_textFieldID;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_restrict;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YLocaleInputCharRestrictions
	 * Size -> 0x0030
	 */
	struct FYLocaleInputCharRestrictions
	{
	public:
		class FString                                              m_locale;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_restrict;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYTextFieldInputCharRestrictions>            m_textFieldInputCharRestrictions;                        // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YItemEntry
	 * Size -> 0x0030
	 */
	struct FYItemEntry
	{
	public:
		int32_t                                                    m_uniqueItemID;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Y8H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UObject>                                   m_asset;                                                 // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H62M[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_Q508[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.UnlockInformationWrapper
	 * Size -> 0x0020
	 */
	struct FUnlockInformationWrapper
	{
	public:
		EYUnlockType                                               m_type;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8XF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_text;                                                  // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.ReputationStateInfo
	 * Size -> 0x0028
	 */
	struct FReputationStateInfo
	{
	public:
		int32_t                                                    m_rank;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCZ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_rankName;                                              // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_current;                                               // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_start;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_end;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M70Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.PlayerProgressInfo
	 * Size -> 0x0038
	 */
	struct FPlayerProgressInfo
	{
	public:
		class FString                                              m_playerName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FReputationStateInfo                                m_reputation;                                            // 0x0010(0x0028) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YHavocModifierSet
	 * Size -> 0x0028
	 */
	struct FYHavocModifierSet
	{
	public:
		unsigned char                                              UnknownData_ORV3[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocPermanentEnemyModifierSet
	 * Size -> 0x0018
	 */
	struct FYHavocPermanentEnemyModifierSet
	{
	public:
		unsigned char                                              UnknownData_8HFG[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHealthFeedbackInfo
	 * Size -> 0x0020
	 */
	struct FYHealthFeedbackInfo
	{
	public:
		float                                                      m_healthValuePercentage;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AH6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_delegateFunctionName;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4660[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHitzoneReplicatedBoxDebugData
	 * Size -> 0x0050
	 */
	struct FYHitzoneReplicatedBoxDebugData
	{
	public:
		float                                                      m_currentHealth;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxHealth;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE1S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          m_transformation;                                        // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_extent;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40UF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHitzoneReplicatedProjectilePenetrationData
	 * Size -> 0x001C
	 */
	struct FYHitzoneReplicatedProjectilePenetrationData
	{
	public:
		struct FVector                                             m_startLocation;                                         // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_endLocation;                                           // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_hit;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0OQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHoveringFXPhysMaterialSetup
	 * Size -> 0x0018
	 */
	struct FYHoveringFXPhysMaterialSetup
	{
	public:
		class FString                                              m_physMaterialName;                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     m_particleSystemTemplate;                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPlatformPrompt
	 * Size -> 0x0018
	 */
	struct FYPlatformPrompt
	{
	public:
		EYPromptType                                               promptType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPWJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_promptBlueprintPC;                                     // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYHUDWidget_PromptBase*                              m_promptInstance;                                        // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPositiveReinforcement
	 * Size -> 0x0020
	 */
	struct FYPositiveReinforcement
	{
	public:
		unsigned char                                              UnknownData_OPIU[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YActionMappingText
	 * Size -> 0x0028
	 */
	struct FYActionMappingText
	{
	public:
		class FText                                                m_text;                                                  // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EYActionMappingTextType                                    m_actionMappingTextType;                                 // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7W7T[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_actionMappingName;                                     // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIMinimapCanvas
	 * Size -> 0x000C
	 */
	struct FYUIMinimapCanvas
	{
	public:
		float                                                      m_canvasPosX;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_canvasPosY;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_canvasWidth;                                           // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUISlotLayoutData
	 * Size -> 0x0018
	 */
	struct FYUISlotLayoutData
	{
	public:
		class UClass*                                              m_widgetClass;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_renderScaleOnMinimap;                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_renderScaleInLevel;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ZOrder;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ5H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIShipClassIcon
	 * Size -> 0x0010
	 */
	struct FYUIShipClassIcon
	{
	public:
		EYShipBaseClass                                            m_shipBaseClass;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56UH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_shipIconTexture;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIViewportHoverWidget
	 * Size -> 0x0010
	 */
	struct FYUIViewportHoverWidget
	{
	public:
		class UUserWidget*                                         m_widget;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bHighlighted;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSTF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_distance;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPooledLinkWidget
	 * Size -> 0x0010
	 */
	struct FYPooledLinkWidget
	{
	public:
		class UUserWidget*                                         m_linkWidget;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_team;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bVisible;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0FO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLEDKeyInfo
	 * Size -> 0x0020
	 */
	struct FYLEDKeyInfo
	{
	public:
		EYE_LEDKeyName                                             m_keyName;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWUA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_redValue;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_greenValue;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_blueValue;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYE_LEDAbilityKeyState                                     m_currentAbilityState;                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYE_LEDAbilityKeyState                                     m_pendingAbilityState;                                   // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYE_LEDKeyMode                                             m_keyMode;                                               // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKM7[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     flashingStartTime;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDropdownItemData
	 * Size -> 0x0028
	 */
	struct FYDropdownItemData
	{
	public:
		int32_t                                                    m_index;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45WX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_displayName;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_internalName;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBarrelAnimationLayer
	 * Size -> 0x0010
	 */
	struct FYBarrelAnimationLayer
	{
	public:
		TArray<class FName>                                        m_barrelsNames;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBoneLayerPerFire
	 * Size -> 0x0020
	 */
	struct FYBoneLayerPerFire
	{
	public:
		struct FYBarrelAnimationLayer                              m_barrel;                                                // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputBlendPose                                     m_layer;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YNativeAnimationData
	 * Size -> 0x0068
	 */
	struct FYNativeAnimationData
	{
	public:
		TArray<struct FYBoneLayerPerFire>                          m_nativeAnimationData;                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      m_pitchBoneToModify;                                     // 0x0010(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBoneReference                                      m_yawBoneToModify;                                       // 0x0020(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              m_pitchBoneName;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_yawBoneName;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStringAssetReference                               m_activeAnimation;                                       // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       m_activeAnimationHardReference;                          // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMovieDisplayData
	 * Size -> 0x0020
	 */
	struct FYMovieDisplayData
	{
	public:
		class FText                                                m_displayMessage;                                        // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		EYMovieManagerTargetPlatform                               m_platform;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRWE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMoviePlatformData
	 * Size -> 0x0028
	 */
	struct FYMoviePlatformData
	{
	public:
		class FString                                              m_movieURL;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMovieManagerTargetPlatform                               m_platform;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RG9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_culture;                                               // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMovieData
	 * Size -> 0x0060
	 */
	struct FYMovieData
	{
	public:
		class FName                                                m_movieID;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UDataTable>                                m_movieSubtitlesTable;                                   // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLFK[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                m_displayMessage;                                        // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<struct FYMovieDisplayData>                          m_displayData;                                           // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYMoviePlatformData>                         m_movies;                                                // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDailyContractsConfig
	 * Size -> 0x0020
	 */
	struct FYDailyContractsConfig
	{
	public:
		int32_t                                                    m_numBaseContractSlots;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numEliteContractSlots;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_contractResetTimeHour;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_contractResetTimeMinute;                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_initialContracts;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YNPCPawnDataEntry
	 * Size -> 0x00D8
	 */
	struct FYNPCPawnDataEntry
	{
	public:
		class FName                                                m_shipId;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_AIController;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONL7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               m_shipClassLoadoutStrRef;                                // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              m_primaryAbility;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_secondaryAbility;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_perimeterAbility;                                      // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_internalAbility;                                       // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_extraNPCAbility1;                                      // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_extraNPCAbility2;                                      // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_extraNPCAbility3;                                      // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_extraNPCAbility4;                                      // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_officerFirstPerk;                                      // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_officerWeaponPerk;                                     // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_officerNavigationPerk;                                 // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_officerEngineerPerk;                                   // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_primaryWeapon;                                         // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_secondaryWeapon;                                       // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityMeshPart*                                m_meshPartBridge;                                        // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityMeshPart*                                m_meshPartStern;                                         // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityMeshPart*                                m_meshPartHull;                                          // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityMeshPart*                                m_meshPartForecastle;                                    // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityEmblem*                                  m_emblem;                                                // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityPaint*                                   m_paint;                                                 // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityPattern*                                 m_pattern;                                               // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYShipVanityDecal*                                   m_decal;                                                 // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOnboardingRuleState
	 * Size -> 0x0010
	 */
	struct FYOnboardingRuleState
	{
	public:
		class FName                                                m_ruleName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           m_lastFired;                                             // 0x0008(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOnboardingEventRule
	 * Size -> 0x0048
	 */
	struct FYOnboardingEventRule
	{
	public:
		class FName                                                m_name;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_completeManually;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0YN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        m_prerequisiteRules;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EYOnboardingEvent                                          m_eventType;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TS6O[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_greaterOrEqualValue;                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_equalValue;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC43[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_inOnboardingEventParamClass;                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuState                                                m_onboardingMenuState;                                   // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuSubState                                             m_onboardingSubMenuState;                                // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q09X[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           m_lastFired;                                             // 0x0040(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOnboardingNotifyData
	 * Size -> 0x0020
	 */
	struct FYOnboardingNotifyData
	{
	public:
		EYOnboardingEvent                                          m_eventType;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMXM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_greaterOrEqualValue;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_equalValue;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20SG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_classParam;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuState                                                m_onboardingMenuState;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYMenuSubState                                             m_onboardingSubMenuState;                                // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY90[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLevelStreamingDataTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYLevelStreamingDataTableRow : public FTableRowBase
	{
	public:
		class FName                                                m_levelFullPath;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_blockOnLoad;                                           // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_loadOnDedicatedServer;                                 // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isOrbitLevel;                                          // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isHiddenWhileInOrbit;                                  // 0x0013(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_neededForEndOfMatch;                                   // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isLevelVariationSublevel;                              // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29EH[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_levelVariationIndex;                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_onlyLoadWithAVSM;                                      // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onlyLoadWithoutAVSM;                                   // 0x001D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AS8F[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYGameModeType>                                     m_includeGameModes;                                      // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<EYGameModeType>                                     m_excludeGameModes;                                      // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSpecificMovementControlRestrictions
	 * Size -> 0x0006
	 */
	struct FYSpecificMovementControlRestrictions
	{
	public:
		bool                                                       m_blockMovementForward;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_blockMovementBackward;                                 // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_blockMovementLeft;                                     // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_blockMovementRight;                                    // 0x0003(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_blockMovementUp;                                       // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_blockMovementDown;                                     // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YChangeDebugShipData
	 * Size -> 0x0030
	 */
	struct FYChangeDebugShipData
	{
	public:
		class FString                                              m_shipName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UClass>                                    m_shipLoadout;                                           // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQFV[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YAxisModifierLockOnRelease
	 * Size -> 0x0020
	 */
	struct FYAxisModifierLockOnRelease
	{
	public:
		bool                                                       m_enable;                                                // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC7D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_thresholdForTriggering;                                // 0x0004(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_timeNeededToPush;                                      // 0x0008(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxLockTime;                                           // 0x000C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_axisOnLock;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CYV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_currentTimePushes;                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentTimeOnLock;                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lastPushedValue;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAxisModifierSuperAccelOnMax
	 * Size -> 0x001C
	 */
	struct FYAxisModifierSuperAccelOnMax
	{
	public:
		bool                                                       m_enable;                                                // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRUN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_accelDelay;                                            // 0x0004(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_accelAmount;                                           // 0x0008(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_accelThreshold;                                        // 0x000C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_accelMax;                                              // 0x0010(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentAccelTime;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentThresholdTime;                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAxisModifierMuliplier
	 * Size -> 0x0008
	 */
	struct FYAxisModifierMuliplier
	{
	public:
		bool                                                       m_enable;                                                // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9PM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_mulitplier;                                            // 0x0004(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAxisModifierCurve
	 * Size -> 0x0003
	 */
	struct FYAxisModifierCurve
	{
	public:
		bool                                                       m_enable;                                                // 0x0000(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_useRawValue;                                           // 0x0001(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_onlyApplyIfOutOfDeadZone;                              // 0x0002(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDreadnoughtInputEventMapping
	 * Size -> 0x0020
	 */
	struct FYDreadnoughtInputEventMapping
	{
	public:
		class FName                                                m_inputEvent;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                m_key;                                                   // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGamePadSettings
	 * Size -> 0x0008
	 */
	struct FYGamePadSettings
	{
	public:
		bool                                                       m_useToggleForwardAxis;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYTouchPadUseType                                          m_touchPadUsageOverride;                                 // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMNU[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_touchPadDeadzoneOverride;                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YInputAimAssistData
	 * Size -> 0x0028
	 */
	struct FYInputAimAssistData
	{
	public:
		float                                                      m_sensitivityRange;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_sensitivityMultiplier;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_sensitivityMultiplierZoomed;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticRange;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticMaxRotationSpeed;                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticRotationSpeed;                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticHeatIncreaseSpeed;                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticHeatDecreaseSpeed;                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_magneticHeatMax;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_aimAssistActiveDuration;                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YInputAimAssistWeapon
	 * Size -> 0x0030
	 */
	struct FYInputAimAssistWeapon
	{
	public:
		class FName                                                m_weapon;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYInputAimAssistData                                m_data;                                                  // 0x0008(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPveRewardsDataRep
	 * Size -> 0x0040
	 */
	struct FYPveRewardsDataRep
	{
	public:
		class FName                                                m_pid;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_activeEventID;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_activeSeasonID;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numEventsGainedInSeason;                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_gameModeGoalReached;                                   // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HL8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYPVERewardUnlocked>                                m_eventRewards;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EYPVERewardUnlocked>                                m_seasonRewards;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSpectatingInitilizationData
	 * Size -> 0x0028
	 */
	struct FYSpectatingInitilizationData
	{
	public:
		unsigned char                                              UnknownData_U4SO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AYPawn*                                              m_pawnToSpectate;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB6Y[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YKillCamValues
	 * Size -> 0x0018
	 */
	struct FYKillCamValues
	{
	public:
		float                                                      m_timeMovingTowardsTargetLocation;                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHS6[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YProjectileBallisticOfflineDataTableRow
	 * Size -> 0x0038 (FullSize[0x0250] - InheritedSize[0x0218])
	 */
	struct FYProjectileBallisticOfflineDataTableRow : public FYProjectileOfflineDataTableRow
	{
	public:
		TAssetPtr<class UStaticMesh>                               m_projectileMesh;                                        // 0x0218(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLPX[0x4];                                   // 0x0234(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             m_projectileMeshScale;                                   // 0x0238(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_projectileMeshMaxDrawDistance;                         // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYProjectileIntegrationMethod                              m_movementIntegrationMethod;                             // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQZV[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YProjectileMissileOfflineDataTableRow
	 * Size -> 0x0080 (FullSize[0x02D0] - InheritedSize[0x0250])
	 */
	struct FYProjectileMissileOfflineDataTableRow : public FYProjectileBallisticOfflineDataTableRow
	{
	public:
		float                                                      m_nukeAlarmDistanceToTarget;                             // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringDataBroadcastTime;                             // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringDataBroadcastTimeLowFrequency;                 // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringDataReplicationDistanceLowFrequency;           // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_serverRelativePositionCorrectionInterpolationSpeed;    // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pitchLeewayForHorizontalFlight;                        // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_referenceSpeedForHorizontalFlight;                     // 0x0268(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_dragFactorFlightDir;                                   // 0x026C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_dragFactorSteering;                                    // 0x0270(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_dragFactorSideways;                                    // 0x0274(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_sidewaysDragDelay;                                     // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_proximityImpactMaxDot;                                 // 0x027C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              m_deployActorClass;                                      // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UAkAudioEvent>                             m_audioEventProjectileThrusterStart;                     // 0x0288(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ1C[0x4];                                   // 0x02A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAkAudioEvent>                             m_audioEventProjectileThrusterStop;                      // 0x02A8(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIGP[0x4];                                   // 0x02C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       m_useMultiSocketTargetting;                              // 0x02C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_spawnedTurretUsesMissileTarget;                        // 0x02C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85B1[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YProjectileExplosionDataMinimal
	 * Size -> 0x0008
	 */
	struct FYProjectileExplosionDataMinimal
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_receptionTimestamp;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YProjectileDestroyedOnServerData
	 * Size -> 0x0010
	 */
	struct FYProjectileDestroyedOnServerData
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_traveledDistance;                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_forceExplosion;                                        // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8FK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_receptionTimestamp;                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMissileSteeringData
	 * Size -> 0x0010
	 */
	struct FYMissileSteeringData
	{
	public:
		int32_t                                                    m_projectileID;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 m_position;                                              // 0x0004(0x000C) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPVEModeRuleSet
	 * Size -> 0x000C
	 */
	struct FYPVEModeRuleSet
	{
	public:
		int32_t                                                    m_maxPlayerTeamRespawns;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_respawnTime;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_automaticallyAddSpawnedEnemiesToList;                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZI0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDestroyModeRuleSet
	 * Size -> 0x0000 (FullSize[0x000C] - InheritedSize[0x000C])
	 */
	struct FYDestroyModeRuleSet : public FYPVEModeRuleSet
	{	};

	/**
	 * ScriptStruct DreadGame.YHordeModeRuleSet
	 * Size -> 0x0018 (FullSize[0x0024] - InheritedSize[0x000C])
	 */
	struct FYHordeModeRuleSet : public FYPVEModeRuleSet
	{
	public:
		bool                                                       m_automaticallyStartFirstWave;                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGJ1[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_firstWaveDelay;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_waveStartDuration;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_waveEndDuration;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_canPlayersRespawnAsCapitalShipsAfterWave;              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_refillPlayerTeamRespawnsAfterWave;                     // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U01E[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_respawnsToRefill;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMatchReputationInfo
	 * Size -> 0x0028
	 */
	struct FYMatchReputationInfo
	{
	public:
		TArray<int32_t>                                            m_matchReputation;                                       // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_finalized;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WI8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_battleID;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSaveGameUserSetting
	 * Size -> 0x0018
	 */
	struct FYSaveGameUserSetting
	{
	public:
		class FString                                              m_gameSettingsGroup;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_value;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_177Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YScoringFormulaParameters
	 * Size -> 0x001C
	 */
	struct FYScoringFormulaParameters
	{
	public:
		int32_t                                                    m_tierMultiplier;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_veteranMultiplier;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_premiumMultiplier;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_premiumShipXPPercentage;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_premiumFreeXpPercentage;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_standardShipXPPercentage;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_standardFreeXpPercentage;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YScoringFreeXPParameters
	 * Size -> 0x000C
	 */
	struct FYScoringFreeXPParameters
	{
	public:
		int32_t                                                    m_freeXPRecruitMultiplier;                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXPVeteranMultiplier;                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXPLegendaryMultiplier;                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YScoringFleetCreditsParameters
	 * Size -> 0x0008
	 */
	struct FYScoringFleetCreditsParameters
	{
	public:
		int32_t                                                    m_veteranCreditMultiplier;                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_legendaryCreditMultipliers;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCreditBucket
	 * Size -> 0x0008
	 */
	struct FYCreditBucket
	{
	public:
		int32_t                                                    m_threshold;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_creditsAmount;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGameModeSpecificParameters
	 * Size -> 0x0058
	 */
	struct FYGameModeSpecificParameters
	{
	public:
		class FString                                              m_gameModeCode;                                          // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FYScoringFormulaParameters                          m_formulaParameters;                                     // 0x0010(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FYScoringFreeXPParameters                           m_freeXPParameters;                                      // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FYScoringFleetCreditsParameters                     m_fleetCreditsParameters;                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FYCreditBucket>                              m_creditBuckets;                                         // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_maxScorePerMatch;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSFT[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YScoringAchievement
	 * Size -> 0x001C
	 */
	struct FYScoringAchievement
	{
	public:
		EYScoringAchievementType                                   m_achievementType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2A7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_id;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_count;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_score;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_XP;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_credits;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipId;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMenuPreviewMeshes
	 * Size -> 0x0018
	 */
	struct FYMenuPreviewMeshes
	{
	public:
		unsigned char                                              UnknownData_61DK[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YParameterScalar
	 * Size -> 0x0010
	 */
	struct FYParameterScalar
	{
	public:
		class FName                                                m_parameterName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_parameterValue;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHTB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YParameterTexture
	 * Size -> 0x0010
	 */
	struct FYParameterTexture
	{
	public:
		class FName                                                m_parameterName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_parameterValue;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShipDebrisInitializationData
	 * Size -> 0x0058
	 */
	struct FYShipDebrisInitializationData
	{
	public:
		class AYPawn*                                              m_owningPawn;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  m_parentMaterial;                                        // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            m_initialRotationRate;                                   // 0x0010(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            m_targetRotationRate;                                    // 0x001C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_initialDebrisVelocity;                                 // 0x0028(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_debrisScale;                                           // 0x0034(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_initialForceVector;                                    // 0x0040(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_currentDebrisLifeTime;                                 // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isDebrisActive;                                        // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZR7[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YParameterVector
	 * Size -> 0x0018
	 */
	struct FYParameterVector
	{
	public:
		class FName                                                m_parameterName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_parameterValue;                                        // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SQM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSTObjective
	 * Size -> 0x0010
	 */
	struct FYSTObjective
	{
	public:
		class UYStagedTrainingObjectiveBase*                       m_objective;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_enabled;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9VC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YThrusterInfo
	 * Size -> 0x0020
	 */
	struct FYThrusterInfo
	{
	public:
		EYThrusterPosition                                         m_thrusterType;                                          // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y97Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     m_particleSystemTemplate;                                // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_thrusterStartSound;                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_thrusterStopSound;                                     // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YThrusterInstanceInfo
	 * Size -> 0x0020
	 */
	struct FYThrusterInstanceInfo
	{
	public:
		float                                                      m_oldVal;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJA6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            m_particleSystem;                                        // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_thrusterStartSound;                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_thrusterStopSound;                                     // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YReplicatedVehicleState
	 * Size -> 0x0018
	 */
	struct FYReplicatedVehicleState
	{
	public:
		float                                                      m_steeringInput;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_throttleInput;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalInput;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentTurnRightValue;                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentAscendValue;                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_currentDescendValue;                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPhysicDampingData
	 * Size -> 0x0010
	 */
	struct FYPhysicDampingData
	{
	public:
		float                                                      m_angularDampingDuringSteering;                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_angularDampingNoneSteering;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_linearDampingNoneThrottle;                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_linearDampingDuringThrottle;                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YThrottleData
	 * Size -> 0x001C
	 */
	struct FYThrottleData
	{
	public:
		float                                                      m_forwardForce;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_constantForwardForce;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_reverseForce;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxForwardVelocity;                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minForwardVelocity;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_antiDriftingFactor;                                    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_showDebugInfo;                                         // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_useConstantForwardForce;                               // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TB2[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDragData
	 * Size -> 0x000C
	 */
	struct FYDragData
	{
	public:
		float                                                      m_dragFactorDuringThrottle;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_dragFactorNoneThrottle;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_showDebugInfo;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3399[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YVerticalForceData
	 * Size -> 0x0020
	 */
	struct FYVerticalForceData
	{
	public:
		struct FVector                                             m_relativeLocation;                                      // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_localForceDirection;                                   // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_amountOfForce;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_massNormalized;                                        // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYVerticalDirection                                        m_verticalDirection;                                     // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q946[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YVerticalData
	 * Size -> 0x0038
	 */
	struct FYVerticalData
	{
	public:
		float                                                      m_verticalForce;                                         // 0x0000(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalForceAscending;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalForceDecending;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_specialHeightDrag;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxPitch;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalPitchFactor;                                   // 0x0014(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalPitchFactorAscending;                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_verticalPitchFactorDecending;                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYVerticalForceData>                         m_additionalForces;                                      // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_showDebugInfo;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N2O[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSteerForceData
	 * Size -> 0x0020
	 */
	struct FYSteerForceData
	{
	public:
		struct FVector                                             m_relativeLocation;                                      // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_localForceDirection;                                   // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      m_amountOfForce;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_massNormalized;                                        // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYSteeringDirection                                        m_steerDirection;                                        // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Q6E[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSteeringData
	 * Size -> 0x0040
	 */
	struct FYSteeringData
	{
	public:
		float                                                      m_steeringForce;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringRollFactor;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_onlyRollIfGainingVelocity;                             // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMQR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxRoll;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_steeringRollUseTorque;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U90B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxYawVelocity;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_lockSteerForceOnWorldXAxis;                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO8D[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_invertSteeringThreshold;                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_counterSteeringFactor;                                 // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDLK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYSteerForceData>                            m_additionalForces;                                      // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_counterSteeringHalfRange;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_showDebugInfo;                                         // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVI4[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSpringDampingData
	 * Size -> 0x0028
	 */
	struct FYSpringDampingData
	{
	public:
		float                                                      m_pitchStiffness;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pitchDamping;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pitchDampeningThreshold;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pitchDampingLimit;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_pitchDeltaTimeLimiter;                                 // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOVU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_rollStiffness;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rollDamping;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rollDampeningThreshold;                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rollDampingLimit;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_rollDeltaTimeLimiter;                                  // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_showDebugInfo;                                         // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QH9[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YVehicleInputRate
	 * Size -> 0x0018
	 */
	struct FYVehicleInputRate
	{
	public:
		float                                                      m_increaseRate;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M15J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         m_increaseRateCurve;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_decreaseRate;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_curveTime;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPreviewAnimData
	 * Size -> 0x0010
	 */
	struct FYPreviewAnimData
	{
	public:
		struct FRotator                                            m_desiredRotation;                                       // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    m_currentStep;                                           // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBarrelStates
	 * Size -> 0x0010
	 */
	struct FYBarrelStates
	{
	public:
		unsigned char                                              UnknownData_UIUC[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YVIMProjectileDebugEntry
	 * Size -> 0x0018
	 */
	struct FYVIMProjectileDebugEntry
	{
	public:
		class FName                                                m_barrelName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYBarrelStates>                              m_triggerState;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_VoiceLineSubtitle
	 * Size -> 0x0018
	 */
	struct FYS_VoiceLineSubtitle
	{
	public:
		class FString                                              m_text;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_start;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_end;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YVOTriggerEventLinkingEntry
	 * Size -> 0x0020
	 */
	struct FYVOTriggerEventLinkingEntry
	{
	public:
		class FString                                              m_originalEvent;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_linkedEvent;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOrderedProjectileShootingEntry
	 * Size -> 0x0010
	 */
	struct FYOrderedProjectileShootingEntry
	{
	public:
		class FName                                                m_socketName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_timeOffset;                                            // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9JF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YShipSelectSlotData
	 * Size -> 0x0038
	 */
	struct FYShipSelectSlotData
	{
	public:
		bool                                                       m_isFlagship;                                            // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isHeroShip;                                            // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isVeteran;                                             // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isFighter;                                             // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    m_tier;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipExp;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHTX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_shipTexture;                                           // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_shipClassIconTexture;                                  // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_loadoutName;                                           // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentLoadoutVariationSelected;                       // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_showCustomLoadouts;                                    // 0x0034(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7FD[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEOMBonusEarningsBannerData
	 * Size -> 0x0058
	 */
	struct FYEOMBonusEarningsBannerData
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                parentheticalText;                                       // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                bannerText;                                              // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    softCurrency;                                            // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    shipXp;                                                  // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    freeXp;                                                  // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       animateCurrencyUpdate;                                   // 0x0054(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYEOMBonusBannerState                                      bonusBannerColorState;                                   // 0x0055(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       showTeamEliteStatusIcons;                                // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKQZ[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEOMTeamMember
	 * Size -> 0x0038
	 */
	struct FYEOMTeamMember
	{
	public:
		class FString                                              m_playerName;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_rankName;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_playerUniqueID;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_hasEliteStatus;                                        // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isCurrentPlayer;                                       // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INMF[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEOMTeamData
	 * Size -> 0x0020
	 */
	struct FYEOMTeamData
	{
	public:
		TArray<struct FYEOMTeamMember>                             m_friendlyTeamMemberArray;                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYEOMTeamMember>                             m_enemyTeamMemberArray;                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.TeamElimPlayerData
	 * Size -> 0x0020
	 */
	struct FTeamElimPlayerData
	{
	public:
		unsigned char                                              UnknownData_JKPS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDamageNumberPropertyTuning
	 * Size -> 0x0018
	 */
	struct FYDamageNumberPropertyTuning
	{
	public:
		float                                                      m_maxMovementDuration;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifetimeAfterDamage;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_bounceForce;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialOffsetLength;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minWidgetScale;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxDamageWidgetSize;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YKillTickerEventData
	 * Size -> 0x0028
	 */
	struct FYKillTickerEventData
	{
	public:
		unsigned char                                              UnknownData_M18U[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIIconMap
	 * Size -> 0x0010
	 */
	struct FYUIIconMap
	{
	public:
		EYPS4ButtonIcon                                            m_iconEnum;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFVP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            m_icon;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPauseMenuContent
	 * Size -> 0x0038
	 */
	struct FYPauseMenuContent
	{
	public:
		class FText                                                m_menuName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EYPauseMenuOption                                          m_menuOption;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RLP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYHUDWidget_PauseMenuOption*                         m_menuButton;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UYHUDWidget_PauseSubMenu*                            m_subMenu;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_useSubNavigation;                                      // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y258[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSettingsOptionContent
	 * Size -> 0x0028
	 */
	struct FYSettingsOptionContent
	{
	public:
		class UYHUDWidget_SettingsOption*                          m_settingsOptionWidget;                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_optionName;                                            // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      m_resetToDefaultValue;                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD6J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.PrematchTeamListData
	 * Size -> 0x00C0
	 */
	struct FPrematchTeamListData
	{
	public:
		unsigned char                                              UnknownData_NKD0[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_isLocalPlayer;                                         // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWXX[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYShipLoadoutInfo                                   m_shipLoadoutInfo;                                       // 0x0048(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTargetAbilityState
	 * Size -> 0x0008
	 */
	struct FYTargetAbilityState
	{
	public:
		unsigned char                                              UnknownData_CHEE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUITargetMarker
	 * Size -> 0x0088
	 */
	struct FYUITargetMarker
	{
	public:
		unsigned char                                              UnknownData_HXO7[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCurrencyAppearanceMapping
	 * Size -> 0x0038
	 */
	struct FYCurrencyAppearanceMapping
	{
	public:
		EYUICurrency                                               m_currencyType;                                          // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_702W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_currencyTexture;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         m_currencyColor;                                         // 0x0010(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEomPveScoreBonusTypeUITextureMapping
	 * Size -> 0x0010
	 */
	struct FYEomPveScoreBonusTypeUITextureMapping
	{
	public:
		EYPveScoreBuckets                                          m_bonusType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVLE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_bonusTypeUITexture;                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFleetTypeText
	 * Size -> 0x0020
	 */
	struct FYFleetTypeText
	{
	public:
		EYFleetType                                                m_fleetType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_fleetTypeText;                                         // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YStatComparisonTypeColorMapping
	 * Size -> 0x0030
	 */
	struct FYStatComparisonTypeColorMapping
	{
	public:
		EYPlayerMatchStatComparison                                m_comparisonType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SBM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         m_color;                                                 // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGenericPopupData
	 * Size -> 0x0080
	 */
	struct FYGenericPopupData
	{
	public:
		class FText                                                m_header;                                                // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_descriptionLocalizationToken;                          // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_acceptButtonText;                                      // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_denyButtonText;                                        // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       m_bShowDenyButton;                                       // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_bUseDescriptionLocalizationToken;                      // 0x0079(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGON[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterRenderLevelSet
	 * Size -> 0x0010
	 */
	struct FYCharacterRenderLevelSet
	{
	public:
		EYCharacterRenderLevelType                                 m_type;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMZ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             m_offset;                                                // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMatchShipXP
	 * Size -> 0x0028
	 */
	struct FYMatchShipXP
	{
	public:
		int32_t                                                    m_shipId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5UH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_shipXP;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_freeXP;                                                // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMatchXPInfo
	 * Size -> 0x0038
	 */
	struct FYMatchXPInfo
	{
	public:
		TArray<int32_t>                                            m_freeXP;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYMatchShipXP>                               m_shipsXP;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_finalized;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOPN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_battleID;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUICareerProgressionGoalStageData
	 * Size -> 0x0218
	 */
	struct FYUICareerProgressionGoalStageData
	{
	public:
		unsigned char                                              UnknownData_HWTX[0x218];                                 // 0x0000(0x0218) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIEngineControlledButton
	 * Size -> 0x0002
	 */
	struct FYUIEngineControlledButton
	{
	public:
		unsigned char                                              UnknownData_9I49[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUICampaignData
	 * Size -> 0x0070
	 */
	struct FYUICampaignData
	{
	public:
		class FString                                              m_campaignId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_offerId;                                               // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_discountPercent;                                       // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06F3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIItemPriceData                                   m_discountedPrice;                                       // 0x0028(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_hasCampaign;                                           // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKZY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYCampaignTag>                                      m_campaignTags;                                          // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIItemData
	 * Size -> 0x0126 (FullSize[0x0128] - InheritedSize[0x0002])
	 */
	struct FYUIItemData : public FYUIEngineControlledButton
	{
	public:
		unsigned char                                              UnknownData_L0IE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_manufacturerID;                                        // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_itemID;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_tier;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_iconPath;                                              // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryImagePath;                                     // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTechTreeItemState                                        m_itemState;                                             // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF0H[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIItemPriceData                                   m_researchItemPrice;                                     // 0x0048(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FYUIItemPriceData                                   m_purchaseItemPrice;                                     // 0x0078(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FYUICampaignData                                    m_campaignData;                                          // 0x00A8(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    m_numOfTechTreeItemsForClaiming;                         // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numOfTechTreeItemsOwned;                               // 0x011C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isClaimable;                                           // 0x0120(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKEG[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIShipTechTreeItemData
	 * Size -> 0x0030 (FullSize[0x0158] - InheritedSize[0x0128])
	 */
	struct FYUIShipTechTreeItemData : public FYUIItemData
	{
	public:
		EYUILoadoutItemType                                        m_loadoutType;                                           // 0x0128(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_808C[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_ownerShipId;                                           // 0x012C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isEquipped;                                            // 0x0130(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4P8[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           m_gridLocation;                                          // 0x0134(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    m_unlockAtTier;                                          // 0x013C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_lockedDescription;                                     // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isOwned;                                               // 0x0150(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ8N[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIShipManufacturerTechItemData
	 * Size -> 0x0058 (FullSize[0x0180] - InheritedSize[0x0128])
	 */
	struct FYUIShipManufacturerTechItemData : public FYUIItemData
	{
	public:
		unsigned char                                              UnknownData_ESWB[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_manfacturerLogoPath;                                   // 0x0138(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_loadoutIdd_DEPRICATED;                                 // 0x0148(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0150(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IG4[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_shipClassName;                                         // 0x0158(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentXP;                                             // 0x0168(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isVeteranStatus;                                       // 0x016C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isInFleet;                                             // 0x016D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isHeroShip;                                            // 0x016E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isFlagship;                                            // 0x016F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBKY[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_loadoutID;                                             // 0x0178(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.SocialUserDataBase
	 * Size -> 0x0078
	 */
	struct FSocialUserDataBase
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_captainImagePath;                                      // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_userNumber;                                            // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LEC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_rankImage;                                             // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_rank;                                                  // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMNV[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_rankName;                                              // 0x0048(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_isElite;                                               // 0x0060(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFE6[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_SceAccountId;                                          // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.SquadUserData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FSquadUserData : public FSocialUserDataBase
	{
	public:
		bool                                                       m_isLeader;                                              // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYFleetType                                                m_highestFleet;                                          // 0x0079(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CU9[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.SquadVoiceData
	 * Size -> 0x0010
	 */
	struct FSquadVoiceData
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isMuted;                                               // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isSpeaking;                                            // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQXG[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMenuOfferCampaingData
	 * Size -> 0x0038
	 */
	struct FYMenuOfferCampaingData
	{
	public:
		unsigned char                                              UnknownData_8BXB[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_discountPercent;                                       // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_discountedPrice;                                       // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_hasCampaign;                                           // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RAE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EYCampaignTag>                                      m_tags;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_bestCampaign;                                          // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZQA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMenuItemData
	 * Size -> 0x0088
	 */
	struct FYMenuItemData
	{
	public:
		int32_t                                                    m_itemID;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J020[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_name;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_description;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUILoadoutItemType                                        m_loadoutItemTypeForUI;                                  // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUICharacterItemType                                      m_characterItemTypeForUI;                                // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCharacterGender                                          m_applicableGender;                                      // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_allowMultiplePurchase;                                 // 0x0033(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isInInventory;                                         // 0x0034(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isUnlocked;                                            // 0x0035(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDEF[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_unlockRank;                                            // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUnlockType                                               m_unlockType;                                            // 0x003C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25E0[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_smallIcon;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_mediumIcon;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WK6[0x4];                                   // 0x0060(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_grantedCurrencyAmount;                                 // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_largeIcon;                                             // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryImagePath;                                     // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.LoginGateStateData
	 * Size -> 0x0010
	 */
	struct FLoginGateStateData
	{
	public:
		unsigned char                                              UnknownData_D880[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.HavocRewardUIData
	 * Size -> 0x000C
	 */
	struct FHavocRewardUIData
	{
	public:
		EYUICurrency                                               m_rewardCurrencyType;                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7AA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_rewardAmount;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_scoreRequired;                                         // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.HavocLoadoutUpgradeUIData
	 * Size -> 0x0068
	 */
	struct FHavocLoadoutUpgradeUIData
	{
	public:
		unsigned char                                              UnknownData_59LC[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.HavocLoadoutUpgradeModulesUIData
	 * Size -> 0x0020
	 */
	struct FHavocLoadoutUpgradeModulesUIData
	{
	public:
		unsigned char                                              UnknownData_HIMI[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.HavocWaveProgressPanelUIData
	 * Size -> 0x0014
	 */
	struct FHavocWaveProgressPanelUIData
	{
	public:
		unsigned char                                              UnknownData_Q0MX[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.HavocLeaderboardTeamMemberUIData
	 * Size -> 0x0038
	 */
	struct FHavocLeaderboardTeamMemberUIData
	{
	public:
		unsigned char                                              UnknownData_KGSW[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIBattleReadyUIData
	 * Size -> 0x0010
	 */
	struct FYUIBattleReadyUIData
	{
	public:
		unsigned char                                              UnknownData_WE9Q[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIBattleReadyBonusUIData
	 * Size -> 0x0040
	 */
	struct FYUIBattleReadyBonusUIData
	{
	public:
		float                                                      m_creditsBoost;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_shipsXPBoost;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_freeXPBoost;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9QQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              m_shipXpMultipliers;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              m_freeXpMultipliers;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              m_creditsMultipliers;                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIBattleReadyFleetUIData
	 * Size -> 0x0060
	 */
	struct FYUIBattleReadyFleetUIData
	{
	public:
		unsigned char                                              UnknownData_G509[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIBattleReadyBonusUIData                          m_battleReadyBonus;                                      // 0x0018(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRMU[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIItemUnlockData
	 * Size -> 0x0040
	 */
	struct FYUIItemUnlockData
	{
	public:
		unsigned char                                              UnknownData_EH16[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYUILoadoutItemType                                        m_type;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK3D[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              m_iconImage;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_marketImagePath;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.FindNewFriendUserData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FFindNewFriendUserData : public FSocialUserDataBase
	{
	public:
		bool                                                       m_isFriendAlreadyInvited;                                // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSOJ[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.FriendsUserData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FFriendsUserData : public FSocialUserDataBase
	{
	public:
		bool                                                       m_isInSquad;                                             // 0x0078(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYUIFriendStatus                                           m_status;                                                // 0x0079(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI0U[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.PlayerUserData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FPlayerUserData : public FSocialUserDataBase
	{
	public:
		bool                                                       m_isInSquad;                                             // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVWL[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YItemIDTableEntry
	 * Size -> 0x0028
	 */
	struct FYItemIDTableEntry
	{
	public:
		class FString                                              m_categoryName;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_categoryID;                                            // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WDZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            m_usedItemIDs;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewSupportStationActor
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYDataViewSupportStationActor : public FTableRowBase
	{
	public:
		float                                                      m_lifetimeAfterOwnerDeath;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifeRegenInterval;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_healingRadius;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifePerInterval;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifeTime;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_health;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_deploymentTime;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxConcurrentActors;                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewProximityMineActor
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYDataViewProximityMineActor : public FTableRowBase
	{
	public:
		float                                                      m_activateRadius;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_triggerCountDown;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageAmount;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageRadius;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageActivateThreshold;                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifetimeAfterOwnerDeath;                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifeTime;                                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_health;                                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_deploymentTime;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxConcurrentActors;                                   // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewTurretActor
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYDataViewTurretActor : public FTableRowBase
	{
	public:
		float                                                      m_fireRange;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifetimeAfterOwnerDeath;                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lifeTime;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_health;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxConcurrentActors;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_deploymentTime;                                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewFighterDroneAIController
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYDataViewFighterDroneAIController : public FTableRowBase
	{
	public:
		float                                                      m_engageInDistance;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_engageOutDistance;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numberOfAttackRuns;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_boostMultiplyer;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringFPS;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_waypointProximity;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_breakDistanceToPlayer;                                 // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxFireDistance;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_primaryWeaponFireAngle;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_cruiseTargetSpeed;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_topTargetSpeed;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F332[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewCreepPawn
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FYDataViewCreepPawn : public FTableRowBase
	{
	public:
		float                                                      m_health;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxHealth;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewMissileWeapon
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYDataViewMissileWeapon : public FTableRowBase
	{
	public:
		int32_t                                                    m_projectilesPerShoot;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMin;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMax;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMin;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMax;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ammoMagazinSize;                                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDownTime;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ3Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityFighterDrone
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityFighterDrone : public FTableRowBase
	{
	public:
		int32_t                                                    m_maxConcurrentActors;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_droneTimeToLive;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_droneTimeToLiveOwnerDeath;                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_inheritStartVelocity;                                  // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GS5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_abilityName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F091[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE8C[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QC80[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewProjectileBallistic
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYDataViewProjectileBallistic : public FTableRowBase
	{
	public:
		float                                                      m_mass;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_gravityScale;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxFlightSpeed;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialSpeed;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTravelDistance;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_inheritStartVelocity;                                  // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIT4[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_instigatorIgnoreTime;                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitImpactForce;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_fireRecoilForce;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageRadius;                                          // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_detonateOnProximity;                                   // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_proximityCheckAgainstCreep;                            // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I7X[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_proximityDistance;                                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_abilityDamage;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLRA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewWeaponBroadside
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYDataViewWeaponBroadside : public FTableRowBase
	{
	public:
		float                                                      m_spreadValue;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDownTime;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxRange;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_projectilesPerShoot;                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMin;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMax;                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMin;                              // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMax;                              // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityAltWeapon
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityAltWeapon : public FTableRowBase
	{
	public:
		class FName                                                m_abilityName;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4YX[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13WO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityBeamModifier
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityBeamModifier : public FTableRowBase
	{
	public:
		class FName                                                m_abilityName;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23TK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0TS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityBroadside
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityBroadside : public FTableRowBase
	{
	public:
		float                                                      m_maxAngle;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxDistance;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_volleyTime;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_refreshWeaponDirectionInterval;                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_refreshWeaponDirectionSubinterval;                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55K8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_abilityName;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6PK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxLockAngle;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewBeamWeapon
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FYDataViewBeamWeapon : public FTableRowBase
	{
	public:
		float                                                      m_impactPointInterpolationRate;                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_targetLockTime;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewProjectileWeapon
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYDataViewProjectileWeapon : public FTableRowBase
	{
	public:
		int32_t                                                    m_projectilesPerShoot;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMin;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMax;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMin;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMax;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_ammoMagazinSize;                                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityPerimeterDefense
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityPerimeterDefense : public FTableRowBase
	{
	public:
		float                                                      m_maxRange;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minRange;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_targetFriendlies;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_specifyTarget;                                         // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29I8[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_maxFiringWeapons;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxTargets;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_refireTime;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_refireCoolDown;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSXJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_abilityName;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N6G[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZLG[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLKV[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewProjectile
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYDataViewProjectile : public FTableRowBase
	{
	public:
		float                                                      m_initialSpeed;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTravelDistance;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_inheritStartVelocity;                                  // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNCD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_instigatorIgnoreTime;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitImpactForce;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_fireRecoilForce;                                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageRadius;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_detonateOnProximity;                                   // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_proximityCheckAgainstCreep;                            // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV2Z[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_proximityDistance;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_abilityDamage;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDataViewProjectileMissile
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FYDataViewProjectileMissile : public FTableRowBase
	{
	public:
		float                                                      m_thrusterStartDelay;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationDelay;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringStartDelay;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_thrusterDuration;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringDuration;                                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_thrusterForce;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationInterpolationSpeed;                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetPitch;                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetRoll;                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetYaw;                      // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationMaxDeviation;                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rotationInterpolationSpeed;                            // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_deviationDuration;                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxRotDeviation;                                       // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_increaseUpdateRateWhenClosingIn;                       // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYAW[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_increasedUpdateRateMinMassFactor;                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rotationInterpolationSpeedThrustersOff;                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_targetInitialPosition;                                 // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3OW[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_startVelocityRotationOffsetPitch;                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_startVelocityRotationOffsetYaw;                        // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_startVelocityRotationOffsetRoll;                       // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialSpeed;                                          // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTravelDistance;                                     // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_inheritStartVelocity;                                  // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_079G[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_health;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_instigatorIgnoreTime;                                  // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitImpactForce;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_fireRecoilForce;                                       // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageRadius;                                          // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_detonateOnProximity;                                   // 0x007C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_proximityCheckAgainstCreep;                            // 0x007D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RRV[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_proximityDistance;                                     // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_abilityDamage;                                         // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_mass;                                                  // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_gravityScale;                                          // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxFlightSpeed;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P05W[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbility
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbility : public FTableRowBase
	{
	public:
		class FName                                                m_abilityName;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN6Z[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFU8[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0WN[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityMovement
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityMovement : public FTableRowBase
	{
	public:
		bool                                                       m_CancelOnCollision;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_disableControls;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_disableStabilisationSystem;                            // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_overwriteRigidBodyErrorCorrection;                     // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I8S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_abilityName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODCV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDYN[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNU0[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityWarpJump
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityWarpJump : public FTableRowBase
	{
	public:
		float                                                      m_maxDistance;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_minDistance;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_searchSpreadMultiplier;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_warpWarmUpTime;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_shieldDisableTime;                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageOnEnemy;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTargetDistance;                                     // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_onlyWarpOnTargets;                                     // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_warpOnDirection;                                       // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_dealDamageOnPath;                                      // 0x0026(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGWU[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_pathDamageRadiusModifer;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_damageAmountOnPath;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_abilityName;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FH1[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KP1[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7HE[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewWeaponRocketSwarm
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYDataViewWeaponRocketSwarm : public FTableRowBase
	{
	public:
		int32_t                                                    m_projectilesPerShoot;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMin;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_internalFiringDelayMax;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMin;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileFiringDelayMax;                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N742[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityPulse
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityPulse : public FTableRowBase
	{
	public:
		float                                                      m_radius;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pulseSpeed;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_pulseDamage;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_numberOfPulses;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_abilityName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWS2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBCG[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHMP[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityRocketSwarm
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityRocketSwarm : public FTableRowBase
	{
	public:
		float                                                      m_maxDistance;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_lockOnTime;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_abilityName;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHA7[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTargetType                                               m_targetingType;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY7I[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_maxLockAngle;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_notifyEnemiesOnActivate;                               // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37O7[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDataViewAbilityBatteringRam
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYDataViewAbilityBatteringRam : public FTableRowBase
	{
	public:
		int32_t                                                    m_damageRadius;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_overlapRadius;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxDamage;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NHM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                m_abilityName;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_triggerName;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_activeTime;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_coolDown;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYContextActionType                                        m_contextActionType;                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0WN[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_contextActionEndTime;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_contextActionStartTime;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQW5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPlayerMatchStatistics
	 * Size -> 0x0110
	 */
	struct FYPlayerMatchStatistics
	{
	public:
		unsigned char                                              UnknownData_GOGR[0x110];                                 // 0x0000(0x0110) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YParameterLinearColor
	 * Size -> 0x0018
	 */
	struct FYParameterLinearColor
	{
	public:
		class FName                                                m_parameterName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        m_parameterValue;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YProjectileOTSDataTableRow
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FYProjectileOTSDataTableRow : public FTableRowBase
	{
	public:
		int32_t                                                    m_damageHigh;                                            // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageHighRange;                                       // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageMedium;                                          // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageMediumRange;                                     // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageLow;                                             // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageHigh;                                   // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageMedium;                                 // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amplifiedDamageLow;                                    // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxTravelDistance;                                     // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxRange;                                              // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_damageRadius;                                          // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_ignoreShields;                                         // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_friendlyFire;                                          // 0x0035(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_exactHitDetection;                                     // 0x0036(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WVT[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_instigatorIgnoreTime;                                  // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialSpeed;                                          // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxFlightSpeed;                                        // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_gravityScale;                                          // 0x0044(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_proximityDistance;                                     // 0x0048(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_proximityAgainstCreeps;                                // 0x004C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ0Q[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_hitImpactForce;                                        // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_fireRecoilForce;                                       // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitzoneDamageMultiplier;                               // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_hitzoneHitPenetrationDistance;                         // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_abilityDamage;                                         // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_inheritStartVelocity;                                  // 0x0064(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_detonateOnProximity;                                   // 0x0065(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8KN[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_mass;                                                  // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_thrusterStartDelay;                                    // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationDelay;                                  // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringStartDelay;                                    // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_thrusterDuration;                                      // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_steeringDuration;                                      // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_thrusterForce;                                         // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationInterpolationSpeed;                     // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetPitch;                    // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetRoll;                     // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationConstantOffsetYaw;                      // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialRotationMaxDeviation;                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rotationInterpolationSpeed;                            // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_deviationDuration;                                     // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_maxRotDeviation;                                       // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_increaseUpdateRateWhenClosingIn;                       // 0x00A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RZG[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_increasedUpdateRateMinMassFactor;                      // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_rotationInterpolationSpeedThrustersOff;                // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_targetInitialPosition;                                 // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_targetLastPositionOnTargetDeath;                       // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX3W[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_startVelocityRotationOffsetPitch;                      // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_startVelocityRotationOffsetYaw;                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_startVelocityRotationOffsetRoll;                       // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_health;                                                // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XZP[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_oldDataTable;                                          // 0x00C8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAbilityDefault
	 * Size -> 0x0008
	 */
	struct FYAbilityDefault
	{
	public:
		class UClass*                                              m_abilityClass;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDirectionalSignData
	 * Size -> 0x0030
	 */
	struct FYDirectionalSignData
	{
	public:
		unsigned char                                              UnknownData_SIPZ[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YScoringEventParams
	 * Size -> 0x0020
	 */
	struct FYScoringEventParams
	{
	public:
		unsigned char                                              UnknownData_LSKE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEventParams
	 * Size -> 0x0038
	 */
	struct FYEventParams
	{
	public:
		unsigned char                                              UnknownData_ZOZ2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AInfo>                                m_instigatorInfo;                                        // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AInfo>                                m_otherInfo;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		class AActor*                                              m_enemyActor;                                            // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_amount;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y17T[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_damageType;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isAbilityDamage;                                       // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDYL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YShipDebrisDetachmentRuntimeData
	 * Size -> 0x001C
	 */
	struct FYShipDebrisDetachmentRuntimeData
	{
	public:
		unsigned char                                              UnknownData_0XDH[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHitLocationInfo
	 * Size -> 0x0018
	 */
	struct FYHitLocationInfo
	{
	public:
		class AYPawn*                                              m_hitPawn;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_hitLocation;                                           // 0x0008(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOQX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHealingData
	 * Size -> 0x0050
	 */
	struct FYHealingData
	{
	public:
		TArray<class AYPlayerController*>                          m_healer;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      m_healingCauser;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              m_healingDuration;                                       // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              m_amount;                                                // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               m_active;                                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTuneDataRep
	 * Size -> 0x0098
	 */
	struct FYTuneDataRep
	{
	public:
		TArray<struct FYJsonObjectRep>                             m_metaData;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_abilities;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_weapons;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_battleReadyRule;                                       // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_projectiles;                                           // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_officers;                                              // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_feats;                                                 // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_havocTables;                                           // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYJsonObjectRep>                             m_gameModifierTables;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EYTuneRepState                                             m_repState;                                              // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5IF[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_repIndex;                                              // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YIgnoredPlayers
	 * Size -> 0x0050
	 */
	struct FYIgnoredPlayers
	{
	public:
		unsigned char                                              m_ignoredPlayers[0x50];                                  // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty DreadGame.YIgnoredPlayers.m_ignoredPlayers
	};

	/**
	 * ScriptStruct DreadGame.YMatchMakingRating
	 * Size -> 0x000C
	 */
	struct FYMatchMakingRating
	{
	public:
		unsigned char                                              UnknownData_6QG3[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLocalServerPlayerDataInformation
	 * Size -> 0x0030
	 */
	struct FYLocalServerPlayerDataInformation
	{
	public:
		class FString                                              m_displayInformation;                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYShipImportLoadoutInfo>                     m_loadoutList;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                m_fleetId;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_fleetType;                                             // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     m_flagshipIndex;                                         // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5VO[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIPawnMarker
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	struct FYUIPawnMarker : public FYUITargetMarker
	{
	public:
		unsigned char                                              UnknownData_SL8D[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSpawnSetRandomizeHelper
	 * Size -> 0x0008
	 */
	struct FYSpawnSetRandomizeHelper
	{
	public:
		unsigned char                                              UnknownData_QZPC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.ContractData
	 * Size -> 0x0058
	 */
	struct FContractData
	{
	public:
		class FString                                              m_id;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EYUICurrency                                               m_rewardType;                                            // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DU5H[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_rewardValue;                                           // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isNewContract;                                         // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAED[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_requiredValue;                                         // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_achievedValue;                                         // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isEliteContract;                                       // 0x0054(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_showBecomeElitePromo;                                  // 0x0055(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_canReroll;                                             // 0x0056(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77O2[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCustomRoomPlayerUIData
	 * Size -> 0x0050
	 */
	struct FYCustomRoomPlayerUIData
	{
	public:
		EYCustomRoomSlotType                                       m_slotType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bIsLocalPlayer;                                        // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_bIsHost;                                               // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW5J[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                m_playerID;                                              // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_image;                                                 // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0OV[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EYCustomRoomPlayerUIState                                  m_state;                                                 // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCustomMatchTeam                                          m_teamType;                                              // 0x0049(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bIsFriendOfLocalPlayer;                                // 0x004A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U6G[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCustomRoomTeamUIData
	 * Size -> 0x0018
	 */
	struct FYCustomRoomTeamUIData
	{
	public:
		TArray<struct FYCustomRoomPlayerUIData>                    m_players;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       m_fillWithAI;                                            // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YC6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCustomRoomUIData
	 * Size -> 0x0058
	 */
	struct FYCustomRoomUIData
	{
	public:
		TArray<struct FYCustomRoomTeamUIData>                      m_teams;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_gameModes;                                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_maps;                                                  // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              m_selectedGameMode;                                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_selectedMap;                                           // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCustomRoomAccess                                         m_localPlayerRoomAccess;                                 // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCustomMatchTeam                                          m_localPlayerTeamType;                                   // 0x0051(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51KH[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCustomMatchFriend
	 * Size -> 0x0038
	 */
	struct FYCustomMatchFriend
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_name;                                                  // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_number;                                                // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAnnouncement
	 * Size -> 0x0030
	 */
	struct FYAnnouncement
	{
	public:
		unsigned char                                              UnknownData_Y1JC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_id;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYAnnouncementType                                         m_type;                                                  // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PUJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_text;                                                  // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FDateTime                                           m_timeAdded;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCustomMatchInviteAnnouncement
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FYCustomMatchInviteAnnouncement : public FYAnnouncement
	{
	public:
		class FName                                                m_userId;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_userName;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_roomId;                                                // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSquadInviteAnnouncement
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FYSquadInviteAnnouncement : public FYAnnouncement
	{
	public:
		class FName                                                m_userId;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_userName;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           m_inviteTimeLeft;                                        // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFriendRequestAnnouncement
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FYFriendRequestAnnouncement : public FYAnnouncement
	{
	public:
		class FName                                                m_friendId;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_friendName;                                            // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYFriendStatus                                             m_friendStatus;                                          // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWUI[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSearchNode
	 * Size -> 0x0030
	 */
	struct FYSearchNode
	{
	public:
		unsigned char                                              UnknownData_RYFY[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSearchData
	 * Size -> 0x0000
	 */
	struct FYSearchData
	{	};

	/**
	 * ScriptStruct DreadGame.YShipCachedMaterial
	 * Size -> 0x000C
	 */
	struct FYShipCachedMaterial
	{
	public:
		unsigned char                                              UnknownData_MNVO[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUITechTreeConnectionData
	 * Size -> 0x0020
	 */
	struct FYUITechTreeConnectionData
	{
	public:
		unsigned char                                              UnknownData_IZM2[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIShipManufacturerTechTreeStackItemData
	 * Size -> 0x0028
	 */
	struct FYUIShipManufacturerTechTreeStackItemData
	{
	public:
		TArray<struct FYUIShipManufacturerTechItemData>            m_stackedItems;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           m_gridLocation;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_Prerequisites;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPVEReward
	 * Size -> 0x0060
	 */
	struct FYPVEReward
	{
	public:
		EYPVERewardLevel                                           m_rewardLevel;                                           // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIYP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UTexture2D>                                m_image;                                                 // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFLD[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              m_items;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_name;                                                  // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_softCurrency;                                          // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXP;                                                // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00N8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPVESeasonReward
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FYPVESeasonReward : public FYPVEReward
	{
	public:
		int32_t                                                    m_requiredEventRewards;                                  // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AQ0[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPVEEventReward
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FYPVEEventReward : public FYPVEReward
	{
	public:
		EYFleetType                                                m_fleet;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTQZ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_requiredScore;                                         // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YLootDropData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYLootDropData : public FTableRowBase
	{
	public:
		class FName                                                m_itemID;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_quantity;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_frequency;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YLootPile
	 * Size -> 0x0020
	 */
	struct FYLootPile
	{
	public:
		TArray<class FName>                                        m_lootIDs;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_amounts;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAchievementCounter
	 * Size -> 0x0028
	 */
	struct FYAchievementCounter
	{
	public:
		class FString                                              m_counterID;                                             // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_counterSubId;                                          // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_amountToComplete;                                      // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K310[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YAchievementData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYAchievementData : public FTableRowBase
	{
	public:
		class FName                                                m_id;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYAchievementCounter>                        m_counters;                                              // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YGoalCounters
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYGoalCounters : public FTableRowBase
	{
	public:
		class FName                                                m_counterID;                                             // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        m_counterSubId;                                          // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		EYCounterSource                                            m_counterSource;                                         // 0x0020(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M959[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_description;                                           // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOutpostRandomVO
	 * Size -> 0x0018
	 */
	struct FYOutpostRandomVO
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_countdownDuration;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_probability;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UXY[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMatchEarnedAssetsSummary
	 * Size -> 0x0018
	 */
	struct FYMatchEarnedAssetsSummary
	{
	public:
		unsigned char                                              UnknownData_TQ82[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMenuMPQuest
	 * Size -> 0x0058
	 */
	struct FYMenuMPQuest
	{
	public:
		unsigned char                                              UnknownData_9A6Q[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YAIAbilityActivationRulesDataTableRow
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FYAIAbilityActivationRulesDataTableRow : public FTableRowBase
	{
	public:
		struct FYAIFireAbility                                     m_activation;                                            // 0x0008(0x00D0) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBattleReadyRule
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYBattleReadyRule : public FTableRowBase
	{
	public:
		float                                                      m_minConectedTime;                                       // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_cooldownWin[0x4];                                      // 0x000C(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_cooldownLose[0x4];                                     // 0x001C(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_cooldownLateJoin[0x4];                                 // 0x002C(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HD6Q[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YBattleReadyUpdateRulesDataTableRow
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FYBattleReadyUpdateRulesDataTableRow : public FTableRowBase
	{
	public:
		struct FYBattleReadyRule                                   m_rule;                                                  // 0x0008(0x0040) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YClientBotDataTableRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYClientBotDataTableRow : public FTableRowBase
	{
	public:
		TAssetPtr<class UClass>                                    m_clientBot;                                             // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9FS[0x4];                                   // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YGameplayTuningDataTableRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYGameplayTuningDataTableRow : public FTableRowBase
	{
	public:
		float                                                      m_rangeToViewTargetMarkerForClassReveal;                 // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_projectileCloseInProjectileSpeedModifier;              // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_afkTimer;                                              // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTZ7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDBuffTypeIconDataRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HUDBuffTypeIconDataRow : public FTableRowBase
	{
	public:
		EYBuffType                                                 m_buffType;                                              // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDCI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDColorStyleRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FYS_HUDColorStyleRow : public FTableRowBase
	{
	public:
		EYUIColorStyle                                             m_style;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPNR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              m_color;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDEnergySelectionStyleRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HUDEnergySelectionStyleRow : public FTableRowBase
	{
	public:
		EYEnergyWheelSelection                                     m_energyWheelSelection;                                  // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ2L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDOverlayInstructionsRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYS_HUDOverlayInstructionsRow : public FTableRowBase
	{
	public:
		int32_t                                                    m_controllerConfigIndex;                                 // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHelperHUDInstructionType                                 m_instructionType;                                       // 0x000C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOY0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_instructionText;                                       // 0x0010(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDInfoEncountersDataTableRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FYS_HUDInfoEncountersDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_rarity;                                                // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_threatLevel;                                           // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDInfoPlanetsDataTableRow
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FYS_HUDInfoPlanetsDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_planetType;                                            // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_radius;                                                // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_environmentType;                                       // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_colonizationDate;                                      // 0x0050(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_populationNumber;                                      // 0x0068(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0080(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDInfoQuestObjectsDataTableRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FYS_HUDInfoQuestObjectsDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_questGiverName;                                        // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_threatLevel;                                           // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDInfoSpacePortsDataTableRow
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FYS_HUDInfoSpacePortsDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_stationType;                                           // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_foundingDate;                                          // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_populationNumber;                                      // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0050(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDInfoWarpGatesDataTableRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FYS_HUDInfoWarpGatesDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_destination;                                           // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_creationDate;                                          // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_detailedDescription;                                   // 0x0038(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDOnboardingRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYS_HUDOnboardingRow : public FTableRowBase
	{
	public:
		class FText                                                m_inputBinding;                                          // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class UTexture2D*                                          m_inputIcon;                                             // 0x0020(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_InputName;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDPromptLocalizationRow
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYS_HUDPromptLocalizationRow : public FTableRowBase
	{
	public:
		class FText                                                m_pcText;                                                // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_ps4Text;                                               // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDQuestMarkerDataRow
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYS_HUDQuestMarkerDataRow : public FTableRowBase
	{
	public:
		EYUIQuestMarker                                            m_marker;                                                // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWMV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_markerText;                                            // 0x0018(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		EYUIColorStyle                                             m_questMarkerColorStyle;                                 // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1OO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDShipClassIconDataRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HUDShipClassIconDataRow : public FTableRowBase
	{
	public:
		EYShipBaseClass                                            m_baseClass;                                             // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMA1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDShortCommandStyleRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HUDShortCommandStyleRow : public FTableRowBase
	{
	public:
		EYUIShortCommands                                          m_shortCommand;                                          // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADWV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_HUDTeamEliminationStyleRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HUDTeamEliminationStyleRow : public FTableRowBase
	{
	public:
		EYUITeamEliminationIcon                                    m_iconType;                                              // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7Y9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_icon;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_ModuleVideoTable
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FYS_ModuleVideoTable : public FTableRowBase
	{
	public:
		class FString                                              itemName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              moviePath;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              stillPath;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YItemDropRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYItemDropRow : public FTableRowBase
	{
	public:
		class FString                                              m_name;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYCurrency                                                 m_currencyType;                                          // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYItemRarity                                               m_rarity;                                                // 0x0019(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P730[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_quantity;                                              // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_RankDataTableRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FYS_RankDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_rankName;                                              // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YScoringDataTableRow
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FYScoringDataTableRow : public FTableRowBase
	{
	public:
		class FString                                              EventName;                                               // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYScoringEventID                                           ID;                                                      // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCDT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                NameForPlayer;                                           // 0x0020(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FString                                              GameModes;                                               // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SummaryCategory;                                         // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventVisibility;                                         // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPSZ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Parameters;                                              // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventScore;                                              // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventXP;                                                 // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventCredits;                                            // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NotifyDuringMatch;                                       // 0x00A0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K18L[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RibbonName;                                              // 0x00A8(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class FText                                                RibbonDesc;                                              // 0x00C0(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    EventsForRibbon;                                         // 0x00D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V935[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RibbonScore;                                             // 0x00E0(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RibbonXP;                                                // 0x00F0(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RibbonCredits;                                           // 0x0100(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AssignXPToAllShips;                                      // 0x0110(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ApplyVeteranMlt;                                         // 0x0111(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ApplyPremiumMlt;                                         // 0x0112(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ApplyTierBonus;                                          // 0x0113(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYScoringEventRewardCategory                               RewardCategory;                                          // 0x0114(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40N4[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSubtitlesRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FYSubtitlesRow : public FTableRowBase
	{
	public:
		class FText                                                m_text;                                                  // 0x0008(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		float                                                      m_secondsFromMovieStart;                                 // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_durationOnScreen;                                      // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_VOInfoDataTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYS_VOInfoDataTableRow : public FTableRowBase
	{
	public:
		int32_t                                                    m_uid;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0EM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_character;                                             // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_category;                                              // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_template;                                              // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_WeaponGroupDataTableRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYS_WeaponGroupDataTableRow : public FTableRowBase
	{
	public:
		int32_t                                                    m_ammoMagazinSize;                                       // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_ammoMagazinReloadTime;                                 // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadBaseValue;                                       // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadMaxValue;                                        // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadEase;                                            // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadBonusAim;                                        // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyMovement;                                 // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyShooting;                                 // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_spreadPenaltyDamageMultiplier;                         // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVKL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDNTravelMapSearchNode
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FYDNTravelMapSearchNode : public FYSearchNode
	{
	public:
		unsigned char                                              UnknownData_82XK[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDNTravelMapSearchData
	 * Size -> 0x0018
	 */
	struct FYDNTravelMapSearchData : public FYSearchData
	{
	public:
		float                                                      m_awayFromGoal;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_turnRate;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_topSpeed;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             m_goalLocation;                                          // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDNSearchNode
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FYDNSearchNode : public FYSearchNode
	{
	public:
		unsigned char                                              UnknownData_RNRE[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDNWorldDataDynamicActor
	 * Size -> 0x002C
	 */
	struct FYDNWorldDataDynamicActor
	{
	public:
		TWeakObjectPtr<class AActor>                               m_actor;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCapsuleComponent>                    m_actorCapsuleComponent;                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FVector                                             m_lastUpdateTileMin;                                     // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             m_lastUpdateTileMax;                                     // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_aliveLastUpdate;                                       // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6VR[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDNWorldData
	 * Size -> 0x0008
	 */
	struct FYDNWorldData
	{
	public:
		int64_t                                                    m_worldData;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDistributedClient
	 * Size -> 0x000C
	 */
	struct FYDistributedClient
	{
	public:
		TWeakObjectPtr<class AYPlayerController>                   m_playerControler;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      m_pathfindTime;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBestCli
	 * Size -> 0x0010
	 */
	struct FYBestCli
	{
	public:
		float                                                      bestTime;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MHP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AYPlayerController*                                  pCt;                                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDNDistributedPathData
	 * Size -> 0x0028
	 */
	struct FYDNDistributedPathData
	{
	public:
		int32_t                                                    m_pathId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NCM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     m_resultPath;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      m_lifeTime;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_startTime;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_complete;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_goalReached;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOQ1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YInitialGameplayAttribute
	 * Size -> 0x0010
	 */
	struct FYInitialGameplayAttribute
	{
	public:
		class FName                                                m_attributeName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_neutralValue;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGK4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEOMHavocProgressionData
	 * Size -> 0x0030
	 */
	struct FYEOMHavocProgressionData
	{
	public:
		int32_t                                                    m_waveReached;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_teamTotalXP;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isNewTeamTotalXPRecord;                                // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9OU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_playerWeeklyBestScore;                                 // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_playerLifetimeBestScore;                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_timeUntilReset;                                        // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHavocRewardUIData>                          m_rewardMilestones;                                      // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_previousMilestoneIndex;                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentMilestoneIndex;                                 // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_FeatsDataTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FYS_FeatsDataTableRow : public FTableRowBase
	{
	public:
		class FString                                              m_enabling;                                              // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_triggers;                                              // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_effects;                                               // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_stackOnAdding;                                         // 0x0038(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isPerkFeat;                                            // 0x0039(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZB8T[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YObjectiveActorInfo
	 * Size -> 0x0010
	 */
	struct FYObjectiveActorInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               m_actor;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FName                                                m_objectiveID;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMatchPlayerData
	 * Size -> 0x0028
	 */
	struct FYMatchPlayerData
	{
	public:
		unsigned char                                              UnknownData_3B33[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPlayerSpawnData
	 * Size -> 0x0010
	 */
	struct FYPlayerSpawnData
	{
	public:
		class AYPlayerController*                                  m_controllerToSpawn;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_spawnInOrbit;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML84[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocLoadoutSet
	 * Size -> 0x0020
	 */
	struct FYHavocLoadoutSet
	{
	public:
		unsigned char                                              UnknownData_V773[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocBoostSet
	 * Size -> 0x0010
	 */
	struct FYHavocBoostSet
	{
	public:
		unsigned char                                              UnknownData_EBZ5[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocBossWaveDataTableRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FYHavocBossWaveDataTableRow : public FYHavocTableRowBase
	{
	public:
		int32_t                                                    m_waveNumber;                                            // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C24U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YHavocRewardClientData
	 * Size -> 0x0028
	 */
	struct FYHavocRewardClientData
	{
	public:
		unsigned char                                              UnknownData_4U62[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIHavocPermanentEnemyModifier
	 * Size -> 0x0010
	 */
	struct FYUIHavocPermanentEnemyModifier
	{
	public:
		class FName                                                m_permanentEnemyModifierID;                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_effect;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYHavocPermanentEnemyModifierCategory                      m_category;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TORC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_GenericVoiceLineDataLoadInfo
	 * Size -> 0x0028
	 */
	struct FYS_GenericVoiceLineDataLoadInfo
	{
	public:
		class FName                                                m_characterName;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDYM[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_HudAudioClipDataTableRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FYS_HudAudioClipDataTableRow : public FTableRowBase
	{
	public:
		class FString                                              EventLocation;                                           // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFactionRankTableMapping
	 * Size -> 0x0018
	 */
	struct FYFactionRankTableMapping
	{
	public:
		int32_t                                                    m_factionID;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHJW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_path;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.ItemEntry
	 * Size -> 0x0014
	 */
	struct FItemEntry
	{
	public:
		int32_t                                                    m_categoryID;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_id;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUnlockType                                               m_unlockType;                                            // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GISA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_rank;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_context;                                               // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.ProgressionItemWrapper
	 * Size -> 0x0010
	 */
	struct FProgressionItemWrapper
	{
	public:
		TArray<struct FItemEntry>                                  m_array;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YDamageHitoryInfo
	 * Size -> 0x0018
	 */
	struct FYDamageHitoryInfo
	{
	public:
		float                                                      m_damageTaken;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R14I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         m_damageGiver;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XID[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPlayerActionMapping
	 * Size -> 0x0018
	 */
	struct FYPlayerActionMapping
	{
	public:
		unsigned char                                              UnknownData_TS6X[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUnlockedItemWrapper
	 * Size -> 0x0038
	 */
	struct FYUnlockedItemWrapper
	{
	public:
		int32_t                                                    m_id;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK5F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_unlockTopic;                                           // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_unlockName;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_unlockDetail;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YTeammatesInfo
	 * Size -> 0x0030
	 */
	struct FYTeammatesInfo
	{
	public:
		TArray<int32_t>                                            m_ships;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      m_playerNames;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               m_orbitSelectionFinished;                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAbilityCurrentData
	 * Size -> 0x000C
	 */
	struct FYAbilityCurrentData
	{
	public:
		EYUIAbilityState                                           m_state;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUFS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_coolDown;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_durationTime;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YShortCommand
	 * Size -> 0x0020
	 */
	struct FYShortCommand
	{
	public:
		EYUIShortCommands                                          m_shortCommand;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRVP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YCameraPostProcess
	 * Size -> 0x0028
	 */
	struct FYCameraPostProcess
	{
	public:
		unsigned char                                              UnknownData_WVJD[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMenuSlotItem
	 * Size -> 0x0040
	 */
	struct FYMenuSlotItem
	{
	public:
		unsigned char                                              UnknownData_0CNZ[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YQuestData
	 * Size -> 0x0010
	 */
	struct FYQuestData
	{
	public:
		unsigned char                                              UnknownData_2140[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YQuestDataFilter
	 * Size -> 0x0070
	 */
	struct FYQuestDataFilter
	{
	public:
		unsigned char                                              UnknownData_9QTT[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPreviewAnimationRequest
	 * Size -> 0x0002
	 */
	struct FYPreviewAnimationRequest
	{
	public:
		unsigned char                                              UnknownData_9DCS[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.Y3DViewParams
	 * Size -> 0x0068
	 */
	struct FY3DViewParams
	{
	public:
		unsigned char                                              UnknownData_NDPO[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCameraPreviewLocation
	 * Size -> 0x0008
	 */
	struct FYCameraPreviewLocation
	{
	public:
		unsigned char                                              UnknownData_H5M5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YOutpostTransition
	 * Size -> 0x0030
	 */
	struct FYOutpostTransition
	{
	public:
		class AYGameMode_Outpost*                                  m_outer;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WR2S[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YOutpostTransitionStep
	 * Size -> 0x0010
	 */
	struct FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_XC3P[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCharacterVisibility
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FYCharacterVisibility : public FYOutpostTransitionStep
	{
	public:
		class AYBaseCharacter*                                     m_character;                                             // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8YP[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YMatineeAction
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FYMatineeAction : public FYOutpostTransitionStep
	{
	public:
		class AMatineeActor*                                       m_matineeActor;                                          // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACameraActor*                                        m_cameraActor;                                           // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJ8X[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YLevelAction
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FYLevelAction : public FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_YO16[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YDelay
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FYDelay : public FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_ERZ0[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YFadeToNormalView
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FYFadeToNormalView : public FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_IQ5S[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YFadeToBlack
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FYFadeToBlack : public FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_RNO9[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YSetCameraLocation
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FYSetCameraLocation : public FYOutpostTransitionStep
	{
	public:
		unsigned char                                              UnknownData_8AAQ[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YScriptedCameraBlend
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FYScriptedCameraBlend : public FYOutpostTransitionStep
	{
	public:
		class ACameraActor*                                        m_from;                                                  // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACameraActor*                                        m_to;                                                    // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7AE[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCameraBlend
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FYCameraBlend : public FYOutpostTransitionStep
	{
	public:
		class ACameraActor*                                        m_blendToCamera;                                         // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ7S[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCameraDistanceInterpolationData
	 * Size -> 0x0010
	 */
	struct FYCameraDistanceInterpolationData
	{
	public:
		class UCurveFloat*                                         m_deathCameraDistanceCurve;                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_transitionDuration;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_finalDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSeasonsDTRow
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FYSeasonsDTRow : public FTableRowBase
	{
	public:
		bool                                                       m_active;                                                // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP5P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_name;                                                  // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_descShort;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_descLong;                                              // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_imageLarge;                                            // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YZQ[0x4];                                   // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_imageSmall;                                            // 0x0078(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55WB[0x4];                                   // 0x0094(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FYPVESeasonReward>                           m_rewardLevels;                                          // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YEventsDTRow
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FYEventsDTRow : public FTableRowBase
	{
	public:
		class FText                                                m_name;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_descShort;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_descLong;                                              // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TAssetPtr<class UWorld>                                    m_map;                                                   // 0x0050(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LCP[0x4];                                   // 0x006C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              m_mapParameters;                                         // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGameModeType                                             m_gameMode;                                              // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13V7[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              m_color;                                                 // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TAssetPtr<class UTexture2D>                                m_imageSmall;                                            // 0x0088(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3TY[0x4];                                   // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UTexture2D>                                m_imageLarge;                                            // 0x00A8(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14Q7[0x4];                                   // 0x00C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FYPVEEventReward>                            m_rewardLevels;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              m_startDate;                                             // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_endDate;                                               // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_season;                                                // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMenuOfferData
	 * Size -> 0x01A0
	 */
	struct FYMenuOfferData
	{
	public:
		unsigned char                                              UnknownData_L1Y6[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_title;                                                 // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryDescription;                                   // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_description;                                           // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_shortDescription;                                      // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryIconPath;                                      // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_expirationTimeInSeconds;                               // 0x00E0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_originalPrice;                                         // 0x00E4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isNewOffer;                                            // 0x00E8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_doNotDisplayInStore;                                   // 0x00E9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isGpCreditsPack;                                       // 0x00EA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE8S[0xB5];                                  // 0x00EB(0x00B5) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YThumbnailRenderingInitializationData
	 * Size -> 0x0050
	 */
	struct FYThumbnailRenderingInitializationData
	{
	public:
		TArray<class UActorComponent*>                             m_componentsToAdd;                                       // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIL9[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YRenderBaseSpawnInfo
	 * Size -> 0x0018
	 */
	struct FYRenderBaseSpawnInfo
	{
	public:
		class UClass*                                              m_class;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            m_ids;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YVOTriggerSystemPlayByPlayEntry
	 * Size -> 0x0010
	 */
	struct FYVOTriggerSystemPlayByPlayEntry
	{
	public:
		int32_t                                                    m_guid;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_weight;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialWeight;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_eventCooldownTime;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YOrderedProjectileShootingWorkingData
	 * Size -> 0x0018
	 */
	struct FYOrderedProjectileShootingWorkingData
	{
	public:
		unsigned char                                              UnknownData_INUL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEnergyWheelSelectionData
	 * Size -> 0x0038
	 */
	struct FYEnergyWheelSelectionData
	{
	public:
		unsigned char                                              UnknownData_9KPR[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupLineElement
	 * Size -> 0x0010
	 */
	struct FYUIPopupLineElement
	{
	public:
		struct FVector2D                                           m_dimensions;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           m_position;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupTextIcon
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FYUIPopupTextIcon : public FYUIPopupLineElement
	{
	public:
		TAssetPtr<class UTexture2D>                                m_icon;                                                  // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9DC[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupTextBlock
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FYUIPopupTextBlock : public FYUIPopupLineElement
	{
	public:
		class FText                                                m_label;                                                 // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YUIPopupTextLine
	 * Size -> 0x0020
	 */
	struct FYUIPopupTextLine
	{
	public:
		TArray<struct FYUIPopupTextIcon>                           m_textIcons;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYUIPopupTextBlock>                          m_textBlocks;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YSimpleFlatteningTestStruct
	 * Size -> 0x0020
	 */
	struct FYSimpleFlatteningTestStruct
	{
	public:
		class FString                                              testString;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    testInt;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      testFloat;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       testBool;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SZV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YCompositeFlatteningTestStruct
	 * Size -> 0x0040
	 */
	struct FYCompositeFlatteningTestStruct
	{
	public:
		class FString                                              testString2;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FYSimpleFlatteningTestStruct>                simpleStructArray;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FYSimpleFlatteningTestStruct                        simpleStruct;                                            // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YPoDArrayFlatteringTestStruct
	 * Size -> 0x0040
	 */
	struct FYPoDArrayFlatteringTestStruct
	{
	public:
		TArray<int32_t>                                            intArray;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              floatArray;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               boolArray;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      stringArray;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YBusinessAnalyticsEvent
	 * Size -> 0x0098
	 */
	struct FYBusinessAnalyticsEvent
	{
	public:
		unsigned char                                              UnknownData_3VNT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_eventName;                                             // 0x0008(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              m_category;                                              // 0x0018(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              m_userId;                                                // 0x0028(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              m_deviceId;                                              // 0x0038(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              account_name;                                            // 0x0048(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    account_level;                                           // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZMAN[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              country_user;                                            // 0x0060(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              platform;                                                // 0x0070(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    game_id;                                                 // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CEG5[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ip;                                                      // 0x0088(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DreadGame.YEoMNavigationEvent
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	struct FYEoMNavigationEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              source_screen;                                           // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              target_screen;                                           // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YEoMRequeuePressedEvent
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	struct FYEoMRequeuePressedEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              active_screen;                                           // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YEoMBackToHangarPressedEvent
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	struct FYEoMBackToHangarPressedEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              active_screen;                                           // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YEoMSkippedEvent
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	struct FYEoMSkippedEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              active_screen;                                           // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YEomStatAnalyticsEntry
	 * Size -> 0x0028
	 */
	struct FYEomStatAnalyticsEntry
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Number;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JGY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YEoMPlayerStatsEvent
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	struct FYEoMPlayerStatsEvent : public FYBusinessAnalyticsEvent
	{
	public:
		TArray<struct FYEomStatAnalyticsEntry>                     stats;                                                   // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              room_id;                                                 // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              match_id;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              game_mode;                                               // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YClientLoadingTimeoutAnalyticsEvent
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	struct FYClientLoadingTimeoutAnalyticsEvent : public FYBusinessAnalyticsEvent
	{	};

	/**
	 * ScriptStruct DreadGame.YClientInitialLoadingTimeAnalyticsEvent
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	struct FYClientInitialLoadingTimeAnalyticsEvent : public FYBusinessAnalyticsEvent
	{
	public:
		int32_t                                                    client_loading_time;                                     // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    system_memory_usage;                                     // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    system_memory_available;                                 // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    running_processes_count;                                 // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cpu_utilization_total;                                   // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cpu_utilization_game;                                    // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YMapLoadingTimeAnalyticsEvent
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	struct FYMapLoadingTimeAnalyticsEvent : public FYBusinessAnalyticsEvent
	{
	public:
		int32_t                                                    map_loading_time;                                        // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    system_memory_usage;                                     // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    system_memory_available;                                 // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    running_processes_count;                                 // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cpu_utilization_total;                                   // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    cpu_utilization_game;                                    // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Map;                                                     // 0x00B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              game_mode;                                               // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       loading_failed;                                          // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5H2[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YPVEBattleSummaryEvent
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	struct FYPVEBattleSummaryEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              room_id;                                                 // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              match_id;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              map_name;                                                // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    fleet_type;                                              // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    score_total;                                             // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    score_time;                                              // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    score_players_alive;                                     // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    score_kills;                                             // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    score_defense;                                           // 0x00DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              reward_category_reached;                                 // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    lifes_left;                                              // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    wave;                                                    // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DreadGame.YPlayerKilledEvent
	 * Size -> 0x00A8 (FullSize[0x0140] - InheritedSize[0x0098])
	 */
	struct FYPlayerKilledEvent : public FYBusinessAnalyticsEvent
	{
	public:
		class FString                                              room_id;                                                 // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              match_id;                                                // 0x00A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_x;                                              // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_y;                                              // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_z;                                              // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_x_killer;                                       // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_y_killer;                                       // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    location_z_killer;                                       // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              enemy_ship_id_damage;                                    // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              enemy_ship_name_damage;                                  // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              enemy_ship_id_last_hit;                                  // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              enemy_ship_name_last_hit;                                // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              killed_ship_id;                                          // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              killed_ship_name;                                        // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    time_in_match;                                           // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    time_since_last_respawn;                                 // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    wave;                                                    // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2JYC[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGame.YS_MENUDeveloperCreditsName
	 * Size -> 0x0030
	 */
	struct FYS_MENUDeveloperCreditsName
	{
	public:
		class FText                                                m_name;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_MENUDeveloperCreditsSection
	 * Size -> 0x0028
	 */
	struct FYS_MENUDeveloperCreditsSection
	{
	public:
		class FText                                                m_sectionName;                                           // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FYS_MENUDeveloperCreditsName>                m_names;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_MENUDeveloperCreditsRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYS_MENUDeveloperCreditsRow : public FTableRowBase
	{
	public:
		class FText                                                m_groupName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FYS_MENUDeveloperCreditsSection>             m_sections;                                              // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YAnimationMergingDataTableRow
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FYAnimationMergingDataTableRow : public FTableRowBase
	{
	public:
		struct FStringAssetReference                               m_desiredSkeletalMeshPath;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FYNativeAnimationData                               m_nativeData;                                            // 0x0018(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YFeatEffectFeedbackDataTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FYFeatEffectFeedbackDataTableRow : public FTableRowBase
	{
	public:
		class FText                                                m_uiFeedbackMessage;                                     // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EYBuffType>                                         m_uiFeedbackIcons;                                       // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EYFeedbackAnimationType                                    m_uiFeedbackType;                                        // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_retriggerUIFeedback;                                   // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVW3[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_uiFeedbackRetriggerMinDuration;                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_alwaysConsiderAsTriggeredBySelf;                       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WI0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       m_startAudioEvent;                                       // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       m_stopAudioEvent;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_retriggerStartAudioEvent;                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEX6[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_startAudioRetriggerMinDuration;                        // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGame.YS_ShipMeshCacheDataTableRow
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FYS_ShipMeshCacheDataTableRow : public FTableRowBase
	{
	public:
		EYShipClass                                                m_shipClass;                                             // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FG9T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class USkeletalMesh>                             m_mesh;                                                  // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69KS[0x4];                                   // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct DreadGame.YEventCycle
	 * Size -> 0x0040
	 */
	struct FYEventCycle
	{
	public:
		unsigned char                                              UnknownData_Y2E4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYEventCycleContext                                        m_currentContext;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IASA[0x1F];                                  // 0x0009(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_initialInterval;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_intervalAfterUnsuccessfulCheck;                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_intervalAfterSuccessfulCheck;                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_intervalAfterSubsystemUnsuccessfulCheck;               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_initialProbability;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_failProbabilityMultiplyer;                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
