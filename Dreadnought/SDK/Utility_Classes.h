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
	 * BlueprintGeneratedClass Utility.Utility_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUtility_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetNotificationButtonLabel(ENotificationButtonType ButtonType, class UObject* __WorldContext, class FText* ButtonLabel);
		void STATIC_GetNotificationButtonColor(ENotificationButtonType ButtonType, class UObject* __WorldContext, struct FLinearColor* ButtonColor);
		void STATIC_GetFrontEndHUD(class UObject* __WorldContext, class AUI_FrontEnd_C** AsUIFrontEnd);
		void STATIC_SetButtonHints(TArray<struct FLegendPromptData>* legend, class UObject* __WorldContext);
		void STATIC_GetMaxScrollSpeed(class UObject* __WorldContext, float* MaxScrollSpeed);
		void STATIC_HandleScrollDeceleration(float CurrentScrollSpeed, float DeltaTime, class UObject* __WorldContext, float* DecelaratedScrollSpeed);
		void STATIC_AbbreviateNumber(int32_t RawNumber, class UObject* __WorldContext, class FText* FormattedNumber);
		void STATIC_TruncateText(const class FText& Text, int32_t CharacterCount, class UObject* __WorldContext, class FText* TruncatedText);
		void STATIC_ScrollText(class UScrollBox* ScrollBoxWidget, float ScrollSpeedFloat, bool ScrollUp, class UObject* __WorldContext);
		void STATIC_ToggleButtonHighlight(class UButton* Button, class UObject* __WorldContext);
		void STATIC_GetFocusedBGColor(class UObject* __WorldContext, struct FLinearColor* FocusedColor);
		void STATIC_GetUnfocusedBGColor(class UObject* __WorldContext, struct FLinearColor* UnfocusedColor);
		void STATIC_GetTierIconTexture(int32_t tier, class UObject* __WorldContext, class UTexture2D** Texture);
		void STATIC_GetTierColor(int32_t tier, bool IsHero, class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_ToggleButtonGenericHighlight(class UUI_Button_Generic_C* Button, bool IsFocused, class UObject* __WorldContext);
		void STATIC_GetUpIndex_Wrapping(int32_t CurrentIndex, int32_t NumColumns, int32_t listLength, class UObject* __WorldContext, int32_t* Out);
		void STATIC_GetCurrentRow(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* Row);
		void STATIC_GetCurrentColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* column);
		void STATIC_GetDownIndex_Wrapping(int32_t listLength, int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextIndex);
		void STATIC_GetRightIndex_Wrapping(int32_t listLength, int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextIndex);
		void STATIC_GetLeftIndex_Wrapping(int32_t CurrentIndex, int32_t NumColumns, int32_t listLength, class UObject* __WorldContext, int32_t* index);
		void STATIC_GetPreviousColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* PreviousColumn);
		void STATIC_GetNextColumn(int32_t CurrentIndex, int32_t NumColumns, class UObject* __WorldContext, int32_t* NextColumn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
