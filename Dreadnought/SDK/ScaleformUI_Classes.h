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
	 * Class ScaleformUI.GFxMoviePlayer
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UGFxMoviePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z7II[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SwfAssetName;                                            // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGFxObject*                                          Root;                                                    // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayWithHudOff : 1;                                  // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableGammaCorrection : 1;                              // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowInput : 1;                                         // 0x0048(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowFocus : 1;                                         // 0x0048(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCloseOnLevelChange : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOnlyOwnerFocusable : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDiscardNonOwnerInput : 1;                               // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCaptureKeyboardInput : 1;                               // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCaptureMouseInput : 1;                                  // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCaptureGamepadInput : 1;                                // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCaptureTouchInput : 1;                                  // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSplitscreenLayoutModified : 1;                        // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowDefaultMouseCursor : 1;                             // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBlurLesserMovies : 1;                                   // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHideLesserMovies : 1;                                   // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPriorityBlurred : 1;                                  // 0x0049(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPriorityHidden : 1;                                   // 0x004A(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreVisibilityEffect : 1;                             // 0x004A(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreBlurEffect : 1;                                   // 0x004A(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRefreshed : 1;                                          // 0x004A(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPerformHitTest : 1;                                     // 0x004A(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRZN[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGFxHitTestType                                            HitTestType;                                             // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PMJ[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTexture;                                           // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ExternalInterface;                                       // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        CaptureKeys;                                             // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        FocusIgnoreKeys;                                         // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreCtrlModifier;                                     // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2ET[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FExternalTexture>                            ExternalTextures;                                        // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EGFxRenderTextureMode                                      RenderTextureMode;                                       // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W75[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGFxWidgetBinding>                           WidgetBindings;                                          // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SplitscreenLayoutYAdjust;                                // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSYE[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFsCommand;                                             // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartCommand;                                          // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloseCommand;                                          // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusGainedCommand;                                    // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusLostCommand;                                      // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA6L[0xB8];                                  // 0x0108(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGFxObject*>                                  CachedMovieClipsArray;                                   // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool Start(bool bRefresh);
		void SetVisibility(const class FString& MovieClipName, bool bVisible);
		void SetViewScaleMode(EGFxScaleMode ScaleMode);
		void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
		void SetView3D(const struct FTransform& ViewTransform);
		void SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value);
		void SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value);
		void SetTimingMode(EGFxTimingMode TimingMode);
		void SetScale(const class FString& MovieClipName, float XScale, float YScale);
		void SetPosition(const class FString& MovieClipName, float X, float Y);
		void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform);
		void SetPause(bool bPausePlayback);
		void SetMovieCanReceiveInput(bool bCanReceiveInput);
		void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
		void SetFocusIgnoreKeys(TArray<struct FKey> Keys);
		bool SetExternalTexture(const class FString& Resource, class UTexture* Texture);
		void SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info);
		void SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform);
		void SetCaptureKeys(TArray<struct FKey> Keys);
		void SetAlignment(EGFxAlign Align);
		void ReceiveGFxCommand(const class FString& Command, const class FString& Arguments);
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
		void OnStart();
		void OnFocusLost(int32_t LocalPlayerIndex);
		void OnFocusGained(int32_t LocalPlayerIndex);
		void OnClose();
		bool LoadAndStart(const class FString& InSwfAssetName, bool bRefresh);
		struct FASValue Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params);
		void GotoAndStopI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndStop(const class FString& MovieClipName, const class FString& Frame);
		void GotoAndPlayI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndPlay(const class FString& MovieClipName, const class FString& Frame);
		bool GetVisibility(const class FString& MovieClipName);
		struct FTransform GetView3D();
		TArray<struct FASValue> GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName);
		struct FASValue GetVariableValue(const class FString& MovieClipName, const class FString& MemberName);
		bool GetScale(const class FString& MovieClipName, float* XScale, float* YScale);
		bool GetPosition(const class FString& MovieClipName, float* X, float* Y);
		struct FASPerspectiveTransform GetPerspective3D();
		class UGFxObject* GetMovieClip(const class FString& MovieClipName);
		struct FTransform GetDisplayTransform(const class FString& MovieClipName);
		struct FASDisplayInfo GetDisplayInfo(const class FString& MovieClipName);
		struct FASColorTransform GetColorTransform(const class FString& MovieClipName);
		void Close(bool Unload);
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.GFxEngine
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGFxEngine : public UObject
	{
	public:
		TArray<struct FGCReference>                                GCReferences;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RefCount;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTKX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.GFxObject
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGFxObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_C45E[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetVisible(bool bVisible);
		void SetScale(float XScale, float YScale);
		void SetPosition(float X, float Y);
		void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input);
		void SetMemberValue(const class FString& MemberName, const struct FASValue& Input);
		void SetDisplayTransform(const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo);
		void SetColorTransform(const struct FASColorTransform& UnrealColorTransform);
		struct FASValue Invoke(const class FString& FunctionName, TArray<struct FASValue> Params);
		void GotoAndStopI(int32_t FrameNumber);
		void GotoAndStop(const class FString& FrameString);
		void GotoAndPlayI(int32_t FrameNumber);
		void GotoAndPlay(const class FString& FrameString);
		bool GetVisible();
		bool GetScale(float* XScale, float* YScale);
		bool GetPosition(float* X, float* Y);
		TArray<struct FASValue> GetMemberValueArray(const class FString& MemberName);
		struct FASValue GetMemberValue(const class FString& MemberName);
		struct FTransform GetDisplayTransform();
		struct FASDisplayInfo GetDisplayInfo();
		struct FASColorTransform GetColorTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.ScaleformBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
		struct FASValue STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName);
		struct FASValue STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params);
		class UGFxObject* STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath);
		class UGFxObject* STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName);
		class UGFxObject* STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName);
		void STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.SwfMovie
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class USwfMovie : public UObject
	{
	public:
		bool                                                       bUseGFxExport : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOptimizeForMobiles : 1;                                 // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSetSRGBOnImportedTextures : 1;                          // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPackTextures : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD9E[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PackTextureSize;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSquarePacking : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3WK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFlashTextureRescale                                       TextureRescale;                                          // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRZK[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TextureFormat;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceImages : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KXI[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceFile;                                              // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      FontMappings;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FText>                                        LocalizableStrings;                                      // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FText>                                        LocalizablePS4Strings;                                   // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ImportTimeStamp;                                         // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      RawData;                                                 // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ReferencedAssetNames;                                    // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     References;                                              // 0x00C8(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     UserReferences;                                          // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UYUITexturePack*>                             TexturePacks;                                            // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YBN[0xA0];                                  // 0x00F8(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.YUITexturePack
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UYUITexturePack : public UDataAsset
	{
	public:
		TArray<TAssetPtr<class UTexture2D>>                        m_textures;                                              // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TAssetPtr<class UYUITexturePack>>                   m_texturePacks;                                          // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLUO[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     m_loadedAssets;                                          // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3QOT[0xA0];                                  // 0x0060(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
