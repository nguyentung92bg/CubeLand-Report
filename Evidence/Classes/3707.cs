public static class DictionaryPool<T, Y> // TypeDefIndex: 3707
{
	// Fields
	private static readonly CollectionPool<Dictionary<T, Y>> pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static PooledObject<Dictionary<T, Y>> Get(out Dictionary<T, Y> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F73738 Offset: 0x1F73738 VA: 0x1F73738
	|-DictionaryPool<int, int>.Get
	|
	|-RVA: 0x1F739D0 Offset: 0x1F739D0 VA: 0x1F739D0
	|-DictionaryPool<int, object>.Get
	|
	|-RVA: 0x1F73C68 Offset: 0x1F73C68 VA: 0x1F73C68
	|-DictionaryPool<Int32Enum, int>.Get
	|
	|-RVA: 0x1F73F00 Offset: 0x1F73F00 VA: 0x1F73F00
	|-DictionaryPool<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F73804 Offset: 0x1F73804 VA: 0x1F73804
	|-DictionaryPool<int, int>..cctor
	|
	|-RVA: 0x1F73A9C Offset: 0x1F73A9C VA: 0x1F73A9C
	|-DictionaryPool<int, object>..cctor
	|
	|-RVA: 0x1F73D34 Offset: 0x1F73D34 VA: 0x1F73D34
	|-DictionaryPool<Int32Enum, int>..cctor
	|
	|-RVA: 0x1F73FF8 Offset: 0x1F73FF8 VA: 0x1F73FF8
	|-DictionaryPool<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/
}

// Namespace: Rotatelab.Pool
[DefaultExecutionOrder(-1000)]