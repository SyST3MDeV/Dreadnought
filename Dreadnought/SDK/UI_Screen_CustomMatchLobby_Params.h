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
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsTeamListFocused
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsTeamListFocused_Params
	{
	public:
		bool                                                       TeamFocused;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedTeam
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetFocusedTeam_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RefreshAllUserData
	 */
	struct UUI_Screen_CustomMatchLobby_C_RefreshAllUserData_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOptionInput
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleOptionInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GS1Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HideOptions
	 */
	struct UUI_Screen_CustomMatchLobby_C_HideOptions_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandlePlayerOptionClicked
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandlePlayerOptionClicked_Params
	{
	public:
		EFriendOptionButton                                        option;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ShowOptions
	 */
	struct UUI_Screen_CustomMatchLobby_C_ShowOptions_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6U6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleActionPlayerOptions
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleActionPlayerOptions_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1QBQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DisplayWelcomePopup
	 */
	struct UUI_Screen_CustomMatchLobby_C_DisplayWelcomePopup_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnScreen
	 */
	struct UUI_Screen_CustomMatchLobby_C_SetBindingsOnScreen_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetNewIndexFromRow
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetNewIndexFromRow_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          OtherTeam;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Row;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UpdatedIndex;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFriendInviteLength
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetFriendInviteLength_Params
	{
	public:
		int32_t                                                    listLength;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0OB9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendDown
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFriendDown_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S96L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendUp
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFriendUp_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendActionButtonLeftRight
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFriendActionButtonLeftRight_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsFriendActionButtonFocused
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsFriendActionButtonFocused_Params
	{
	public:
		bool                                                       IsButtonFocused;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusFriendItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_FocusFriendItem_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusFriendItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_UnfocusFriendItem_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateFocusedInviteItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateFocusedInviteItem_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendLeftRight
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFriendLeftRight_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFriendInvitesClosed
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFriendInvitesClosed_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInviteInput
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleInviteInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemCheckbox
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsCurrentItemCheckbox_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownDown
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleDropdownDown_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropdownUp
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleDropdownUp_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDropDownAction
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleDropDownAction_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsCurrentItemDropdown
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsCurrentItemDropdown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SWLM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleBack
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleBack_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsDropdownOpen
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsDropdownOpen_Params
	{
	public:
		bool                                                       IsDropdownOpen;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentIndex
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateCurrentIndex_Params
	{
	public:
		int32_t                                                    UpdatedListIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.IsMovingBetweenTeamList
	 */
	struct UUI_Screen_CustomMatchLobby_C_IsMovingBetweenTeamList_Params
	{
	public:
		int32_t                                                    NewListIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetFocusedRow
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetFocusedRow_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          Team;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FocusedIndex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z3PH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CustomMatch_TeamList_Row_C*                      Item;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CalcNumberOfNavigableItems
	 */
	struct UUI_Screen_CustomMatchLobby_C_CalcNumberOfNavigableItems_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          Team;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetListLength
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetListLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KDXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularLeftRight
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleGranularLeftRight_Params
	{
	public:
		int32_t                                                    NewListIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentList
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateCurrentList_Params
	{
	public:
		int32_t                                                    CurrentListIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateCurrentlyFocusedItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateCurrentlyFocusedItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UnfocusCurrentItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_UnfocusCurrentItem_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleGranularUpDown
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleGranularUpDown_Params
	{
	public:
		int32_t                                                    NewCurrentIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FocusCurrentItem
	 */
	struct UUI_Screen_CustomMatchLobby_C_FocusCurrentItem_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetupGamepad
	 */
	struct UUI_Screen_CustomMatchLobby_C_SetupGamepad_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleInput
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleRoomStateChanged
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleRoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          OldState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomRoomState                                          NewState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleCloseScreen
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleCloseScreen_Params
	{
	public:
		EYCustomMatchScreenCloseReason                             CloseReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HZH0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.GetTeamEnumForList
	 */
	struct UUI_Screen_CustomMatchLobby_C_GetTeamEnumForList_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomMatchTeam                                          Team;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerMoved
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleOnPlayerMoved_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerRemoved
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleOnPlayerRemoved_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamList;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayerIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnInviteListCreated
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleOnInviteListCreated_Params
	{
	public:
		class UUI_CustomMatch_FriendList_C*                        FriendsToInvite;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleAdvanceButtonClicked
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleAdvanceButtonClicked_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseFleetSelectionPopup
	 */
	struct UUI_Screen_CustomMatchLobby_C_CloseFleetSelectionPopup_Params
	{
	public:
		bool                                                       StartMatchCountdown;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E95B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateAllTeamSlots
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateAllTeamSlots_Params
	{
	public:
		int32_t                                                    StartingSlotIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              Team;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S16A[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UpdateTeamSlot
	 */
	struct UUI_Screen_CustomMatchLobby_C_UpdateTeamSlot_Params
	{
	public:
		int32_t                                                    RowIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              Team;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FNWL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                SlotName;                                                // 0x0008(0x0018)  (Parm)
		EYCustomRoomSlotType                                       SlotType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GJJV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectionPopupResult
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFleetSelectionPopupResult_Params
	{
	public:
		EYFleetType                                                fleetType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleFleetSelectReady
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleFleetSelectReady_Params
	{
	public:
		EYFleetType                                                maxFleetType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T1UW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleUserDataRefreshed
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleUserDataRefreshed_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          TeamUsers;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomMatchTeam                                          Team;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQ8M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FillRestOfTeamWithAi
	 */
	struct UUI_Screen_CustomMatchLobby_C_FillRestOfTeamWithAi_Params
	{
	public:
		bool                                                       IsFilling;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O5AE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TeamToFill;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.SetBindingsOnTeam
	 */
	struct UUI_Screen_CustomMatchLobby_C_SetBindingsOnTeam_Params
	{
	public:
		class UUI_CustomMatch_TeamList_C*                          Team;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleDataReady
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleDataReady_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OpenFriendList
	 */
	struct UUI_Screen_CustomMatchLobby_C_OpenFriendList_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionIn
	 */
	struct UUI_Screen_CustomMatchLobby_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnTransitionOut
	 */
	struct UUI_Screen_CustomMatchLobby_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_CustomMatchLobby_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_CustomMatchLobby_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CustomMatchLobby_C_BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_592_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_CustomMatchLobby_C_BndEvt__ButtonTeamsPanel_K2Node_ComponentBoundEvent_606_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsHovered
	 */
	struct UUI_Screen_CustomMatchLobby_C_OnSettingsHovered_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnSettingsUnhovered
	 */
	struct UUI_Screen_CustomMatchLobby_C_OnSettingsUnhovered_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.DataReady
	 */
	struct UUI_Screen_CustomMatchLobby_C_DataReady_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.Construct
	 */
	struct UUI_Screen_CustomMatchLobby_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.UserDataRefreshed
	 */
	struct UUI_Screen_CustomMatchLobby_C_UserDataRefreshed_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature
	 */
	struct UUI_Screen_CustomMatchLobby_C_BndEvt__UI_CustomMatch_Settings_K2Node_ComponentBoundEvent_0_OnAdvanceClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.FleetSelectReady
	 */
	struct UUI_Screen_CustomMatchLobby_C_FleetSelectReady_Params
	{
	public:
		EYFleetType                                                maxFleetType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.CloseScreen
	 */
	struct UUI_Screen_CustomMatchLobby_C_CloseScreen_Params
	{
	public:
		EYCustomMatchScreenCloseReason                             reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.RoomStateChanged
	 */
	struct UUI_Screen_CustomMatchLobby_C_RoomStateChanged_Params
	{
	public:
		EYCustomRoomState                                          oldRoomState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EYCustomRoomState                                          newRoomState;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.OnNavigationEvent
	 */
	struct UUI_Screen_CustomMatchLobby_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_Screen_CustomMatchLobby_C_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature
	 */
	struct UUI_Screen_CustomMatchLobby_C_BndEvt__UI_Social_Player_Options_K2Node_ComponentBoundEvent_226_OnOptionClicked__DelegateSignature_Params
	{
	public:
		EFriendOptionButton                                        SelectedOption;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_CustomMatchLobby.UI_Screen_CustomMatchLobby_C.ExecuteUbergraph_UI_Screen_CustomMatchLobby
	 */
	struct UUI_Screen_CustomMatchLobby_C_ExecuteUbergraph_UI_Screen_CustomMatchLobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TDFI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
