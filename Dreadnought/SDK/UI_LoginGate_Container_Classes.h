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
	 * WidgetBlueprintGeneratedClass UI_LoginGate_Container.UI_LoginGate_Container_C
	 * Size -> 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
	 */
	class UUI_LoginGate_Container_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsBottom;                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_SelectionBrackets_C*                     SelectionBracketsTop;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_LoginGate_Header_C*                              UI_LoginGate_Header;                                     // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_LoginGate_Navigation_C*                          UI_LoginGate_Navigation;                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_LoginGate_Stats_C*                               UI_LoginGate_Stats;                                      // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_LoginGate_Message_C*                             UILoginGateMessage;                                      // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                LabelQueuePosition;                                      // 0x0278(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LabelEstimatedWait;                                      // 0x0290(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LabelBurstSmoothing;                                     // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetLoginQueueStats(bool ShouldShowQueue, bool ShouldShowWait, bool ShouldShowCheckTime, const class FText& QueueText, const class FText& WaitTimeText, const class FText& CheckTimeText);
		void SetBurstSmoothingStats(bool HasEstimatedWait, const class FText& WaitTimeText);
		void SetWaitText(const class FText& WaitTime);
		void SetQueueText(const class FText& QueueText);
		void ShowStatsTextInfo(bool Show);
		void UpdateCheckTime(const class FText& TextTime);
		void SetMessageText(const class FText& MessageText);
		void SetHeaderText(const class FText& headerText);
		void ShowNavigationArea(bool Show);
		void ShowStatsArea(bool Show);
		void ShowCheckingProgress(bool Show);
		void ShowMessageArea(bool Show);
		void Construct();
		void ExecuteUbergraph_UI_LoginGate_Container(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
