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
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.HandleInput
	 */
	struct UUI_Popup_WebBrowser_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Input;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8FVG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.HandlePopupData
	 */
	struct UUI_Popup_WebBrowser_C_HandlePopupData_Params
	{
	public:
		class UWebPopupData*                                       PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.Construct
	 */
	struct UUI_Popup_WebBrowser_C_Construct_Params
	{	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.OnTransitionIn
	 */
	struct UUI_Popup_WebBrowser_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.OnTransitionOut
	 */
	struct UUI_Popup_WebBrowser_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.TransitionInAnimationComplete
	 */
	struct UUI_Popup_WebBrowser_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.TransitionOutAnimationComplete
	 */
	struct UUI_Popup_WebBrowser_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Popup_WebBrowser_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.OnPopupDataSet
	 */
	struct UUI_Popup_WebBrowser_C_OnPopupDataSet_Params
	{
	public:
		class UPopupData*                                          PopupData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.OnNavigationEvent
	 */
	struct UUI_Popup_WebBrowser_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.ExecuteUbergraph_UI_Popup_WebBrowser
	 */
	struct UUI_Popup_WebBrowser_C_ExecuteUbergraph_UI_Popup_WebBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C275[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Popup_WebBrowser.UI_Popup_WebBrowser_C.OnButtonSelected__DelegateSignature
	 */
	struct UUI_Popup_WebBrowser_C_OnButtonSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
