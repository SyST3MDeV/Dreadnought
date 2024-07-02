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
	 * Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentItemInFriendListLast
	 */
	struct UUI_Screen_Social_C_IsCurrentItemInFriendListLast_Params
	{
	public:
		class UUI_Social_FriendList_C*                             CurrentlyFocusedFriendList;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XDYF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.IsCurrentColumnRightmost
	 */
	struct UUI_Screen_Social_C_IsCurrentColumnRightmost_Params
	{
	public:
		class UUI_Social_FriendList_C*                             CurrentlyFocusedFriendList;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QA72[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownSquad
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularDownSquad_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpSquad
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularUpSquad_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.LeaveSquad
	 */
	struct UUI_Screen_Social_C_LeaveSquad_Params
	{
	public:
		int32_t                                                    Unused;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.IsValidSquadNavigation
	 */
	struct UUI_Screen_Social_C_IsValidSquadNavigation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U3U3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.IsLastSquadItem
	 */
	struct UUI_Screen_Social_C_IsLastSquadItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YY8Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularPlayButton
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularPlayButton_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.FocusNextSquadItem
	 */
	struct UUI_Screen_Social_C_FocusNextSquadItem_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HideOptions
	 */
	struct UUI_Screen_Social_C_HideOptions_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendOptionClicked
	 */
	struct UUI_Screen_Social_C_HandleFriendOptionClicked_Params
	{
	public:
		EFriendOptionButton                                        FriendOption;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadBack
	 */
	struct UUI_Screen_Social_C_HandleGamepadBack_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendItemInNextFriendList
	 */
	struct UUI_Screen_Social_C_FocusNextFriendItemInNextFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.FocusNextFriendList
	 */
	struct UUI_Screen_Social_C_FocusNextFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.FocusCurrentFriendList
	 */
	struct UUI_Screen_Social_C_FocusCurrentFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.IsValidToFocusFriendItem
	 */
	struct UUI_Screen_Social_C_IsValidToFocusFriendItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusFriendListFriendItem
	 */
	struct UUI_Screen_Social_C_HandleFocusFriendListFriendItem_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularDownFriendList
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularDownFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularUpFriendList
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularUpFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularRightFriendList
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularRightFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularLeftFriendList
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularLeftFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadAction
	 */
	struct UUI_Screen_Social_C_HandleGamepadAction_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleUnfocusWidget
	 */
	struct UUI_Screen_Social_C_HandleUnfocusWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleFocusWidget
	 */
	struct UUI_Screen_Social_C_HandleFocusWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnFindNewFriendsCanceled
	 */
	struct UUI_Screen_Social_C_OnFindNewFriendsCanceled_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFindNewFriendsFriendItem
	 */
	struct UUI_Screen_Social_C_SetFocusToFindNewFriendsFriendItem_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLAI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFindNewFriends
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularFindNewFriends_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendOptions
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularFriendOptions_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularSquad
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularSquad_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadUpSection
	 */
	struct UUI_Screen_Social_C_HandleGamepadUpSection_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadDownSection
	 */
	struct UUI_Screen_Social_C_HandleGamepadDownSection_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranular
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranular_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListUnfocus
	 */
	struct UUI_Screen_Social_C_HandleFriendListUnfocus_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleFriendListFocus
	 */
	struct UUI_Screen_Social_C_HandleFriendListFocus_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.UnfocusFriendItemOrFriendList
	 */
	struct UUI_Screen_Social_C_UnfocusFriendItemOrFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemIndex
	 */
	struct UUI_Screen_Social_C_GetNextFriendItemIndex_Params
	{
	public:
		EUI_MenuActions                                            GamePadInput;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3AE6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    listLength;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentIndex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ColumnNum;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.SetFocusToFriendListFriendItem
	 */
	struct UUI_Screen_Social_C_SetFocusToFriendListFriendItem_Params
	{
	public:
		class UUI_Social_FriendList_C*                             CurrentlyFocusedFriendList;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IUNW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendItemInNextFriendList
	 */
	struct UUI_Screen_Social_C_GetNextFriendItemInNextFriendList_Params
	{
	public:
		int32_t                                                    NextFriendItemIndex;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.GetNextFriendList
	 */
	struct UUI_Screen_Social_C_GetNextFriendList_Params
	{
	public:
		bool                                                       IsEndOfFriendList;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EID8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Social_FriendList_C*                             NextFriendList;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.WrappingIndexHelper
	 */
	struct UUI_Screen_Social_C_WrappingIndexHelper_Params
	{
	public:
		int32_t                                                    listLength;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CurrentIndex;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumColumns;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadGranularFriendList
	 */
	struct UUI_Screen_Social_C_HandleGamepadGranularFriendList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadLeftSection
	 */
	struct UUI_Screen_Social_C_HandleGamepadLeftSection_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleGamepadRightSection
	 */
	struct UUI_Screen_Social_C_HandleGamepadRightSection_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BindButtonEvents
	 */
	struct UUI_Screen_Social_C_BindButtonEvents_Params
	{
	public:
		TArray<class UUI_DreadWidget*>                             Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleInput
	 */
	struct UUI_Screen_Social_C_HandleInput_Params
	{
	public:
		EUI_MenuActions                                            Selection;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.GetOptionsForSelectedFriend
	 */
	struct UUI_Screen_Social_C_GetOptionsForSelectedFriend_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SelectedFriend;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<EFriendOptionButton>                                FriendOptions;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.ShowOptions
	 */
	struct UUI_Screen_Social_C_ShowOptions_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6TQP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.Setup
	 */
	struct UUI_Screen_Social_C_Setup_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BindSectionHeaderEvents
	 */
	struct UUI_Screen_Social_C_BindSectionHeaderEvents_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.ScrollToSection
	 */
	struct UUI_Screen_Social_C_ScrollToSection_Params
	{
	public:
		class UUI_Button_FriendSectionHeader_C*                    HeaderWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.ResetSectionHeaders
	 */
	struct UUI_Screen_Social_C_ResetSectionHeaders_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.RemoveAllFriendsList
	 */
	struct UUI_Screen_Social_C_RemoveAllFriendsList_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.StartSearch
	 */
	struct UUI_Screen_Social_C_StartSearch_Params
	{
	public:
		class FText                                                SearchString;                                            // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.AddFriendsListToArrayIfNotEmpty
	 */
	struct UUI_Screen_Social_C_AddFriendsListToArrayIfNotEmpty_Params
	{
	public:
		struct FUI_Struct_FriendList                               NewFriendsList;                                          // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm)
		TArray<struct FUI_Struct_FriendList>                       FriendsListArray;                                        // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.AddToFriendsList
	 */
	struct UUI_Screen_Social_C_AddToFriendsList_Params
	{
	public:
		struct FUI_Struct_FriendData                               NewFriendData;                                           // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm)
		struct FUI_Struct_FriendList                               friendsList;                                             // 0x0080(0x0030)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.GetFriendsData
	 */
	struct UUI_Screen_Social_C_GetFriendsData_Params
	{
	public:
		TArray<struct FFriendsUserData>                            FriendsListData;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FUI_Struct_FriendList>                       friendsList;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.SetupFriendsList
	 */
	struct UUI_Screen_Social_C_SetupFriendsList_Params
	{
	public:
		TArray<struct FFriendsUserData>                            FriendsListData;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionIn
	 */
	struct UUI_Screen_Social_C_OnTransitionIn_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnTransitionOut
	 */
	struct UUI_Screen_Social_C_OnTransitionOut_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.TransitionInAnimationComplete
	 */
	struct UUI_Screen_Social_C_TransitionInAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.TransitionOutAnimationComplete
	 */
	struct UUI_Screen_Social_C_TransitionOutAnimationComplete_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Social_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.SocialListUpdated
	 */
	struct UUI_Screen_Social_C_SocialListUpdated_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.UpdateSquadPlayerCard
	 */
	struct UUI_Screen_Social_C_UpdateSquadPlayerCard_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.Construct
	 */
	struct UUI_Screen_Social_C_Construct_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnStartSearch
	 */
	struct UUI_Screen_Social_C_OnStartSearch_Params
	{
	public:
		class FText                                                SearchString;                                            // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnHeaderSectionClicked
	 */
	struct UUI_Screen_Social_C_OnHeaderSectionClicked_Params
	{
	public:
		class UUI_Button_FriendSectionHeader_C*                    HeaderWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnFriendItemClicked
	 */
	struct UUI_Screen_Social_C_OnFriendItemClicked_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             SourceFriendItem;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.SetUpWhisperChatFriendItemClickedEvent
	 */
	struct UUI_Screen_Social_C_SetUpWhisperChatFriendItemClickedEvent_Params
	{
	public:
		class UUI_Social_FriendList_C*                             List;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnWhisperChatButtonClicked
	 */
	struct UUI_Screen_Social_C_OnWhisperChatButtonClicked_Params
	{
	public:
		class UUI_Button_FriendItem_C*                             source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Screen_Social_C_BndEvt__FindFriendsButton_K2Node_ComponentBoundEvent_123_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature
	 */
	struct UUI_Screen_Social_C_BndEvt__UI_Social_FriendOptions_K2Node_ComponentBoundEvent_1_OnOptionClicked__DelegateSignature_Params
	{
	public:
		EFriendOptionButton                                        SelectedOption;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_Social_C_BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_187_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Screen_Social_C_BndEvt__ButtonFriendsContainer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnNavigationEvent
	 */
	struct UUI_Screen_Social_C_OnNavigationEvent_Params
	{
	public:
		EUI_MenuActions                                            GamePad_Button;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.OnFriendsSearchTextCommitted
	 */
	struct UUI_Screen_Social_C_OnFriendsSearchTextCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.HandleOnPlayerSpeakingUpdated
	 */
	struct UUI_Screen_Social_C_HandleOnPlayerSpeakingUpdated_Params
	{
	public:
		struct FSquadVoiceData                                     UpdateData;                                              // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function UI_Screen_Social.UI_Screen_Social_C.ExecuteUbergraph_UI_Screen_Social
	 */
	struct UUI_Screen_Social_C_ExecuteUbergraph_UI_Screen_Social_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U40G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
