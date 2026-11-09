public static class ListPool<T> // TypeDefIndex: 3703
{
	// Fields
	private static readonly CollectionPool<List<T>> pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static PooledObject<List<T>> Get(out List<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x257B518 Offset: 0x257B518 VA: 0x257B518
	|-ListPool<int>.Get
	|
	|-RVA: 0x257B7B0 Offset: 0x257B7B0 VA: 0x257B7B0
	|-ListPool<object>.Get
	|
	|-RVA: 0x257BA48 Offset: 0x257BA48 VA: 0x257BA48
	|-ListPool<Vector3Int>.Get
	|
	|-RVA: 0x257BCE0 Offset: 0x257BCE0 VA: 0x257BCE0
	|-ListPool<__Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x257B5E4 Offset: 0x257B5E4 VA: 0x257B5E4
	|-ListPool<int>..cctor
	|
	|-RVA: 0x257B87C Offset: 0x257B87C VA: 0x257B87C
	|-ListPool<object>..cctor
	|
	|-RVA: 0x257BB14 Offset: 0x257BB14 VA: 0x257BB14
	|-ListPool<Vector3Int>..cctor
	|
	|-RVA: 0x257BDD8 Offset: 0x257BDD8 VA: 0x257BDD8
	|-ListPool<__Il2CppFullySharedGenericType>..cctor
	*/
}

// Namespace: 
[CompilerGenerated]
[Serializable]