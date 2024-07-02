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
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ClearTechTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_TechTree_C::ClearTechTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ClearTechTree");
		
		UUI_TechTree_C_ClearTechTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ComposeTechTreePaths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FUITechTreeShipNode>                 TechTreeNodesOut                                           (Parm, OutParm, ZeroConstructor)
	 */
	void UUI_TechTree_C::ComposeTechTreePaths(TArray<struct FUITechTreeShipNode>* TechTreeNodesOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ComposeTechTreePaths");
		
		UUI_TechTree_C_ComposeTechTreePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TechTreeNodesOut != nullptr)
			*TechTreeNodesOut = params.TechTreeNodesOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.FindClosestShip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            column                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_Button_ManufacturerTechTreeItem_C*> ShipList                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       Ship                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::FindClosestShip(int32_t Row, int32_t column, TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* ShipList, class UUI_Button_ManufacturerTechTreeItem_C** Ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.FindClosestShip");
		
		UUI_TechTree_C_FindClosestShip_Params params {};
		params.Row = Row;
		params.column = column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShipList != nullptr)
			*ShipList = params.ShipList;
		if (Ship != nullptr)
			*Ship = params.Ship;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.HandleInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    GamePadButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::HandleInput(EUI_MenuActions GamePadButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.HandleInput");
		
		UUI_TechTree_C_HandleInput_Params params {};
		params.GamePadButton = GamePadButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.GetNavShip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUI_MenuActions                                    Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       CurrentShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_Button_ManufacturerTechTreeItem_C*> ShipList                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               ShipFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       Ship                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::GetNavShip(EUI_MenuActions Direction, class UUI_Button_ManufacturerTechTreeItem_C* CurrentShip, TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* ShipList, bool* ShipFound, class UUI_Button_ManufacturerTechTreeItem_C** Ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.GetNavShip");
		
		UUI_TechTree_C_GetNavShip_Params params {};
		params.Direction = Direction;
		params.CurrentShip = CurrentShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShipList != nullptr)
			*ShipList = params.ShipList;
		if (ShipFound != nullptr)
			*ShipFound = params.ShipFound;
		if (Ship != nullptr)
			*Ship = params.Ship;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.SetWidgetFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             NewFocusWidget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUI_Enum_ManufacturerTechTreeFocusStates           NewFocusState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::SetWidgetFocus(class UUI_DreadWidget* NewFocusWidget, EUI_Enum_ManufacturerTechTreeFocusStates NewFocusState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.SetWidgetFocus");
		
		UUI_TechTree_C_SetWidgetFocus_Params params {};
		params.NewFocusWidget = NewFocusWidget;
		params.NewFocusState = NewFocusState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_TechTree_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.Setup");
		
		UUI_TechTree_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.SetupTechTrees
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::SetupTechTrees(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* shipData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.SetupTechTrees");
		
		UUI_TechTree_C_SetupTechTrees_Params params {};
		params.HeroShipData = HeroShipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipData != nullptr)
			*shipData = params.shipData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.FindInitialTreeFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_Button_ManufacturerTechTreeItem_C*> TreeWidgetList                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       InitialItem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::FindInitialTreeFocus(TArray<class UUI_Button_ManufacturerTechTreeItem_C*>* TreeWidgetList, class UUI_Button_ManufacturerTechTreeItem_C** InitialItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.FindInitialTreeFocus");
		
		UUI_TechTree_C_FindInitialTreeFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TreeWidgetList != nullptr)
			*TreeWidgetList = params.TreeWidgetList;
		if (InitialItem != nullptr)
			*InitialItem = params.InitialItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_TechTree_C::Action()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.Action");
		
		UUI_TechTree_C_Action_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.AddItemToHeroGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_TechTree_Row_C*                          techTreeRow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       ManufacturerTechTreeItem                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::AddItemToHeroGrid(class UUI_TechTree_Row_C* techTreeRow, class UUI_Button_ManufacturerTechTreeItem_C* ManufacturerTechTreeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.AddItemToHeroGrid");
		
		UUI_TechTree_C_AddItemToHeroGrid_Params params {};
		params.techTreeRow = techTreeRow;
		params.ManufacturerTechTreeItem = ManufacturerTechTreeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.AddHeroItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    Stack                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::AddHeroItem(TArray<struct FYUIShipManufacturerTechItemData>* Stack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.AddHeroItem");
		
		UUI_TechTree_C_AddHeroItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stack != nullptr)
			*Stack = params.Stack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.SetupHeroTechTreeItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroItems                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::SetupHeroTechTreeItems(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* HeroItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.SetupHeroTechTreeItems");
		
		UUI_TechTree_C_SetupHeroTechTreeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeroItems != nullptr)
			*HeroItems = params.HeroItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ShowHeroShips
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::ShowHeroShips(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ShowHeroShips");
		
		UUI_TechTree_C_ShowHeroShips_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.AddItemToGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_TechTree_Row_C*                          techTreeRow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       ManufacturerTechTreeItem                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::AddItemToGrid(class UUI_TechTree_Row_C* techTreeRow, class UUI_Button_ManufacturerTechTreeItem_C* ManufacturerTechTreeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.AddItemToGrid");
		
		UUI_TechTree_C_AddItemToGrid_Params params {};
		params.techTreeRow = techTreeRow;
		params.ManufacturerTechTreeItem = ManufacturerTechTreeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.AddToGrid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EYShipClass                                        shipclass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UUI_TechTree_Row_C*>                  RowList                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::AddToGrid(class UUI_Button_ManufacturerTechTreeItem_C* Item, EYShipClass shipclass, TArray<class UUI_TechTree_Row_C*>* RowList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.AddToGrid");
		
		UUI_TechTree_C_AddToGrid_Params params {};
		params.Item = Item;
		params.shipclass = shipclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowList != nullptr)
			*RowList = params.RowList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.GetClassFromIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IconTexture                                                (Parm, ZeroConstructor)
	 * 		EYShipClass                                        shipclass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::GetClassFromIcon(const class FString& IconTexture, EYShipClass* shipclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.GetClassFromIcon");
		
		UUI_TechTree_C_GetClassFromIcon_Params params {};
		params.IconTexture = IconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shipclass != nullptr)
			*shipclass = params.shipclass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.GetRowFromClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EYShipClass                                        shipclass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Row                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::GetRowFromClass(EYShipClass shipclass, int32_t* Row)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.GetRowFromClass");
		
		UUI_TechTree_C_GetRowFromClass_Params params {};
		params.shipclass = shipclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Row != nullptr)
			*Row = params.Row;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ShipTechTreeItemClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Button_ManufacturerTechTreeItem_C*       source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::ShipTechTreeItemClicked(class UUI_Button_ManufacturerTechTreeItem_C* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ShipTechTreeItemClicked");
		
		UUI_TechTree_C_ShipTechTreeItemClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.AddItem
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechItemData>    Stack                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::AddItem(TArray<struct FYUIShipManufacturerTechItemData>* Stack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.AddItem");
		
		UUI_TechTree_C_AddItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stack != nullptr)
			*Stack = params.Stack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.SetupTechTreeItems
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> items                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::SetupTechTreeItems(TArray<struct FYUIShipManufacturerTechTreeStackItemData>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.SetupTechTreeItems");
		
		UUI_TechTree_C_SetupTechTreeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_TechTree_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.Construct");
		
		UUI_TechTree_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.InitializeTechTree
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FYUITechTreeConnectionData>          ConnectionData                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UUI_TechTree_C::InitializeTechTree(TArray<struct FYUIShipManufacturerTechTreeStackItemData> shipData, TArray<struct FYUITechTreeConnectionData> ConnectionData, TArray<struct FYUIShipManufacturerTechTreeStackItemData> HeroShipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.InitializeTechTree");
		
		UUI_TechTree_C_InitializeTechTree_Params params {};
		params.shipData = shipData;
		params.ConnectionData = ConnectionData;
		params.HeroShipData = HeroShipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ExpandButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::ExpandButtonClicked(class UUserWidget* source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ExpandButtonClicked");
		
		UUI_TechTree_C_ExpandButtonClicked_Params params {};
		params.source = source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.OnActionReceived
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_TechTree_C::OnActionReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.OnActionReceived");
		
		UUI_TechTree_C_OnActionReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedShip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::UpdateCurrentlyFocusedShip(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedShip");
		
		UUI_TechTree_C_UpdateCurrentlyFocusedShip_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedHeroShip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::UpdateCurrentlyFocusedHeroShip(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.UpdateCurrentlyFocusedHeroShip");
		
		UUI_TechTree_C_UpdateCurrentlyFocusedHeroShip_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ExpandButtonFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_DreadWidget*                             FocusedItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::ExpandButtonFocused(class UUI_DreadWidget* FocusedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ExpandButtonFocused");
		
		UUI_TechTree_C_ExpandButtonFocused_Params params {};
		params.FocusedItem = FocusedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.ExecuteUbergraph_UI_TechTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TechTree_C::ExecuteUbergraph_UI_TechTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.ExecuteUbergraph_UI_TechTree");
		
		UUI_TechTree_C_ExecuteUbergraph_UI_TechTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_TechTree.UI_TechTree_C.OnShipTechTreeItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FYUIShipManufacturerTechItemData            shipData                                                   (Parm)
	 */
	void UUI_TechTree_C::OnShipTechTreeItemClicked__DelegateSignature(const struct FYUIShipManufacturerTechItemData& shipData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTree.UI_TechTree_C.OnShipTechTreeItemClicked__DelegateSignature");
		
		UUI_TechTree_C_OnShipTechTreeItemClicked__DelegateSignature_Params params {};
		params.shipData = shipData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TechTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TechTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TechTree.UI_TechTree_C");
		return ptr;
	}

}


