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
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.OptionClicked
	 */
	struct UUI_Chat_SocialDropdown_C_OptionClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.AddButton
	 */
	struct UUI_Chat_SocialDropdown_C_AddButton_Params
	{
	public:
		class FText                                                label;                                                   // 0x0000(0x0018)  (Parm)
		int32_t                                                    index;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XZJL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.Construct
	 */
	struct UUI_Chat_SocialDropdown_C_Construct_Params
	{	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.OnMouseLeave
	 */
	struct UUI_Chat_SocialDropdown_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.ExecuteUbergraph_UI_Chat_SocialDropdown
	 */
	struct UUI_Chat_SocialDropdown_C_ExecuteUbergraph_UI_Chat_SocialDropdown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.OnOptionClicked__DelegateSignature
	 */
	struct UUI_Chat_SocialDropdown_C_OnOptionClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Chat_SocialDropdown.UI_Chat_SocialDropdown_C.OnMouseOut__DelegateSignature
	 */
	struct UUI_Chat_SocialDropdown_C_OnMouseOut__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
