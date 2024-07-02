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
	 * Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCurrencyTag
	 */
	struct UUI_Generic_CampaignTags_C_SetCurrencyTag_Params
	{
	public:
		bool                                                       ShowCurrencyType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUICurrency                                               currencyType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.SetCampaignTags
	 */
	struct UUI_Generic_CampaignTags_C_SetCampaignTags_Params
	{
	public:
		struct FYMenuOfferCampaingData                             CampaignData;                                            // 0x0000(0x0038)  (Parm)
	};

	/**
	 * Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.Construct
	 */
	struct UUI_Generic_CampaignTags_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_CampaignTags.UI_Generic_CampaignTags_C.ExecuteUbergraph_UI_Generic_CampaignTags
	 */
	struct UUI_Generic_CampaignTags_C_ExecuteUbergraph_UI_Generic_CampaignTags_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
