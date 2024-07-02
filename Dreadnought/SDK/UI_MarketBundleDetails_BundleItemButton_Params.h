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
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleDownloadImage
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_HandleDownloadImage_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageIfAvailable
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetImageIfAvailable_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       shouldDownload;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OUCW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageTexture
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetImageTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupEliteStatusImage
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetupEliteStatusImage_Params
	{
	public:
		class FString                                              ImageURL;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImage
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetSelected
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleUnfocus
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleFocus
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupImages
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_SetupImages_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.Construct
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_Construct_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.DownloadImage
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_DownloadImage_Params
	{
	public:
		class FString                                              ImageURL;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFocusLost
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm)
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4747[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnClicked__DelegateSignature
	 */
	struct UUI_MarketBundleDetails_BundleItemButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UUI_MarketBundleDetails_BundleItemButton_C*          BundleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
