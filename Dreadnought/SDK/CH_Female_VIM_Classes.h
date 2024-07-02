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
	 * AnimBlueprintGeneratedClass CH_Female_VIM.CH_Female_VIM_C
	 * Size -> 0x0008 (FullSize[0x1A70] - InheritedSize[0x1A68])
	 */
	class UCH_Female_VIM_C : public UCH_Male_VIM_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1A68(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ActivateCustomization(bool DoIntro, bool DoClothesSwap, bool DoHeadgearSwap);
		void ExecuteUbergraph_CH_Female_VIM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
