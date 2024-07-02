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
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.HandleNotification
	 */
	struct UUI_Button_Tab_Chat_C_HandleNotification_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.HandleUnfocus
	 */
	struct UUI_Button_Tab_Chat_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.HandleFocus
	 */
	struct UUI_Button_Tab_Chat_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.SetSelected
	 */
	struct UUI_Button_Tab_Chat_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.Construct
	 */
	struct UUI_Button_Tab_Chat_C_Construct_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.OnSynchronizeProperties
	 */
	struct UUI_Button_Tab_Chat_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_287_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_287_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.ExecuteUbergraph_UI_Button_Tab_Chat
	 */
	struct UUI_Button_Tab_Chat_C_ExecuteUbergraph_UI_Button_Tab_Chat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6KMV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.OnCloseButtonClicked__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_OnCloseButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Button_Tab_Chat_C*                               TabObject;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Button_Tab_Chat.UI_Button_Tab_Chat_C.OnClicked__DelegateSignature
	 */
	struct UUI_Button_Tab_Chat_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
