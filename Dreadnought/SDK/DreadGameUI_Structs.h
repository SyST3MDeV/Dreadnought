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
	 * Enum DreadGameUI.EPlatform
	 */
	enum class EPlatform : uint8_t
	{
		PC  = 0,
		PS4 = 1,
		MAX = 2
	};

	/**
	 * Enum DreadGameUI.EUI_Screen
	 */
	enum class EUI_Screen : uint8_t
	{
		None                             = 0,
		Home                             = 1,
		FleetTier_Play                   = 2,
		FleetTier_ManageFleets           = 3,
		Manufacturers                    = 4,
		Market                           = 5,
		LootBox                          = 6,
		Social                           = 7,
		FindNewFriends                   = 8,
		CareerProgression                = 9,
		Statistics                       = 10,
		Options                          = 11,
		Exit                             = 12,
		ManageFleet_Home                 = 13,
		ManageFleet_Play                 = 14,
		SelectGameMode                   = 15,
		EditShip_Loadout                 = 16,
		EditShip_Appearance              = 17,
		EditShip_Details                 = 18,
		ManufacturerTechTree             = 19,
		AddShipToFleet                   = 20,
		Ribbons                          = 21,
		ShipTechTree                     = 22,
		Login_PS4                        = 23,
		ModuleDetails                    = 24,
		Contracts                        = 25,
		Loading                          = 26,
		CaptainCustomization             = 27,
		Notifications                    = 28,
		CustomMatchLobby                 = 29,
		MarketBundleDetails              = 30,
		OwnedShips                       = 31,
		BugReport                        = 32,
		DeveloperCredits                 = 33,
		Market_EliteStatus               = 34,
		ShipItemDetails_Vanity           = 35,
		Market_Currency_CpPacks          = 36,
		ManufacturerTechTree_JupiterArms = 37,
		ManufacturerTechTree_AkulaVektor = 38,
		ManufacturerTechTree_Oberon      = 39,
		Market_Currency_GpPacks          = 40,
		Market_Currency_XpConversion     = 41,
		Market_Bundles                   = 42,
		Market_HeroShips                 = 43,
		ManageFleet_GameMode             = 44,
		HomeLoading                      = 45,
		LoginGate                        = 46,
		IdleKick                         = 47,
		Legal                            = 48,
		Title                            = 49,
		NotificationDetails              = 50,
		GameModeLaunch                   = 51,
		Leaderboard                      = 52,
		Count                            = 53,
		EUI_MAX                          = 54
	};

	/**
	 * Enum DreadGameUI.EUI_Theme
	 */
	enum class EUI_Theme : uint8_t
	{
		None      = 0,
		Halloween = 1,
		Count     = 2,
		EUI_MAX   = 3
	};

	/**
	 * Enum DreadGameUI.EAnalyticsButtonId
	 */
	enum class EAnalyticsButtonId : uint8_t
	{
		Squads                 = 0,
		CharacterCustomization = 1,
		Chat                   = 2,
		Play                   = 3,
		Fleets                 = 4,
		Ships                  = 5,
		Market                 = 6,
		Social                 = 7,
		Contracts              = 8,
		CareerProgression      = 9,
		Statistics             = 10,
		Options                = 11,
		BugReport              = 12,
		DeveloperCredits       = 13,
		Exit                   = 14,
		FeaturedMarketItem     = 15,
		ManufacturerTechTree   = 16,
		OwnedShips             = 17,
		LegendaryFleet         = 18,
		VeteranFleet           = 19,
		RecruitFleet           = 20,
		ActivateBattleBonus    = 21,
		ManageFleet            = 22,
		GameModeSelected       = 23,
		EditShip               = 24,
		AddShipToFleet         = 25,
		RemoveShipFromFleet    = 26,
		XPConversion           = 27,
		HardCurrencyExchange   = 28,
		BuyCredits             = 29,
		BuyEliteStatus         = 30,
		Home                   = 31,
		HowToPlay              = 32,
		QuickPlay              = 33,
		Notifications          = 34,
		Count                  = 35,
		MAX                    = 36
	};

	/**
	 * Enum DreadGameUI.EUI_MenuActions
	 */
	enum class EUI_MenuActions : uint8_t
	{
		None                 = 0,
		Nav_Action           = 1,
		Nav_Action_Secondary = 2,
		Nav_Action_Tertiary  = 3,
		Nav_Home             = 4,
		Nav_Back             = 5,
		Nav_Cancel           = 6,
		Nav_Left_Granular    = 7,
		Nav_Up_Granular      = 8,
		Nav_Right_Granular   = 9,
		Nav_Down_Granular    = 10,
		Nav_Left_Section     = 11,
		Nav_Up_Section       = 12,
		Nav_Right_Section    = 13,
		Nav_Down_Section     = 14,
		Nav_Tab_Left         = 15,
		Nav_Tab_Right        = 16,
		Dropdown_Left_Open   = 17,
		Dropdown_Left_Close  = 18,
		Dropdown_Right_Open  = 19,
		Dropdown_Right_Close = 20,
		Select               = 21,
		Start                = 22,
		Options              = 23,
		EUI_MAX              = 24
	};

	/**
	 * Enum DreadGameUI.ENotificationButtonType
	 */
	enum class ENotificationButtonType : uint8_t
	{
		AcceptInvite   = 0,
		RejectInvite   = 1,
		OpenDetails    = 2,
		IgnoreMessage  = 3,
		DismissMessage = 4,
		GoToScreen     = 5,
		ENBT_COUNT     = 6,
		ENBT_INVALID   = 7,
		MAX            = 8
	};

	/**
	 * Enum DreadGameUI.EMarketBundleType
	 */
	enum class EMarketBundleType : uint8_t
	{
		Default         = 0,
		GpPack          = 1,
		CreditsPack     = 2,
		EliteStatusPack = 3,
		MAX             = 4
	};

	/**
	 * Enum DreadGameUI.ERoomType
	 */
	enum class ERoomType : uint8_t
	{
		None       = 0,
		Global     = 1,
		Language   = 2,
		Squad      = 3,
		Whisper    = 4,
		CustomRoom = 5,
		Max        = 6,
		MAX        = 7
	};

	/**
	 * Enum DreadGameUI.EUIColorTheme
	 */
	enum class EUIColorTheme : uint8_t
	{
		Default     = 0,
		Credits     = 1,
		GpPack      = 2,
		EliteStatus = 3,
		HeroShip    = 4,
		MAX         = 5
	};

	/**
	 * Enum DreadGameUI.ELoginSubScreensPS4
	 */
	enum class ELoginSubScreensPS4 : uint8_t
	{
		NONE                    = 0,
		TITLE                   = 1,
		TERMS_OF_USE            = 2,
		PRIVACY_POLICY          = 3,
		REACCEPT_TERMS_OF_USE   = 4,
		REACCEPT_PRIVACY_POLICY = 5,
		WELCOME                 = 6,
		CREATE_ACCOUNT          = 7,
		LINK_ACCOUNT            = 8,
		CONGRATULATIONS         = 9,
		HOME                    = 10,
		MAX                     = 11
	};

	/**
	 * Enum DreadGameUI.EYMatchMakingState
	 */
	enum class EYMatchMakingState : uint8_t
	{
		YMMS_NONE                     = 0,
		YMMS_SOLO_IDLE                = 1,
		YMMS_SOLO_SEARCHING           = 2,
		YMMS_SQUAD_IDLE               = 3,
		YMMS_SQUAD_SEARCHING          = 4,
		YMMS_SQUAD_MATCHMAKING_LOCKED = 5,
		YMMS_BATTLE_SERVER_STARTING   = 6,
		YMMS_CANCELLING_PROCESS       = 7,
		YMMS_MAX                      = 8
	};

	/**
	 * Enum DreadGameUI.EYCustomMatchScreenCloseReason
	 */
	enum class EYCustomMatchScreenCloseReason : uint8_t
	{
		UserLeftRoom       = 0,
		UserKickedFromRoom = 1,
		UnrecoverableError = 2,
		COUNT              = 3,
		MAX                = 4
	};

	/**
	 * Enum DreadGameUI.EShipFilterCategory
	 */
	enum class EShipFilterCategory : uint8_t
	{
		ShipClass        = 0,
		ShipTier         = 1,
		ShipManufacturer = 2,
		MAX              = 3
	};

	/**
	 * Enum DreadGameUI.EUILoginGateMessageType
	 */
	enum class EUILoginGateMessageType : uint8_t
	{
		None                 = 0,
		BurstSmoothingNoWait = 1,
		DisconnectionQueue   = 2,
		MaintainenceQueue    = 3,
		Maintainence         = 4,
		MaintainenceComplete = 5,
		InQueue              = 6,
		EnteringGame         = 7,
		Connecting           = 8,
		MAX                  = 9
	};

	/**
	 * Enum DreadGameUI.EUILoginGateState
	 */
	enum class EUILoginGateState : uint8_t
	{
		None                = 0,
		ConnectingToServer  = 1,
		MaxCcu              = 2,
		BurstSmoothing      = 3,
		DownForMaintenance  = 4,
		MaintenanceComplete = 5,
		LoggingIn           = 6,
		LoginComplete       = 7,
		Max                 = 8,
		MAX                 = 9
	};

	/**
	 * Enum DreadGameUI.ESettingsScreenGroup
	 */
	enum class ESettingsScreenGroup : uint8_t
	{
		Game          = 0,
		Controls      = 1,
		Audio         = 2,
		Graphics      = 3,
		Eula          = 4,
		PrivacyPolicy = 5,
		TermsOfUse    = 6,
		MAX           = 7
	};

	/**
	 * Enum DreadGameUI.EStatisticsUIType
	 */
	enum class EStatisticsUIType : uint8_t
	{
		None                          = 0,
		AverageScore                  = 1,
		TotalBattles                  = 2,
		BattleTime                    = 3,
		WinLossRatio                  = 4,
		KillDeathRatio                = 5,
		TotalScore                    = 6,
		TotalKills                    = 7,
		AverageKills                  = 8,
		TotalHealPoints               = 9,
		AverageHealPoints             = 10,
		TotalAssists                  = 11,
		AverageAssists                = 12,
		TotalFlightTime               = 13,
		CorvetteFlightTime            = 14,
		CorvetteFlightPercent         = 15,
		TacticalCruiserFlightTime     = 16,
		TacticalCruiserFlightPercent  = 17,
		ArtilleryCruiserFlightTime    = 18,
		ArtilleryCruiserFlightPercent = 19,
		DestroyerFlightTime           = 20,
		DestroyerFlightPercent        = 21,
		DreadnoughtFlightTime         = 22,
		DreadnoughtFlightPercent      = 23,
		Max                           = 24,
		MAX                           = 25
	};

	/**
	 * Enum DreadGameUI.EMarketBundleInfoTabs
	 */
	enum class EMarketBundleInfoTabs : uint8_t
	{
		NONE       = 0,
		LORE       = 1,
		APPEARANCE = 2,
		ITEM_STATS = 3,
		LOADOUT    = 4,
		CREW       = 5,
		MAX        = 6
	};

	/**
	 * Enum DreadGameUI.EYShipResearchPurchaseState
	 */
	enum class EYShipResearchPurchaseState : uint8_t
	{
		NotResearchedNotPurchasedRequirementsNotMet = 0,
		NotResearchedNotPurchasedRequirementsMet    = 1,
		ResearchedNotPurchasedRequirementsNotMet    = 2,
		ResearchedNotPurchasedRequirementsMet       = 3,
		ResearchedPurchased                         = 4,
		MAX                                         = 5
	};

	/**
	 * Enum DreadGameUI.EBundlesMarketPanelFilterCategory
	 */
	enum class EBundlesMarketPanelFilterCategory : uint8_t
	{
		VanityType        = 0,
		CaptainVanityType = 1,
		ShipVanityType    = 2,
		MAX               = 3
	};

	/**
	 * Enum DreadGameUI.ECurrencyMarketPanels
	 */
	enum class ECurrencyMarketPanels : uint8_t
	{
		GPPacks      = 0,
		CreditPacks  = 1,
		XPConversion = 2,
		MAX          = 3
	};

	/**
	 * Enum DreadGameUI.EHeroShipPanelFilterCategory
	 */
	enum class EHeroShipPanelFilterCategory : uint8_t
	{
		ShipClass        = 0,
		ShipTier         = 1,
		ShipManufacturer = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DreadGameUI.PopupStackData
	 * Size -> 0x0090
	 */
	struct FPopupStackData
	{
	public:
		class UPopupData*                                          m_popupData;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         m_userWidgetInst;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKMZ[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UIGenericButtonModuleData
	 * Size -> 0x00C0
	 */
	struct FUIGenericButtonModuleData
	{
	public:
		int32_t                                                    m_itemID;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isEquipped;                                            // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isNew;                                                 // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isOnSale;                                              // 0x0006(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isOwned;                                               // 0x0007(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_shouldShowTierIcon;                                    // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYRJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_tier;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_iconTexturePath;                                       // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_moduleName;                                            // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              m_moduleTexturePath;                                     // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_originalPriceAmount;                                   // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUICurrency                                               m_originalPriceCurrency;                                 // 0x004C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_184X[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_priceAmount;                                           // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUICurrency                                               m_priceCurrency;                                         // 0x0054(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6JI[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_index;                                                 // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTechTreeItemState                                        m_techTreeItemState;                                     // 0x005C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWWO[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIItemPriceData                                   m_techTreeResearchPrice;                                 // 0x0060(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		struct FYUIItemPriceData                                   m_techTreePurchasePrice;                                 // 0x0090(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.ShopPreviewHelper
	 * Size -> 0x0058
	 */
	struct FShopPreviewHelper
	{
	public:
		unsigned char                                              UnknownData_EQ5P[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UYShipLoadout*                                       m_loadoutInPreview;                                      // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UYCaptain*                                           m_captainInPreview;                                      // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UObject*>                                     m_itemsInPreview;                                        // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M0KG[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UICustomMatchLobbyFleetAvailabilityData
	 * Size -> 0x0002
	 */
	struct FUICustomMatchLobbyFleetAvailabilityData
	{
	public:
		EYFleetType                                                m_fleetType;                                             // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isFleetEnabled;                                        // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.MarketItemUIData
	 * Size -> 0x0250
	 */
	struct FMarketItemUIData
	{
	public:
		int32_t                                                    m_manufacturerID;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_itemID;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_tier;                                                  // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLNH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_name;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_description;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_shortDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_categoryDescription;                                   // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_iconPath;                                              // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_iconIsWebURL;                                          // 0x0060(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4CN[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_categoryImagePath;                                     // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_grantedCurrencyAmount;                                 // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYTechTreeItemState                                        m_itemState;                                             // 0x007C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63IH[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYUIItemPriceData                                   m_researchItemPrice;                                     // 0x0080(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FYUIItemPriceData                                   m_purchaseItemPrice;                                     // 0x00B0(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       m_isClaimable;                                           // 0x00E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QG0I[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_expirationTimeInSeconds;                               // 0x00E4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_originalPrice;                                         // 0x00E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isNewOffer;                                            // 0x00EC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_doNotDisplayInStore;                                   // 0x00ED(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EMarketBundleType                                          m_bundleType;                                            // 0x00EE(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQ8B[0x1];                                   // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_currentXP;                                             // 0x00F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_maxXpThatCanBeConverted;                               // 0x00F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x00F8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KG8V[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_shipClassName;                                         // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_loadoutID;                                             // 0x0110(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isOwned;                                               // 0x0118(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMLO[0x67];                                  // 0x0119(0x0067) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_isGroupOffer;                                          // 0x0180(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4OO[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYMenuItemData>                              m_groupItems;                                            // 0x0188(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLX9[0x5];                                   // 0x0198(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EYUICharacterItemType                                      m_characterItemTypeForUI;                                // 0x019D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO7J[0x2];                                   // 0x019E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_isShip;                                                // 0x01A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_isHeroLoadout;                                         // 0x01A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_isWeapon;                                              // 0x01A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XSC[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIShipTechTreeItemData>                    m_shipTechTreeItems;                                     // 0x01B0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FYUIInformationPanelStatData>                m_itemStats;                                             // 0x01C0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02XP[0x48];                                  // 0x01D0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FYMenuOfferCampaingData                             m_campaignData;                                          // 0x0218(0x0038) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.ChatMessageDefinition
	 * Size -> 0x0038
	 */
	struct FChatMessageDefinition
	{
	public:
		class FString                                              m_sender;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatType                                                  m_type;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBZL[0x27];                                  // 0x0011(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.ChatRoomDefinition
	 * Size -> 0x0030
	 */
	struct FChatRoomDefinition
	{
	public:
		class FText                                                m_displayName;                                           // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ERoomType                                                  m_roomType;                                              // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatType                                                  m_messageTypeToSend;                                     // 0x0019(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2JI[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_whisperTarget;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.PlayerUIData
	 * Size -> 0x0080
	 */
	struct FPlayerUIData
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_name;                                                  // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_userNumber;                                            // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GDI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_captainImagePath;                                      // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_rankImage;                                             // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_rank;                                                  // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3QN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_rankName;                                              // 0x0048(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    m_reputationTowardsNextRank;                             // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_reputationBetweenRanks;                                // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_percentReputationProgressToNextRank;                   // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_isMaxRank;                                             // 0x006C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_isElite;                                               // 0x006D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLE7[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           m_eliteTimeRemaining;                                    // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOJ3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UIWeaponData
	 * Size -> 0x0048
	 */
	struct FUIWeaponData
	{
	public:
		class FText                                                m_headline;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              m_iconImagePath;                                         // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUILoadoutItemType                                        m_itemType;                                              // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0DX[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_itemTier;                                              // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UIModuleData
	 * Size -> 0x0048
	 */
	struct FUIModuleData
	{
	public:
		class FText                                                m_headline;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              m_iconImagePath;                                         // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUILoadoutItemType                                        m_itemType;                                              // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17EN[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_itemTier;                                              // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UIOfficerBriefingsData
	 * Size -> 0x0048
	 */
	struct FUIOfficerBriefingsData
	{
	public:
		class FText                                                m_headline;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              m_iconImagePath;                                         // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYUILoadoutItemType                                        m_itemType;                                              // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8KE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UILoadoutData
	 * Size -> 0x0040
	 */
	struct FUILoadoutData
	{
	public:
		class FString                                              m_name;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FUIWeaponData>                               m_weapons;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FUIModuleData>                               m_modules;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FUIOfficerBriefingsData>                     m_officerBriefings;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UIShipData
	 * Size -> 0x0080
	 */
	struct FUIShipData
	{
	public:
		class FText                                                m_shipName;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EYShipClass                                                m_shipClass;                                             // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G29[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_shipClassImagePath;                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipTier;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYOR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_tierIconImagePath;                                     // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYFleetType                                                m_fleetType;                                             // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E01W[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_shipXP;                                                // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_manufacturerID;                                        // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UL5[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUILoadoutData>                              m_loadouts;                                              // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    m_shipId;                                                // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYEP[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_shipClassIconPath;                                     // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.YCustomMatchScreenSettings
	 * Size -> 0x0038
	 */
	struct FYCustomMatchScreenSettings
	{
	public:
		class FText                                                m_gameMode;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_map;                                                   // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              m_teamSize;                                              // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_fillTeam1WithAi;                                       // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_fillTeam2WithAi;                                       // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL3B[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UIAccordionFilterCategoryOptionData
	 * Size -> 0x0028
	 */
	struct FUIAccordionFilterCategoryOptionData
	{
	public:
		int32_t                                                    m_index;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0MF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_filterName;                                            // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_filterIsEnabled;                                       // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPT1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.UIAccordionFilterCategoryData
	 * Size -> 0x0030
	 */
	struct FUIAccordionFilterCategoryData
	{
	public:
		int32_t                                                    m_index;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_filterCategoryName;                                    // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FUIAccordionFilterCategoryOptionData>        m_filterCategoryOptions;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UIAccordionFilterData
	 * Size -> 0x0040
	 */
	struct FUIAccordionFilterData
	{
	public:
		class FText                                                m_header;                                                // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FUIAccordionFilterCategoryData>              m_filterCategories;                                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CareerProgressionRewardUIData
	 * Size -> 0x0014
	 */
	struct FCareerProgressionRewardUIData
	{
	public:
		EYCareerProgressionRewardState                             m_rewardState;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68NU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_currentProgress;                                       // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_requiredProgress;                                      // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYGoalRewardType                                           m_rewardType;                                            // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8T8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_rewardValue;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CareerProgressionGoalUIData
	 * Size -> 0x0050
	 */
	struct FCareerProgressionGoalUIData
	{
	public:
		class FName                                                m_id;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_title;                                                 // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_description;                                           // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_pinned;                                                // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_hasGuide;                                              // 0x0039(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_320X[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCareerProgressionRewardUIData                      m_rewardUIData;                                          // 0x003C(0x0014) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CareerProgressionCategoryUIData
	 * Size -> 0x0018
	 */
	struct FCareerProgressionCategoryUIData
	{
	public:
		EYGoalCategory                                             m_category;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_locked;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXPW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCareerProgressionGoalUIData>                m_goals;                                                 // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CareerProgressionUIData
	 * Size -> 0x0010
	 */
	struct FCareerProgressionUIData
	{
	public:
		TArray<struct FCareerProgressionCategoryUIData>            m_categories;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.LeaderboardUIEntry
	 * Size -> 0x0038
	 */
	struct FLeaderboardUIEntry
	{
	public:
		int32_t                                                    m_rank;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2Q0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_playerName;                                            // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    m_playerNumber;                                          // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_highscore;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                m_playerID;                                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_botPlayer;                                             // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       m_bFriendOfLocalPlayer;                                  // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W87B[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.LeaderboardUIData
	 * Size -> 0x0090
	 */
	struct FLeaderboardUIData
	{
	public:
		class FText                                                m_gameModeName;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_fleetTierName;                                         // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_timeSpanName;                                          // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FLeaderboardUIEntry>                         m_entries;                                               // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLeaderboardUIEntry                                 m_playerEntry;                                           // 0x0058(0x0038) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.LegalDocumentData
	 * Size -> 0x0038
	 */
	struct FLegalDocumentData
	{
	public:
		bool                                                       m_acceptedLatestVersion;                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBGX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_version;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_documentType;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_title;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_content;                                               // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.PolicyContentResultData
	 * Size -> 0x0040
	 */
	struct FPolicyContentResultData
	{
	public:
		bool                                                       m_isSuccessful;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VVI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLegalDocumentData                                  m_documentData;                                          // 0x0008(0x0038) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.PS4RequestResultData
	 * Size -> 0x0002
	 */
	struct FPS4RequestResultData
	{
	public:
		bool                                                       m_isSuccessful;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EYTitleScreenError                                         m_error;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.RequestProfileSignInResultData
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FRequestProfileSignInResultData : public FPS4RequestResultData
	{
	public:
		ELoginSubScreensPS4                                        m_subStateDestination;                                   // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.RequestSonyEmailResultData
	 * Size -> 0x0018
	 */
	struct FRequestSonyEmailResultData
	{
	public:
		bool                                                       m_isSuccessful;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27F6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              m_emailAddress;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.LoginScreenErrorPopupData
	 * Size -> 0x0030
	 */
	struct FLoginScreenErrorPopupData
	{
	public:
		class FText                                                m_title;                                                 // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_body;                                                  // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UITechTreeShipNode
	 * Size -> 0x0018
	 */
	struct FUITechTreeShipNode
	{
	public:
		int32_t                                                    m_shipId;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFGK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_TechTreePathNodeWidget*                          m_inputNode;                                             // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUI_TechTreePathNodeWidget*                          m_outputNode;                                            // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.PlayerCurrencyAmountsData
	 * Size -> 0x000C
	 */
	struct FPlayerCurrencyAmountsData
	{
	public:
		int32_t                                                    m_freeXP;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_softCurrency;                                          // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.ShipCurrencyAmountsData
	 * Size -> 0x0010
	 */
	struct FShipCurrencyAmountsData
	{
	public:
		int32_t                                                    m_shipXP;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXP;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_softCurrency;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.PlayerRibbonButtonData
	 * Size -> 0x0068
	 */
	struct FPlayerRibbonButtonData
	{
	public:
		class UUserWidget*                                         m_userWidget;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_index;                                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C12O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_amountText;                                            // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              m_imagePath;                                             // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_name;                                                  // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_desc;                                                  // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UISettingsGroupData
	 * Size -> 0x0030
	 */
	struct FUISettingsGroupData
	{
	public:
		class FText                                                m_name;                                                  // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		EYUISettingCategory                                        m_settingsCategory;                                      // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLJE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FYUIUserSetting>                             m_settingsData;                                          // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.StatComparison
	 * Size -> 0x0048
	 */
	struct FStatComparison
	{
	public:
		class FText                                                m_statLabel;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_stat1;                                                 // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_stat2;                                                 // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.StatisticsUIListPlayerData
	 * Size -> 0x0098
	 */
	struct FStatisticsUIListPlayerData
	{
	public:
		struct FSocialUserDataBase                                 m_friendData;                                            // 0x0000(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_comparedStatistic;                                     // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7SD[0x4];                                   // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_isCurrentPlayer;                                       // 0x0094(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGFX[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.PlayerStat
	 * Size -> 0x0020
	 */
	struct FPlayerStat
	{
	public:
		float                                                      m_floatValue;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEY6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_textDisplay;                                           // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.StatisticsUIFullPlayerData
	 * Size -> 0x0088
	 */
	struct FStatisticsUIFullPlayerData
	{
	public:
		TArray<struct FPlayerStat>                                 m_playerStats;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSocialUserDataBase                                 m_friendData;                                            // 0x0010(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.ShipUIStatData
	 * Size -> 0x0048
	 */
	struct FShipUIStatData
	{
	public:
		class FText                                                m_shipName;                                              // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              m_shipImagePath;                                         // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_shipPercent;                                           // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EK0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_shipTimeText;                                          // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.YTechTreeProgressData
	 * Size -> 0x0008
	 */
	struct FYTechTreeProgressData
	{
	public:
		int32_t                                                    m_currentOwnedModules;                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_modulesAvailableOnTechTree;                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.YShipStatsEntry
	 * Size -> 0x0038
	 */
	struct FYShipStatsEntry
	{
	public:
		class FText                                                m_name;                                                  // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                m_value;                                                 // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      m_modifier;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R615[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.YShipPrice
	 * Size -> 0x0030
	 */
	struct FYShipPrice
	{
	public:
		int32_t                                                    m_techAmount;                                            // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipXP;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_freeXP;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_softCurrency;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_hardCurrency;                                          // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      m_realCurrency;                                          // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_currencyCode;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQTI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.YPurchaseRequirementsData
	 * Size -> 0x0008
	 */
	struct FYPurchaseRequirementsData
	{
	public:
		int32_t                                                    m_currentAmount;                                         // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_purchaseRequirement;                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UIPromotionFilterData
	 * Size -> 0x0028
	 */
	struct FUIPromotionFilterData
	{
	public:
		EYMarketItemPromotionFlags                                 m_filterType;                                            // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAY7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_filterName;                                            // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_filterIsEnabled;                                       // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQQE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.RequestXpConversionShip
	 * Size -> 0x0008
	 */
	struct FRequestXpConversionShip
	{
	public:
		int32_t                                                    m_shipId;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_XpToConvert;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UiXpConversionData
	 * Size -> 0x0028
	 */
	struct FUiXpConversionData
	{
	public:
		int32_t                                                    m_hardCurrencyIncrement;                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_shipXpIncrement;                                       // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_convertAllShipXp;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_convertAllGp;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentFreeXp;                                         // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    m_currentGp;                                             // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMarketItemUIData>                           m_shipMarketData;                                        // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UI_CurrencySymbol
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FUI_CurrencySymbol : public FTableRowBase
	{
	public:
		class FString                                              m_currencyCode;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_realCurrencySymbol;                                    // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       m_isSymbolBeforeValue;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUYC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.LeaderboardSettingsData
	 * Size -> 0x000C
	 */
	struct FLeaderboardSettingsData
	{
	public:
		EYGameModeType                                             m_gameModeType;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I3E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    m_timespanIndex;                                         // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EYFleetType                                                m_fleetType;                                             // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_bPrevious;                                             // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2X2[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.PS4ButtonMapData
	 * Size -> 0x0010
	 */
	struct FPS4ButtonMapData
	{
	public:
		EYPS4ButtonIcon                                            m_buttonIcon;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CHZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          m_buttonImage;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.LegendPromptData
	 * Size -> 0x0020
	 */
	struct FLegendPromptData
	{
	public:
		EYPS4ButtonIcon                                            m_buttonIcon;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM9L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                m_text;                                                  // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CongratulationsScreenData
	 * Size -> 0x0020
	 */
	struct FCongratulationsScreenData
	{
	public:
		class FString                                              m_emailAddress;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_psnId;                                                 // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.CreateAccountRequestData
	 * Size -> 0x0018
	 */
	struct FCreateAccountRequestData
	{
	public:
		class FString                                              m_email;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       m_allowPromotions;                                       // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2XB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DreadGameUI.YResearchClaimButtonData
	 * Size -> 0x0058
	 */
	struct FYResearchClaimButtonData
	{
	public:
		class FString                                              m_iconPath;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_infoText;                                              // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_infoTextExtra;                                         // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                m_buttonActionText;                                      // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.LinkAccountRequestData
	 * Size -> 0x0020
	 */
	struct FLinkAccountRequestData
	{
	public:
		class FString                                              m_email;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              m_password;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DreadGameUI.UI_ScreenReference
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FUI_ScreenReference : public FTableRowBase
	{
	public:
		EUI_Screen                                                 m_screenEnum;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVZ0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              m_screenClass;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                m_screenName;                                            // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<EUI_Screen>                                         m_breadcrumbPath;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EUI_Screen                                                 m_parentScreenEnum;                                      // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4PO[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
