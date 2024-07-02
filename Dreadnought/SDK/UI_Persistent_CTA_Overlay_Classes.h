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
	 * WidgetBlueprintGeneratedClass UI_Persistent_CTA_Overlay.UI_Persistent_CTA_Overlay_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class UUI_Persistent_CTA_Overlay_C : public UUI_DreadScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            WidgetOverlay;                                           // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class AUI_FrontEnd_C*                                      FrontendHUD;                                             // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EUI_Screen                                                 CurrentScreenEnum;                                       // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CZJM[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UYCtA*>                                       QueuedCTAs;                                              // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UUI_CtAWidget*                                       CurrentCTA;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisplayingCTA;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J9S7[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      UiCtaWidgetClassList;                                    // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UUI_CtAWidget*>                               CTAWidgets;                                              // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void Setup();
		void HandleCTACloseOnConnectionLost();
		void HasCTAFrequencyBeenReached(class UYCtA* CTAData, bool* FrequencyReached);
		void HandleInput(EUI_MenuActions GamePad_Input);
		void IsDisplayingCTA(bool* IsDisplayingCTA);
		void HandleCTACloseComplete(class UUI_CtAWidget* CtAWidget);
		void HandleCTACloseRequest(class UUI_CtAWidget* CtAWidget);
		void CreateCTA(class UYCtA* CTAData);
		void IsScreenValidForCTA(class UYCtA* CTAData, bool* ScreenIsValid);
		void EnqueueCTA(class UYCtA* CTAData);
		void ShowCTAWidgetByClass(class UClass* CtaClass);
		void TriggerQueuedCtA();
		void HandleScreenChanged(EUI_Screen screen);
		void ShowCTA(class UYCtA* CTAData);
		void Construct();
		void OnNavigationEvent(EUI_MenuActions GamePad_Button);
		void ExecuteUbergraph_UI_Persistent_CTA_Overlay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
