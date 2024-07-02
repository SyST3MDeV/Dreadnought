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
	 * Function UI_Market_Item.UI_Market_Item_C.SetImageIfAvailable
	 */
	struct UUI_Market_Item_C_SetImageIfAvailable_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       shouldDownload;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RL0R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetImage
	 */
	struct UUI_Market_Item_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetupPriceCurrency
	 */
	struct UUI_Market_Item_C_SetupPriceCurrency_Params
	{
	public:
		struct FYUIItemPriceData                                   YUIItemPriceData;                                        // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FYMenuOfferCampaingData                             CampaignData;                                            // 0x0030(0x0038)  (Parm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.HandleDownloadImage
	 */
	struct UUI_Market_Item_C_HandleDownloadImage_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetCampaignData
	 */
	struct UUI_Market_Item_C_SetCampaignData_Params
	{
	public:
		struct FYMenuOfferCampaingData                             CampaignData;                                            // 0x0000(0x0038)  (Parm)
		bool                                                       ShowPrice;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYUICurrency                                               currencyType;                                            // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetThemeColor
	 */
	struct UUI_Market_Item_C_SetThemeColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.Action
	 */
	struct UUI_Market_Item_C_Action_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnFocusReceived
	 */
	struct UUI_Market_Item_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_75XS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.HandleFocus
	 */
	struct UUI_Market_Item_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.HandleUnfocus
	 */
	struct UUI_Market_Item_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetupButtons
	 */
	struct UUI_Market_Item_C_SetupButtons_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetupImages
	 */
	struct UUI_Market_Item_C_SetupImages_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetupText
	 */
	struct UUI_Market_Item_C_SetupText_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetupPrice
	 */
	struct UUI_Market_Item_C_SetupPrice_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetIconImage
	 */
	struct UUI_Market_Item_C_SetIconImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.Setup
	 */
	struct UUI_Market_Item_C_Setup_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnFailure_380AA04147BCEFD79BFBB6AD11B4E1F0
	 */
	struct UUI_Market_Item_C_OnFailure_380AA04147BCEFD79BFBB6AD11B4E1F0_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnSuccess_380AA04147BCEFD79BFBB6AD11B4E1F0
	 */
	struct UUI_Market_Item_C_OnSuccess_380AA04147BCEFD79BFBB6AD11B4E1F0_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.Construct
	 */
	struct UUI_Market_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Market_Item_C_BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Market_Item_C_BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.DownloadImage
	 */
	struct UUI_Market_Item_C_DownloadImage_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Market_Item_C_BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.SetData
	 */
	struct UUI_Market_Item_C_SetData_Params
	{
	public:
		struct FMarketItemUIData                                   itemData;                                                // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnActionReceived
	 */
	struct UUI_Market_Item_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnFocusLost
	 */
	struct UUI_Market_Item_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.ExecuteUbergraph_UI_Market_Item
	 */
	struct UUI_Market_Item_C_ExecuteUbergraph_UI_Market_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GXPL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnItemHovered__DelegateSignature
	 */
	struct UUI_Market_Item_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Market_Item_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnPreviewClicked__DelegateSignature
	 */
	struct UUI_Market_Item_C_OnPreviewClicked__DelegateSignature_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnBuyClicked__DelegateSignature
	 */
	struct UUI_Market_Item_C_OnBuyClicked__DelegateSignature_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

	/**
	 * Function UI_Market_Item.UI_Market_Item_C.OnItemDetailsClicked__DelegateSignature
	 */
	struct UUI_Market_Item_C_OnItemDetailsClicked__DelegateSignature_Params
	{
	public:
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x0000(0x0250)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
