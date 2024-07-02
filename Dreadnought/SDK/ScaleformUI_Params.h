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
	 * Function ScaleformUI.GFxMoviePlayer.Start
	 */
	struct UGFxMoviePlayer_Start_Params
	{
	public:
		bool                                                       bRefresh;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetVisibility
	 */
	struct UGFxMoviePlayer_SetVisibility_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
	 */
	struct UGFxMoviePlayer_SetViewScaleMode_Params
	{
	public:
		EGFxScaleMode                                              ScaleMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetViewport
	 */
	struct UGFxMoviePlayer_SetViewport_Params
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Y;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetView3D
	 */
	struct UGFxMoviePlayer_SetView3D_Params
	{
	public:
		struct FTransform                                          ViewTransform;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
	 */
	struct UGFxMoviePlayer_SetVariableValueArray_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Value;                                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetVariableValue
	 */
	struct UGFxMoviePlayer_SetVariableValue_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            Value;                                                   // 0x0020(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetTimingMode
	 */
	struct UGFxMoviePlayer_SetTimingMode_Params
	{
	public:
		EGFxTimingMode                                             TimingMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetScale
	 */
	struct UGFxMoviePlayer_SetScale_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      XScale;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YScale;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetPosition
	 */
	struct UGFxMoviePlayer_SetPosition_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
	 */
	struct UGFxMoviePlayer_SetPerspective3D_Params
	{
	public:
		struct FASPerspectiveTransform                             PerspectiveTransform;                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetPause
	 */
	struct UGFxMoviePlayer_SetPause_Params
	{
	public:
		bool                                                       bPausePlayback;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
	 */
	struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
	{
	public:
		bool                                                       bCanReceiveInput;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
	 */
	struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
	{
	public:
		bool                                                       bCanReceiveFocus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
	 */
	struct UGFxMoviePlayer_SetFocusIgnoreKeys_Params
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
	 */
	struct UGFxMoviePlayer_SetExternalTexture_Params
	{
	public:
		class FString                                              Resource;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Texture;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
	 */
	struct UGFxMoviePlayer_SetDisplayTransform_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          DisplayTransform;                                        // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
	 */
	struct UGFxMoviePlayer_SetDisplayInfo_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASDisplayInfo                                      Info;                                                    // 0x0010(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetColorTransform
	 */
	struct UGFxMoviePlayer_SetColorTransform_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASColorTransform                                   UnrealColorTransform;                                    // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
	 */
	struct UGFxMoviePlayer_SetCaptureKeys_Params
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.SetAlignment
	 */
	struct UGFxMoviePlayer_SetAlignment_Params
	{
	public:
		EGFxAlign                                                  Align;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
	 */
	struct UGFxMoviePlayer_ReceiveGFxCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Arguments;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.OpenMovie
	 */
	struct UGFxMoviePlayer_OpenMovie_Params
	{
	public:
		class USwfMovie*                                           SwfMovie;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ExternalScriptInterface;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              RenderToTexture;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DisplayWithHudOff;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       StartPaused;                                             // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5DHX[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGFxMoviePlayer*                                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.OnStart
	 */
	struct UGFxMoviePlayer_OnStart_Params
	{	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.OnFocusLost
	 */
	struct UGFxMoviePlayer_OnFocusLost_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.OnFocusGained
	 */
	struct UGFxMoviePlayer_OnFocusGained_Params
	{
	public:
		int32_t                                                    LocalPlayerIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.OnClose
	 */
	struct UGFxMoviePlayer_OnClose_Params
	{	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.LoadAndStart
	 */
	struct UGFxMoviePlayer_LoadAndStart_Params
	{
	public:
		class FString                                              InSwfAssetName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRefresh;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.Invoke
	 */
	struct UGFxMoviePlayer_Invoke_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FunctionName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Params;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0030(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
	 */
	struct UGFxMoviePlayer_GotoAndStopI_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Frame;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GotoAndStop
	 */
	struct UGFxMoviePlayer_GotoAndStop_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Frame;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
	 */
	struct UGFxMoviePlayer_GotoAndPlayI_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Frame;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
	 */
	struct UGFxMoviePlayer_GotoAndPlay_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Frame;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetVisibility
	 */
	struct UGFxMoviePlayer_GetVisibility_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetView3D
	 */
	struct UGFxMoviePlayer_GetView3D_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
	 */
	struct UGFxMoviePlayer_GetVariableValueArray_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetVariableValue
	 */
	struct UGFxMoviePlayer_GetVariableValue_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetScale
	 */
	struct UGFxMoviePlayer_GetScale_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      XScale;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YScale;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetPosition
	 */
	struct UGFxMoviePlayer_GetPosition_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
	 */
	struct UGFxMoviePlayer_GetPerspective3D_Params
	{
	public:
		struct FASPerspectiveTransform                             ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetMovieClip
	 */
	struct UGFxMoviePlayer_GetMovieClip_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxObject*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
	 */
	struct UGFxMoviePlayer_GetDisplayTransform_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
	 */
	struct UGFxMoviePlayer_GetDisplayInfo_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASDisplayInfo                                      ReturnValue;                                             // 0x0010(0x002C)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.GetColorTransform
	 */
	struct UGFxMoviePlayer_GetColorTransform_Params
	{
	public:
		class FString                                              MovieClipName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASColorTransform                                   ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxMoviePlayer.Close
	 */
	struct UGFxMoviePlayer_Close_Params
	{
	public:
		bool                                                       Unload;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetVisible
	 */
	struct UGFxObject_SetVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetScale
	 */
	struct UGFxObject_SetScale_Params
	{
	public:
		float                                                      XScale;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YScale;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetPosition
	 */
	struct UGFxObject_SetPosition_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetMemberValueArray
	 */
	struct UGFxObject_SetMemberValueArray_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Input;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetMemberValue
	 */
	struct UGFxObject_SetMemberValue_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            Input;                                                   // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetDisplayTransform
	 */
	struct UGFxObject_SetDisplayTransform_Params
	{
	public:
		struct FTransform                                          DisplayTransform;                                        // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetDisplayInfo
	 */
	struct UGFxObject_SetDisplayInfo_Params
	{
	public:
		struct FASDisplayInfo                                      UnrealDisplayInfo;                                       // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.SetColorTransform
	 */
	struct UGFxObject_SetColorTransform_Params
	{
	public:
		struct FASColorTransform                                   UnrealColorTransform;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.Invoke
	 */
	struct UGFxObject_Invoke_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GotoAndStopI
	 */
	struct UGFxObject_GotoAndStopI_Params
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GotoAndStop
	 */
	struct UGFxObject_GotoAndStop_Params
	{
	public:
		class FString                                              FrameString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GotoAndPlayI
	 */
	struct UGFxObject_GotoAndPlayI_Params
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GotoAndPlay
	 */
	struct UGFxObject_GotoAndPlay_Params
	{
	public:
		class FString                                              FrameString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetVisible
	 */
	struct UGFxObject_GetVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetScale
	 */
	struct UGFxObject_GetScale_Params
	{
	public:
		float                                                      XScale;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      YScale;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetPosition
	 */
	struct UGFxObject_GetPosition_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetMemberValueArray
	 */
	struct UGFxObject_GetMemberValueArray_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetMemberValue
	 */
	struct UGFxObject_GetMemberValue_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetDisplayTransform
	 */
	struct UGFxObject_GetDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetDisplayInfo
	 */
	struct UGFxObject_GetDisplayInfo_Params
	{
	public:
		struct FASDisplayInfo                                      ReturnValue;                                             // 0x0000(0x002C)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.GFxObject.GetColorTransform
	 */
	struct UGFxObject_GetColorTransform_Params
	{
	public:
		struct FASColorTransform                                   ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
	 */
	struct UScaleformBlueprintLibrary_OpenMovie_Params
	{
	public:
		class USwfMovie*                                           Movie;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ExternalInterface;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              RenderTexture;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DisplayWithHudOff;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       StartPaused;                                             // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6T57[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGFxMoviePlayer*                                     ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
	 */
	struct UScaleformBlueprintLibrary_InvokeNoParams_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FunctionName;                                            // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0018(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
	 */
	struct UScaleformBlueprintLibrary_Invoke_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FunctionName;                                            // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Params;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0028(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
	 */
	struct UScaleformBlueprintLibrary_GetVariable_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              VariablePath;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxObject*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
	 */
	struct UScaleformBlueprintLibrary_GetMovieClip_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MovieClipName;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxObject*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
	 */
	struct UScaleformBlueprintLibrary_GetMember_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MemberName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxObject*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
	 */
	struct UScaleformBlueprintLibrary_CloseMovie_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
