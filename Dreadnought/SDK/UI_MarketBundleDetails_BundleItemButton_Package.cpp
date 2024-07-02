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
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleDownloadImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::HandleDownloadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleDownloadImage");
		
		UUI_MarketBundleDetails_BundleItemButton_C_HandleDownloadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageIfAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor)
	 * 		bool                                               shouldDownload                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetImageIfAvailable(const class FString& URL, bool* shouldDownload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageIfAvailable");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetImageIfAvailable_Params params {};
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
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetImageTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImageTexture");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetImageTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupEliteStatusImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ImageURL                                                   (Parm, ZeroConstructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetupEliteStatusImage(const class FString& ImageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupEliteStatusImage");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetupEliteStatusImage_Params params {};
		params.ImageURL = ImageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetImage");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetSelected");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleUnfocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::HandleUnfocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleUnfocus");
		
		UUI_MarketBundleDetails_BundleItemButton_C_HandleUnfocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::HandleFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.HandleFocus");
		
		UUI_MarketBundleDetails_BundleItemButton_C_HandleFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupImages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::SetupImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.SetupImages");
		
		UUI_MarketBundleDetails_BundleItemButton_C_SetupImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB");
		
		UUI_MarketBundleDetails_BundleItemButton_C_OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB");
		
		UUI_MarketBundleDetails_BundleItemButton_C_OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.Construct");
		
		UUI_MarketBundleDetails_BundleItemButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.DownloadImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ImageURL                                                   (Parm, ZeroConstructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::DownloadImage(const class FString& ImageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.DownloadImage");
		
		UUI_MarketBundleDetails_BundleItemButton_C_DownloadImage_Params params {};
		params.ImageURL = ImageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (Parm)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnFocusLost");
		
		UUI_MarketBundleDetails_BundleItemButton_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");
		
		UUI_MarketBundleDetails_BundleItemButton_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton");
		
		UUI_MarketBundleDetails_BundleItemButton_C_ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_MarketBundleDetails_BundleItemButton_C*  BundleButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_BundleItemButton_C::OnClicked__DelegateSignature(class UUI_MarketBundleDetails_BundleItemButton_C* BundleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C.OnClicked__DelegateSignature");
		
		UUI_MarketBundleDetails_BundleItemButton_C_OnClicked__DelegateSignature_Params params {};
		params.BundleButton = BundleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_BundleItemButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_BundleItemButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C");
		return ptr;
	}

}


