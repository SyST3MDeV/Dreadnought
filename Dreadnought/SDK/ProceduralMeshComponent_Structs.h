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
	 * Enum ProceduralMeshComponent.EProcMeshSliceCapOption
	 */
	enum class EProcMeshSliceCapOption : uint8_t
	{
		NoCap                  = 0,
		CreateNewSectionForCap = 1,
		UseLastSectionForCap   = 2,
		MAX                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshTangent
	 * Size -> 0x0010
	 */
	struct FProcMeshTangent
	{
	public:
		struct FVector                                             TangentX;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipTangentY;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NQL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshVertex
	 * Size -> 0x0034
	 */
	struct FProcMeshVertex
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FProcMeshTangent                                    Tangent;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProceduralMeshComponent.ProcMeshSection
	 * Size -> 0x0040
	 */
	struct FProcMeshSection
	{
	public:
		TArray<struct FProcMeshVertex>                             ProcVertexBuffer;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ProcIndexBuffer;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                SectionLocalBox;                                         // 0x0020(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSectionVisible;                                         // 0x003D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZ5E[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
