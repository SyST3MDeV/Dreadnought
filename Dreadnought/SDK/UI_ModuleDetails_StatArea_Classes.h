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
	 * WidgetBlueprintGeneratedClass UI_ModuleDetails_StatArea.UI_ModuleDetails_StatArea_C
	 * Size -> 0x0014 (FullSize[0x0254] - InheritedSize[0x0240])
	 */
	class UUI_ModuleDetails_StatArea_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGridPanel*                                          StatPanel;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		float                                                      RowBottomPadding;                                        // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CreateStatRow(const struct FYToolTipValue& ToolTipData, int32_t CurrentToolTipIndex, bool ShowModifierText);
		void SetStats(TArray<struct FYToolTipValue>* ToolTipData, bool HideModifyText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_ModuleDetails_StatArea(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
