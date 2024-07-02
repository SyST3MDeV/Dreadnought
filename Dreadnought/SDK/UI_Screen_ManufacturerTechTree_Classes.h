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
	 * WidgetBlueprintGeneratedClass UI_Screen_ManufacturerTechTree.UI_Screen_ManufacturerTechTree_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UUI_Screen_ManufacturerTechTree_C : public UUI_ManufacturerTechTreeScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TransitionOut;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    TransitionIn;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TabList_Generic_C*                               ManufacturerTabs;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              RequirementPaths;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_TechTree_C*                                      UI_TechTree;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FLegendPromptData>                           PS4ButtonLegend;                                         // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UTexture2D*>                                  RequirementPathTextures;                                 // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FText                                                TextJupiterArms;                                         // 0x02C8(0x0018) Edit, BlueprintVisible
		class FText                                                TextAkulaVektor;                                         // 0x02E0(0x0018) Edit, BlueprintVisible
		class FText                                                TextOberon;                                              // 0x02F8(0x0018) Edit, BlueprintVisible

	public:
		void SetupTabs();
		void HandleTabClicked(class UUI_Button_Tab_Generic_C* Tab);
		void Setup();
		void SetRequirementPaths();
		void ComposeTechTreePaths(TArray<struct FUITechTreeShipNode>* TechTreeNodes);
		void HandleInput(EUI_MenuActions GamePadButton);
		void Construct();
		void BndEvt__UI_TechTree_K2Node_ComponentBoundEvent_0_OnShipTechTreeItemClicked__DelegateSignature(const struct FYUIShipManufacturerTechItemData& shipData);
		void OnTransitionIn();
		void OnTransitionOut();
		void TransitionInAnimationComplete();
		void TransitionOutAnimationComplete();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_Screen_ManufacturerTechTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
