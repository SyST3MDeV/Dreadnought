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
	 * WidgetBlueprintGeneratedClass UI_Generic_ShipTitleWidget.UI_Generic_ShipTitleWidget_C
	 * Size -> 0x0068 (FullSize[0x02A8] - InheritedSize[0x0240])
	 */
	class UUI_Generic_ShipTitleWidget_C : public UUI_GenericShipTitleWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Generic_CurrencyCost_C*                          CurrentPlayerXP;                                         // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ExtraTierColorBacking;                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        ImageRetainerBox;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ShipNameText;                                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_TierIcon_C*                              ShipTierWidget;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             ShipXPButton;                                            // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_TierIcon_C*                              TierIconWidget;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FString                                              shipName;                                                // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class UTexture2D*                                          shipIcon;                                                // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UTexture2D*                                          TierIcon;                                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UMaterialInstanceDynamic*                            GlitchMaterialInstance;                                  // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetShipXP(int32_t xp);
		void SetDataFromStruct(const struct FYUIShipManufacturerTechItemData& shipData);
		void SetData(class UTexture2D* TierIcon, class UTexture2D* shipIcon, const class FString& shipName, int32_t tier, bool IsHeroShip);
		void Construct();
		void UpdateIconsAndText(class UTexture2D* TierIcon, class UTexture2D* shipIcon, const class FString& shipName, int32_t shipTier);
		void ExecuteUbergraph_UI_Generic_ShipTitleWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
