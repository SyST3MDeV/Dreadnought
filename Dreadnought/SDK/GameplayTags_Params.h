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
	 * Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	 */
	struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        TagToCheck;                                              // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	 */
	struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
	{
	public:
		struct FGameplayTag                                        A;                                                       // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              B;                                                       // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               A;                                                       // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              B;                                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
	{
	public:
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   ReturnValue;                                             // 0x0048(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	 */
	struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
	{
	public:
		struct FGameplayTag                                        TagContainer;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	 */
	struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
	{
	public:
		unsigned char                                              UnknownData_QUR2[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
	 */
	struct UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params
	{
	public:
		struct FGameplayTag                                        TagOne;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TagTwo;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EGameplayTagMatchType                                      TagOneMatchType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTagMatchType                                      TagTwoMatchType;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	 */
	struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
	{
	public:
		unsigned char                                              UnknownData_J7UA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EGameplayTagMatchType                                      ContainerTagsMatchType;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DJYM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EGameplayTagMatchType                                      TagMatchType;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0020(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCountEmptyAsMatch;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EGameplayTagMatchType                                      ContainerTagsMatchType;                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DN2U[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0028(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EGameplayTagMatchType                                      TagMatchType;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	 */
	struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
	{
	public:
		struct FGameplayTagContainer                               InTagContainer;                                          // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               InOutTagContainer;                                       // 0x0020(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagsManager.RequestGameplayTag
	 */
	struct UGameplayTagsManager_RequestGameplayTag_Params
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ErrorIfNotFound;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_936U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
