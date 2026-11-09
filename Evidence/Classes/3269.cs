public abstract class SingletonBehaviour<T> : MonoBehaviour // TypeDefIndex: 3269
{
	// Fields
	private static T m_instance; // 0x0

	// Properties
	public static T Instance { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T get_Instance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99858 Offset: 0x1A99858 VA: 0x1A99858
	|-SingletonBehaviour<object>.get_Instance
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected virtual void Awake() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A999F0 Offset: 0x1A999F0 VA: 0x1A999F0
	|-SingletonBehaviour<object>.Awake
	*/

	// RVA: -1 Offset: -1
	private void OnSceneUnloaded(Scene scene) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99DB8 Offset: 0x1A99DB8 VA: 0x1A99DB8
	|-SingletonBehaviour<object>.OnSceneUnloaded
	*/

	// RVA: -1 Offset: -1
	private void OnRemoved() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99E44 Offset: 0x1A99E44 VA: 0x1A99E44
	|-SingletonBehaviour<object>.OnRemoved
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99F8C Offset: 0x1A99F8C VA: 0x1A99F8C
	|-SingletonBehaviour<object>..ctor
	*/
}

// Namespace: Rotatelab