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
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Action
	 */
	struct UUI_Generic_Button_Module_C_Action_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetDataFromStruct
	 */
	struct UUI_Generic_Button_Module_C_SetDataFromStruct_Params
	{
	public:
		struct FUIGenericButtonModuleData                          Data;                                                    // 0x0000(0x00C0)  (Parm)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ApplyItemState
	 */
	struct UUI_Generic_Button_Module_C_ApplyItemState_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationIcon
	 */
	struct UUI_Generic_Button_Module_C_SetClassificationIcon_Params
	{
	public:
		class UTexture2D*                                          ClassificationIcon;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetClassificationTier
	 */
	struct UUI_Generic_Button_Module_C_SetClassificationTier_Params
	{
	public:
		int32_t                                                    TierLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHeroShip;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RFKJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetName
	 */
	struct UUI_Generic_Button_Module_C_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetIcon
	 */
	struct UUI_Generic_Button_Module_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          IconTexture;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Setup
	 */
	struct UUI_Generic_Button_Module_C_Setup_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleUnfocus
	 */
	struct UUI_Generic_Button_Module_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.HandleFocus
	 */
	struct UUI_Generic_Button_Module_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ShowModuleSlot
	 */
	struct UUI_Generic_Button_Module_C_ShowModuleSlot_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.SetData
	 */
	struct UUI_Generic_Button_Module_C_SetData_Params
	{
	public:
		class UTexture2D*                                          ModuleTexture;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ModuleName;                                              // 0x0008(0x0018)  (Parm)
		int32_t                                                    tier;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J63E[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          SlotIconTexture;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowTierIcon;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_COE1[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowEquippedMark;                                        // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOwned;                                                 // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYTechTreeItemState                                        ItemState;                                               // 0x003A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IQP9[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYUIItemPriceData                                   ResearchPrice;                                           // 0x0040(0x0030)  (Parm)
		struct FYUIItemPriceData                                   PurchasePrice;                                           // 0x0070(0x0030)  (Parm)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_BndEvt__ModuleEquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.Construct
	 */
	struct UUI_Generic_Button_Module_C_Construct_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.PreConstruct
	 */
	struct UUI_Generic_Button_Module_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnActionReceived
	 */
	struct UUI_Generic_Button_Module_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.ExecuteUbergraph_UI_Generic_Button_Module
	 */
	struct UUI_Generic_Button_Module_C_ExecuteUbergraph_UI_Generic_Button_Module_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnGenericModuleButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnGenericModuleButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnOfficerButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnOfficerButtonClicked__DelegateSignature_Params
	{
	public:
		EYOfficerType                                              NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WDLG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnModuleButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnModuleButtonClicked__DelegateSignature_Params
	{
	public:
		EYAbilityCategory                                          NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91QT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnWeaponButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnWeaponButtonClicked__DelegateSignature_Params
	{
	public:
		EYSlotType                                                 NewParam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A2EH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnDetailsButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnDetailsButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnButtonHovered__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_Button_Module.UI_Generic_Button_Module_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_Generic_Button_Module_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_Generic_Button_Module_C*                         ClickedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
