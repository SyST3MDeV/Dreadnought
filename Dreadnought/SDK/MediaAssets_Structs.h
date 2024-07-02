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
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class EMediaPlayerTrack : uint8_t
	{
		Audio   = 0,
		Binary  = 1,
		Caption = 2,
		Image   = 3,
		Script  = 4,
		Video   = 5,
		MAX     = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
