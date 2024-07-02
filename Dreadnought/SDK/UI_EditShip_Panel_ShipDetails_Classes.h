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
	 * WidgetBlueprintGeneratedClass UI_EditShip_Panel_ShipDetails.UI_EditShip_Panel_ShipDetails_C
	 * Size -> 0x0049 (FullSize[0x0291] - InheritedSize[0x0248])
	 */
	class UUI_EditShip_Panel_ShipDetails_C : public UUI_ShipDetailsSubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Show;                                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ManufacturerLogo;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          ScrollBox_Description;                                   // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ShipDescription;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_Button_TechTree_C*              UI_EditShip_Details_Button_TechTree;                     // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_EditShip_Details_ResearchClaimButton_C*          UI_EditShip_Details_ResearchClaimButton;                 // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Details_Stats_C*                         UI_EditShip_Details_Stats;                               // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsPurchaseInProgress;                                    // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandlePurchaseCompleted();
		void SetupData();
		void OnResearchShip();
		void OnPurchaseShip();
		void SetShipDescription(const class FText& ShipDescription);
		void Setup();
		void SetManufacturerLogo(const class FString& manufacturerIconPath);
		void Construct();
		void OnShow();
		void OnHide();
		void HideComplete();
		void OnButtonTechTreeClicked();
		void OnButtonResearchClaimButtonClicked(class UUI_EditShip_Details_ResearchClaimButton_C* Button);
		void HandleInventoryUpdated();
		void ExecuteUbergraph_UI_EditShip_Panel_ShipDetails(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
