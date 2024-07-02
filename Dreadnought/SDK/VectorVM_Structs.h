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
	 * Enum VectorVM.EVectorVMOp
	 */
	enum class EVectorVMOp : uint8_t
	{
		done                       = 0,
		add                        = 1,
		sub                        = 2,
		mul                        = 3,
		mad                        = 4,
		lerp                       = 5,
		rcp                        = 6,
		rsq                        = 7,
		sqrt                       = 8,
		neg                        = 9,
		abs                        = 10,
		exp                        = 11,
		exp2                       = 12,
		log                        = 13,
		log2                       = 14,
		sin                        = 15,
		cos                        = 16,
		tan                        = 17,
		asin                       = 18,
		acos                       = 19,
		atan                       = 20,
		atan2                      = 21,
		ceil                       = 22,
		floor                      = 23,
		fmod                       = 24,
		frac                       = 25,
		trunc                      = 26,
		clamp                      = 27,
		min                        = 28,
		max                        = 29,
		pow                        = 30,
		sign                       = 31,
		step                       = 32,
		dot                        = 33,
		cross                      = 34,
		normalize                  = 35,
		random                     = 36,
		length                     = 37,
		noise                      = 38,
		splatx                     = 39,
		splaty                     = 40,
		splatz                     = 41,
		splatw                     = 42,
		compose                    = 43,
		composex                   = 44,
		composey                   = 45,
		composez                   = 46,
		composew                   = 47,
		output                     = 48,
		lessthan                   = 49,
		select                     = 50,
		sample                     = 51,
		bufferwrite                = 52,
		easein                     = 53,
		easeinout                  = 54,
		div                        = 55,
		aquireshareddataindex      = 56,
		aquireshareddataindexwrap  = 57,
		consumeshareddataindex     = 58,
		consumeshareddataindexwrap = 59,
		shareddataread             = 60,
		shareddatawrite            = 61,
		shareddataindexvalid       = 62,
		NumOpcodes                 = 63,
		MAX                        = 64
	};

	/**
	 * Enum VectorVM.EVectorVMOperandLocation
	 */
	enum class EVectorVMOperandLocation : uint8_t
	{
		TemporaryRegister = 0,
		InputRegister     = 1,
		OutputRegister    = 2,
		Constant          = 3,
		DataObjConstant   = 4,
		SharedData        = 5,
		Undefined         = 6,
		Num               = 7,
		MAX               = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
