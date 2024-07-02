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
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Action
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_Action_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleUnfocus
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.HandleFocus
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.Construct
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_20_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.OnActionReceived
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_EditShip_LoadoutButton_Container.UI_EditShip_LoadoutButton_Container_C.ExecuteUbergraph_UI_EditShip_LoadoutButton_Container
	 */
	struct UUI_EditShip_LoadoutButton_Container_C_ExecuteUbergraph_UI_EditShip_LoadoutButton_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XDND[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
