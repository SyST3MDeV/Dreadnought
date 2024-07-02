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
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Setup
	 */
	struct UUI_Persistent_CTA_Overlay_C_Setup_Params
	{	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseOnConnectionLost
	 */
	struct UUI_Persistent_CTA_Overlay_C_HandleCTACloseOnConnectionLost_Params
	{	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HasCTAFrequencyBeenReached
	 */
	struct UUI_Persistent_CTA_Overlay_C_HasCTAFrequencyBeenReached_Params
	{
	public:
		class UYCtA*                                               CTAData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FrequencyReached;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A7CJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleInput
	 */
	struct UUI_Persistent_CTA_Overlay_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Input;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsDisplayingCTA
	 */
	struct UUI_Persistent_CTA_Overlay_C_IsDisplayingCTA_Params
	{
	public:
		bool                                                       IsDisplayingCTA;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HE9K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseComplete
	 */
	struct UUI_Persistent_CTA_Overlay_C_HandleCTACloseComplete_Params
	{
	public:
		class UUI_CtAWidget*                                       CtAWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleCTACloseRequest
	 */
	struct UUI_Persistent_CTA_Overlay_C_HandleCTACloseRequest_Params
	{
	public:
		class UUI_CtAWidget*                                       CtAWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.CreateCTA
	 */
	struct UUI_Persistent_CTA_Overlay_C_CreateCTA_Params
	{
	public:
		class UYCtA*                                               CTAData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.IsScreenValidForCTA
	 */
	struct UUI_Persistent_CTA_Overlay_C_IsScreenValidForCTA_Params
	{
	public:
		class UYCtA*                                               CTAData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ScreenIsValid;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.EnqueueCTA
	 */
	struct UUI_Persistent_CTA_Overlay_C_EnqueueCTA_Params
	{
	public:
		class UYCtA*                                               CTAData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTAWidgetByClass
	 */
	struct UUI_Persistent_CTA_Overlay_C_ShowCTAWidgetByClass_Params
	{
	public:
		class UClass*                                              CtaClass;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.TriggerQueuedCtA
	 */
	struct UUI_Persistent_CTA_Overlay_C_TriggerQueuedCtA_Params
	{	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.HandleScreenChanged
	 */
	struct UUI_Persistent_CTA_Overlay_C_HandleScreenChanged_Params
	{
	public:
		EUI_Screen                                                 screen;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ShowCTA
	 */
	struct UUI_Persistent_CTA_Overlay_C_ShowCTA_Params
	{
	public:
		class UYCtA*                                               CTAData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.Construct
	 */
	struct UUI_Persistent_CTA_Overlay_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.OnNavigationEvent
	 */
	struct UUI_Persistent_CTA_Overlay_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C.ExecuteUbergraph_UI_Persistent_CTA_Overlay
	 */
	struct UUI_Persistent_CTA_Overlay_C_ExecuteUbergraph_UI_Persistent_CTA_Overlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
