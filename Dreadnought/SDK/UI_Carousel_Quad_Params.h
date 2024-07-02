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
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfPages
	 */
	struct UUI_Carousel_Quad_C_GetNumberOfPages_Params
	{
	public:
		int32_t                                                    Pages;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPageInitialIndex
	 */
	struct UUI_Carousel_Quad_C_GetCurrentPageInitialIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetPageInitialIndex
	 */
	struct UUI_Carousel_Quad_C_GetPageInitialIndex_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetMaxItemsToDisplay
	 */
	struct UUI_Carousel_Quad_C_GetMaxItemsToDisplay_Params
	{
	public:
		int32_t                                                    MaxItems;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetNumberOfColumns
	 */
	struct UUI_Carousel_Quad_C_GetNumberOfColumns_Params
	{
	public:
		int32_t                                                    NumberOfColumns;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetAutoScroll
	 */
	struct UUI_Carousel_Quad_C_SetAutoScroll_Params
	{
	public:
		bool                                                       IsAutoscroll;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetCurrentPage
	 */
	struct UUI_Carousel_Quad_C_GetCurrentPage_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GetWidgets
	 */
	struct UUI_Carousel_Quad_C_GetWidgets_Params
	{
	public:
		TArray<class UUI_MarketItemWidget*>                        Widgets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.AutoScroll
	 */
	struct UUI_Carousel_Quad_C_AutoScroll_Params
	{	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.Init
	 */
	struct UUI_Carousel_Quad_C_Init_Params
	{	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.SetupItemCarousel
	 */
	struct UUI_Carousel_Quad_C_SetupItemCarousel_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           FeaturedWidgetList;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UClass*                                              WidgetClass;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.GoToPage
	 */
	struct UUI_Carousel_Quad_C_GoToPage_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.AddItemsToCarousel
	 */
	struct UUI_Carousel_Quad_C_AddItemsToCarousel_Params
	{	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.Construct
	 */
	struct UUI_Carousel_Quad_C_Construct_Params
	{	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.OnPageDotClicked
	 */
	struct UUI_Carousel_Quad_C_OnPageDotClicked_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Quad.UI_Carousel_Quad_C.ExecuteUbergraph_UI_Carousel_Quad
	 */
	struct UUI_Carousel_Quad_C_ExecuteUbergraph_UI_Carousel_Quad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
