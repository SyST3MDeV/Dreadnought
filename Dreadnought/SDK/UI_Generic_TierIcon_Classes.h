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
	 * WidgetBlueprintGeneratedClass UI_Generic_TierIcon.UI_Generic_TierIcon_C
	 * Size -> 0x0044 (FullSize[0x027C] - InheritedSize[0x0238])
	 */
	class UUI_Generic_TierIcon_C : public UUserWidget
	{
	public:
		class UImage*                                              BG;                                                      // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              icon;                                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           IconScaleBox;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTexture2D*                                          IconTexture;                                             // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    tier;                                                    // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FLinearColor                                        TierColor;                                               // 0x025C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMargin                                             IconPadding;                                             // 0x026C(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetTextureFromTier(int32_t tier);
		void SetTier(int32_t tier, bool IsHeroShip);
		void SetIconTexture(class UTexture2D* IconTexture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
