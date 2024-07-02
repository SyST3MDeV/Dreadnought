#pragma once

/**
 * Name: Dreadnought
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Button_Carousel_Generic.UI_Button_Carousel_Generic_C
	 * Size -> 0x0059 (FullSize[0x0299] - InheritedSize[0x0240])
	 */
	class UUI_Button_Carousel_Generic_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ButtonImage;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ButtonLabel;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UButton*                                             CarouselButton;                                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SizeBox_3;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                label;                                                   // 0x0268(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UTexture2D*                                          Image;                                                   // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class FString                                              ImageURL;                                                // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		ESlateVisibility                                           LabelVisible;                                            // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnFail_B10DC6BB4EA724F69542B59101A4A591(class UTexture2D* Texture);
		void OnSuccess_B10DC6BB4EA724F69542B59101A4A591(class UTexture2D* Texture);
		void Construct();
		void ExecuteUbergraph_UI_Button_Carousel_Generic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
