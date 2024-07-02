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
	 * 		Name   -> Function Utility.Utility_C.GetNotificationButtonLabel
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ENotificationButtonType                            ButtonType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ButtonLabel                                                (Parm, OutParm)
	 */
	void UUtility_C::STATIC_GetNotificationButtonLabel(ENotificationButtonType ButtonType, class UObject* __WorldContext, class FText* ButtonLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetNotificationButtonLabel");
		
		UUtility_C_GetNotificationButtonLabel_Params params {};
		params.ButtonType = ButtonType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonLabel != nullptr)
			*ButtonLabel = params.ButtonLabel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetNotificationButtonColor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ENotificationButtonType                            ButtonType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                ButtonColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetNotificationButtonColor(ENotificationButtonType ButtonType, class UObject* __WorldContext, struct FLinearColor* ButtonColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetNotificationButtonColor");
		
		UUtility_C_GetNotificationButtonColor_Params params {};
		params.ButtonType = ButtonType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonColor != nullptr)
			*ButtonColor = params.ButtonColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetFrontEndHUD
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AUI_FrontEnd_C*                              AsUIFrontEnd                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetFrontEndHUD(class UObject* __WorldContext, class AUI_FrontEnd_C** AsUIFrontEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetFrontEndHUD");
		
		UUtility_C_GetFrontEndHUD_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUIFrontEnd != nullptr)
			*AsUIFrontEnd = params.AsUIFrontEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.SetButtonHints
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLegendPromptData>                   legend                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_SetButtonHints(TArray<struct FLegendPromptData>* legend, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.SetButtonHints");
		
		UUtility_C_SetButtonHints_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (legend != nullptr)
			*legend = params.legend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetMaxScrollSpeed
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxScrollSpeed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetMaxScrollSpeed(class UObject* __WorldContext, float* MaxScrollSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetMaxScrollSpeed");
		
		UUtility_C_GetMaxScrollSpeed_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxScrollSpeed != nullptr)
			*MaxScrollSpeed = params.MaxScrollSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.HandleScrollDeceleration
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentScrollSpeed                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DecelaratedScrollSpeed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_HandleScrollDeceleration(float CurrentScrollSpeed, float DeltaTime, class UObject* __WorldContext, float* DecelaratedScrollSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.HandleScrollDeceleration");
		
		UUtility_C_HandleScrollDeceleration_Params params {};
		params.CurrentScrollSpeed = CurrentScrollSpeed;
		params.DeltaTime = DeltaTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DecelaratedScrollSpeed != nullptr)
			*DecelaratedScrollSpeed = params.DecelaratedScrollSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.AbbreviateNumber
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RawNumber                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        FormattedNumber                                            (Parm, OutParm)
	 */
	void UUtility_C::STATIC_AbbreviateNumber(int32_t RawNumber, class UObject* __WorldContext, class FText* FormattedNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.AbbreviateNumber");
		
		UUtility_C_AbbreviateNumber_Params params {};
		params.RawNumber = RawNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FormattedNumber != nullptr)
			*FormattedNumber = params.FormattedNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.TruncateText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm)
	 * 		int32_t                                            CharacterCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        TruncatedText                                              (Parm, OutParm)
	 */
	void UUtility_C::STATIC_TruncateText(const class FText& Text, int32_t CharacterCount, class UObject* __WorldContext, class FText* TruncatedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.TruncateText");
		
		UUtility_C_TruncateText_Params params {};
		params.Text = Text;
		params.CharacterCount = CharacterCount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TruncatedText != nullptr)
			*TruncatedText = params.TruncatedText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.ScrollText
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBoxWidget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScrollSpeedFloat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ScrollUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_ScrollText(class UScrollBox* ScrollBoxWidget, float ScrollSpeedFloat, bool ScrollUp, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.ScrollText");
		
		UUtility_C_ScrollText_Params params {};
		params.ScrollBoxWidget = ScrollBoxWidget;
		params.ScrollSpeedFloat = ScrollSpeedFloat;
		params.ScrollUp = ScrollUp;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.ToggleButtonHighlight
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_ToggleButtonHighlight(class UButton* Button, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.ToggleButtonHighlight");
		
		UUtility_C_ToggleButtonHighlight_Params params {};
		params.Button = Button;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetFocusedBGColor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                FocusedColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetFocusedBGColor(class UObject* __WorldContext, struct FLinearColor* FocusedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetFocusedBGColor");
		
		UUtility_C_GetFocusedBGColor_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusedColor != nullptr)
			*FocusedColor = params.FocusedColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetUnfocusedBGColor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                UnfocusedColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetUnfocusedBGColor(class UObject* __WorldContext, struct FLinearColor* UnfocusedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetUnfocusedBGColor");
		
		UUtility_C_GetUnfocusedBGColor_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnfocusedColor != nullptr)
			*UnfocusedColor = params.UnfocusedColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetTierIconTexture
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetTierIconTexture(int32_t tier, class UObject* __WorldContext, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetTierIconTexture");
		
		UUtility_C_GetTierIconTexture_Params params {};
		params.tier = tier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetTierColor
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHero                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetTierColor(int32_t tier, bool IsHero, class UObject* __WorldContext, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetTierColor");
		
		UUtility_C_GetTierColor_Params params {};
		params.tier = tier;
		params.IsHero = IsHero;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.ToggleButtonGenericHighlight
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_Generic_C*                        Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFocused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_ToggleButtonGenericHighlight(class UUI_Button_Generic_C* Button, bool IsFocused, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.ToggleButtonGenericHighlight");
		
		UUtility_C_ToggleButtonGenericHighlight_Params params {};
		params.Button = Button;
		params.IsFocused = IsFocused;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetUpIndex_Wrapping
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetUpIndex_Wrapping(int32_t CurrentIndex, int32_t NumColumns, int32_t listLength, class UObject* __WorldContext, int32_t* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetUpIndex_Wrapping");
		
		UUtility_C_GetUpIndex_Wrapping_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.listLength = listLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetCurrentRow
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Row                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetCurrentRow(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetCurrentRow");
		
		UUtility_C_GetCurrentRow_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Row != nullptr)
			*Row = params.Row;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetCurrentColumn
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            column                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetCurrentColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetCurrentColumn");
		
		UUtility_C_GetCurrentColumn_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (column != nullptr)
			*column = params.column;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetDownIndex_Wrapping
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            listLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetDownIndex_Wrapping(int32_t listLength, int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetDownIndex_Wrapping");
		
		UUtility_C_GetDownIndex_Wrapping_Params params {};
		params.listLength = listLength;
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextIndex != nullptr)
			*NextIndex = params.NextIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetRightIndex_Wrapping
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            listLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetRightIndex_Wrapping(int32_t listLength, int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetRightIndex_Wrapping");
		
		UUtility_C_GetRightIndex_Wrapping_Params params {};
		params.listLength = listLength;
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextIndex != nullptr)
			*NextIndex = params.NextIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetLeftIndex_Wrapping
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetLeftIndex_Wrapping(int32_t CurrentIndex, int32_t NumColumns, int32_t listLength, class UObject* __WorldContext, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetLeftIndex_Wrapping");
		
		UUtility_C_GetLeftIndex_Wrapping_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.listLength = listLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetPreviousColumn
	 * 		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PreviousColumn                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetPreviousColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* PreviousColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetPreviousColumn");
		
		UUtility_C_GetPreviousColumn_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreviousColumn != nullptr)
			*PreviousColumn = params.PreviousColumn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function Utility.Utility_C.GetNextColumn
	 * 		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumColumns                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextColumn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUtility_C::STATIC_GetNextColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Utility.Utility_C.GetNextColumn");
		
		UUtility_C_GetNextColumn_Params params {};
		params.CurrentIndex = CurrentIndex;
		params.NumColumns = NumColumns;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextColumn != nullptr)
			*NextColumn = params.NextColumn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUtility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUtility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Utility.Utility_C");
		return ptr;
	}

}


