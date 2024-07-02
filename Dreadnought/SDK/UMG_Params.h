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
	 * Function UMG.Widget.SetVisibility
	 */
	struct UWidget_SetVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetUserFocus
	 */
	struct UWidget_SetUserFocus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetToolTipText
	 */
	struct UWidget_SetToolTipText_Params
	{
	public:
		class FText                                                InToolTipText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetToolTip
	 */
	struct UWidget_SetToolTip_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderTranslation
	 */
	struct UWidget_SetRenderTranslation_Params
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderTransformPivot
	 */
	struct UWidget_SetRenderTransformPivot_Params
	{
	public:
		struct FVector2D                                           Pivot;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderTransform
	 */
	struct UWidget_SetRenderTransform_Params
	{
	public:
		struct FWidgetTransform                                    InTransform;                                             // 0x0000(0x001C)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderShear
	 */
	struct UWidget_SetRenderShear_Params
	{
	public:
		struct FVector2D                                           Shear;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderScale
	 */
	struct UWidget_SetRenderScale_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetRenderAngle
	 */
	struct UWidget_SetRenderAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetKeyboardFocus
	 */
	struct UWidget_SetKeyboardFocus_Params
	{	};

	/**
	 * Function UMG.Widget.SetIsEnabled
	 */
	struct UWidget_SetIsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.SetCursor
	 */
	struct UWidget_SetCursor_Params
	{
	public:
		EMouseCursor                                               InCursor;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.ResetCursor
	 */
	struct UWidget_ResetCursor_Params
	{	};

	/**
	 * Function UMG.Widget.RemoveFromParent
	 */
	struct UWidget_RemoveFromParent_Params
	{	};

	/**
	 * DelegateFunction UMG.Widget.OnReply__DelegateSignature
	 */
	struct UWidget_OnReply__DelegateSignature_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	 */
	struct UWidget_OnPointerEvent__DelegateSignature_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KV3H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.IsVisible
	 */
	struct UWidget_IsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.IsHovered
	 */
	struct UWidget_IsHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.InvalidateLayoutAndVolatility
	 */
	struct UWidget_InvalidateLayoutAndVolatility_Params
	{	};

	/**
	 * Function UMG.Widget.HasUserFocusedDescendants
	 */
	struct UWidget_HasUserFocusedDescendants_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.HasUserFocus
	 */
	struct UWidget_HasUserFocus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.HasMouseCapture
	 */
	struct UWidget_HasMouseCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.HasKeyboardFocus
	 */
	struct UWidget_HasKeyboardFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.HasFocusedDescendants
	 */
	struct UWidget_HasFocusedDescendants_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.HasAnyUserFocus
	 */
	struct UWidget_HasAnyUserFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	 */
	struct UWidget_GetWidget__DelegateSignature_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.GetVisibility
	 */
	struct UWidget_GetVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetText__DelegateSignature
	 */
	struct UWidget_GetText__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	 */
	struct UWidget_GetSlateVisibility__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	 */
	struct UWidget_GetSlateColor__DelegateSignature_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	 */
	struct UWidget_GetSlateBrush__DelegateSignature_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.GetParent
	 */
	struct UWidget_GetParent_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	 */
	struct UWidget_GetMouseCursor__DelegateSignature_Params
	{
	public:
		EMouseCursor                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	 */
	struct UWidget_GetLinearColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.GetIsEnabled
	 */
	struct UWidget_GetIsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	 */
	struct UWidget_GetInt32__DelegateSignature_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	 */
	struct UWidget_GetFloat__DelegateSignature_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.GetDesiredSize
	 */
	struct UWidget_GetDesiredSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	 */
	struct UWidget_GetCheckBoxState__DelegateSignature_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GetBool__DelegateSignature
	 */
	struct UWidget_GetBool__DelegateSignature_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForString__DelegateSignature_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	 */
	struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.ForceVolatile
	 */
	struct UWidget_ForceVolatile_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Widget.ForceLayoutPrepass
	 */
	struct UWidget_ForceLayoutPrepass_Params
	{	};

	/**
	 * Function UMG.UserWidget.UnregisterInputComponent
	 */
	struct UUserWidget_UnregisterInputComponent_Params
	{	};

	/**
	 * Function UMG.UserWidget.Tick
	 */
	struct UUserWidget_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.StopListeningForInputAction
	 */
	struct UUserWidget_StopListeningForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.StopListeningForAllInputActions
	 */
	struct UUserWidget_StopListeningForAllInputActions_Params
	{	};

	/**
	 * Function UMG.UserWidget.StopAnimation
	 */
	struct UUserWidget_StopAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetPositionInViewport
	 */
	struct UUserWidget_SetPositionInViewport_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bRemoveDPIScale;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetPlaybackSpeed
	 */
	struct UUserWidget_SetPlaybackSpeed_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlaybackSpeed;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetPadding
	 */
	struct UUserWidget_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetOwningLocalPlayer
	 */
	struct UUserWidget_SetOwningLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetNumLoopsToPlay
	 */
	struct UUserWidget_SetNumLoopsToPlay_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetInputActionPriority
	 */
	struct UUserWidget_SetInputActionPriority_Params
	{
	public:
		int32_t                                                    NewPriority;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetInputActionBlocking
	 */
	struct UUserWidget_SetInputActionBlocking_Params
	{
	public:
		bool                                                       bShouldBlock;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetForegroundColor
	 */
	struct UUserWidget_SetForegroundColor_Params
	{
	public:
		struct FSlateColor                                         InForegroundColor;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetDesiredSizeInViewport
	 */
	struct UUserWidget_SetDesiredSizeInViewport_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetColorAndOpacity
	 */
	struct UUserWidget_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetAnchorsInViewport
	 */
	struct UUserWidget_SetAnchorsInViewport_Params
	{
	public:
		struct FAnchors                                            Anchors;                                                 // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.SetAlignmentInViewport
	 */
	struct UUserWidget_SetAlignmentInViewport_Params
	{
	public:
		struct FVector2D                                           Alignment;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.ReverseAnimation
	 */
	struct UUserWidget_ReverseAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.RemoveFromViewport
	 */
	struct UUserWidget_RemoveFromViewport_Params
	{	};

	/**
	 * Function UMG.UserWidget.RegisterInputComponent
	 */
	struct UUserWidget_RegisterInputComponent_Params
	{	};

	/**
	 * Function UMG.UserWidget.PreConstruct
	 */
	struct UUserWidget_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.PlaySound
	 */
	struct UUserWidget_PlaySound_Params
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.PlayAnimationTo
	 */
	struct UUserWidget_PlayAnimationTo_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAtTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAtTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M8H4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlaybackSpeed;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.PlayAnimation
	 */
	struct UUserWidget_PlayAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAtTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumLoopsToPlay;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUMGSequencePlayMode                                       PlayMode;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRTV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlaybackSpeed;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.PauseAnimation
	 */
	struct UUserWidget_PauseAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnTouchStarted
	 */
	struct UUserWidget_OnTouchStarted_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B2DW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnTouchMoved
	 */
	struct UUserWidget_OnTouchMoved_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WX4O[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnTouchGesture
	 */
	struct UUserWidget_OnTouchGesture_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HJ1Y[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       GestureEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnTouchEnded
	 */
	struct UUserWidget_OnTouchEnded_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EPET[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnPreviewMouseButtonDown
	 */
	struct UUserWidget_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XDVG[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnPreviewKeyDown
	 */
	struct UUserWidget_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MMNM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnPaint
	 */
	struct UUserWidget_OnPaint_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseWheel
	 */
	struct UUserWidget_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RM7Q[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseMove
	 */
	struct UUserWidget_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7DP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseLeave
	 */
	struct UUserWidget_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseEnter
	 */
	struct UUserWidget_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8PL5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonUp
	 */
	struct UUserWidget_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VLOF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDown
	 */
	struct UUserWidget_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5P1P[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMouseButtonDoubleClick
	 */
	struct UUserWidget_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z4M4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnMotionDetected
	 */
	struct UUserWidget_OnMotionDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OXBR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMotionEvent                                        InMotionEvent;                                           // 0x0038(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0088(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnKeyUp
	 */
	struct UUserWidget_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WZ8S[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnKeyDown
	 */
	struct UUserWidget_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SPTF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnKeyChar
	 */
	struct UUserWidget_OnKeyChar_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EG7F[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharacterEvent                                     InCharacterEvent;                                        // 0x0038(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0060(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnFocusReceived
	 */
	struct UUserWidget_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7CWD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnFocusLost
	 */
	struct UUserWidget_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDrop
	 */
	struct UUserWidget_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S5LY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDragOver
	 */
	struct UUserWidget_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IWNC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDragLeave
	 */
	struct UUserWidget_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDragEnter
	 */
	struct UUserWidget_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I69S[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (Parm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDragDetected
	 */
	struct UUserWidget_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8JSK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnDragCancelled
	 */
	struct UUserWidget_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnControllerButtonReleased
	 */
	struct UUserWidget_OnControllerButtonReleased_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6DM5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnControllerButtonPressed
	 */
	struct UUserWidget_OnControllerButtonPressed_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MNEE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnControllerAnalogValueChanged
	 */
	struct UUserWidget_OnControllerAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7CN3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnAnimationStarted
	 */
	struct UUserWidget_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnAnimationFinished
	 */
	struct UUserWidget_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.OnAnalogValueChanged
	 */
	struct UUserWidget_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XFI[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0080(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.ListenForInputAction
	 */
	struct UUserWidget_ListenForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConsume;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IYZU[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsPlayingAnimation
	 */
	struct UUserWidget_IsPlayingAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsListeningForInputAction
	 */
	struct UUserWidget_IsListeningForInputAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsInViewport
	 */
	struct UUserWidget_IsInViewport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsInteractable
	 */
	struct UUserWidget_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsAnyAnimationPlaying
	 */
	struct UUserWidget_IsAnyAnimationPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.IsAnimationPlaying
	 */
	struct UUserWidget_IsAnimationPlaying_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayerPawn
	 */
	struct UUserWidget_GetOwningPlayerPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetOwningPlayer
	 */
	struct UUserWidget_GetOwningPlayer_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetOwningLocalPlayer
	 */
	struct UUserWidget_GetOwningLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetIsVisible
	 */
	struct UUserWidget_GetIsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetAnimationCurrentTime
	 */
	struct UUserWidget_GetAnimationCurrentTime_Params
	{
	public:
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetAnchorsInViewport
	 */
	struct UUserWidget_GetAnchorsInViewport_Params
	{
	public:
		struct FAnchors                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.GetAlignmentInViewport
	 */
	struct UUserWidget_GetAlignmentInViewport_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.Destruct
	 */
	struct UUserWidget_Destruct_Params
	{	};

	/**
	 * Function UMG.UserWidget.Construct
	 */
	struct UUserWidget_Construct_Params
	{	};

	/**
	 * Function UMG.UserWidget.AddToViewport
	 */
	struct UUserWidget_AddToViewport_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UserWidget.AddToPlayerScreen
	 */
	struct UUserWidget_AddToPlayerScreen_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.UnlockMouse
	 */
	struct UWidgetBlueprintLibrary_UnlockMouse_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Unhandled
	 */
	struct UWidgetBlueprintLibrary_Unhandled_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetUserFocus
	 */
	struct UWidgetBlueprintLibrary_SetUserFocus_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             FocusWidget;                                             // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAllUsers;                                             // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V2HU[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetMousePosition
	 */
	struct UWidgetBlueprintLibrary_SetMousePosition_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           NewMousePosition;                                        // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             InWidgetToFocus;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMouseLockMode                                             InMouseLockMode;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	 */
	struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
	{
	public:
		class APlayerController*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             InWidgetToFocus;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMouseLockMode                                             InMouseLockMode;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHideCursorDuringCapture;                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	 */
	struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
	{	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	 */
	struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          Texture;                                                 // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	 */
	struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  Material;                                                // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	 */
	struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	 */
	struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInAllJoysticks;                                         // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZTF2[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	 */
	struct UWidgetBlueprintLibrary_NoResourceBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	 */
	struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    BrushAsset;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0008(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.LockMouse
	 */
	struct UWidgetBlueprintLibrary_LockMouse_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             CapturingWidget;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.IsDragDropping
	 */
	struct UWidgetBlueprintLibrary_IsDragDropping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Handled
	 */
	struct UWidgetBlueprintLibrary_Handled_Params
	{
	public:
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	 */
	struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           SafePadding;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           SafePaddingScale;                                        // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           SpillOverPadding;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	 */
	struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
	{
	public:
		struct FAnalogInputEvent                                   Event;                                                   // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FKeyEvent                                           ReturnValue;                                             // 0x0048(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	 */
	struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
	{
	public:
		struct FPointerEvent                                       Event;                                                   // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputEvent                                         ReturnValue;                                             // 0x0078(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	 */
	struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
	{
	public:
		struct FNavigationEvent                                    Event;                                                   // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputEvent                                         ReturnValue;                                             // 0x0028(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	 */
	struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
	{
	public:
		struct FKeyEvent                                           Event;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputEvent                                         ReturnValue;                                             // 0x0040(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
	 */
	struct UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params
	{
	public:
		struct FControllerEvent                                    Event;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputEvent                                         ReturnValue;                                             // 0x0040(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	 */
	struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
	{
	public:
		struct FCharacterEvent                                     Event;                                                   // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInputEvent                                         ReturnValue;                                             // 0x0028(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	 */
	struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	 */
	struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
	{
	public:
		class UDragDropOperation*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	 */
	struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	 */
	struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetBrushResource
	 */
	struct UWidgetBlueprintLibrary_GetBrushResource_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0090)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	 */
	struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Interface;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UUserWidget*>                                 FoundWidgets;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	 */
	struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UUserWidget*>                                 FoundWidgets;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UClass*                                              WidgetClass;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopLevelOnly;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.EndDragDrop
	 */
	struct UWidgetBlueprintLibrary_EndDragDrop_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	 */
	struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                Text;                                                    // 0x0030(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           Position;                                                // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UFont*                                               Font;                                                    // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FontSize;                                                // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KZHZ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                FontTypeFace;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Tint;                                                    // 0x0068(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawText
	 */
	struct UWidgetBlueprintLibrary_DrawText_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              inString;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Position;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Tint;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawLines
	 */
	struct UWidgetBlueprintLibrary_DrawLines_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   Points;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Tint;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAntiAlias;                                              // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawLine
	 */
	struct UWidgetBlueprintLibrary_DrawLine_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           PositionA;                                               // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           PositionB;                                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Tint;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAntiAlias;                                              // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DrawBox
	 */
	struct UWidgetBlueprintLibrary_DrawBox_Params
	{
	public:
		struct FPaintContext                                       context;                                                 // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector2D                                           Position;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           Size;                                                    // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class USlateBrushAsset*                                    Brush;                                                   // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Tint;                                                    // 0x0048(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	 */
	struct UWidgetBlueprintLibrary_DismissAllMenus_Params
	{	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	 */
	struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             WidgetDetectingDrag;                                     // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                DragKey;                                                 // 0x0080(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0098(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.DetectDrag
	 */
	struct UWidgetBlueprintLibrary_DetectDrag_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             WidgetDetectingDrag;                                     // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                DragKey;                                                 // 0x00B0(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00C8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	 */
	struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
	{
	public:
		class UClass*                                              OperationClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropOperation*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.Create
	 */
	struct UWidgetBlueprintLibrary_Create_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              widgetType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	 */
	struct UWidgetBlueprintLibrary_ClearUserFocus_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bInAllUsers;                                             // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YC1F[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CaptureMouse
	 */
	struct UWidgetBlueprintLibrary_CaptureMouse_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             CapturingWidget;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	 */
	struct UWidgetBlueprintLibrary_CaptureJoystick_Params
	{
	public:
		struct FEventReply                                         Reply;                                                   // 0x0000(0x00A8)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWidget*                                             CapturingWidget;                                         // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInAllJoysticks;                                         // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z26A[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x00B8(0x00A8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	 */
	struct UWidgetBlueprintLibrary_CancelDragDrop_Params
	{	};

	/**
	 * Function UMG.PanelWidget.RemoveChildAt
	 */
	struct UPanelWidget_RemoveChildAt_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.RemoveChild
	 */
	struct UPanelWidget_RemoveChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.HasChild
	 */
	struct UPanelWidget_HasChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.HasAnyChildren
	 */
	struct UPanelWidget_HasAnyChildren_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.GetChildrenCount
	 */
	struct UPanelWidget_GetChildrenCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.GetChildIndex
	 */
	struct UPanelWidget_GetChildIndex_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.GetChildAt
	 */
	struct UPanelWidget_GetChildAt_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5HQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.PanelWidget.ClearChildren
	 */
	struct UPanelWidget_ClearChildren_Params
	{	};

	/**
	 * Function UMG.PanelWidget.AddChild
	 */
	struct UPanelWidget_AddChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBox.SetScrollOffset
	 */
	struct UScrollBox_SetScrollOffset_Params
	{
	public:
		float                                                      NewScrollOffset;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBox.ScrollWidgetIntoView
	 */
	struct UScrollBox_ScrollWidgetIntoView_Params
	{
	public:
		class UWidget*                                             WidgetToFind;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AnimateScroll;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBox.ScrollToStart
	 */
	struct UScrollBox_ScrollToStart_Params
	{	};

	/**
	 * Function UMG.ScrollBox.ScrollToEnd
	 */
	struct UScrollBox_ScrollToEnd_Params
	{	};

	/**
	 * Function UMG.ScrollBox.GetScrollOffset
	 */
	struct UScrollBox_GetScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.AsyncTaskDownloadImage.DownloadImage
	 */
	struct UAsyncTaskDownloadImage_DownloadImage_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncTaskDownloadImage*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.DragDropOperation.Drop
	 */
	struct UDragDropOperation_Drop_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.DragDropOperation.Dragged
	 */
	struct UDragDropOperation_Dragged_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.DragDropOperation.DragCancelled
	 */
	struct UDragDropOperation_DragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.BoolBinding.GetValue
	 */
	struct UBoolBinding_GetValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.BrushBinding.GetValue
	 */
	struct UBrushBinding_GetValue_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckedStateBinding.GetValue
	 */
	struct UCheckedStateBinding_GetValue_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ColorBinding.GetSlateValue
	 */
	struct UColorBinding_GetSlateValue_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ColorBinding.GetLinearValue
	 */
	struct UColorBinding_GetLinearValue_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.FloatBinding.GetValue
	 */
	struct UFloatBinding_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Int32Binding.GetValue
	 */
	struct UInt32Binding_GetValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MouseCursorBinding.GetValue
	 */
	struct UMouseCursorBinding_GetValue_Params
	{
	public:
		EMouseCursor                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBinding.GetTextValue
	 */
	struct UTextBinding_GetTextValue_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBinding.GetStringValue
	 */
	struct UTextBinding_GetStringValue_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VisibilityBinding.GetValue
	 */
	struct UVisibilityBinding_GetValue_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetBinding.GetValue
	 */
	struct UWidgetBinding_GetValue_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.LocalToViewport
	 */
	struct USlateBlueprintLibrary_LocalToViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGeometry                                           Geometry;                                                // 0x0008(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalCoordinate;                                         // 0x003C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           PixelPosition;                                           // 0x0044(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x004C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	 */
	struct USlateBlueprintLibrary_LocalToAbsolute_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           LocalCoordinate;                                         // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.IsUnderLocation
	 */
	struct USlateBlueprintLibrary_IsUnderLocation_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0034(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.GetLocalSize
	 */
	struct USlateBlueprintLibrary_GetLocalSize_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	 */
	struct USlateBlueprintLibrary_AbsoluteToViewport_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteDesktopCoordinate;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           PixelPosition;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ViewportPosition;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	 */
	struct USlateBlueprintLibrary_AbsoluteToLocal_Params
	{
	public:
		struct FGeometry                                           Geometry;                                                // 0x0000(0x0034)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsoluteCoordinate;                                      // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.BorderSlot.SetVerticalAlignment
	 */
	struct UBorderSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.BorderSlot.SetPadding
	 */
	struct UBorderSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.BorderSlot.SetHorizontalAlignment
	 */
	struct UBorderSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ButtonSlot.SetVerticalAlignment
	 */
	struct UButtonSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ButtonSlot.SetPadding
	 */
	struct UButtonSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ButtonSlot.SetHorizontalAlignment
	 */
	struct UButtonSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetZOrder
	 */
	struct UCanvasPanelSlot_SetZOrder_Params
	{
	public:
		int32_t                                                    InZOrder;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetSize
	 */
	struct UCanvasPanelSlot_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetPosition
	 */
	struct UCanvasPanelSlot_SetPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetOffsets
	 */
	struct UCanvasPanelSlot_SetOffsets_Params
	{
	public:
		struct FMargin                                             InOffset;                                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetMinimum
	 */
	struct UCanvasPanelSlot_SetMinimum_Params
	{
	public:
		struct FVector2D                                           InMinimumAnchors;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetMaximum
	 */
	struct UCanvasPanelSlot_SetMaximum_Params
	{
	public:
		struct FVector2D                                           InMaximumAnchors;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetLayout
	 */
	struct UCanvasPanelSlot_SetLayout_Params
	{
	public:
		struct FAnchorData                                         InLayoutData;                                            // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAutoSize
	 */
	struct UCanvasPanelSlot_SetAutoSize_Params
	{
	public:
		bool                                                       InbAutoSize;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAnchors
	 */
	struct UCanvasPanelSlot_SetAnchors_Params
	{
	public:
		struct FAnchors                                            InAnchors;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.SetAlignment
	 */
	struct UCanvasPanelSlot_SetAlignment_Params
	{
	public:
		struct FVector2D                                           InAlignment;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetZOrder
	 */
	struct UCanvasPanelSlot_GetZOrder_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetSize
	 */
	struct UCanvasPanelSlot_GetSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetPosition
	 */
	struct UCanvasPanelSlot_GetPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetOffsets
	 */
	struct UCanvasPanelSlot_GetOffsets_Params
	{
	public:
		struct FMargin                                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetLayout
	 */
	struct UCanvasPanelSlot_GetLayout_Params
	{
	public:
		struct FAnchorData                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetAutoSize
	 */
	struct UCanvasPanelSlot_GetAutoSize_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetAnchors
	 */
	struct UCanvasPanelSlot_GetAnchors_Params
	{
	public:
		struct FAnchors                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanelSlot.GetAlignment
	 */
	struct UCanvasPanelSlot_GetAlignment_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetVerticalAlignment
	 */
	struct UGridSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetRowSpan
	 */
	struct UGridSlot_SetRowSpan_Params
	{
	public:
		int32_t                                                    InRowSpan;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetRow
	 */
	struct UGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetPadding
	 */
	struct UGridSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetLayer
	 */
	struct UGridSlot_SetLayer_Params
	{
	public:
		int32_t                                                    InLayer;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetHorizontalAlignment
	 */
	struct UGridSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetColumnSpan
	 */
	struct UGridSlot_SetColumnSpan_Params
	{
	public:
		int32_t                                                    InColumnSpan;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridSlot.SetColumn
	 */
	struct UGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	 */
	struct UHorizontalBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetSize
	 */
	struct UHorizontalBoxSlot_SetSize_Params
	{
	public:
		struct FSlateChildSize                                     InSize;                                                  // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetPadding
	 */
	struct UHorizontalBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	 */
	struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.OverlaySlot.SetVerticalAlignment
	 */
	struct UOverlaySlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.OverlaySlot.SetPadding
	 */
	struct UOverlaySlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.OverlaySlot.SetHorizontalAlignment
	 */
	struct UOverlaySlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetVerticalAlignment
	 */
	struct UScaleBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetPadding
	 */
	struct UScaleBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	 */
	struct UScaleBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBoxSlot.SetPadding
	 */
	struct UScrollBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	 */
	struct UScrollBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetVerticalAlignment
	 */
	struct USizeBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetPadding
	 */
	struct USizeBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBoxSlot.SetHorizontalAlignment
	 */
	struct USizeBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridSlot.SetVerticalAlignment
	 */
	struct UUniformGridSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridSlot.SetRow
	 */
	struct UUniformGridSlot_SetRow_Params
	{
	public:
		int32_t                                                    InRow;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridSlot.SetHorizontalAlignment
	 */
	struct UUniformGridSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridSlot.SetColumn
	 */
	struct UUniformGridSlot_SetColumn_Params
	{
	public:
		int32_t                                                    InColumn;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetVerticalAlignment
	 */
	struct UVerticalBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetSize
	 */
	struct UVerticalBoxSlot_SetSize_Params
	{
	public:
		struct FSlateChildSize                                     InSize;                                                  // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetPadding
	 */
	struct UVerticalBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	 */
	struct UVerticalBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	 */
	struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetPadding
	 */
	struct UWidgetSwitcherSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	 */
	struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBoxSlot.SetVerticalAlignment
	 */
	struct UWrapBoxSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBoxSlot.SetPadding
	 */
	struct UWrapBoxSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBoxSlot.SetHorizontalAlignment
	 */
	struct UWrapBoxSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	 */
	struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
	{
	public:
		float                                                      InFillSpanWhenLessThan;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBoxSlot.SetFillEmptySpace
	 */
	struct UWrapBoxSlot_SetFillEmptySpace_Params
	{
	public:
		bool                                                       InbFillEmptySpace;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CircularThrobber.SetRadius
	 */
	struct UCircularThrobber_SetRadius_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CircularThrobber.SetPeriod
	 */
	struct UCircularThrobber_SetPeriod_Params
	{
	public:
		float                                                      InPeriod;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CircularThrobber.SetNumberOfPieces
	 */
	struct UCircularThrobber_SetNumberOfPieces_Params
	{
	public:
		int32_t                                                    InNumberOfPieces;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.SetSelectedOption
	 */
	struct UComboBoxString_SetSelectedOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.RemoveOption
	 */
	struct UComboBoxString_RemoveOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.RefreshOptions
	 */
	struct UComboBoxString_RefreshOptions_Params
	{	};

	/**
	 * DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	 */
	struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	 */
	struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.GetSelectedOption
	 */
	struct UComboBoxString_GetSelectedOption_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.GetOptionCount
	 */
	struct UComboBoxString_GetOptionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.GetOptionAtIndex
	 */
	struct UComboBoxString_GetOptionAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BKZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.FindOptionIndex
	 */
	struct UComboBoxString_FindOptionIndex_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString.ClearSelection
	 */
	struct UComboBoxString_ClearSelection_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.ClearOptions
	 */
	struct UComboBoxString_ClearOptions_Params
	{	};

	/**
	 * Function UMG.ComboBoxString.AddOption
	 */
	struct UComboBoxString_AddOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.SetSelectedOptionByIndex
	 */
	struct UComboBoxString6ft_SetSelectedOptionByIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.SetSelectedOption
	 */
	struct UComboBoxString6ft_SetSelectedOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.RemoveOption
	 */
	struct UComboBoxString6ft_RemoveOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.RefreshOptions
	 */
	struct UComboBoxString6ft_RefreshOptions_Params
	{	};

	/**
	 * Function UMG.ComboBoxString6ft.OpenOptionsList
	 */
	struct UComboBoxString6ft_OpenOptionsList_Params
	{	};

	/**
	 * DelegateFunction UMG.ComboBoxString6ft.OnSelectionChangedEvent__DelegateSignature
	 */
	struct UComboBoxString6ft_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.ComboBoxString6ft.OnOpeningEvent__DelegateSignature
	 */
	struct UComboBoxString6ft_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.ComboBoxString6ft.IsOptionsListOpen
	 */
	struct UComboBoxString6ft_IsOptionsListOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.IncrementSelectionIndex
	 */
	struct UComboBoxString6ft_IncrementSelectionIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.GetSelectedOption
	 */
	struct UComboBoxString6ft_GetSelectedOption_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.GetOptionCount
	 */
	struct UComboBoxString6ft_GetOptionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.GetOptionAtIndex
	 */
	struct UComboBoxString6ft_GetOptionAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ZA6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.GetIndexOfSelectedOption
	 */
	struct UComboBoxString6ft_GetIndexOfSelectedOption_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.FindOptionIndex
	 */
	struct UComboBoxString6ft_FindOptionIndex_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.DecrementSelectionIndex
	 */
	struct UComboBoxString6ft_DecrementSelectionIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ComboBoxString6ft.CollapseOptionsList
	 */
	struct UComboBoxString6ft_CollapseOptionsList_Params
	{	};

	/**
	 * Function UMG.ComboBoxString6ft.ClearSelection
	 */
	struct UComboBoxString6ft_ClearSelection_Params
	{	};

	/**
	 * Function UMG.ComboBoxString6ft.ClearOptions
	 */
	struct UComboBoxString6ft_ClearOptions_Params
	{	};

	/**
	 * Function UMG.ComboBoxString6ft.AddOption
	 */
	struct UComboBoxString6ft_AddOption_Params
	{
	public:
		class FString                                              option;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableText.SetText
	 */
	struct UEditableText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableText.SetIsReadOnly
	 */
	struct UEditableText_SetIsReadOnly_Params
	{
	public:
		bool                                                       InbIsReadyOnly;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableText.SetIsPassword
	 */
	struct UEditableText_SetIsPassword_Params
	{
	public:
		bool                                                       InbIsPassword;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableText.SetHintText
	 */
	struct UEditableText_SetHintText_Params
	{
	public:
		class FText                                                InHintText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableText.GetText
	 */
	struct UEditableText_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableTextBox.SetText
	 */
	struct UEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableTextBox.SetError
	 */
	struct UEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableTextBox.HasError
	 */
	struct UEditableTextBox_HasError_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableTextBox.GetText
	 */
	struct UEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.EditableTextBox.ClearError
	 */
	struct UEditableTextBox_ClearError_Params
	{	};

	/**
	 * Function UMG.ExpandableArea.SetIsExpanded
	 */
	struct UExpandableArea_SetIsExpanded_Params
	{
	public:
		bool                                                       IsExpanded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ExpandableArea.GetIsExpanded
	 */
	struct UExpandableArea_GetIsExpanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetOpacity
	 */
	struct UImage_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetColorAndOpacity
	 */
	struct UImage_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetBrushFromTexture
	 */
	struct UImage_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetBrushFromMaterial
	 */
	struct UImage_SetBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetBrushFromAsset
	 */
	struct UImage_SetBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.SetBrush
	 */
	struct UImage_SetBrush_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Image.GetDynamicMaterial
	 */
	struct UImage_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.InputKeySelector.SetSelectedKey
	 */
	struct UInputKeySelector_SetSelectedKey_Params
	{
	public:
		struct FInputChord                                         InSelectedKey;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.InputKeySelector.SetKeySelectionText
	 */
	struct UInputKeySelector_SetKeySelectionText_Params
	{
	public:
		class FText                                                InKeySelectionText;                                      // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.InputKeySelector.SetAllowModifierKeys
	 */
	struct UInputKeySelector_SetAllowModifierKeys_Params
	{
	public:
		bool                                                       bInAllowModifierKeys;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	 */
	struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	 */
	struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.InputKeySelector.GetIsSelectingKey
	 */
	struct UInputKeySelector_GetIsSelectingKey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CanvasPanel.AddChildToCanvas
	 */
	struct UCanvasPanel_AddChildToCanvas_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCanvasPanelSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ContentWidget.SetContent
	 */
	struct UContentWidget_SetContent_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ContentWidget.GetContentSlot
	 */
	struct UContentWidget_GetContentSlot_Params
	{
	public:
		class UPanelSlot*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetVerticalAlignment
	 */
	struct UBorder_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetPadding
	 */
	struct UBorder_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetHorizontalAlignment
	 */
	struct UBorder_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetDesiredSizeScale
	 */
	struct UBorder_SetDesiredSizeScale_Params
	{
	public:
		struct FVector2D                                           InScale;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetContentColorAndOpacity
	 */
	struct UBorder_SetContentColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InContentColorAndOpacity;                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetBrushFromTexture
	 */
	struct UBorder_SetBrushFromTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetBrushFromMaterial
	 */
	struct UBorder_SetBrushFromMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetBrushFromAsset
	 */
	struct UBorder_SetBrushFromAsset_Params
	{
	public:
		class USlateBrushAsset*                                    Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetBrushColor
	 */
	struct UBorder_SetBrushColor_Params
	{
	public:
		struct FLinearColor                                        InBrushColor;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.SetBrush
	 */
	struct UBorder_SetBrush_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Border.GetDynamicMaterial
	 */
	struct UBorder_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Button.SetStyle
	 */
	struct UButton_SetStyle_Params
	{
	public:
		struct FButtonStyle                                        InStyle;                                                 // 0x0000(0x02A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Button.SetColorAndOpacity
	 */
	struct UButton_SetColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Button.SetBackgroundColor
	 */
	struct UButton_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        InBackgroundColor;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Button.IsPressed
	 */
	struct UButton_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckBox.SetIsChecked
	 */
	struct UCheckBox_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckBox.SetCheckedState
	 */
	struct UCheckBox_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckBox.IsPressed
	 */
	struct UCheckBox_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckBox.IsChecked
	 */
	struct UCheckBox_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.CheckBox.GetCheckedState
	 */
	struct UCheckBox_GetCheckedState_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.InvalidationBox.SetCanCache
	 */
	struct UInvalidationBox_SetCanCache_Params
	{
	public:
		bool                                                       CanCache;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.InvalidationBox.InvalidateCache
	 */
	struct UInvalidationBox_InvalidateCache_Params
	{	};

	/**
	 * Function UMG.InvalidationBox.GetCanCache
	 */
	struct UInvalidationBox_GetCanCache_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.ToggleOpen
	 */
	struct UMenuAnchor_ToggleOpen_Params
	{
	public:
		bool                                                       bFocusOnOpen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.ShouldOpenDueToClick
	 */
	struct UMenuAnchor_ShouldOpenDueToClick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.Open
	 */
	struct UMenuAnchor_Open_Params
	{
	public:
		bool                                                       bFocusMenu;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.IsOpen
	 */
	struct UMenuAnchor_IsOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.HasOpenSubMenus
	 */
	struct UMenuAnchor_HasOpenSubMenus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.GetMenuPosition
	 */
	struct UMenuAnchor_GetMenuPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MenuAnchor.Close
	 */
	struct UMenuAnchor_Close_Params
	{	};

	/**
	 * Function UMG.RetainerBox.SetTextureParameter
	 */
	struct URetainerBox_SetTextureParameter_Params
	{
	public:
		class FName                                                TextureParameter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.RetainerBox.SetEffectMaterial
	 */
	struct URetainerBox_SetEffectMaterial_Params
	{
	public:
		class UMaterialInterface*                                  EffectMaterial;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.RetainerBox.GetEffectMaterial
	 */
	struct URetainerBox_GetEffectMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBox.SetUserSpecifiedScale
	 */
	struct UScaleBox_SetUserSpecifiedScale_Params
	{
	public:
		float                                                      InUserSpecifiedScale;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBox.SetStretchDirection
	 */
	struct UScaleBox_SetStretchDirection_Params
	{
	public:
		EStretchDirection                                          InStretchDirection;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBox.SetStretch
	 */
	struct UScaleBox_SetStretch_Params
	{
	public:
		EStretch                                                   InStretch;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScaleBox.SetIgnoreInheritedScale
	 */
	struct UScaleBox_SetIgnoreInheritedScale_Params
	{
	public:
		bool                                                       bInIgnoreInheritedScale;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetWidthOverride
	 */
	struct USizeBox_SetWidthOverride_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredWidth
	 */
	struct USizeBox_SetMinDesiredWidth_Params
	{
	public:
		float                                                      InMinDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetMinDesiredHeight
	 */
	struct USizeBox_SetMinDesiredHeight_Params
	{
	public:
		float                                                      InMinDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredWidth
	 */
	struct USizeBox_SetMaxDesiredWidth_Params
	{
	public:
		float                                                      InMaxDesiredWidth;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetMaxDesiredHeight
	 */
	struct USizeBox_SetMaxDesiredHeight_Params
	{
	public:
		float                                                      InMaxDesiredHeight;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetMaxAspectRatio
	 */
	struct USizeBox_SetMaxAspectRatio_Params
	{
	public:
		float                                                      InMaxAspectRatio;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.SetHeightOverride
	 */
	struct USizeBox_SetHeightOverride_Params
	{
	public:
		float                                                      InHeightOverride;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SizeBox.ClearWidthOverride
	 */
	struct USizeBox_ClearWidthOverride_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredWidth
	 */
	struct USizeBox_ClearMinDesiredWidth_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMinDesiredHeight
	 */
	struct USizeBox_ClearMinDesiredHeight_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredWidth
	 */
	struct USizeBox_ClearMaxDesiredWidth_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMaxDesiredHeight
	 */
	struct USizeBox_ClearMaxDesiredHeight_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearMaxAspectRatio
	 */
	struct USizeBox_ClearMaxAspectRatio_Params
	{	};

	/**
	 * Function UMG.SizeBox.ClearHeightOverride
	 */
	struct USizeBox_ClearHeightOverride_Params
	{	};

	/**
	 * Function UMG.Viewport.Spawn
	 */
	struct UViewport_Spawn_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Viewport.SetViewRotation
	 */
	struct UViewport_SetViewRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Viewport.SetViewLocation
	 */
	struct UViewport_SetViewLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Viewport.GetViewRotation
	 */
	struct UViewport_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Viewport.GetViewportWorld
	 */
	struct UViewport_GetViewportWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Viewport.GetViewLocation
	 */
	struct UViewport_GetViewLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.GridPanel.AddChildToGrid
	 */
	struct UGridPanel_AddChildToGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGridSlot*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.HorizontalBox.AddChildToHorizontalBox
	 */
	struct UHorizontalBox_AddChildToHorizontalBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHorizontalBoxSlot*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Overlay.AddChildToOverlay
	 */
	struct UOverlay_AddChildToOverlay_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlaySlot*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridPanel.SetSlotPadding
	 */
	struct UUniformGridPanel_SetSlotPadding_Params
	{
	public:
		struct FMargin                                             InSlotPadding;                                           // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	 */
	struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
	{
	public:
		float                                                      InMinDesiredSlotWidth;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	 */
	struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
	{
	public:
		float                                                      InMinDesiredSlotHeight;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.UniformGridPanel.AddChildToUniformGrid
	 */
	struct UUniformGridPanel_AddChildToUniformGrid_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUniformGridSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.VerticalBox.AddChildToVerticalBox
	 */
	struct UVerticalBox_AddChildToVerticalBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVerticalBoxSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	 */
	struct UWidgetSwitcher_SetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcher.SetActiveWidget
	 */
	struct UWidgetSwitcher_SetActiveWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcher.GetWidgetAtIndex
	 */
	struct UWidgetSwitcher_GetWidgetAtIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7GW6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcher.GetNumWidgets
	 */
	struct UWidgetSwitcher_GetNumWidgets_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	 */
	struct UWidgetSwitcher_GetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBox.SetInnerSlotPadding
	 */
	struct UWrapBox_SetInnerSlotPadding_Params
	{
	public:
		struct FVector2D                                           InPadding;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WrapBox.AddChildWrapBox
	 */
	struct UWrapBox_AddChildWrapBox_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWrapBoxSlot*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ProgressBar.SetPercent
	 */
	struct UProgressBar_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ProgressBar.SetIsMarquee
	 */
	struct UProgressBar_SetIsMarquee_Params
	{
	public:
		bool                                                       InbIsMarquee;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ProgressBar.SetFillColorAndOpacity
	 */
	struct UProgressBar_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        inColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.ScrollBar.SetState
	 */
	struct UScrollBar_SetState_Params
	{
	public:
		float                                                      InOffsetFraction;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InThumbSizeFraction;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetValue
	 */
	struct USlider_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetStepSize
	 */
	struct USlider_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetSliderHandleColor
	 */
	struct USlider_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetSliderBarColor
	 */
	struct USlider_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetLocked
	 */
	struct USlider_SetLocked_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.SetIndentHandle
	 */
	struct USlider_SetIndentHandle_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Slider.GetValue
	 */
	struct USlider_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Spacer.SetSize
	 */
	struct USpacer_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetValue
	 */
	struct USpinBox_SetValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetMinValue
	 */
	struct USpinBox_SetMinValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetMinSliderValue
	 */
	struct USpinBox_SetMinSliderValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetMaxValue
	 */
	struct USpinBox_SetMaxValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetMaxSliderValue
	 */
	struct USpinBox_SetMaxSliderValue_Params
	{
	public:
		float                                                      newValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.SetForegroundColor
	 */
	struct USpinBox_SetForegroundColor_Params
	{
	public:
		struct FSlateColor                                         InForegroundColor;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	 */
	struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
	{	};

	/**
	 * Function UMG.SpinBox.GetValue
	 */
	struct USpinBox_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.GetMinValue
	 */
	struct USpinBox_GetMinValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.GetMinSliderValue
	 */
	struct USpinBox_GetMinSliderValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.GetMaxValue
	 */
	struct USpinBox_GetMaxValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.GetMaxSliderValue
	 */
	struct USpinBox_GetMaxSliderValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.SpinBox.ClearMinValue
	 */
	struct USpinBox_ClearMinValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMinSliderValue
	 */
	struct USpinBox_ClearMinSliderValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMaxValue
	 */
	struct USpinBox_ClearMaxValue_Params
	{	};

	/**
	 * Function UMG.SpinBox.ClearMaxSliderValue
	 */
	struct USpinBox_ClearMaxSliderValue_Params
	{	};

	/**
	 * DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
	 */
	struct UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TileView.SetItemWidth
	 */
	struct UTileView_SetItemWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TileView.SetItemHeight
	 */
	struct UTileView_SetItemHeight_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TileView.RequestListRefresh
	 */
	struct UTileView_RequestListRefresh_Params
	{	};

	/**
	 * Function UMG.MultiLineEditableText.SetText
	 */
	struct UMultiLineEditableText_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MultiLineEditableText.GetText
	 */
	struct UMultiLineEditableText_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.SetText
	 */
	struct UMultiLineEditableTextBox_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.SetError
	 */
	struct UMultiLineEditableTextBox_SetError_Params
	{
	public:
		class FText                                                InError;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.MultiLineEditableTextBox.GetText
	 */
	struct UMultiLineEditableTextBox_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetText
	 */
	struct UTextBlock_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetShadowOffset
	 */
	struct UTextBlock_SetShadowOffset_Params
	{
	public:
		struct FVector2D                                           InShadowOffset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetShadowColorAndOpacity
	 */
	struct UTextBlock_SetShadowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InShadowColorAndOpacity;                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetOpacity
	 */
	struct UTextBlock_SetOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetJustification
	 */
	struct UTextBlock_SetJustification_Params
	{
	public:
		ETextJustify                                               InJustification;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetFont
	 */
	struct UTextBlock_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      inFontInfo;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.SetColorAndOpacity
	 */
	struct UTextBlock_SetColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.TextBlock.GetText
	 */
	struct UTextBlock_GetText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Throbber.SetNumberOfPieces
	 */
	struct UThrobber_SetNumberOfPieces_Params
	{
	public:
		int32_t                                                    InNumberOfPieces;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Throbber.SetAnimateVertically
	 */
	struct UThrobber_SetAnimateVertically_Params
	{
	public:
		bool                                                       bInAnimateVertically;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Throbber.SetAnimateOpacity
	 */
	struct UThrobber_SetAnimateOpacity_Params
	{
	public:
		bool                                                       bInAnimateOpacity;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.Throbber.SetAnimateHorizontally
	 */
	struct UThrobber_SetAnimateHorizontally_Params
	{
	public:
		bool                                                       bInAnimateHorizontally;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetAnimation.GetStartTime
	 */
	struct UWidgetAnimation_GetStartTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetAnimation.GetEndTime
	 */
	struct UWidgetAnimation_GetEndTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.SetWidget
	 */
	struct UWidgetComponent_SetWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.SetOwnerPlayer
	 */
	struct UWidgetComponent_SetOwnerPlayer_Params
	{
	public:
		class ULocalPlayer*                                        LocalPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.SetDrawSize
	 */
	struct UWidgetComponent_SetDrawSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.SetBackgroundColor
	 */
	struct UWidgetComponent_SetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        NewBackgroundColor;                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.RequestRedraw
	 */
	struct UWidgetComponent_RequestRedraw_Params
	{	};

	/**
	 * Function UMG.WidgetComponent.GetUserWidgetObject
	 */
	struct UWidgetComponent_GetUserWidgetObject_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.GetRenderTarget
	 */
	struct UWidgetComponent_GetRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.GetOwnerPlayer
	 */
	struct UWidgetComponent_GetOwnerPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.GetMaterialInstance
	 */
	struct UWidgetComponent_GetMaterialInstance_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetComponent.GetDrawSize
	 */
	struct UWidgetComponent_GetDrawSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.SetCustomHitResult
	 */
	struct UWidgetInteractionComponent_SetCustomHitResult_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.SendKeyChar
	 */
	struct UWidgetInteractionComponent_SendKeyChar_Params
	{
	public:
		class FString                                              Characters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRepeat;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.ScrollWheel
	 */
	struct UWidgetInteractionComponent_ScrollWheel_Params
	{
	public:
		float                                                      ScrollDelta;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.ReleasePointerKey
	 */
	struct UWidgetInteractionComponent_ReleasePointerKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.ReleaseKey
	 */
	struct UWidgetInteractionComponent_ReleaseKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.PressPointerKey
	 */
	struct UWidgetInteractionComponent_PressPointerKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.PressKey
	 */
	struct UWidgetInteractionComponent_PressKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bRepeat;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	 */
	struct UWidgetInteractionComponent_PressAndReleaseKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	 */
	struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	 */
	struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	 */
	struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.GetLastHitResult
	 */
	struct UWidgetInteractionComponent_GetLastHitResult_Params
	{
	public:
		struct FHitResult                                          ReturnValue;                                             // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	 */
	struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
	{
	public:
		class UWidgetComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVerticalBoxSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUniformGridSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	 */
	struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOverlaySlot*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHorizontalBoxSlot*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGridSlot*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCanvasPanelSlot*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	 */
	struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBorderSlot*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	 */
	struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	 */
	struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPosition;                                          // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.GetViewportSize
	 */
	struct UWidgetLayoutLibrary_GetViewportSize_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.GetViewportScale
	 */
	struct UWidgetLayoutLibrary_GetViewportScale_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	 */
	struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LocationX;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LocationY;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
