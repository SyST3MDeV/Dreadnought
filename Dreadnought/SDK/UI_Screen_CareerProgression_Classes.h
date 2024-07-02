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
	 * WidgetBlueprintGeneratedClass UI_Screen_CareerProgression.UI_Screen_CareerProgression_C
	 * Size -> 0x008C (FullSize[0x0304] - InheritedSize[0x0278])
	 */
	class UUI_Screen_CareerProgression_C : public UUI_CareerProgressionScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNamedSlot*                                          CanvasSize;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Dropdown_Generic_C*                              CategoryDropdown;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_ProgressBar_C*                           HeaderProgressBar;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          HeaderProgressCurrentCategory;                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          HeaderProgressNextCategory;                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          HeaderProgressText;                                      // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              L2Icon;                                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_3;                                             // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWrapBox*                                            WrapBox_1;                                               // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UUI_CareerProgression_ProgressItem_C*>        ProgressItemList;                                        // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		EYGoalCategory                                             ActiveGoalCategory;                                      // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTRY[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLegendPromptData>                           PS4ButtonLegend;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentProgressionItemIndex;                             // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsDropDownFocused();
		void Action();
		void HandleHovered(class UUI_CareerProgression_ProgressItem_C* source);
		void RequestClaimGoal(class UUI_CareerProgression_ProgressItem_C* source);
		void HandleFilterSelectionChanged(int32_t categoryIndex, int32_t selectedIndex);
		void UnfocusProgressionItem(int32_t index);
		void FocusProgressionItem(int32_t index);
		void GetIndexWrappingValues(int32_t* listLength, int32_t* CurrentIndex, int32_t* NumColumns);
		void HandleLeftDropdownClose();
		void HandleLeftDropdownOpen();
		void HandleDownGranular();
		void HandleUpGranular();
		void HandleLeftGranular();
		void HandleRightGranular();
		void HandleInput(EUI_MenuActions GamePadButton);
		void Setup();
		void IsGoalCategoryUnlocked(EYGoalCategory Category, bool* IsUnlocked);
		void GetGoalCategoryByIndex(int32_t categoryIndex, EYGoalCategory* GoalCategory);
		void GetValidGoalCategories(TArray<EYGoalCategory>* Categories);
		void GetNextValidGoalCategory(EYGoalCategory CurrentCategory, EYGoalCategory* NextCategory);
		void IsLastValidGoalCategory(EYGoalCategory Category, bool* IsLastCategory);
		void SetActiveCategoryAndRefresh(EYGoalCategory Category);
		void GetHighestUnlockedGoalCategory(EYGoalCategory* Category);
		void SetClaimedStateForItemWIthId(const class FName& goalId);
		void RefreshProgressHeaderBar();
		void GetGoalCategoryLocalizedName(EYGoalCategory Selection, class FText* CategoryName);
		void RefreshDropdownOptions();
		void GetCategoryProgress(const struct FCareerProgressionCategoryUIData& CategoryData, int32_t* currentValue, int32_t* TargetValue);
		void GetDataForCategory(const struct FCareerProgressionUIData& FullData, EYGoalCategory Category, struct FCareerProgressionCategoryUIData* CategoryData);
		void RefreshProgressItemList();
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void Construct();
		void HandleCareerProgressionDataUpdated();
		void HandleCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory);
		void HandleCareerProgressionRewardClaimHandled(const class FName& goalId, bool success);
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Screen_CareerProgression(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
