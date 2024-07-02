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
	 * BlueprintGeneratedClass YInterface_PlayerController_BPI.YInterface_PlayerController_BPI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UYInterface_PlayerController_BPI_C : public UInterface
	{
	public:
		void DestroyCreepsOnOrbitEnd();
		void SpawnCreepsOnOrbitStart();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
