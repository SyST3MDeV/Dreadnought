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
	 * PredefinedClass BasicTypes.TArray
	 * Size -> 0x0000
	 */
	template<typename T>
	class TArray
	{
	private:
		T*                                                         _data;                                                   // 0x0000(0x0000)
		int32_t                                                    _count;                                                  // 0x0000(0x0000)
		int32_t                                                    _max;                                                    // 0x0000(0x0000)

		friend class FString;
	public:
		TArray()
		{
			_data = nullptr;
			_count = 0;
			_max = 0;
		}

		T* Data() const
		{
			return _data;
		}

		int32_t Count() const
		{
			return _count;
		}

		int32_t Max() const
		{
			return _max;
		}

		bool IsValidIndex(int32_t i) const
		{
			return i < _count;
		}

		T& operator[](int32_t i)
		{
			return _data[i];
		}

		const T& operator[](int32_t i) const
		{
			return _data[i];
		}

	};

	/**
	 * PredefinedClass BasicTypes.FString
	 * Size -> 0x0000
	 */
	class FString : public TArray<wchar_t>
	{
	public:
		FString();
		FString(const wchar_t* other);
		const wchar_t* wc_str() const;
		const char* c_str() const;
		bool IsValid() const;
		std::string ToString() const;
		std::wstring ToStringW() const;
	};

	/**
	 * PredefinedClass BasicTypes.FUObjectItem
	 * Size -> 0x0000
	 */
	class FUObjectItem
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)
		int32_t                                                    Flags;                                                   // 0x0008(0x0004)
		int32_t                                                    ClusterIndex;                                            // 0x000C(0x0004)
		int32_t                                                    SerialNumber;                                            // 0x0010(0x0004)
		unsigned char                                              pad_HON8SAP5NV[0x04];                                    // 0x0014(0x0004)

	public:
		bool IsUnreachable() const;
		bool IsPendingKill() const;
	};

	/**
	 * PredefinedClass BasicTypes.TUObjectArray
	 * Size -> 0x0000
	 */
	class TUObjectArray
	{
	private:
		FUObjectItem*                                              Objects;                                                 // 0x0000(0x0000)
		int32_t                                                    MaxElements;                                             // 0x0000(0x0000)
		int32_t                                                    NumElements;                                             // 0x0000(0x0000)

	public:
		int32_t Count() const;
		UObject* GetByIndex(int32_t index) const;
		FUObjectItem* GetItemByIndex(int32_t index) const;
		UObject* operator[](int32_t i);
		const UObject* operator[](int32_t i) const;
	};

	/**
	 * PredefinedClass BasicTypes.FNameEntry
	 * Size -> 0x0000
	 */
	class FNameEntry
	{
	private:
		static const constexpr int32_t                             NAME_WIDE_MASK = 0x1;                                    // 0x0000(0x0000)
		static const constexpr int32_t                             NAME_INDEX_SHIFT = 0x1;                                  // 0x0000(0x0000)
		int32_t                                                    Index;                                                   // 0x0000(0x0000)
		unsigned char                                              UnknownData[0x4];                                        // 0x0000(0x0000)
		FNameEntry*                                                HashNext;                                                // 0x0000(0x0000)
		union
		{
			char                                                      AnsiName[1024];                                          // 0x0000(0x0000)
			wchar_t                                                   WideName[1024];                                          // 0x0000(0x0000)
		};

	public:
		const int32_t GetIndex() const;
		bool IsWide() const;
		std::string GetAnsiName() const;
		std::wstring GetWideName() const;
		std::string GetName() const;
	};

	/**
	 * PredefinedClass BasicTypes.TStaticIndirectArrayThreadSafeRead
	 * Size -> 0x0000
	 */
	template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
	class TStaticIndirectArrayThreadSafeRead
	{
	private:
		static const constexpr int32_t                             ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk; // 0x0000(0x0000)
		ElementType**                                              Chunks[ChunkTableSize];                                  // 0x0000(0x0000)
		int32_t                                                    NumElements;                                             // 0x0000(0x0000)
		int32_t                                                    NumChunks;                                               // 0x0000(0x0000)

	private:
		ElementType* GetItemPtr(int32_t index) const
		{
			int32_t ChunkIndex = index / ElementsPerChunk;
			int32_t WithinChunkIndex = index % ElementsPerChunk;
			ElementType* Chunk = (*Chunks)[ChunkIndex];
			int offset = WithinChunkIndex * 0x8;
			uintptr_t ptrAddress = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uint8_t*>(Chunk) + offset);
			ElementType* ItemPtr = reinterpret_cast<ElementType*>(ptrAddress);
			return ItemPtr;
		}

	public:
		int32_t Count()
		{
			return NumElements;
		}

		bool IsValidIndex(int32_t index) const
		{
			return index < Count() && index >= 0;
		}

		ElementType* operator[](int32_t index) const
		{
			ElementType* ItemPtr = GetItemPtr(index);
			return ItemPtr;
		}

	};

	/**
	 * PredefinedClass BasicTypes.TNameEntryArray
	 * Size -> 0x0000
	 */
	class TNameEntryArray : public TStaticIndirectArrayThreadSafeRead<FNameEntry, 4 * 1024 * 1024, 16384>
	{	};

	/**
	 * PredefinedClass BasicTypes.FName
	 * Size -> 0x0000
	 */
	class FName
	{
	public:
		static TNameEntryArray*                                    GNames;                                                  // 0x0000(0x0000)
		int32_t                                                    ComparisonIndex;                                         // 0x0000(0x0000)
		int32_t                                                    Number;                                                  // 0x0000(0x0000)

	public:
		FName();
		FName(int32_t i);
		FName(const char* nameToFind);
		FName(const wchar_t* nameToFind);
		static TNameEntryArray& GetGlobalNames();
		std::string GetNameA() const;
		std::wstring GetNameW() const;
		std::string GetName() const;
	};

	/**
	 * PredefinedClass BasicTypes.TEnumAsByte
	 * Size -> 0x0000
	 */
	template<class TEnum>
	class TEnumAsByte
	{
	private:
		uint8_t                                                    _value;                                                  // 0x0000(0x0000)

	public:
		TEnumAsByte()
		{

		}

		TEnumAsByte(TEnum value)
		{
			_value = static_cast<uint8_t>(value);
		}

		TEnumAsByte(int32_t value)
		{
			_value = static_cast<uint8_t>(value);
		}

		TEnumAsByte(uint8_t value)
		{
			_value = value;
		}

		operator TEnum() const
		{
			return (TEnum)_value;
		}

		TEnum GetValue() const
		{
			return (TEnum)_value;
		}

	};

	/**
	 * PredefinedClass BasicTypes.FScriptInterface
	 * Size -> 0x0000
	 */
	class FScriptInterface
	{
	private:
		UObject*                                                   ObjectPointer;                                           // 0x0000(0x0000)
		void*                                                      InterfacePointer;                                        // 0x0000(0x0000)

	public:
		UObject* GetObjectPtr() const;
		UObject*& GetObjectRef();
		void* GetInterface() const;
	};

	/**
	 * PredefinedClass BasicTypes.TScriptInterface
	 * Size -> 0x0000
	 */
	template<class InterfaceType>
	class TScriptInterface : public FScriptInterface
	{
	public:
		InterfaceType* operator->() const
		{
			return (InterfaceType*)GetInterface();
		}

		InterfaceType& operator*() const
		{
			return *((InterfaceType*)GetInterface());
		}

		operator bool() const
		{
			return GetInterface() != nullptr;
		}

	};

	/**
	 * PredefinedClass BasicTypes.FTextData
	 * Size -> 0x0000
	 */
	class FTextData
	{
	private:
		uint8_t                                                    UnknownData[0x28];                                       // 0x0000(0x0000)
	public:
		wchar_t*                                                   Name;                                                    // 0x0000(0x0000)
		int32_t*                                                   Length;                                                  // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FText
	 * Size -> 0x0000
	 */
	class FText
	{
	private:
		FTextData*                                                 Data;                                                    // 0x0000(0x0000)
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)

	public:
		wchar_t* Get() const;
		std::string ToString() const;
		std::wstring ToWString() const;
	};

	/**
	 * PredefinedClass BasicTypes.FScriptDelegate
	 * Size -> 0x0000
	 */
	class FScriptDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FScriptMulticastDelegate
	 * Size -> 0x0000
	 */
	class FScriptMulticastDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FMulticastSparseDelegate
	 * Size -> 0x0000
	 */
	class FMulticastSparseDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x01];                                       // 0x0000(0x0000)
	};

	#ifdef _MSC_VER
		#pragma pack(pop)
	#endif	/**
	 * PredefinedClass BasicTypes.TPair
	 * Size -> 0x0000
	 */
	template<typename KeyType, typename ValueType>
	class TPair
	{
	public:
		KeyType                                                    First;                                                   // 0x0000(0x0000)
		ValueType                                                  Second;                                                  // 0x0000(0x0000)
	};
	#ifdef _MSC_VER
		#pragma pack(push, 0x01)
	#endif
	#ifdef _MSC_VER
		#pragma pack(pop)
	#endif	/**
	 * PredefinedClass BasicTypes.TSetElement
	 * Size -> 0x0000
	 */
	template<typename ElementType>
	class TSetElement
	{
	public:
		ElementType                                                Value;                                                   // 0x0000(0x0000)
		int32_t                                                    HashNextId;                                              // 0x0000(0x0000)
		int32_t                                                    HashIndex;                                               // 0x0000(0x0000)
	};
	#ifdef _MSC_VER
		#pragma pack(push, 0x01)
	#endif
	/**
	 * PredefinedClass BasicTypes.TMap
	 * Size -> 0x0000
	 */
	template<typename Key, typename Value>
	class TMap
	{
	public:
		TArray<TSetElement<TPair<Key, Value>>>                     Data;                                                    // 0x0000(0x0000)
	private:
		uint8_t                                                    UnknownData01[0x04];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData02[0x04];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData03[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData04[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeSize[0x04];                             // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeFlag[0x04];                             // 0x0000(0x0000)
		uint8_t                                                    UnknownData05[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData06[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData07[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeSize02[0x04];                           // 0x0000(0x0000)
		uint8_t                                                    UnknownData08[0x04];                                     // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FStringAssetReference_
	 * Size -> 0x0000
	 */
	class FStringAssetReference_
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FUniqueObjectGuid_
	 * Size -> 0x0000
	 */
	class FUniqueObjectGuid_
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FStructBaseChain
	 * Size -> 0x0000
	 */
	class FStructBaseChain
	{
	private:
		FStructBaseChain**                                         StructBaseChainArray;                                    // 0x0000(0x0000)
		int32_t                                                    NumStructBasesInChainMinusOne;                           // 0x0000(0x0000)
		uint8_t                                                    Padding_0[0x04];                                         // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FWeakObjectPtr
	 * Size -> 0x0000
	 */
	class FWeakObjectPtr
	{
	public:
		int32_t                                                    ObjectIndex;                                             // 0x0000(0x0000)
		int32_t                                                    ObjectSerialNumber;                                      // 0x0000(0x0000)

	public:
		bool SerialNumbersMatch(FUObjectItem* objectItem) const;
		bool IsValid() const;
		UObject* Get() const;
	};

	/**
	 * PredefinedClass BasicTypes.TWeakObjectPtr
	 * Size -> 0x0000
	 */
	template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
	class TWeakObjectPtr : public TWeakObjectPtrBase
	{
	public:
		T* Get() const
		{
			return (T*)TWeakObjectPtrBase::Get();
		}

		T& operator*() const
		{
			return *Get();
		}

		T* operator->() const
		{
			return Get();
		}

		bool IsValid()
		{
			return TWeakObjectPtrBase::IsValid();
		}

	};

	/**
	 * PredefinedClass BasicTypes.TAutoPointer
	 * Size -> 0x0000
	 */
	template<class T, class TBase>
	class TAutoPointer : public TBase
	{
	public:
		operator T*() const
		{
			return TBase::Get();
		}

		operator const T*() const
		{
			return (const T*)TBase::Get();
		}

		operator bool() const
		{
			return TBase::Get() != nullptr;
		}

	};

	/**
	 * PredefinedClass BasicTypes.TAutoWeakObjectPtr
	 * Size -> 0x0000
	 */
	template<class T>
	class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
	{
		friend class FString;	};

	/**
	 * PredefinedClass BasicTypes.TPersistentObjectPtr
	 * Size -> 0x0000
	 */
	template<typename TObjectID>
	class TPersistentObjectPtr
	{
	public:
		FWeakObjectPtr                                             WeakPtr;                                                 // 0x0000(0x0000)
		int32_t                                                    TagAtLastTest;                                           // 0x0000(0x0000)
		TObjectID                                                  ObjectID;                                                // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FLazyObjectPtr
	 * Size -> 0x0000
	 */
	class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
	{	};

	/**
	 * PredefinedClass BasicTypes.FAssetPtr
	 * Size -> 0x0000
	 */
	class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
	{	};

	/**
	 * PredefinedClass BasicTypes.TAssetPtr
	 * Size -> 0x0000
	 */
	template<typename ObjectType>
	class TAssetPtr : public FAssetPtr
	{	};

	/**
	 * PredefinedClass BasicTypes.TLazyObjectPtr
	 * Size -> 0x0000
	 */
	template<typename ObjectType>
	class TLazyObjectPtr : public FLazyObjectPtr
	{	};

	/**
	 * PredefinedClass BasicTypes.ObjectNames
	 * Size -> 0x0000
	 */
	class ObjectNames
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
