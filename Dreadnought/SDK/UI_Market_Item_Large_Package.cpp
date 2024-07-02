/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetImageIfAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor)
	 * 		bool                                               shouldDownload                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::SetImageIfAvailable(const class FString& URL, bool* shouldDownload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetImageIfAvailable");
		
		UUI_Market_Item_Large_C_SetImageIfAvailable_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldDownload != nullptr)
			*shouldDownload = params.shouldDownload;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::SetImage(class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetImage");
		
		UUI_Market_Item_Large_C_SetImage_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupPriceCurrency
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIItemPriceData                           YUIItemPriceData                                           (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FYMenuOfferCampaingData                     CampaignData                                               (Parm)
	 */
	void UUI_Market_Item_Large_C::SetupPriceCurrency(const struct FYUIItemPriceData& YUIItemPriceData, const struct FYMenuOfferCampaingData& CampaignData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupPriceCurrency");
		
		UUI_Market_Item_Large_C_SetupPriceCurrency_Params params {};
		params.YUIItemPriceData = YUIItemPriceData;
		params.CampaignData = CampaignData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleDownloadImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::HandleDownloadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleDownloadImage");
		
		UUI_Market_Item_Large_C_HandleDownloadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.Action");
		
		UUI_Market_Item_Large_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetCampaignData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuOfferCampaingData                     CampaignData                                               (Parm)
	 * 		bool                                               ShowPrice                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYUICurrency                                       currencyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::SetCampaignData(const struct FYMenuOfferCampaingData& CampaignData, bool ShowPrice, EYUICurrency currencyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetCampaignData");
		
		UUI_Market_Item_Large_C_SetCampaignData_Params params {};
		params.CampaignData = CampaignData;
		params.ShowPrice = ShowPrice;
		params.currencyType = currencyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	struct FEventReply UUI_Market_Item_Large_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFocusReceived");
		
		UUI_Market_Item_Large_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleFocus");
		
		UUI_Market_Item_Large_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.HandleUnfocus");
		
		UUI_Market_Item_Large_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::SetupButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupButtons");
		
		UUI_Market_Item_Large_C_SetupButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupImages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::SetupImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupImages");
		
		UUI_Market_Item_Large_C_SetupImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::SetupText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupText");
		
		UUI_Market_Item_Large_C_SetupText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupPrice
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::SetupPrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetupPrice");
		
		UUI_Market_Item_Large_C_SetupPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetIconImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::SetIconImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetIconImage");
		
		UUI_Market_Item_Large_C_SetIconImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.Setup");
		
		UUI_Market_Item_Large_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFailure_E6489A394F3A098224B43FB32411E061
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::OnFailure_E6489A394F3A098224B43FB32411E061(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFailure_E6489A394F3A098224B43FB32411E061");
		
		UUI_Market_Item_Large_C_OnFailure_E6489A394F3A098224B43FB32411E061_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnSuccess_E6489A394F3A098224B43FB32411E061
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::OnSuccess_E6489A394F3A098224B43FB32411E061(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnSuccess_E6489A394F3A098224B43FB32411E061");
		
		UUI_Market_Item_Large_C_OnSuccess_E6489A394F3A098224B43FB32411E061_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.Construct");
		
		UUI_Market_Item_Large_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_Item_Large_C_BndEvt__CarouselButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Market_Item_Large_C_BndEvt__CarouselButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.DownloadImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor)
	 */
	void UUI_Market_Item_Large_C::DownloadImage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.DownloadImage");
		
		UUI_Market_Item_Large_C_DownloadImage_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Market_Item_Large_C_BndEvt__ItemDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UUI_Market_Item_Large_C_BndEvt__PreviewButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UUI_Market_Item_Large_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           itemData                                                   (Parm)
	 */
	void UUI_Market_Item_Large_C::SetData(const struct FMarketItemUIData& itemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.SetData");
		
		UUI_Market_Item_Large_C_SetData_Params params {};
		params.itemData = itemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	void UUI_Market_Item_Large_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnFocusLost");
		
		UUI_Market_Item_Large_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Market_Item_Large_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnActionReceived");
		
		UUI_Market_Item_Large_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.ExecuteUbergraph_UI_Market_Item_Large
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::ExecuteUbergraph_UI_Market_Item_Large(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.ExecuteUbergraph_UI_Market_Item_Large");
		
		UUI_Market_Item_Large_C_ExecuteUbergraph_UI_Market_Item_Large_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::OnItemHovered__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnItemHovered__DelegateSignature");
		
		UUI_Market_Item_Large_C_OnItemHovered__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnReceivedFocus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Market_Item_Large_C::OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnReceivedFocus__DelegateSignature");
		
		UUI_Market_Item_Large_C_OnReceivedFocus__DelegateSignature_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnPreviewClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Market_Item_Large_C::OnPreviewClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnPreviewClicked__DelegateSignature");
		
		UUI_Market_Item_Large_C_OnPreviewClicked__DelegateSignature_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnBuyClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Market_Item_Large_C::OnBuyClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnBuyClicked__DelegateSignature");
		
		UUI_Market_Item_Large_C_OnBuyClicked__DelegateSignature_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnItemDetailsClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMarketItemUIData                           MarketItemData                                             (Parm)
	 */
	void UUI_Market_Item_Large_C::OnItemDetailsClicked__DelegateSignature(const struct FMarketItemUIData& MarketItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Market_Item_Large.UI_Market_Item_Large_C.OnItemDetailsClicked__DelegateSignature");
		
		UUI_Market_Item_Large_C_OnItemDetailsClicked__DelegateSignature_Params params {};
		params.MarketItemData = MarketItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Market_Item_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Market_Item_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Market_Item_Large.UI_Market_Item_Large_C");
		return ptr;
	}

}


