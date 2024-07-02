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
	 * WidgetBlueprintGeneratedClass UI_TechTree_Row.UI_TechTree_Row_C
	 * Size -> 0x0188 (FullSize[0x03C8] - InheritedSize[0x0240])
	 */
	class UUI_TechTree_Row_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ClassIcon;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ClassIconBorder;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              IconBG;                                                  // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            IconSizeBox;                                             // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ItemBoxBG;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            ItemsSizeBox;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USpacer*                                             LastItemSpacer;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            RootSizeBox;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUniformGridPanel*                                   TechTreeItemBox;                                         // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTexture2D*                                          ClassIconTexture;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FSlateBrush                                         ClassIconBrush;                                          // 0x0298(0x0090) Edit, BlueprintVisible, ExposeOnSpawn
		struct FVector2D                                           ClassIconScale;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FVector2D                                           FrameScale;                                              // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemClicked;                            // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemHovered;                            // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShipAbilityTreeItemUnhovered;                          // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ItemBGColor;                                             // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsRowIconVisible;                                        // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_25CD[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        IconBGColor;                                             // 0x037C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      IconColumnWidth;                                         // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      RowHeight;                                               // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		float                                                      ItemBoxWidth;                                            // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    MaxNumColumns;                                           // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_CYBS[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_Button_Module_C*>                 ModuleWidgets;                                           // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndex;                                            // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DFSE[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReceivedFocus;                                         // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ClearRow();
		void GetModuleWidget(int32_t index, class UUI_Generic_Button_Module_C** Item);
		void PreSetup();
		void HandleUnfocus(int32_t index);
		void HandleFocus(int32_t column);
		void ClearChildren();
		void FindColumnForItem(int32_t itemID, int32_t* column, bool* WasFound);
		void ShipTechTreeItemUnhovered();
		void ShipTechTreeItemHovered(class UUI_Generic_Button_Module_C* source);
		void ShipTechTreeItemSelected(class UUI_Generic_Button_Module_C* source);
		void AddItems(TArray<struct FUIGenericButtonModuleData>* CategoryItems);
		void SetItemClassIcon(class UTexture2D* ClassIcon);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_TechTree_Row(int32_t EntryPoint);
		void OnReceivedFocus__DelegateSignature(class UUI_DreadWidget* source);
		void OnShipAbilityTreeItemUnhovered__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		void OnShipAbilityTreeItemHovered__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		void OnShipAbilityTreeItemClicked__DelegateSignature(class UUI_Generic_Button_Module_C* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
