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
	 * WidgetBlueprintGeneratedClass UI_Generic_SearchLabel.UI_Generic_SearchLabel_C
	 * Size -> 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
	 */
	class UUI_Generic_SearchLabel_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Search;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ConfirmSearch;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              FocusOverlay;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEditableText*                                       SearchTextBox;                                           // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              TextBoxBackground;                                       // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnStartSearch;                                           // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                LastSearchString;                                        // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                DefaultString;                                           // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ClearSearchString();
		void HandleUnfocus();
		void HandleFocus();
		struct FEventReply OnMouseButtonDown_ConfirmSearch(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void SetDefaultTextAndReset(const class FText& DefaultText);
		void StartSearch(const class FText& SearchString);
		void BndEvt__SearchTextBox_K2Node_ComponentBoundEvent_62_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnActionReceived();
		void ExecuteUbergraph_UI_Generic_SearchLabel(int32_t EntryPoint);
		void OnStartSearch__DelegateSignature(const class FText& SearchString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
