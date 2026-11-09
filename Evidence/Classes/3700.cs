public class CollectionPool<T> // TypeDefIndex: 3700
{
	// Fields
	private readonly Stack<T> elements; // 0x0
	private readonly Action<T> onRelease; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Action<T> onRelease) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E89F04 Offset: 0x1E89F04 VA: 0x1E89F04
	|-CollectionPool<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E89F7C Offset: 0x1E89F7C VA: 0x1E89F7C
	|-CollectionPool<object>.Get
	*/

	// RVA: -1 Offset: -1
	public PooledObject<T> Get(out T v) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E89FE0 Offset: 0x1E89FE0 VA: 0x1E89FE0
	|-CollectionPool<object>.Get
	*/

	// RVA: -1 Offset: -1
	public void Release(T element) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1E8A048 Offset: 0x1E8A048 VA: 0x1E8A048
	|-CollectionPool<object>.Release
	*/
}

// Namespace: Rotatelab.Pool