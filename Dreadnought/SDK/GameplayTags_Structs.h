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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GameplayTags.EGameplayTagQueryExprType
	 */
	enum class EGameplayTagQueryExprType : uint8_t
	{
		Undefined    = 0,
		AnyTagsMatch = 1,
		AllTagsMatch = 2,
		NoTagsMatch  = 3,
		AnyExprMatch = 4,
		AllExprMatch = 5,
		NoExprMatch  = 6,
		MAX          = 7
	};

	/**
	 * Enum GameplayTags.EGameplayContainerMatchType
	 */
	enum class EGameplayContainerMatchType : uint8_t
	{
		Any = 0,
		All = 1,
		MAX = 2
	};

	/**
	 * Enum GameplayTags.EGameplayTagMatchType
	 */
	enum class EGameplayTagMatchType : uint8_t
	{
		Explicit          = 0,
		IncludeParentTags = 1,
		MAX               = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayTags.GameplayTag
	 * Size -> 0x0008
	 */
	struct FGameplayTag
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagQuery
	 * Size -> 0x0048
	 */
	struct FGameplayTagQuery
	{
	public:
		int32_t                                                    TokenStreamVersion;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G5XX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                TagDictionary;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      QueryTokenStream;                                        // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              UserDescription;                                         // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              AutoDescription;                                         // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagContainer
	 * Size -> 0x0020
	 */
	struct FGameplayTagContainer
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        Tags;                                                    // 0x0010(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagNode
	 * Size -> 0x0070
	 */
	struct FGameplayTagNode
	{
	public:
		unsigned char                                              UnknownData_IJ2F[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayTags.GameplayTagTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FGameplayTagTableRow : public FTableRowBase
	{
	public:
		class FString                                              Tag;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CategoryText;                                            // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              DevComment;                                              // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
