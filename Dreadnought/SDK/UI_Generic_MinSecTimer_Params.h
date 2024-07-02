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
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.SetFontSize
	 */
	struct UUI_Generic_MinSecTimer_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MAA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.SetTime
	 */
	struct UUI_Generic_MinSecTimer_C_SetTime_Params
	{
	public:
		float                                                      InSeconds;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3K20[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.TickTimer
	 */
	struct UUI_Generic_MinSecTimer_C_TickTimer_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.Tick
	 */
	struct UUI_Generic_MinSecTimer_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.PreConstruct
	 */
	struct UUI_Generic_MinSecTimer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.ExecuteUbergraph_UI_Generic_MinSecTimer
	 */
	struct UUI_Generic_MinSecTimer_C_ExecuteUbergraph_UI_Generic_MinSecTimer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Generic_MinSecTimer.UI_Generic_MinSecTimer_C.TimerExpired__DelegateSignature
	 */
	struct UUI_Generic_MinSecTimer_C_TimerExpired__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
