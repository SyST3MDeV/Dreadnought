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
	 * WidgetBlueprintGeneratedClass UI_Login_PS4_Panel_LegalDocumentContainer.UI_Login_PS4_Panel_LegalDocumentContainer_C
	 * Size -> 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
	 */
	class UUI_Login_PS4_Panel_LegalDocumentContainer_C : public UUI_SubPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              DreadnoughtLogo;                                         // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LegalHeader;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScrollBox*                                          LegalScrollContainer;                                    // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LegalText;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UUI_Generic_Spinner_C*                               Spinner;                                                 // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             AcceptLegalDocument;                                     // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                LoadingText;                                             // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsLoading;                                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S8AA[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLegalDocumentData                                  DocumentData;                                            // 0x02A0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInitialized;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YO4O[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScrollSpeed;                                             // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void HandleScrollingInput(const struct FKey& StoredKey);
		void Action();
		void AcceptDocument(const struct FLegalDocumentData& DocumentData);
		void SetAsLoading();
		void SetDocumentData(const struct FLegalDocumentData& LegalDocumentData);
		void SetHeader(const class FText& Header);
		void OnShow();
		void OnHide();
		void Construct();
		void ExecuteUbergraph_UI_Login_PS4_Panel_LegalDocumentContainer(int32_t EntryPoint);
		void AcceptLegalDocument__DelegateSignature(const struct FLegalDocumentData& LegalDocumentData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
