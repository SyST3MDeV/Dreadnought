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
	 * BlueprintGeneratedClass UI_FrontEnd.UI_FrontEnd_C
	 * Size -> 0x0059 (FullSize[0x05D9] - InheritedSize[0x0580])
	 */
	class AUI_FrontEnd_C : public AFrontendHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        Aud_Play_MenuMusic;                                      // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UUI_Screen_Root_FrontEnd_C*                          ScreenRoot;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnHangarLoaded;                                          // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShouldHangarReportReady;                                 // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9IY4[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHangarStateUpdated;                                    // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHangarUnloaded;                                        // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsHangarReady;                                           // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoginStreakPopupCheck();
		void CheckAndReportHangarReady();
		void PlayMenuMusic();
		void GetRoot(class UUI_Screen_Root_FrontEnd_C** Root);
		void GetNavigationHandler(class UUI_EventHandler_Navigation_C** Handler);
		void UserConstructionScript();
		void HangarReady();
		void OnHangarStateChanged(EHangarState hangarState);
		void LoadHangar();
		void ExecuteUbergraph_UI_FrontEnd(int32_t EntryPoint);
		void OnHangarUnloaded__DelegateSignature();
		void OnHangarStateUpdated__DelegateSignature(unsigned char hangarState);
		void OnHangarLoaded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
