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
	 * WidgetBlueprintGeneratedClass UI_EditShip_HorizontalModuleList_Loadout.UI_EditShip_HorizontalModuleList_Loadout_C
	 * Size -> 0x0090 (FullSize[0x02C8] - InheritedSize[0x0238])
	 */
	class UUI_EditShip_HorizontalModuleList_Loadout_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Generic_Button_Module_C*                         InitialModule;                                           // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            ListOverlay;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditLoadout_ModuleDetails_C*                     LoadoutDetailsPanel;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_3;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         UI_EditLoadout_ModuleEquipButton_C_1;                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         UI_EditLoadout_ModuleEquipButton_C_2;                    // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         UI_EditLoadout_ModuleEquipButton_C_3;                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         UI_EditLoadout_ModuleEquipButton_C_4;                    // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Button_Module_C*                         UI_EditLoadout_ModuleEquipButton_C_5;                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_BorderDots_C*                            UI_Generic_BorderDots;                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUniformGridPanel*                                   UniformGridPanel_2;                                      // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Panel_EditLoadout_C*                    OwnerEditLoadoutPanel;                                   // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          InfoTexture;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          L3Texture;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumColumns;                                              // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HZ6B[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_Generic_Button_Module_C*>                 ModuleList;                                              // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void GetScrollBox(class UScrollBox** ScrollBox);
		void GetColumnCount(int32_t* NumColumns);
		void ClearGrid();
		void AddWidgetToGrid(class UUI_Generic_Button_Module_C* GenericModuleButton, class UUI_Generic_Button_Module_C** ReturnValue);
		void SetOwnerPanel(class UUI_EditShip_Panel_EditLoadout_C* Owner);
		void ShowLoadoutDetails();
		void HideDetails();
		void SetDetails(const struct FYItemUIData& itemData, int32_t tier, const class FString& CategoryIcon);
		void AddModule(const struct FUIGenericButtonModuleData& Data, class UUI_Generic_Button_Module_C** ReturnValue);
		void Construct();
		void ExecuteUbergraph_UI_EditShip_HorizontalModuleList_Loadout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
