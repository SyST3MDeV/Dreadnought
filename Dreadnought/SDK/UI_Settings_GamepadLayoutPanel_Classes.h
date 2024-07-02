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
	 * WidgetBlueprintGeneratedClass UI_Settings_GamepadLayoutPanel.UI_Settings_GamepadLayoutPanel_C
	 * Size -> 0x0280 (FullSize[0x04B8] - InheritedSize[0x0238])
	 */
	class UUI_Settings_GamepadLayoutPanel_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          Label_Circle;                                            // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Cross;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Down;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_L1;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_L2;                                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_L3;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_LayoutNumber;                                      // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Left;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_LeftAxis;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Options;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_R1;                                                // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_R2;                                                // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_R3;                                                // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Right;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_RightAxis;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Square;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_TouchpadClick;                                     // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_TouchpadSwipe;                                     // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Triangle;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Label_Up;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Text_Layout1;                                            // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Layout2;                                            // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_LayoutVita;                                         // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Ascend;                                             // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Descend;                                            // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Fire;                                               // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Move;                                               // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Camera;                                             // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_EnergySwipe;                                        // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_ShortCommandsClick;                                 // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Menu;                                               // 0x03C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_SwapWeapons;                                        // 0x03E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Reload;                                             // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Scoreboard;                                         // 0x0410(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Module1;                                            // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Module2;                                            // 0x0440(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Module3;                                            // 0x0458(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Module4;                                            // 0x0470(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_Zoom;                                               // 0x0488(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Text_CamShort;                                           // 0x04A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetLayoutVita();
		void SetStickBindings(const class FText& LeftAxis, const class FText& L3, const class FText& RightAxis, const class FText& R3);
		void SetFaceAndDPadBindings(const class FText& Triangle, const class FText& Circle, const class FText& Square, const class FText& Cross, const class FText& Up, const class FText& Left, const class FText& Right, const class FText& Down);
		void SetShoulderBindings(const class FText& L1, const class FText& L2, const class FText& R1, const class FText& R2);
		void SetCenterBindings(const class FText& TouchpadSwipe, const class FText& TouchpadClick, const class FText& Options);
		void SetLayout2();
		void SetLayout1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
