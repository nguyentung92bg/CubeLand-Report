public struct PooledObject<T> : IDisposable // TypeDefIndex: 3699
{
	// Fields
	private readonly T element; // 0x0
	private readonly CollectionPool<T> pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(T element, CollectionPool<T> pool) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186FFA0 Offset: 0x186FFA0 VA: 0x186FFA0
	|-PooledObject<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186FFC8 Offset: 0x186FFC8 VA: 0x186FFC8
	|-PooledObject<object>.Dispose
	*/
}

// Namespace: Rotatelab.Pool