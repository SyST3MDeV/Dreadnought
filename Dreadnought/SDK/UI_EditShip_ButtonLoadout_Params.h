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
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.EditLoadoutNameAction
	 */
	struct UUI_EditShip_ButtonLoadout_C_EditLoadoutNameAction_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Action
	 */
	struct UUI_EditShip_ButtonLoadout_C_Action_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Deselect
	 */
	struct UUI_EditShip_ButtonLoadout_C_Deselect_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Select
	 */
	struct UUI_EditShip_ButtonLoadout_C_Select_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.UpdateLoadoutName
	 */
	struct UUI_EditShip_ButtonLoadout_C_UpdateLoadoutName_Params
	{
	public:
		class FText                                                ButtonLabel;                                             // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ShowEditLoadoutNameButton
	 */
	struct UUI_EditShip_ButtonLoadout_C_ShowEditLoadoutNameButton_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupWidget
	 */
	struct UUI_EditShip_ButtonLoadout_C_SetupWidget_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetSelected
	 */
	struct UUI_EditShip_ButtonLoadout_C_SetSelected_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.SetupIcon
	 */
	struct UUI_EditShip_ButtonLoadout_C_SetupIcon_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleUnfocus
	 */
	struct UUI_EditShip_ButtonLoadout_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.HandleFocus
	 */
	struct UUI_EditShip_ButtonLoadout_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.Construct
	 */
	struct UUI_EditShip_ButtonLoadout_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.PreConstruct
	 */
	struct UUI_EditShip_ButtonLoadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_386_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_BndEvt__ButtonEditName_K2Node_ComponentBoundEvent_420_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnActionReceived
	 */
	struct UUI_EditShip_ButtonLoadout_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.ExecuteUbergraph_UI_EditShip_ButtonLoadout
	 */
	struct UUI_EditShip_ButtonLoadout_C_ExecuteUbergraph_UI_EditShip_ButtonLoadout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnSaveLoadoutNameClicked__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_OnSaveLoadoutNameClicked__DelegateSignature_Params
	{
	public:
		class UUI_EditShip_ButtonLoadout_C*                        source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_ButtonLoadout.UI_EditShip_ButtonLoadout_C.OnLoadoutButtonClicked__DelegateSignature
	 */
	struct UUI_EditShip_ButtonLoadout_C_OnLoadoutButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_EditShip_ButtonLoadout_C*                        source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
