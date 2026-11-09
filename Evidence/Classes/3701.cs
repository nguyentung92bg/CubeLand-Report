public static class GenericPool<T> // TypeDefIndex: 3701
{
	// Fields
	private static readonly CollectionPool<T> pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x24058D0 Offset: 0x24058D0 VA: 0x24058D0
	|-GenericPool<object>.Get
	*/

	// RVA: -1 Offset: -1
	public static void Release(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x240597C Offset: 0x240597C VA: 0x240597C
	|-GenericPool<object>.Release
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2405A30 Offset: 0x2405A30 VA: 0x2405A30
	|-GenericPool<object>..cctor
	*/
}

// Namespace: 
[CompilerGenerated]
[Serializable]