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
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsDropDownFocused
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UUI_Screen_CareerProgression_C::IsDropDownFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsDropDownFocused");
		
		UUI_Screen_CareerProgression_C_IsDropDownFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Action");
		
		UUI_Screen_CareerProgression_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CareerProgression_ProgressItem_C*        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::HandleHovered(class UUI_CareerProgression_ProgressItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleHovered");
		
		UUI_Screen_CareerProgression_C_HandleHovered_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RequestClaimGoal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CareerProgression_ProgressItem_C*        source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::RequestClaimGoal(class UUI_CareerProgression_ProgressItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RequestClaimGoal");
		
		UUI_Screen_CareerProgression_C_RequestClaimGoal_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleFilterSelectionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::HandleFilterSelectionChanged(int32_t categoryIndex, int32_t selectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleFilterSelectionChanged");
		
		UUI_Screen_CareerProgression_C_HandleFilterSelectionChanged_Params params {};
		params.categoryIndex = categoryIndex;
		params.selectedIndex = selectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.UnfocusProgressionItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::UnfocusProgressionItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.UnfocusProgressionItem");
		
		UUI_Screen_CareerProgression_C_UnfocusProgressionItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.FocusProgressionItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::FocusProgressionItem(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.FocusProgressionItem");
		
		UUI_Screen_CareerProgression_C_FocusProgressionItem_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetIndexWrappingValues
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            listLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::GetIndexWrappingValues(int32_t* listLength, int32_t* CurrentIndex, int32_t* NumColumns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetIndexWrappingValues");
		
		UUI_Screen_CareerProgression_C_GetIndexWrappingValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (listLength != nullptr)
			*listLength = params.listLength;
		if (CurrentIndex != nullptr)
			*CurrentIndex = params.CurrentIndex;
		if (NumColumns != nullptr)
			*NumColumns = params.NumColumns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownClose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleLeftDropdownClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownClose");
		
		UUI_Screen_CareerProgression_C_HandleLeftDropdownClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleLeftDropdownOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftDropdownOpen");
		
		UUI_Screen_CareerProgression_C_HandleLeftDropdownOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleDownGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleDownGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleDownGranular");
		
		UUI_Screen_CareerProgression_C_HandleDownGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleUpGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleUpGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleUpGranular");
		
		UUI_Screen_CareerProgression_C_HandleUpGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleLeftGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleLeftGranular");
		
		UUI_Screen_CareerProgression_C_HandleLeftGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleRightGranular
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleRightGranular()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleRightGranular");
		
		UUI_Screen_CareerProgression_C_HandleRightGranular_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleInput");
		
		UUI_Screen_CareerProgression_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Setup");
		
		UUI_Screen_CareerProgression_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsGoalCategoryUnlocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYGoalCategory                                     Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnlocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::IsGoalCategoryUnlocked(EYGoalCategory Category, bool* IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsGoalCategoryUnlocked");
		
		UUI_Screen_CareerProgression_C_IsGoalCategoryUnlocked_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnlocked != nullptr)
			*IsUnlocked = params.IsUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryByIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYGoalCategory                                     GoalCategory                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::GetGoalCategoryByIndex(int32_t categoryIndex, EYGoalCategory* GoalCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryByIndex");
		
		UUI_Screen_CareerProgression_C_GetGoalCategoryByIndex_Params params {};
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GoalCategory != nullptr)
			*GoalCategory = params.GoalCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetValidGoalCategories
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<EYGoalCategory>                             Categories                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_Screen_CareerProgression_C::GetValidGoalCategories(TArray<EYGoalCategory>* Categories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetValidGoalCategories");
		
		UUI_Screen_CareerProgression_C_GetValidGoalCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Categories != nullptr)
			*Categories = params.Categories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetNextValidGoalCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYGoalCategory                                     CurrentCategory                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYGoalCategory                                     NextCategory                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::GetNextValidGoalCategory(EYGoalCategory CurrentCategory, EYGoalCategory* NextCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetNextValidGoalCategory");
		
		UUI_Screen_CareerProgression_C_GetNextValidGoalCategory_Params params {};
		params.CurrentCategory = CurrentCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextCategory != nullptr)
			*NextCategory = params.NextCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsLastValidGoalCategory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYGoalCategory                                     Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLastCategory                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::IsLastValidGoalCategory(EYGoalCategory Category, bool* IsLastCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.IsLastValidGoalCategory");
		
		UUI_Screen_CareerProgression_C_IsLastValidGoalCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLastCategory != nullptr)
			*IsLastCategory = params.IsLastCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetActiveCategoryAndRefresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EYGoalCategory                                     Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::SetActiveCategoryAndRefresh(EYGoalCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetActiveCategoryAndRefresh");
		
		UUI_Screen_CareerProgression_C_SetActiveCategoryAndRefresh_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetHighestUnlockedGoalCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYGoalCategory                                     Category                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::GetHighestUnlockedGoalCategory(EYGoalCategory* Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetHighestUnlockedGoalCategory");
		
		UUI_Screen_CareerProgression_C_GetHighestUnlockedGoalCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetClaimedStateForItemWIthId
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::SetClaimedStateForItemWIthId(const class FName& goalId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.SetClaimedStateForItemWIthId");
		
		UUI_Screen_CareerProgression_C_SetClaimedStateForItemWIthId_Params params {};
		params.goalId = goalId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressHeaderBar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::RefreshProgressHeaderBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressHeaderBar");
		
		UUI_Screen_CareerProgression_C_RefreshProgressHeaderBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryLocalizedName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYGoalCategory                                     Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        CategoryName                                               (Parm, OutParm)
	 */
	void UUI_Screen_CareerProgression_C::GetGoalCategoryLocalizedName(EYGoalCategory Selection, class FText* CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetGoalCategoryLocalizedName");
		
		UUI_Screen_CareerProgression_C_GetGoalCategoryLocalizedName_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryName != nullptr)
			*CategoryName = params.CategoryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshDropdownOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::RefreshDropdownOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshDropdownOptions");
		
		UUI_Screen_CareerProgression_C_RefreshDropdownOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetCategoryProgress
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCareerProgressionCategoryUIData            CategoryData                                               (Parm)
	 * 		int32_t                                            currentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TargetValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::GetCategoryProgress(const struct FCareerProgressionCategoryUIData& CategoryData, int32_t* currentValue, int32_t* TargetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetCategoryProgress");
		
		UUI_Screen_CareerProgression_C_GetCategoryProgress_Params params {};
		params.CategoryData = CategoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentValue != nullptr)
			*currentValue = params.currentValue;
		if (TargetValue != nullptr)
			*TargetValue = params.TargetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetDataForCategory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FCareerProgressionUIData                    FullData                                                   (Parm)
	 * 		EYGoalCategory                                     Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCareerProgressionCategoryUIData            CategoryData                                               (Parm, OutParm)
	 */
	void UUI_Screen_CareerProgression_C::GetDataForCategory(const struct FCareerProgressionUIData& FullData, EYGoalCategory Category, struct FCareerProgressionCategoryUIData* CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.GetDataForCategory");
		
		UUI_Screen_CareerProgression_C_GetDataForCategory_Params params {};
		params.FullData = FullData;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryData != nullptr)
			*CategoryData = params.CategoryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressItemList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::RefreshProgressItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.RefreshProgressItemList");
		
		UUI_Screen_CareerProgression_C_RefreshProgressItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::OnTransitionIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionIn");
		
		UUI_Screen_CareerProgression_C_OnTransitionIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::OnTransitionOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnTransitionOut");
		
		UUI_Screen_CareerProgression_C_OnTransitionOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionInAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::TransitionInAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionInAnimationComplete");
		
		UUI_Screen_CareerProgression_C_TransitionInAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionOutAnimationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::TransitionOutAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.TransitionOutAnimationComplete");
		
		UUI_Screen_CareerProgression_C_TransitionOutAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.Construct");
		
		UUI_Screen_CareerProgression_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionDataUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Screen_CareerProgression_C::HandleCareerProgressionDataUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionDataUpdated");
		
		UUI_Screen_CareerProgression_C_HandleCareerProgressionDataUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionCategoryUnlocked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EYGoalCategory                                     unlockedCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::HandleCareerProgressionCategoryUnlocked(EYGoalCategory unlockedCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionCategoryUnlocked");
		
		UUI_Screen_CareerProgression_C_HandleCareerProgressionCategoryUnlocked_Params params {};
		params.unlockedCategory = unlockedCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionRewardClaimHandled
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        goalId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::HandleCareerProgressionRewardClaimHandled(const class FName& goalId, bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.HandleCareerProgressionRewardClaimHandled");
		
		UUI_Screen_CareerProgression_C_HandleCareerProgressionRewardClaimHandled_Params params {};
		params.goalId = goalId;
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnNavigationEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePad_Button                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::OnNavigationEvent(EUI_MenuActions GamePad_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.OnNavigationEvent");
		
		UUI_Screen_CareerProgression_C_OnNavigationEvent_Params params {};
		params.GamePad_Button = GamePad_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.ExecuteUbergraph_UI_Screen_CareerProgression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Screen_CareerProgression_C::ExecuteUbergraph_UI_Screen_CareerProgression(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Screen_CareerProgression.UI_Screen_CareerProgression_C.ExecuteUbergraph_UI_Screen_CareerProgression");
		
		UUI_Screen_CareerProgression_C_ExecuteUbergraph_UI_Screen_CareerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Screen_CareerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Screen_CareerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Screen_CareerProgression.UI_Screen_CareerProgression_C");
		return ptr;
	}

}


