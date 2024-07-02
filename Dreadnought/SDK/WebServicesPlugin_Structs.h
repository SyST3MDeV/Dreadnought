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
	 * Enum WebServicesPlugin.ELegalItemType
	 */
	enum class ELegalItemType : uint8_t
	{
		None                    = 0,
		OptInEmail              = 1,
		MinimumAge13            = 2,
		MinimumAge16            = 3,
		PrivacyPolicy           = 4,
		TermsOfUse              = 5,
		EndUserLicenseAgreement = 6,
		Max                     = 7,
		MAX                     = 8
	};

	/**
	 * Enum WebServicesPlugin.EQueuePriority
	 */
	enum class EQueuePriority : uint8_t
	{
		None            = 0,
		BattleReconnect = 1,
		Reconnect       = 2,
		Normal          = 3,
		Max             = 4,
		MAX             = 5
	};

	/**
	 * Enum WebServicesPlugin.EQueueType
	 */
	enum class EQueueType : uint8_t
	{
		Disabled       = 0,
		ServerFull     = 1,
		BurstThrottled = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WebServicesPlugin.LegalItemSubmissionSuccessfulEvent
	 * Size -> 0x0018
	 */
	struct FLegalItemSubmissionSuccessfulEvent
	{
	public:
		unsigned char                                              UnknownData_JMPL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.LegalDocumentReceivedEventPayload
	 * Size -> 0x0010
	 */
	struct FLegalDocumentReceivedEventPayload
	{
	public:
		unsigned char                                              UnknownData_NJ89[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.LegalItemsToAcceptEvent
	 * Size -> 0x0020
	 */
	struct FLegalItemsToAcceptEvent
	{
	public:
		unsigned char                                              UnknownData_J1R4[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.LegalItem
	 * Size -> 0x0038
	 */
	struct FLegalItem
	{
	public:
		unsigned char                                              UnknownData_21BX[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.LegalDocument
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	struct FLegalDocument : public FLegalItem
	{
	public:
		unsigned char                                              UnknownData_TMPU[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.LegalAttestation
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FLegalAttestation : public FLegalItem
	{	};

	/**
	 * ScriptStruct WebServicesPlugin.ServerInMaintenanceModeEvent
	 * Size -> 0x0010
	 */
	struct FServerInMaintenanceModeEvent
	{
	public:
		unsigned char                                              UnknownData_V8LL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.PlayerEnqueuedEvent
	 * Size -> 0x0028
	 */
	struct FPlayerEnqueuedEvent
	{
	public:
		unsigned char                                              UnknownData_UXRK[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebServicesPlugin.MmogConnectionInfoReceivedEvent
	 * Size -> 0x0010
	 */
	struct FMmogConnectionInfoReceivedEvent
	{
	public:
		unsigned char                                              UnknownData_209A[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
