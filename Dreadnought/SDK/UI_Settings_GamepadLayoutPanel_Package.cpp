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
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayoutVita
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetLayoutVita()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayoutVita");
		
		UUI_Settings_GamepadLayoutPanel_C_SetLayoutVita_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetStickBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        LeftAxis                                                   (Parm)
	 * 		class FText                                        L3                                                         (Parm)
	 * 		class FText                                        RightAxis                                                  (Parm)
	 * 		class FText                                        R3                                                         (Parm)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetStickBindings(const class FText& LeftAxis, const class FText& L3, const class FText& RightAxis, const class FText& R3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetStickBindings");
		
		UUI_Settings_GamepadLayoutPanel_C_SetStickBindings_Params params {};
		params.LeftAxis = LeftAxis;
		params.L3 = L3;
		params.RightAxis = RightAxis;
		params.R3 = R3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetFaceAndDPadBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Triangle                                                   (Parm)
	 * 		class FText                                        Circle                                                     (Parm)
	 * 		class FText                                        Square                                                     (Parm)
	 * 		class FText                                        Cross                                                      (Parm)
	 * 		class FText                                        Up                                                         (Parm)
	 * 		class FText                                        Left                                                       (Parm)
	 * 		class FText                                        Right                                                      (Parm)
	 * 		class FText                                        Down                                                       (Parm)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetFaceAndDPadBindings(const class FText& Triangle, const class FText& Circle, const class FText& Square, const class FText& Cross, const class FText& Up, const class FText& Left, const class FText& Right, const class FText& Down)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetFaceAndDPadBindings");
		
		UUI_Settings_GamepadLayoutPanel_C_SetFaceAndDPadBindings_Params params {};
		params.Triangle = Triangle;
		params.Circle = Circle;
		params.Square = Square;
		params.Cross = Cross;
		params.Up = Up;
		params.Left = Left;
		params.Right = Right;
		params.Down = Down;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetShoulderBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        L1                                                         (Parm)
	 * 		class FText                                        L2                                                         (Parm)
	 * 		class FText                                        R1                                                         (Parm)
	 * 		class FText                                        R2                                                         (Parm)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetShoulderBindings(const class FText& L1, const class FText& L2, const class FText& R1, const class FText& R2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetShoulderBindings");
		
		UUI_Settings_GamepadLayoutPanel_C_SetShoulderBindings_Params params {};
		params.L1 = L1;
		params.L2 = L2;
		params.R1 = R1;
		params.R2 = R2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetCenterBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TouchpadSwipe                                              (Parm)
	 * 		class FText                                        TouchpadClick                                              (Parm)
	 * 		class FText                                        Options                                                    (Parm)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetCenterBindings(const class FText& TouchpadSwipe, const class FText& TouchpadClick, const class FText& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetCenterBindings");
		
		UUI_Settings_GamepadLayoutPanel_C_SetCenterBindings_Params params {};
		params.TouchpadSwipe = TouchpadSwipe;
		params.TouchpadClick = TouchpadClick;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetLayout2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout2");
		
		UUI_Settings_GamepadLayoutPanel_C_SetLayout2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D5B4F0
	 * 		Name   -> Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout1
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_GamepadLayoutPanel_C::SetLayout1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C.SetLayout1");
		
		UUI_Settings_GamepadLayoutPanel_C_SetLayout1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_GamepadLayoutPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_GamepadLayoutPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C");
		return ptr;
	}

}


