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
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.GetID
	 */
	struct UUI_Persistent_SquadList_Card_C_GetID_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ClearVoiceChatStatus
	 */
	struct UUI_Persistent_SquadList_Card_C_ClearVoiceChatStatus_Params
	{	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.UpdateVoiceChatStatus
	 */
	struct UUI_Persistent_SquadList_Card_C_UpdateVoiceChatStatus_Params
	{
	public:
		struct FSquadVoiceData                                     VoiceData;                                               // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.clear
	 */
	struct UUI_Persistent_SquadList_Card_C_clear_Params
	{	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Setup
	 */
	struct UUI_Persistent_SquadList_Card_C_Setup_Params
	{
	public:
		struct FSquadUserData                                      SquadMemberData;                                         // 0x0000(0x0080)  (Parm)
	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.Construct
	 */
	struct UUI_Persistent_SquadList_Card_C_Construct_Params
	{	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.PreConstruct
	 */
	struct UUI_Persistent_SquadList_Card_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Persistent_SquadList_Card.UI_Persistent_SquadList_Card_C.ExecuteUbergraph_UI_Persistent_SquadList_Card
	 */
	struct UUI_Persistent_SquadList_Card_C_ExecuteUbergraph_UI_Persistent_SquadList_Card_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
