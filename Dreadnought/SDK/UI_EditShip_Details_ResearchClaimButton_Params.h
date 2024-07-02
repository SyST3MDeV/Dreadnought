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
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Action
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_Action_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetPurchaseCostVisibility
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetPurchaseCostVisibility_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimState_C*           researchState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetSoftHardCurrencyWidgetVisibilities
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetSoftHardCurrencyWidgetVisibilities_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimState_C*           Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0008(0x0030)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.hasPurchaseCost
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_hasPurchaseCost_Params
	{
	public:
		bool                                                       hasPurchaseCost;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetFreeXpShipXpCurrencyWidgetVisibilities
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetFreeXpShipXpCurrencyWidgetVisibilities_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimState_C*           Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FYShipPrice                                         shipResearchCost;                                        // 0x0008(0x0030)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ButtonClicked
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_ButtonClicked_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_ShowResearchedAndPurchasedButtonForHeroShip_Params
	{
	public:
		struct FYResearchClaimButtonData                           ButtonData;                                              // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStateForHeroShip_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimState_C*           Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FYResearchClaimButtonData                           ButtonData;                                              // 0x0008(0x0058)  (Parm)
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0060(0x0030)  (Parm)
		bool                                                       IsEnabled;                                               // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStatesForHeroShip_Params
	{
	public:
		EYShipResearchPurchaseState                                shipResearchPurchaseState;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStatesForNonHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStatesForNonHeroShip_Params
	{
	public:
		EYShipResearchPurchaseState                                shipResearchPurchaseState;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EJQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonStateForNonHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetButtonStateForNonHeroShip_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimState_C*           Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FYResearchClaimButtonData                           ButtonData;                                              // 0x0008(0x0058)  (Parm)
		struct FYShipPrice                                         shipResearchCost;                                        // 0x0060(0x0030)  (Parm)
		bool                                                       IsEnabled;                                               // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OM9N[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0098(0x0030)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetButtonActionText
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetButtonActionText_Params
	{
	public:
		class FText                                                buttonActionText;                                        // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetIcon
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetIcon_Params
	{
	public:
		class FString                                              iconPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UImage*                                              Image;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ShowResearchedAndPurchasedButtonForNonHeroShip
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_ShowResearchedAndPurchasedButtonForNonHeroShip_Params
	{
	public:
		struct FYResearchClaimButtonData                           ButtonData;                                              // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HideAllButtons
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_HideAllButtons_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleUnfocus
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_HandleUnfocus_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.HandleFocus
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_HandleFocus_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.SetResearchClaimButtonData
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_SetResearchClaimButtonData_Params
	{
	public:
		class FString                                              ShipImagePath;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FYShipPrice                                         ShipPurchaseCost;                                        // 0x0010(0x0030)  (Parm)
		struct FYShipPrice                                         shipResearchCost;                                        // 0x0040(0x0030)  (Parm)
		EYShipResearchPurchaseState                                shipResearchPurchaseState;                               // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHeroShip;                                              // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_416S[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Setup
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_Setup_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.Construct
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_Construct_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.PreConstruct
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnActionReceived
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnActionReceived_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_ExecuteUbergraph_UI_EditShip_Details_ResearchClaimButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnPurchaseShip__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnPurchaseShip__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnResearchShip__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnResearchShip__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonUnhovered__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonHovered__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnButtonHovered__DelegateSignature_Params
	{	};

	/**
	 * Function UI_EditShip_Details_ResearchClaimButton.UI_EditShip_Details_ResearchClaimButton_C.OnButtonClicked__DelegateSignature
	 */
	struct UUI_EditShip_Details_ResearchClaimButton_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		class UUI_EditShip_Details_ResearchClaimButton_C*          ResearchClaimButton;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
