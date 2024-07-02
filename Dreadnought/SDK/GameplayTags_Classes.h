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
	 * Class GameplayTags.EditableGameplayTagQuery
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQuery : public UObject
	{
	public:
		class FString                                              UserDescription;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YV0T[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableGameplayTagQueryExpression*                 RootExpression;                                          // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   TagQueryExportText_Helper;                               // 0x0050(0x0048) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagAssetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayTagAssetInterface : public UInterface
	{
	public:
		bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
		bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
		bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
		void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.BlueprintGameplayTagLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
		bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
		struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
		struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
		bool STATIC_IsGameplayTagValid(const struct FGameplayTag& TagContainer);
		bool STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		int32_t STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
		class FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
		class FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
		bool STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, EGameplayTagMatchType TagOneMatchType, EGameplayTagMatchType TagTwoMatchType);
		bool STATIC_DoesTagAssetInterfaceHaveTag(EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
		bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
		bool STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		bool STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
		bool STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, EGameplayTagMatchType ContainerTagsMatchType, const struct FGameplayTag& Tag, EGameplayTagMatchType TagMatchType);
		bool STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsManager
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class UGameplayTagsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_57F5[0x128];                                 // 0x0028(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDataTable*>                                  GameplayTagTables;                                       // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O47T[0xC0];                                  // 0x0160(0x00C0) MISSED OFFSET (PADDING)

	public:
		struct FGameplayTag RequestGameplayTag(const class FName& TagName, bool ErrorIfNotFound);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGameplayTagsSettings : public UObject
	{
	public:
		TArray<class FString>                                      GameplayTags;                                            // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FString>                                      CommonlyReplicatedTags;                                  // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		int32_t                                                    NetIndexFirstBitSegment;                                 // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QONJ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
