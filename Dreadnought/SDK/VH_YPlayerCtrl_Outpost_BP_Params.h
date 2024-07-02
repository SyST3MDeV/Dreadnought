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
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndShowHiddenUI
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_CheckAndShowHiddenUI_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldPerformFurtherActions;                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ToggleUI
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_ToggleUI_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckAndPerformAxisNavigationEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_CheckAndPerformAxisNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ForwardNavigationEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_ForwardNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HandledByPersistentScreen;                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HandledByCurrentScreen;                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_71LZ[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetPersistentScreen
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetPersistentScreen_Params
	{
	public:
		class UUI_Screen_Persistent_C*                             PersistentScreen;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetCurrentScreen
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetCurrentScreen_Params
	{
	public:
		class UUI_DreadScreen*                                     CurrentScreen;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToHighlightPlayButton
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_CheckWhetherToHighlightPlayButton_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.HighlightResearchPurchaseButton
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_HighlightResearchPurchaseButton_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Items
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetResearchedT1Items_Params
	{
	public:
		TArray<int32_t>                                            items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetUnresearchedT1Items
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetUnresearchedT1Items_Params
	{
	public:
		TArray<int32_t>                                            items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetResearchedT1Modules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetResearchedT1Modules_Params
	{
	public:
		TArray<int32_t>                                            ItemIds;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT2Ships
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetT1ShipsWithResearchedT2Ships_Params
	{
	public:
		TArray<int32_t>                                            items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GetT1ShipsWithResearchedT1Modules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GetT1ShipsWithResearchedT1Modules_Params
	{
	public:
		TArray<int32_t>                                            items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InitializeAssetIdArrays
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InitializeAssetIdArrays_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT2Ship
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToPurchaseT2Ship_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPurchaseT1Module
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToPurchaseT1Module_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SyncronizeNewPlayerOnboardingState
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SyncronizeNewPlayerOnboardingState_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SkipNewPlayerOnboarding
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SkipNewPlayerOnboarding_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT2Ship
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToResearchT2Ship_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToFullyResearchT1Ship
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToFullyResearchT1Ship_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToShipTechTrees
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToShipTechTrees_Params
	{
	public:
		TArray<int32_t>                                            ShipsToGuideToT1ItemID;                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            PurchaseScreenNotGuideFromITemID;                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            PurchaseScreenToGuideDirectlyFromItemID;                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       InCorrectTechTreeAlready;                                // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKHI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToPlay
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToPlay_Params
	{
	public:
		bool                                                       HighlightGameModeSelection;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HighlightFleetSelection;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJ47[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              HighlightGameMode;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.GuideToResearchT1Module
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_GuideToResearchT1Module_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RemoveAllGuideCallouts
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_RemoveAllGuideCallouts_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.UserConstructionScript
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_84_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_83_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_82_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_81
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_81_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_80
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_80_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_79_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_78_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_77_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_76_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_75_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_74_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_73_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_72_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_F12_K2Node_InputKeyEvent_71
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_F12_K2Node_InputKeyEvent_71_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_70_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_69_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Escape_K2Node_InputKeyEvent_68
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Escape_K2Node_InputKeyEvent_68_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_67
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_67_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_66_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_65_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_64_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_62_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_61_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_60_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_59_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_57_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Down_K2Node_InputKeyEvent_56_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_55_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Up_K2Node_InputKeyEvent_54_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_53_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_52_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_51_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_50_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_49_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_48_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_47_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_46_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_45_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_44_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_43_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent_Implemented
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnGoalUIGuideEvent_Implemented_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalUIGuideEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnGoalUIGuideEvent_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalCategoryUnlockedEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnGoalCategoryUnlockedEvent_Params
	{
	public:
		EYGoalCategory                                             Category;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalReadyToBeClaimedEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnGoalReadyToBeClaimedEvent_Params
	{
	public:
		class FName                                                goalId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RefreshGoalGuideHighlights
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_RefreshGoalGuideHighlights_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.PlayVO_AllGamesModesUnlocked
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_PlayVO_AllGamesModesUnlocked_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CareerGoals_ReactOnMenuStateChange
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_CareerGoals_ReactOnMenuStateChange_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetNoGoalGuide
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetNoGoalGuide_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.RestartTimeOutTimer
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_RestartTimeOutTimer_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCareerGoalsOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpCareerGoalsOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingEvent
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnOnboardingEvent_Params
	{
	public:
		class FName                                                trigeredRule;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnLocalPlayerSet
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnLocalPlayerSet_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpRankReachedOnBoardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpRankReachedOnBoardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_RankedUp
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Ob_RankedUp_Params
	{
	public:
		class FName                                                Rule;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.MenuStateChanged
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_MenuStateChanged_Params
	{
	public:
		EYMenuState                                                newMenuState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnOnboardingInitialized
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnOnboardingInitialized_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnGoalManagerInitialized
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnGoalManagerInitialized_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMatchmakingStateChanged
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnMatchmakingStateChanged_Params
	{
	public:
		EYMenuMatchMakingState                                     NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CharacterFinished
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_CharacterFinished_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_CreatingCharacter
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_CreatingCharacter_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.CheckWhetherToStartTutorial
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_CheckWhetherToStartTutorial_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_BackAfterFirstMatch
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_BackAfterFirstMatch_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_TutorialFinished
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_TutorialFinished_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpNewPlayerOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpShipIntroductionOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpShipIntroductionOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpNewPlayerOnboardingRules_Copy
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpNewPlayerOnboardingRules_Copy_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Debug_Ob_LoadoutExplanation
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Debug_Ob_LoadoutExplanation_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpCustomizationOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpCustomizationOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpAdvancedOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpAdvancedOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetUpSocialLayerOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetUpSocialLayerOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericModuleBoughtFeedback
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericModuleBoughtFeedback_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericShipBoughtFeedback
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericShipBoughtFeedback_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.Ob_ActivateGenericVanityItemBoughtFeedback
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_Ob_ActivateGenericVanityItemBoughtFeedback_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.SetupPurchaseFeedbackOnboardingRules
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_SetupPurchaseFeedbackOnboardingRules_Params
	{	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ReceiveTick
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_ExecuteUbergraph_VH_YPlayerCtrl_Outpost_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JLZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VH_YPlayerCtrl_Outpost_BP.VH_YPlayerCtrl_Outpost_BP_C.OnMouseButtonReleased__DelegateSignature
	 */
	struct AVH_YPlayerCtrl_Outpost_BP_C_OnMouseButtonReleased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
