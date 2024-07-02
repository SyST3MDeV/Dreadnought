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
	 * WidgetBlueprintGeneratedClass UI_ShipTechTree_ProgressionPath.UI_ShipTechTree_ProgressionPath_C
	 * Size -> 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
	 */
	class UUI_ShipTechTree_ProgressionPath_C : public UUI_ShipTechTreeProgressionPathWidget
	{
	public:
		class UImage*                                              BottomLine;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ShipProgressionHorizontalBox;                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              TopLine;                                                 // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnShipProgressionItemClicked;                            // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipProgressionItemHovered;                            // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipProgressionItemUnhovered;                          // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemHovered;                          // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemUnhovered;                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModuleProgressionItemClicked;                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentIndex;                                            // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FMHF[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_ShipTechTree_Progression_C*>              ProgressionWidgets;                                      // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetWidget(int32_t index, class UUI_DreadWidget** Widget);
		void GetIsShip(int32_t index, bool* IsShip);
		void GetWidgetIndex(class UUI_DreadWidget* Widget, int32_t* index);
		void HandleUnfocus(int32_t index);
		void HandleFocus(int32_t index);
		void ModuleProgressionItemSelected(class UUI_Generic_Button_Module_C* source);
		void ModuleProgressionItemUnhovered(class UUI_Generic_Button_Module_C* source);
		void ModuleProgressionItemHovered(class UUI_Generic_Button_Module_C* source);
		void FindColumnForItem(int32_t itemID, int32_t* column, bool* WasFound);
		void ShipProgressionItemUnhovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ShipProgressionItemHovered(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ShipProgressionItemSelected(class UUI_Button_ManufacturerTechTreeItem_C* source);
		void ClearChildren();
		void AddProgressionItem(const struct FYUIShipManufacturerTechItemData& ShipItem);
		void AddProgressionItems(TArray<struct FYUIShipManufacturerTechItemData>* shipDataArray);
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
