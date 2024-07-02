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
	 * Enum HeadMountedDisplay.ETrackingStatus
	 */
	enum class ETrackingStatus : uint8_t
	{
		NotTracked   = 0,
		InertialOnly = 1,
		Tracked      = 2,
		MAX          = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
