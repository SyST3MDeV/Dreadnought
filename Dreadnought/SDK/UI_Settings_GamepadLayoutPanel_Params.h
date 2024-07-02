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
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayoutVita
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetLayoutVita_Params
	{	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetStickBindings
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetStickBindings_Params
	{
	public:
		class FText                                                LeftAxis;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                L3;                                                      // 0x0018(0x0018)  (Parm)
		class FText                                                RightAxis;                                               // 0x0030(0x0018)  (Parm)
		class FText                                                R3;                                                      // 0x0048(0x0018)  (Parm)
	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetFaceAndDPadBindings
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetFaceAndDPadBindings_Params
	{
	public:
		class FText                                                Triangle;                                                // 0x0000(0x0018)  (Parm)
		class FText                                                Circle;                                                  // 0x0018(0x0018)  (Parm)
		class FText                                                Square;                                                  // 0x0030(0x0018)  (Parm)
		class FText                                                Cross;                                                   // 0x0048(0x0018)  (Parm)
		class FText                                                Up;                                                      // 0x0060(0x0018)  (Parm)
		class FText                                                Left;                                                    // 0x0078(0x0018)  (Parm)
		class FText                                                Right;                                                   // 0x0090(0x0018)  (Parm)
		class FText                                                Down;                                                    // 0x00A8(0x0018)  (Parm)
	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetShoulderBindings
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetShoulderBindings_Params
	{
	public:
		class FText                                                L1;                                                      // 0x0000(0x0018)  (Parm)
		class FText                                                L2;                                                      // 0x0018(0x0018)  (Parm)
		class FText                                                R1;                                                      // 0x0030(0x0018)  (Parm)
		class FText                                                R2;                                                      // 0x0048(0x0018)  (Parm)
	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetCenterBindings
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetCenterBindings_Params
	{
	public:
		class FText                                                TouchpadSwipe;                                           // 0x0000(0x0018)  (Parm)
		class FText                                                TouchpadClick;                                           // 0x0018(0x0018)  (Parm)
		class FText                                                Options;                                                 // 0x0030(0x0018)  (Parm)
	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout2
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetLayout2_Params
	{	};

	/**
	 * Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout1
	 */
	struct UUI_Settings_GamepadLayoutPanel_C_SetLayout1_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
