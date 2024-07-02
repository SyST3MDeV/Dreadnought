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
	 * WidgetBlueprintGeneratedClass UI_ModuleDetailsPanel.UI_ModuleDetailsPanel_C
	 * Size -> 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
	 */
	class UUI_ModuleDetailsPanel_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          DescTextScrollBox;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ItemDescription;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Module_TitleWidget_C*                    ItemTitleWidget;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_ModuleDetails_Purchase_C*                 ModuleResearchPurchaseButton;                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_ModuleDetails_StatArea_C*                        ModuleStatsPanel;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            StatAreaOverlay;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        ThumbnailOrVideoBox;                                     // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Button_Generic_C*                                VanityPurchaseButton;                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             VanityPurchaseButtonClicked;                             // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool ShouldShowPurchaseButton(bool ItemIsOwned);
		void SetVanityPurchaseCost(int32_t ItemPurchaseCost);
		void Setup(bool IsItemModule, bool IsItemOfficerBriefing, bool IsOwned);
		void SetItemDescription(const class FText& ModuleDescText);
		void SetStats(const struct FYItemUIData& UIData);
		void SetItemTitle(const struct FUIGenericButtonModuleData& moduleData);
		void Construct();
		void BndEvt__VanityPurchaseButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature(int32_t index);
		void OnActionReceived();
		void ExecuteUbergraph_UI_ModuleDetailsPanel(int32_t EntryPoint);
		void VanityPurchaseButtonClicked__DelegateSignature(class UUserWidget* source);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
