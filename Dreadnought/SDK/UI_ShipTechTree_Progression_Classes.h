#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_ShipTechTree_Progression.UI_ShipTechTree_Progression_C
	 * Size -> 0x00A1 (FullSize[0x02E1] - InheritedSize[0x0240])
	 */
	class UUI_ShipTechTree_Progression_C : public UUI_ShipTechTreeProgressionWidget
	{
	public:
		class UUI_Generic_Button_Module_C*                         ModuleItem;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ModulesOwnedText;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ModulesRequiredText;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ProgressCheckmark;                                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ManufacturerTechTreeItem_C*               ShipItem;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        UnlockProgress;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		int32_t                                                    ModulesRequired;                                         // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ModulesOwned;                                            // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    itemID;                                                  // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YSEI[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShipProgressionItemClicked;                            // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipProgressionItemHovered;                            // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipProgressionItemUnhovered;                          // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemHovered;                          // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemUnhovered;                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemClicked;                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsShip;                                                  // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetIsShip(bool* IsShip);
		void GetWidgetItem(class UUI_DreadWidget** Widget);
		void HandleUnfocus();
		void HandleFocus();
		void ModuleProgressionItemSelected(class UUI_Generic_Button_Module_C* source);
		void ModuleProgressionItemUnhovered();
		void ModuleProgressionItemHovered(class UUI_Generic_Button_Module_C* source);
		void ShipProgressionItemUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ShipProgressionItemHovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ShipProgressionItemSelected(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void SetModulesRequired(int32_t ModuleRequiresCount);
		void SetupProgressBar();
		void SetModulesOwned(int32_t OwnedModuleCount);
		void Setup(const struct FYUIShipManufacturerTechItemData& shipData);
		void OnModuleProgressionItemClicked__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		void OnModuleProgressionItemUnhovered__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		void OnModuleProgressionItemHovered__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		void OnShipProgressionItemUnhovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void OnShipProgressionItemHovered__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void OnShipProgressionItemClicked__DelegateSignature(class UUI_Button_ManufacturerTechTreeItem_C* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
