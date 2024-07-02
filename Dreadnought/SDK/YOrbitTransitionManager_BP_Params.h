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
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.AttachPanCameraToAttachPoint
	 */
	struct AYOrbitTransitionManager_BP_C_AttachPanCameraToAttachPoint_Params
	{
	public:
		class AYPlayerController*                                  YPlayerController;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForGameMode
	 */
	struct AYOrbitTransitionManager_BP_C_IsLevelRelevantForGameMode_Params
	{
	public:
		struct FYLevelStreamingDataTableRow                        StreamingData;                                           // 0x0000(0x0040)  (Parm)
		bool                                                       IsRelevant;                                              // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QN3L[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForAVSMSetting
	 */
	struct AYOrbitTransitionManager_BP_C_IsLevelRelevantForAVSMSetting_Params
	{
	public:
		struct FYLevelStreamingDataTableRow                        StreamingData;                                           // 0x0000(0x0040)  (Parm)
		bool                                                       IsRelevant;                                              // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.IsLevelRelevantForSelectedVariation
	 */
	struct AYOrbitTransitionManager_BP_C_IsLevelRelevantForSelectedVariation_Params
	{
	public:
		struct FYLevelStreamingDataTableRow                        StreamingData;                                           // 0x0000(0x0040)  (Parm)
		bool                                                       IsRelevant;                                              // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ShouldSublevelBeLoadedOnLevelStart
	 */
	struct AYOrbitTransitionManager_BP_C_ShouldSublevelBeLoadedOnLevelStart_Params
	{
	public:
		struct FYLevelStreamingDataTableRow                        StreamingData;                                           // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm)
		class AYGameState_MP*                                      GameStateMP;                                             // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldBeLoaded;                                          // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.UserConstructionScript
	 */
	struct AYOrbitTransitionManager_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionStarts
	 */
	struct AYOrbitTransitionManager_BP_C_OnOrbitTransitionStarts_Params
	{
	public:
		class AYPlayerController*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitTransitionEnds
	 */
	struct AYOrbitTransitionManager_BP_C_OnOrbitTransitionEnds_Params
	{
	public:
		class AYPlayerController*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UYPlayerOrbitComponent*                              orbitComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnEndOfMatchOrbitSetUp
	 */
	struct AYOrbitTransitionManager_BP_C_OnEndOfMatchOrbitSetUp_Params
	{
	public:
		class AYPlayerController*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnOrbitLevelSetUp
	 */
	struct AYOrbitTransitionManager_BP_C_OnOrbitLevelSetUp_Params
	{
	public:
		class AYGameState_MP*                                      multiplayerGameState;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    levelVariationIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnCameraFadeComplete
	 */
	struct AYOrbitTransitionManager_BP_C_OnCameraFadeComplete_Params
	{
	public:
		class AYPlayerController*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnStartProfileEndOfMatchScreen
	 */
	struct AYOrbitTransitionManager_BP_C_OnStartProfileEndOfMatchScreen_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.TryStreamingLevelsAfterOrbit
	 */
	struct AYOrbitTransitionManager_BP_C_TryStreamingLevelsAfterOrbit_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.RequestTransitionToLevel
	 */
	struct AYOrbitTransitionManager_BP_C_RequestTransitionToLevel_Params
	{
	public:
		class AYPlayerController*                                  Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OnPlayCameraPanAnimation
	 */
	struct AYOrbitTransitionManager_BP_C_OnPlayCameraPanAnimation_Params
	{
	public:
		class UYPlayerOrbitComponent*                              playerOrbitComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AYPlayerController*                                  Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AYPawn*                                              Pawn;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.CamPanFInished
	 */
	struct AYOrbitTransitionManager_BP_C_CamPanFInished_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.SkipIntroCameraPan
	 */
	struct AYOrbitTransitionManager_BP_C_SkipIntroCameraPan_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.ExecuteUbergraph_YOrbitTransitionManager_BP
	 */
	struct AYOrbitTransitionManager_BP_C_ExecuteUbergraph_YOrbitTransitionManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature
	 */
	struct AYOrbitTransitionManager_BP_C_OrbitTransitionManager_SpawnScaleCreeps__DelegateSignature_Params
	{	};

	/**
	 * Function YOrbitTransitionManager_BP.YOrbitTransitionManager_BP_C.OrbitTransitionManager_OnOrbitEnd__DelegateSignature
	 */
	struct AYOrbitTransitionManager_BP_C_OrbitTransitionManager_OnOrbitEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
