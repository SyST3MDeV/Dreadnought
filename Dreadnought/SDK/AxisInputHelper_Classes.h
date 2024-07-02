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
	 * BlueprintGeneratedClass AxisInputHelper.AxisInputHelper_C
	 * Size -> 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
	 */
	class UAxisInputHelper_C : public UActorComponent
	{
	public:
		float                                                      NavigationTickCooldown;                                  // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LastVerticalTickTime;                                    // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastHorizontalTickTime;                                  // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HorizontalAxisState;                                     // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VerticalAxisState;                                       // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AxisDeadzone;                                            // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HorizontalButtonState;                                   // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VerticalButtonState;                                     // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPrevailingVerticalValue(float* VerticalAxis);
		void GetPrevailingHorizontalValue(float* HorizontalAxis);
		void IsValueOutsideDeadzone(float AxisValue, bool* IsOutsideDeadzone);
		void UpdateVerticalAxis(float VerticalValue, bool UpdatedFromButton);
		void UpdateHorizontalAxis(float HorizontalValue, bool UpdatedFromButton);
		void DoesMenuActionMatchAxisDirection(EUI_MenuActions MenuAction, bool* IsValid);
		void CheckAndResetVerticalDelay(bool* DelayCompleteAndReset);
		void CheckAndResetHorizontalDelay(bool* DelayCompletedAndReset);
		void GetTime(float* Time);
		void ShouldMenuActionBeHandled(EUI_MenuActions MenuAction, bool* AllowActionToBeHandled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
