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
	 * WidgetBlueprintGeneratedClass UI_MarketPanel_Currency_ShipXPConversionItem.UI_MarketPanel_Currency_ShipXPConversionItem_C
	 * Size -> 0x0321 (FullSize[0x0561] - InheritedSize[0x0240])
	 */
	class UUI_MarketPanel_Currency_ShipXPConversionItem_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Focus;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          AvailableShipXPLabel;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     BottomWidgetSwitcher;                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ConsoleShipXpText;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ConsoleVerticalBox;                                      // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEditableTextBox*                                    CustomXpConversion;                                      // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        PcVerticalBox;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             RootButton;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManufacturerTechTreeItem_C*               ShipItem;                                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCheckBox*                                           UseCheckBox;                                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FMarketItemUIData                                   MarketItemData;                                          // 0x02A0(0x0250) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnCustomShipXpToConvertUpdated;                          // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    XpToConvert;                                             // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    shipID;                                                  // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    XpConversionRate;                                        // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    MaxXpToConvert;                                          // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnItemHovered;                                           // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsPlatformPC;                                            // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSelected;                                              // 0x0521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFocused;                                               // 0x0522(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C5EV[0x5];                                   // 0x0523(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemFocused;                                           // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemUnfocused;                                         // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TextBoxCharacterCap;                                     // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLP5[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempString;                                              // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsInputTextCommitted;                                    // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleInputTextChanged(const class FText& Text);
		void XpToConvertTextFieldChanged(class FText* Text);
		void CapInputText(const class FText& InputText);
		void UpdateXpToConvert(int32_t amount);
		void Action();
		void HandleUnfocus();
		void HandleFocus();
		void BroadcastAndSetTextForXp(int32_t XpToConvert);
		void XpToConvertTextFieldCommitted(class FText* Text, ETextCommit CommitMethod);
		void GetXpToConvert(int32_t* XpToConvert);
		void Setup();
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RootButton_K2Node_ComponentBoundEvent_135_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RootButton_K2Node_ComponentBoundEvent_147_OnButtonHoverEvent__DelegateSignature();
		void OnActionReceived();
		void BndEvt__CustomXpConversion_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_UI_MarketPanel_Currency_ShipXPConversionItem(int32_t EntryPoint);
		void OnItemUnfocused__DelegateSignature(class UUI_DreadWidget* source);
		void OnItemFocused__DelegateSignature(class UUI_DreadWidget* source);
		void OnItemHovered__DelegateSignature(class UUI_DreadWidget* source);
		void OnCustomShipXpToConvertUpdated__DelegateSignature(const struct FRequestXpConversionShip& RequestData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
