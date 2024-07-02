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
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.EnableFavoriteButton
	 */
	struct UUI_Button_SelectGameMode_C_EnableFavoriteButton_Params
	{
	public:
		bool                                                       enableFavorite;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ToggleIsFavorited
	 */
	struct UUI_Button_SelectGameMode_C_ToggleIsFavorited_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.UpdateIsFavorited
	 */
	struct UUI_Button_SelectGameMode_C_UpdateIsFavorited_Params
	{
	public:
		bool                                                       isFavorited;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Action
	 */
	struct UUI_Button_SelectGameMode_C_Action_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleUnfocus
	 */
	struct UUI_Button_SelectGameMode_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.HandleFocus
	 */
	struct UUI_Button_SelectGameMode_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.InitializeButton
	 */
	struct UUI_Button_SelectGameMode_C_InitializeButton_Params
	{
	public:
		struct FYMenuGameModeDefinition                            GM;                                                      // 0x0000(0x0070)  (Parm)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.Construct
	 */
	struct UUI_Button_SelectGameMode_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_BndEvt__SelectGameModeButton_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnActionReceived
	 */
	struct UUI_Button_SelectGameMode_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.ExecuteUbergraph_UI_Button_SelectGameMode
	 */
	struct UUI_Button_SelectGameMode_C_ExecuteUbergraph_UI_Button_SelectGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnFavoriteClicked__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_OnFavoriteClicked__DelegateSignature_Params
	{
	public:
		bool                                                       isFavorite;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RKQF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYMenuGameModeDefinition                            GameMode;                                                // 0x0008(0x0070)  (Parm)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnReceivedFocus__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_OnReceivedFocus__DelegateSignature_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_SelectGameMode.UI_Button_SelectGameMode_C.OnClick__DelegateSignature
	 */
	struct UUI_Button_SelectGameMode_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FYMenuGameModeDefinition                            GameMode;                                                // 0x0000(0x0070)  (Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
