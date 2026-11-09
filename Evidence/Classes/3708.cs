public abstract class ObjectPool<T> : MonoBehaviour // TypeDefIndex: 3708
{
	// Fields
	[SerializeField]
	private T prefab; // 0x0
	[SerializeField]
	private int initialSpawnCount; // 0x0
	[SerializeField]
	private int maxCapacity; // 0x0
	[SerializeField]
	private bool deactivatePooledInstances; // 0x0
	[SerializeField]
	private bool resetParentOfPooledInstances; // 0x0
	private readonly Stack<T> pool; // 0x0
	private AsyncInstantiateOperation<T> initialSpawnOp; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	protected virtual void Awake() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857874 Offset: 0x1857874 VA: 0x1857874
	|-ObjectPool<object>.Awake
	*/

	// RVA: -1 Offset: -1
	private void OnInitialSpawnCompleted(AsyncOperation asyncOp) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x18579E0 Offset: 0x18579E0 VA: 0x18579E0
	|-ObjectPool<object>.OnInitialSpawnCompleted
	*/

	// RVA: -1 Offset: -1
	public T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857AB4 Offset: 0x1857AB4 VA: 0x1857AB4
	|-ObjectPool<object>.Get
	*/

	// RVA: -1 Offset: -1
	public void Recycle(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857B50 Offset: 0x1857B50 VA: 0x1857B50
	|-ObjectPool<object>.Recycle
	*/

	// RVA: -1 Offset: -1
	private T CreateInstance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857C40 Offset: 0x1857C40 VA: 0x1857C40
	|-ObjectPool<object>.CreateInstance
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected virtual void OnInstanceCreated(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857CF0 Offset: 0x1857CF0 VA: 0x1857CF0
	|-ObjectPool<object>.OnInstanceCreated
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected virtual void OnInstanceFetched(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857D40 Offset: 0x1857D40 VA: 0x1857D40
	|-ObjectPool<object>.OnInstanceFetched
	*/

	// RVA: -1 Offset: -1 Slot: 7
	protected virtual void OnInstanceRecycled(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857D90 Offset: 0x1857D90 VA: 0x1857D90
	|-ObjectPool<object>.OnInstanceRecycled
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1857E40 Offset: 0x1857E40 VA: 0x1857E40
	|-ObjectPool<object>..ctor
	*/
}

// Namespace: Rotatelab.Grid