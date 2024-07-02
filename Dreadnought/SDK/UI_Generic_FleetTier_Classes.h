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
	 * WidgetBlueprintGeneratedClass UI_Generic_FleetTier.UI_Generic_FleetTier_C
	 * Size -> 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
	 */
	class UUI_Generic_FleetTier_C : public UUI_DreadWidget
	{
	public:
		class UImage*                                              ImageFleetTier;                                          // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextFirstTier;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextFleetTitle;                                          // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextSecondTier;                                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTexture2D*                                          RecruitIcon;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          VeteranIcon;                                             // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTexture2D*                                          LegendaryIcon;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    RecruitLowTier;                                          // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    VeteranLowTier;                                          // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LegendaryLowTier;                                        // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EYG7[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RecruitLabel;                                            // 0x0288(0x0018) Edit, BlueprintVisible
		class FText                                                VeteranLabel;                                            // 0x02A0(0x0018) Edit, BlueprintVisible
		class FText                                                LegendaryLabel;                                          // 0x02B8(0x0018) Edit, BlueprintVisible

	public:
		void SetFleetType(EYFleetType fleetType);
		void SetTierText(class UTextBlock* TextWidget, const class FText& TierText, const struct FLinearColor& TierColor);
		void SetTierTexts(int32_t FirstTier, int32_t SecondTier);
		void SetFleetText(const class FText& FleetTitle);
		void SetTierImage(class UTexture2D* Texture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
