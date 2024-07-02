#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AxisInputHelper.AxisInputHelper_C.GetPrevailingVerticalValue
	 */
	struct UAxisInputHelper_C_GetPrevailingVerticalValue_Params
	{
	public:
		float                                                      VerticalAxis;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.GetPrevailingHorizontalValue
	 */
	struct UAxisInputHelper_C_GetPrevailingHorizontalValue_Params
	{
	public:
		float                                                      HorizontalAxis;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.IsValueOutsideDeadzone
	 */
	struct UAxisInputHelper_C_IsValueOutsideDeadzone_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOutsideDeadzone;                                       // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZGI4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.UpdateVerticalAxis
	 */
	struct UAxisInputHelper_C_UpdateVerticalAxis_Params
	{
	public:
		float                                                      VerticalValue;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdatedFromButton;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.UpdateHorizontalAxis
	 */
	struct UAxisInputHelper_C_UpdateHorizontalAxis_Params
	{
	public:
		float                                                      HorizontalValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdatedFromButton;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.DoesMenuActionMatchAxisDirection
	 */
	struct UAxisInputHelper_C_DoesMenuActionMatchAxisDirection_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKQH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.CheckAndResetVerticalDelay
	 */
	struct UAxisInputHelper_C_CheckAndResetVerticalDelay_Params
	{
	public:
		bool                                                       DelayCompleteAndReset;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6XIF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.CheckAndResetHorizontalDelay
	 */
	struct UAxisInputHelper_C_CheckAndResetHorizontalDelay_Params
	{
	public:
		bool                                                       DelayCompletedAndReset;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XJJZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.GetTime
	 */
	struct UAxisInputHelper_C_GetTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JO5F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AxisInputHelper.AxisInputHelper_C.ShouldMenuActionBeHandled
	 */
	struct UAxisInputHelper_C_ShouldMenuActionBeHandled_Params
	{
	public:
		EUI_MenuActions                                            MenuAction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowActionToBeHandled;                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
