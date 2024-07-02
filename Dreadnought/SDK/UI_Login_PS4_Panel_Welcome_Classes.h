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
	 * WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_Welcome.UI_Login_PS4_Panel_Welcome_C
	 * Size -> 0x006C (FullSize[0x02AC] - InheritedSize[0x0240])
	 */
	class UUI_Login_PS4_Panel_Welcome_C : public UUI_SubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                CreateAccount;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DreadnoughtLogo;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          GreyboxInfo;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                LinkAccount;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        TextContainer;                                           // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          WelcomeHeader;                                           // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             RequestSubState;                                         // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsInitialized;                                           // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H6MY[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_DreadWidget*>                             ItemArray;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentlyFocusedItemIndex;                               // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Setup();
		void UnfocusItem(int32_t index);
		void FocusItem(int32_t index);
		void GetIndexWrappingValues(int32_t* CurrentIndex, int32_t* NumColumns, int32_t* listLength);
		void Action();
		void HandleGranularDown();
		void HandleGranularUp();
		void OnShow();
		void OnHide();
		void Construct();
		void BndEvt__LinkAccount_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source);
		void BndEvt__CreateAccount_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UUI_Button_Generic_C* source);
		void ExecuteUbergraph_UI_Login_PS4_Panel_Welcome(int32_t EntryPoint);
		void RequestSubState__DelegateSignature(ELoginSubScreensPS4 NewSubState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
