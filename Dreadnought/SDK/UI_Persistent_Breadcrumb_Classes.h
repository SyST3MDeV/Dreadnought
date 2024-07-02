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
	 * WidgetBlueprintGeneratedClass UI_Persistent_Breadcrumb.UI_Persistent_Breadcrumb_C
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class UUI_Persistent_Breadcrumb_C : public UUI_DreadWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      BreadcrumbList;                                          // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnBreadcrumbClicked;                                     // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                DefaultScreenName;                                       // 0x0260(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_EventHandler_Navigation_C*                       NavigationHandler;                                       // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CreateBreadcrumb(EUI_Screen ScreenEnumIn, int32_t BreadcrumbIndexIn, class UUI_Button_Breadcrumb_C** BreadcrumbOut);
		void UpdateBreadcrumbList(class UUI_DreadScreen* TargetScreen);
		void HandleBreadcrumbClicked(int32_t index);
		void ExecuteUbergraph_UI_Persistent_Breadcrumb(int32_t EntryPoint);
		void OnBreadcrumbClicked__DelegateSignature(int32_t index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
