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
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextSearchLengthWarning
	 */
	struct UUI_Social_FindNewFriends_C_SetTextSearchLengthWarning_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SetTextNoResults
	 */
	struct UUI_Social_FindNewFriends_C_SetTextNoResults_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BuildSearchResult
	 */
	struct UUI_Social_FindNewFriends_C_BuildSearchResult_Params
	{
	public:
		TArray<struct FFindNewFriendUserData>                      friendData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ResetSearchResults
	 */
	struct UUI_Social_FindNewFriends_C_ResetSearchResults_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchForFriends
	 */
	struct UUI_Social_FindNewFriends_C_SearchForFriends_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Setup
	 */
	struct UUI_Social_FindNewFriends_C_Setup_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Show
	 */
	struct UUI_Social_FindNewFriends_C_Show_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.UpdateInviteAmount
	 */
	struct UUI_Social_FindNewFriends_C_UpdateInviteAmount_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GatherInvitedFriends
	 */
	struct UUI_Social_FindNewFriends_C_GatherInvitedFriends_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetNumOfFriendsInThisList
	 */
	struct UUI_Social_FindNewFriends_C_GetNumOfFriendsInThisList_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.GetSocialSection
	 */
	struct UUI_Social_FindNewFriends_C_GetSocialSection_Params
	{
	public:
		ESocialSection                                             SocialSection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.Construct
	 */
	struct UUI_Social_FindNewFriends_C_Construct_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Social_FindNewFriends_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_58_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature
	 */
	struct UUI_Social_FindNewFriends_C_BndEvt__ButtonSendInvites_K2Node_ComponentBoundEvent_113_OnButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnStartSearch
	 */
	struct UUI_Social_FindNewFriends_C_OnStartSearch_Params
	{
	public:
		class FText                                                filterText;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.OnSearchForUsersResult
	 */
	struct UUI_Social_FindNewFriends_C_OnSearchForUsersResult_Params
	{
	public:
		TArray<struct FFindNewFriendUserData>                      foundUsers;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.ExecuteUbergraph_UI_Social_FindNewFriends
	 */
	struct UUI_Social_FindNewFriends_C_ExecuteUbergraph_UI_Social_FindNewFriends_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.FindNewFriendsCanceled__DelegateSignature
	 */
	struct UUI_Social_FindNewFriends_C_FindNewFriendsCanceled__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Social_FindNewFriends.UI_Social_FindNewFriends_C.SearchResultsBuilt__DelegateSignature
	 */
	struct UUI_Social_FindNewFriends_C_SearchResultsBuilt__DelegateSignature_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
