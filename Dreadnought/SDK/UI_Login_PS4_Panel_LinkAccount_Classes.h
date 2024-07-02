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
	 * WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_LinkAccount.UI_Login_PS4_Panel_LinkAccount_C
	 * Size -> 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
	 */
	class UUI_Login_PS4_Panel_LinkAccount_C : public UUI_LinkAccountLoginPS4SubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ConfirmationInfo;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                ConfirmButton;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DreadnoughtLogo;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          EmailAddressLabel;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TextField_Generic_C*                             EmailAddressTextField;                                   // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LinkAccountHeader;                                       // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          PasswordLabel;                                           // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_PasswordField_Generic_C*                         PasswordTextField;                                       // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ScreenContainer;                                         // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Spinner_C*                               Spinner;                                                 // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_DreadWidget*                                     CurrentTextBox;                                          // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInitialized;                                           // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HU9E[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RequestLinkAccount;                                      // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsWaitingForResponse;                                    // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_19ZA[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentlyFocusedItemIndex;                               // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UUI_DreadWidget*>                             ItemArray;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnTextCommited;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OpenKeyboard();
		void HandleGranularDown();
		void GetIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength);
		void UnfocusItem(int32_t index);
		void HandleGranularUp();
		void Action();
		void FocusItem(int32_t index);
		void Setup();
		void HandleLinkAccountError();
		void OnShow();
		void OnHide();
		void Construct();
		void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_63_OnButtonClicked__DelegateSignature(int32_t index);
		void OnTextCommitted(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__EmailAddressTextField_K2Node_ComponentBoundEvent_486_OnClicked__DelegateSignature(class UUI_TextField_Generic_C* source);
		void BndEvt__PasswordTextField_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(class UUI_PasswordField_Generic_C* source);
		void ExecuteUbergraph_UI_Login_PS4_Panel_LinkAccount(int32_t EntryPoint);
		void OnTextCommited__DelegateSignature();
		void RequestLinkAccount__DelegateSignature(const struct FLinkAccountRequestData& LinkAccountData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
