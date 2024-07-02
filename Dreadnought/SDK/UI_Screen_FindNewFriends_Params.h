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
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.HandleInput
	 */
	struct UUI_Screen_FindNewFriends_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.GatherCheckedFriendsAndSendInvites
	 */
	struct UUI_Screen_FindNewFriends_C_GatherCheckedFriendsAndSendInvites_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.BuildSearchResults
	 */
	struct UUI_Screen_FindNewFriends_C_BuildSearchResults_Params
	{
	public:
		TArray<struct FFindNewFriendUserData>                      SearchResults;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchLabel
	 */
	struct UUI_Screen_FindNewFriends_C_ResetSearchLabel_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ResetSearchResults
	 */
	struct UUI_Screen_FindNewFriends_C_ResetSearchResults_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.Construct
	 */
	struct UUI_Screen_FindNewFriends_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionIn
	 */
	struct UUI_Screen_FindNewFriends_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnStartSearch
	 */
	struct UUI_Screen_FindNewFriends_C_OnStartSearch_Params
	{
	public:
		class FText                                                filterText;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSearchForUsersResult
	 */
	struct UUI_Screen_FindNewFriends_C_OnSearchForUsersResult_Params
	{
	public:
		TArray<struct FFindNewFriendUserData>                      foundUsers;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnCloseButtonClicked
	 */
	struct UUI_Screen_FindNewFriends_C_OnCloseButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnSendFriendInvitesButtonClicked
	 */
	struct UUI_Screen_FindNewFriends_C_OnSendFriendInvitesButtonClicked_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnTransitionOut
	 */
	struct UUI_Screen_FindNewFriends_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.OnNavigationEvent
	 */
	struct UUI_Screen_FindNewFriends_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_FindNewFriends.UI_Screen_FindNewFriends_C.ExecuteUbergraph_UI_Screen_FindNewFriends
	 */
	struct UUI_Screen_FindNewFriends_C_ExecuteUbergraph_UI_Screen_FindNewFriends_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
