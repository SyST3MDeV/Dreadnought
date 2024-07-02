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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_MarketBundleDetails_BundleItemButton.UI_MarketBundleDetails_BundleItemButton_C
	 * Size -> 0x00F4 (FullSize[0x0334] - InheritedSize[0x0240])
	 */
	class UUI_MarketBundleDetails_BundleItemButton_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FocusUnfocus;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              CategoryImage;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ItemButton;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              itemImage;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           LoadingIndicator;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        Overlay_ShipDetails_Tab;                                 // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           ScaleBox_ShipType;                                       // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ManageFleet_BottomBar_C*                         UI_ManageFleet_BottomBar;                                // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FYMenuItemData                                      MarketItemData;                                          // 0x0288(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsFocused;                                               // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSelected;                                              // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar_1;                                                // 0x0322(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YOF0[0x5];                                   // 0x0323(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ItemIcon;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      DownloadRetryTimer;                                      // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleDownloadImage();
		void SetImageIfAvailable(const class FString& URL, bool* shouldDownload);
		void SetImageTexture(class UTexture2D* Texture);
		void SetupEliteStatusImage(const class FString& ImageURL);
		void SetImage(class UTexture2D* Texture);
		void SetSelected(bool isSelected);
		void HandleUnfocus();
		void HandleFocus();
		void SetupImages();
		void OnFailure_C883EFAD43991B4C03CFB0ADC383FAFB(class UTexture2D* Texture);
		void OnSuccess_C883EFAD43991B4C03CFB0ADC383FAFB(class UTexture2D* Texture);
		void Construct();
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void DownloadImage(const class FString& ImageURL);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_MarketBundleDetails_BundleItemButton(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UUI_MarketBundleDetails_BundleItemButton_C* BundleButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
