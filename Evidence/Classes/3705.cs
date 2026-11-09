public static class HashSetPool<T> // TypeDefIndex: 3705
{
	// Fields
	private static readonly CollectionPool<HashSet<T>> pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static PooledObject<HashSet<T>> Get(out HashSet<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x240EA4C Offset: 0x240EA4C VA: 0x240EA4C
	|-HashSetPool<object>.Get
	|
	|-RVA: 0x240ECE4 Offset: 0x240ECE4 VA: 0x240ECE4
	|-HashSetPool<Vector3Int>.Get
	|
	|-RVA: 0x240EF7C Offset: 0x240EF7C VA: 0x240EF7C
	|-HashSetPool<__Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x240EB18 Offset: 0x240EB18 VA: 0x240EB18
	|-HashSetPool<object>..cctor
	|
	|-RVA: 0x240EDB0 Offset: 0x240EDB0 VA: 0x240EDB0
	|-HashSetPool<Vector3Int>..cctor
	|
	|-RVA: 0x240F074 Offset: 0x240F074 VA: 0x240F074
	|-HashSetPool<__Il2CppFullySharedGenericType>..cctor
	*/
}

// Namespace: 
[CompilerGenerated]
[Serializable]