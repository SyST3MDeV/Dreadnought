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
	 * WidgetBlueprintGeneratedClass UI_Social_FriendOptions.UI_Social_FriendOptions_C
	 * Size -> 0x00B4 (FullSize[0x02EC] - InheritedSize[0x0238])
	 */
	class UUI_Social_FriendOptions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_3;                                                 // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        OptionsList;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextUsername;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText;                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText_C_1;                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText_C_2;                          // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText_C_3;                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText_C_4;                          // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_IconText_C*                       UI_Generic_Button_IconText_C_5;                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UI_Generic_SelectionBrackets;                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     UI_Generic_SelectionBrackets_1;                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnOptionClicked;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<EFriendOptionButton>                                OptionList;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UTexture2D*>                                  OptionIcons;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_Generic_Button_IconText_C*>               CurrentOptions;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_Generic_Button_IconText_C*                       CurrentlyFocusedOption;                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    SelectedOptionIndex;                                     // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NavOptionAction();
		void HandleOptionUnfocus();
		void HandleOptionFocus(class UUI_DreadWidget** FocusedWidget);
		void NavDownGranular(class UUI_DreadWidget** SelectedWidget);
		void NavUpGranular(class UUI_DreadWidget** SelectedWidget);
		void HandleFocus();
		void GetClickedOption(class UUI_Generic_Button_IconText_C* SelectedOption, EFriendOptionButton* FoundOption);
		void SetOptionsData(const class FText& UserName, TArray<EFriendOptionButton>* OptionList);
		void OnClickedOption(class UUI_Generic_Button_IconText_C* source);
		void Construct();
		void OnHoveredOption(class UUI_Generic_Button_IconText_C* source);
		void OnUnHoveredOption(class UUI_Generic_Button_IconText_C* source);
		void ExecuteUbergraph_UI_Social_FriendOptions(int32_t EntryPoint);
		void OnOptionClicked__DelegateSignature(EFriendOptionButton SelectedOption);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
