/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SwapToFromShipTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsShipLayout                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SwapToFromShipTab(bool IsShipLayout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SwapToFromShipTab");
		
		UUI_MarketBundleDetails_InfoPanel_C_SwapToFromShipTab_Params params {};
		params.IsShipLayout = IsShipLayout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetDescriptionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetDescriptionText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetDescriptionText");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetDescriptionText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::ShowShipTabs(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipTabs");
		
		UUI_MarketBundleDetails_InfoPanel_C_ShowShipTabs_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupElitePanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupElitePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupElitePanel");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupElitePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_BundleDetails_TabIcon_C*          Tab                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMarketBundleInfoTabs                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupTab(class UUI_Market_BundleDetails_TabIcon_C* Tab, EMarketBundleInfoTabs Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupTab");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupTab_Params params {};
		params.Tab = Tab;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetScrollBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UScrollBox*                                  ScrollboxWidget                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::GetScrollBox(int32_t index, class UScrollBox** ScrollboxWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetScrollBox");
		
		UUI_MarketBundleDetails_InfoPanel_C_GetScrollBox_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScrollboxWidget != nullptr)
			*ScrollboxWidget = params.ScrollboxWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetNumTabs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::GetNumTabs(int32_t* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetNumTabs");
		
		UUI_MarketBundleDetails_InfoPanel_C_GetNumTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HasTabs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::HasTabs(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HasTabs");
		
		UUI_MarketBundleDetails_InfoPanel_C_HasTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetTab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Market_BundleDetails_TabIcon_C*          TabWidget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::GetTab(int32_t index, class UUI_Market_BundleDetails_TabIcon_C** TabWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetTab");
		
		UUI_MarketBundleDetails_InfoPanel_C_GetTab_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabWidget != nullptr)
			*TabWidget = params.TabWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Setup");
		
		UUI_MarketBundleDetails_InfoPanel_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetPanelAssociatedWithTab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Market_BundleDetails_TabIcon_C*          Tab                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBorder*                                     Panel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::GetPanelAssociatedWithTab(class UUI_Market_BundleDetails_TabIcon_C* Tab, class UBorder** Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.GetPanelAssociatedWithTab");
		
		UUI_MarketBundleDetails_InfoPanel_C_GetPanelAssociatedWithTab_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Panel != nullptr)
			*Panel = params.Panel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelsContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::PopulatePanelsContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelsContent");
		
		UUI_MarketBundleDetails_InfoPanel_C_PopulatePanelsContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelAndScrollboxArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::PopulatePanelAndScrollboxArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.PopulatePanelAndScrollboxArrays");
		
		UUI_MarketBundleDetails_InfoPanel_C_PopulatePanelAndScrollboxArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ResetUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::ResetUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ResetUI");
		
		UUI_MarketBundleDetails_InfoPanel_C_ResetUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HandleTabSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Market_BundleDetails_TabIcon_C*          Tab                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::HandleTabSelected(class UUI_Market_BundleDetails_TabIcon_C* Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.HandleTabSelected");
		
		UUI_MarketBundleDetails_InfoPanel_C_HandleTabSelected_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupAllTabs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupAllTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupAllTabs");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupAllTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupStatsPanel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupStatsPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupStatsPanel");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupStatsPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipLayout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::ShowShipLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ShowShipLayout");
		
		UUI_MarketBundleDetails_InfoPanel_C_ShowShipLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupCharacterItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupCharacterItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupCharacterItem");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupCharacterItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLorePanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupLorePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLorePanel");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupLorePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLoadoutItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetupLoadoutItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetupLoadoutItem");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetupLoadoutItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetMarketItemData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYMenuItemData                              itemData                                                   (Parm)
	 * 		bool                                               IsItemEquippable                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::SetMarketItemData(const struct FYMenuItemData& itemData, bool IsItemEquippable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.SetMarketItemData");
		
		UUI_MarketBundleDetails_InfoPanel_C_SetMarketItemData_Params params {};
		params.itemData = itemData;
		params.IsItemEquippable = IsItemEquippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.Construct");
		
		UUI_MarketBundleDetails_InfoPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MarketBundleDetails_InfoPanel_C::ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C.ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel");
		
		UUI_MarketBundleDetails_InfoPanel_C_ExecuteUbergraph_UI_MarketBundleDetails_InfoPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MarketBundleDetails_InfoPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MarketBundleDetails_InfoPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MarketBundleDetails_InfoPanel.UI_MarketBundleDetails_InfoPanel_C");
		return ptr;
	}

}


