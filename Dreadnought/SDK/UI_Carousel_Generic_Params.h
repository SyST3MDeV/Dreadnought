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
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.SetAutoScroll
	 */
	struct UUI_Carousel_Generic_C_SetAutoScroll_Params
	{
	public:
		bool                                                       IsAutoscroll;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.GetCurrentIndex
	 */
	struct UUI_Carousel_Generic_C_GetCurrentIndex_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.GetWidgets
	 */
	struct UUI_Carousel_Generic_C_GetWidgets_Params
	{
	public:
		TArray<class UUI_DreadWidget*>                             Widgets;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.OnFocusReceived
	 */
	struct UUI_Carousel_Generic_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0034(0x0008)  (Parm)
		unsigned char                                              UnknownData_VT6Z[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.OnCarouselButtonUnhovered
	 */
	struct UUI_Carousel_Generic_C_OnCarouselButtonUnhovered_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.OnCarouselButtonHovered
	 */
	struct UUI_Carousel_Generic_C_OnCarouselButtonHovered_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.AutoScroll
	 */
	struct UUI_Carousel_Generic_C_AutoScroll_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.Init
	 */
	struct UUI_Carousel_Generic_C_Init_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.SetupItemCarousel
	 */
	struct UUI_Carousel_Generic_C_SetupItemCarousel_Params
	{
	public:
		TArray<struct FMarketItemUIData>                           FeaturedItemList;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UClass*                                              WidgetClass;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.GotoIndex
	 */
	struct UUI_Carousel_Generic_C_GotoIndex_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.AddItemsToCarousel
	 */
	struct UUI_Carousel_Generic_C_AddItemsToCarousel_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.Construct
	 */
	struct UUI_Carousel_Generic_C_Construct_Params
	{	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.OnPageDotClicked
	 */
	struct UUI_Carousel_Generic_C_OnPageDotClicked_Params
	{
	public:
		int32_t                                                    DotIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.PreConstruct
	 */
	struct UUI_Carousel_Generic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.OnNewItemFocused
	 */
	struct UUI_Carousel_Generic_C_OnNewItemFocused_Params
	{
	public:
		class UUI_DreadWidget*                                     source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Carousel_Generic.UI_Carousel_Generic_C.ExecuteUbergraph_UI_Carousel_Generic
	 */
	struct UUI_Carousel_Generic_C_ExecuteUbergraph_UI_Carousel_Generic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
