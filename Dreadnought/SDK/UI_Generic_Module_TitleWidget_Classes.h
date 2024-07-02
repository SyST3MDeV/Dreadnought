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
	 * WidgetBlueprintGeneratedClass UI_Generic_Module_TitleWidget.UI_Generic_Module_TitleWidget_C
	 * Size -> 0x004C (FullSize[0x028C] - InheritedSize[0x0240])
	 */
	class UUI_Generic_Module_TitleWidget_C : public UUI_GenericModuleTitleWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_TierIcon_C*                              ModuleClassWidget;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_TierIcon_C*                              ModuleTierWidget;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ShipNameText;                                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FString                                              ModuleName;                                              // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class UTexture2D*                                          ClassIcon;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UTexture2D*                                          TierIcon;                                                // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    ModuleTier;                                              // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetDataFromStruct(const struct FUIGenericButtonModuleData& moduleData);
		void SetData(class UTexture2D* ClassIcon, class UTexture2D* TierIcon, const class FString& ModuleName, int32_t ModuleTier);
		void Construct();
		void UpdateIconsAndText(class UTexture2D* ClassIcon, class UTexture2D* TierIcon, const class FString& ModuleName, int32_t ModuleTier);
		void ExecuteUbergraph_UI_Generic_Module_TitleWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
