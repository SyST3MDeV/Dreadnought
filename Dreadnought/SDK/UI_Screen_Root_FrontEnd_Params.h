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
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideUI
	 */
	struct UUI_Screen_Root_FrontEnd_C_HideUI_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowUI
	 */
	struct UUI_Screen_Root_FrontEnd_C_ShowUI_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleMouseButtonReleased
	 */
	struct UUI_Screen_Root_FrontEnd_C_HandleMouseButtonReleased_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleCameraMoved
	 */
	struct UUI_Screen_Root_FrontEnd_C_HandleCameraMoved_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ToggleUI
	 */
	struct UUI_Screen_Root_FrontEnd_C_ToggleUI_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HandleInput
	 */
	struct UUI_Screen_Root_FrontEnd_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowPersistentScreen
	 */
	struct UUI_Screen_Root_FrontEnd_C_ShowPersistentScreen_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HideLegend
	 */
	struct UUI_Screen_Root_FrontEnd_C_HideLegend_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetLegend
	 */
	struct UUI_Screen_Root_FrontEnd_C_SetLegend_Params
	{
	public:
		TArray<struct FLegendPromptData>                           legend;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.HangarScrimHideComplete
	 */
	struct UUI_Screen_Root_FrontEnd_C_HangarScrimHideComplete_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ShowHangarScrim
	 */
	struct UUI_Screen_Root_FrontEnd_C_ShowHangarScrim_Params
	{
	public:
		bool                                                       ShowScrim;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.Construct
	 */
	struct UUI_Screen_Root_FrontEnd_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 */
	struct UUI_Screen_Root_FrontEnd_C_BndEvt__HideHangarScrim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetPersistentScreenVisible
	 */
	struct UUI_Screen_Root_FrontEnd_C_SetPersistentScreenVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.SetHangarScrimVisible
	 */
	struct UUI_Screen_Root_FrontEnd_C_SetHangarScrimVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnNavigationEvent
	 */
	struct UUI_Screen_Root_FrontEnd_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.ExecuteUbergraph_UI_Screen_Root_FrontEnd
	 */
	struct UUI_Screen_Root_FrontEnd_C_ExecuteUbergraph_UI_Screen_Root_FrontEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ONSB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Root_FrontEnd.UI_Screen_Root_FrontEnd_C.OnScreenTransitionedOut__DelegateSignature
	 */
	struct UUI_Screen_Root_FrontEnd_C_OnScreenTransitionedOut__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
