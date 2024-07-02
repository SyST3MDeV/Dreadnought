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
	 * Function UI_Chat_Row.UI_Chat_Row_C.Initialize
	 */
	struct UUI_Chat_Row_C_Initialize_Params
	{	};

	/**
	 * Function UI_Chat_Row.UI_Chat_Row_C.Construct
	 */
	struct UUI_Chat_Row_C_Construct_Params
	{	};

	/**
	 * Function UI_Chat_Row.UI_Chat_Row_C.BndEvt__UserNameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Chat_Row_C_BndEvt__UserNameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Chat_Row.UI_Chat_Row_C.ExecuteUbergraph_UI_Chat_Row
	 */
	struct UUI_Chat_Row_C_ExecuteUbergraph_UI_Chat_Row_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_Row.UI_Chat_Row_C.OnUserNameClicked__DelegateSignature
	 */
	struct UUI_Chat_Row_C_OnUserNameClicked__DelegateSignature_Params
	{
	public:
		class UUI_Chat_Row_C*                                      ChatRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
