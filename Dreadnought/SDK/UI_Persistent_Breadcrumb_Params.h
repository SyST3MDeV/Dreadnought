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
	 * Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.CreateBreadcrumb
	 */
	struct UUI_Persistent_Breadcrumb_C_CreateBreadcrumb_Params
	{
	public:
		EUI_Screen                                                 ScreenEnumIn;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KGVU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BreadcrumbIndexIn;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UUI_Button_Breadcrumb_C*                             BreadcrumbOut;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.UpdateBreadcrumbList
	 */
	struct UUI_Persistent_Breadcrumb_C_UpdateBreadcrumbList_Params
	{
	public:
		class UUI_DreadScreen*                                     TargetScreen;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.HandleBreadcrumbClicked
	 */
	struct UUI_Persistent_Breadcrumb_C_HandleBreadcrumbClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.ExecuteUbergraph_UI_Persistent_Breadcrumb
	 */
	struct UUI_Persistent_Breadcrumb_C_ExecuteUbergraph_UI_Persistent_Breadcrumb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C.OnBreadcrumbClicked__DelegateSignature
	 */
	struct UUI_Persistent_Breadcrumb_C_OnBreadcrumbClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
