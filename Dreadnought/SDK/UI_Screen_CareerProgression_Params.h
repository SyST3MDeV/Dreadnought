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
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsDropDownFocused
	 */
	struct UUI_Screen_CareerProgression_C_IsDropDownFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Action
	 */
	struct UUI_Screen_CareerProgression_C_Action_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleHovered
	 */
	struct UUI_Screen_CareerProgression_C_HandleHovered_Params
	{
	public:
		class UUI_CareerProgression_ProgressItem_C*                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RequestClaimGoal
	 */
	struct UUI_Screen_CareerProgression_C_RequestClaimGoal_Params
	{
	public:
		class UUI_CareerProgression_ProgressItem_C*                source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleFilterSelectionChanged
	 */
	struct UUI_Screen_CareerProgression_C_HandleFilterSelectionChanged_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    selectedIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.UnfocusProgressionItem
	 */
	struct UUI_Screen_CareerProgression_C_UnfocusProgressionItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HKQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.FocusProgressionItem
	 */
	struct UUI_Screen_CareerProgression_C_FocusProgressionItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3CC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetIndexWrappingValues
	 */
	struct UUI_Screen_CareerProgression_C_GetIndexWrappingValues_Params
	{
	public:
		int32_t                                                    listLength;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentIndex;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownClose
	 */
	struct UUI_Screen_CareerProgression_C_HandleLeftDropdownClose_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownOpen
	 */
	struct UUI_Screen_CareerProgression_C_HandleLeftDropdownOpen_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleDownGranular
	 */
	struct UUI_Screen_CareerProgression_C_HandleDownGranular_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleUpGranular
	 */
	struct UUI_Screen_CareerProgression_C_HandleUpGranular_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftGranular
	 */
	struct UUI_Screen_CareerProgression_C_HandleLeftGranular_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleRightGranular
	 */
	struct UUI_Screen_CareerProgression_C_HandleRightGranular_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleInput
	 */
	struct UUI_Screen_CareerProgression_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadButton;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Setup
	 */
	struct UUI_Screen_CareerProgression_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsGoalCategoryUnlocked
	 */
	struct UUI_Screen_CareerProgression_C_IsGoalCategoryUnlocked_Params
	{
	public:
		EYGoalCategory                                             Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnlocked;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RX0A[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryByIndex
	 */
	struct UUI_Screen_CareerProgression_C_GetGoalCategoryByIndex_Params
	{
	public:
		int32_t                                                    categoryIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYGoalCategory                                             GoalCategory;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5X0R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetValidGoalCategories
	 */
	struct UUI_Screen_CareerProgression_C_GetValidGoalCategories_Params
	{
	public:
		TArray<EYGoalCategory>                                     Categories;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetNextValidGoalCategory
	 */
	struct UUI_Screen_CareerProgression_C_GetNextValidGoalCategory_Params
	{
	public:
		EYGoalCategory                                             CurrentCategory;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYGoalCategory                                             NextCategory;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsLastValidGoalCategory
	 */
	struct UUI_Screen_CareerProgression_C_IsLastValidGoalCategory_Params
	{
	public:
		EYGoalCategory                                             Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLastCategory;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSQM[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetActiveCategoryAndRefresh
	 */
	struct UUI_Screen_CareerProgression_C_SetActiveCategoryAndRefresh_Params
	{
	public:
		EYGoalCategory                                             Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetHighestUnlockedGoalCategory
	 */
	struct UUI_Screen_CareerProgression_C_GetHighestUnlockedGoalCategory_Params
	{
	public:
		EYGoalCategory                                             Category;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2X3P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetClaimedStateForItemWIthId
	 */
	struct UUI_Screen_CareerProgression_C_SetClaimedStateForItemWIthId_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressHeaderBar
	 */
	struct UUI_Screen_CareerProgression_C_RefreshProgressHeaderBar_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryLocalizedName
	 */
	struct UUI_Screen_CareerProgression_C_GetGoalCategoryLocalizedName_Params
	{
	public:
		EYGoalCategory                                             Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LAUC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshDropdownOptions
	 */
	struct UUI_Screen_CareerProgression_C_RefreshDropdownOptions_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetCategoryProgress
	 */
	struct UUI_Screen_CareerProgression_C_GetCategoryProgress_Params
	{
	public:
		struct FCareerProgressionCategoryUIData                    CategoryData;                                            // 0x0000(0x0018)  (Parm)
		int32_t                                                    currentValue;                                            // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TargetValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetDataForCategory
	 */
	struct UUI_Screen_CareerProgression_C_GetDataForCategory_Params
	{
	public:
		struct FCareerProgressionUIData                            FullData;                                                // 0x0000(0x0010)  (Parm)
		EYGoalCategory                                             Category;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C1IX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCareerProgressionCategoryUIData                    CategoryData;                                            // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressItemList
	 */
	struct UUI_Screen_CareerProgression_C_RefreshProgressItemList_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionIn
	 */
	struct UUI_Screen_CareerProgression_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionOut
	 */
	struct UUI_Screen_CareerProgression_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_CareerProgression_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_CareerProgression_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Construct
	 */
	struct UUI_Screen_CareerProgression_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionDataUpdated
	 */
	struct UUI_Screen_CareerProgression_C_HandleCareerProgressionDataUpdated_Params
	{	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionCategoryUnlocked
	 */
	struct UUI_Screen_CareerProgression_C_HandleCareerProgressionCategoryUnlocked_Params
	{
	public:
		EYGoalCategory                                             unlockedCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionRewardClaimHandled
	 */
	struct UUI_Screen_CareerProgression_C_HandleCareerProgressionRewardClaimHandled_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnNavigationEvent
	 */
	struct UUI_Screen_CareerProgression_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.ExecuteUbergraph_UI_Screen_CareerProgression
	 */
	struct UUI_Screen_CareerProgression_C_ExecuteUbergraph_UI_Screen_CareerProgression_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
