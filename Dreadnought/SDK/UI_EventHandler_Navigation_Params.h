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
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.CloseAllPopups
	 */
	struct UUI_EventHandler_Navigation_C_CloseAllPopups_Params
	{	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoTab
	 */
	struct UUI_EventHandler_Navigation_C_GotoTab_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06AJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GetCurrentScreen
	 */
	struct UUI_EventHandler_Navigation_C_GetCurrentScreen_Params
	{
	public:
		class UUI_DreadScreen*                                     CurrentScreen;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HandlePopupDataAdded
	 */
	struct UUI_EventHandler_Navigation_C_HandlePopupDataAdded_Params
	{
	public:
		struct FPopupStackData                                     PopupStackData;                                          // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyScreen
	 */
	struct UUI_EventHandler_Navigation_C_DestroyScreen_Params
	{
	public:
		class UUI_DreadScreen*                                     screenToDestroy;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindReturnPath
	 */
	struct UUI_EventHandler_Navigation_C_FindReturnPath_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R7PG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EUI_Screen>                                         ReturnPathOut;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenName
	 */
	struct UUI_EventHandler_Navigation_C_FindScreenName_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YDXL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ScreenNameOut;                                           // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GotoBreadcrumb
	 */
	struct UUI_EventHandler_Navigation_C_GotoBreadcrumb_Params
	{
	public:
		int32_t                                                    BreadcrumbIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D54Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.UpdateReturnPath
	 */
	struct UUI_EventHandler_Navigation_C_UpdateReturnPath_Params
	{
	public:
		class UUI_DreadScreen*                                     CurrentScreen;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.FindScreenClass
	 */
	struct UUI_EventHandler_Navigation_C_FindScreenClass_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYIO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScreenClassOut;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopupWithCustomButtons
	 */
	struct UUI_EventHandler_Navigation_C_ShowGenericPopupWithCustomButtons_Params
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018)  (Parm)
		class FText                                                bodyText;                                                // 0x0018(0x0018)  (Parm)
		TArray<class UObject*>                                     buttons;                                                 // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Popup_Generic_C*                                 GenericPopup;                                            // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HidePopup
	 */
	struct UUI_EventHandler_Navigation_C_HidePopup_Params
	{
	public:
		class UUI_Popup_Generic_C*                                 PopupReference;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowGenericPopup
	 */
	struct UUI_EventHandler_Navigation_C_ShowGenericPopup_Params
	{
	public:
		class FText                                                titleText;                                               // 0x0000(0x0018)  (Parm)
		class FText                                                bodyText;                                                // 0x0018(0x0018)  (Parm)
		TArray<class FText>                                        ButtonLabels;                                            // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UUI_Popup_Generic_C*                                 GenericPopup;                                            // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.HideScreen
	 */
	struct UUI_EventHandler_Navigation_C_HideScreen_Params
	{
	public:
		class UUI_DreadScreen*                                     screen;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ShowScreen
	 */
	struct UUI_EventHandler_Navigation_C_ShowScreen_Params
	{
	public:
		class UClass*                                              ScreenClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUI_Screen                                                 ScreenEnum;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQB8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.DestroyPreviousScreen
	 */
	struct UUI_EventHandler_Navigation_C_DestroyPreviousScreen_Params
	{	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.GoToScreen
	 */
	struct UUI_EventHandler_Navigation_C_GoToScreen_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LO9N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.Construct
	 */
	struct UUI_EventHandler_Navigation_C_Construct_Params
	{	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToScreenRequested
	 */
	struct UUI_EventHandler_Navigation_C_OnNavigateToScreenRequested_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnPopupAdded
	 */
	struct UUI_EventHandler_Navigation_C_OnPopupAdded_Params
	{
	public:
		struct FPopupStackData                                     PopupData;                                               // 0x0000(0x0090)  (Parm)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.OnNavigateToTabRequested
	 */
	struct UUI_EventHandler_Navigation_C_OnNavigateToTabRequested_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ExecuteUbergraph_UI_EventHandler_Navigation
	 */
	struct UUI_EventHandler_Navigation_C_ExecuteUbergraph_UI_EventHandler_Navigation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5FC3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EventHandler_Navigation.UI_EventHandler_Navigation_C.ScreenChanged__DelegateSignature
	 */
	struct UUI_EventHandler_Navigation_C_ScreenChanged__DelegateSignature_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
