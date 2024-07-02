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
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.Get_CharacterImage_Brush_1
	 */
	struct UUI_FrontEnd_ComWindow_C_Get_CharacterImage_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventShowTransmission
	 */
	struct UUI_FrontEnd_ComWindow_C_BP_EventShowTransmission_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetTitle
	 */
	struct UUI_FrontEnd_ComWindow_C_BP_EventSetTitle_Params
	{
	public:
		class FString                                              title;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetSubtitle
	 */
	struct UUI_FrontEnd_ComWindow_C_BP_EventSetSubtitle_Params
	{
	public:
		class FString                                              subtitle;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.BP_EventSetWindowImageTexture
	 */
	struct UUI_FrontEnd_ComWindow_C_BP_EventSetWindowImageTexture_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_FrontEnd_ComWindow.UI_FrontEnd_ComWindow_C.ExecuteUbergraph_UI_FrontEnd_ComWindow
	 */
	struct UUI_FrontEnd_ComWindow_C_ExecuteUbergraph_UI_FrontEnd_ComWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9BG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
