public abstract class SingletonBehaviourFromResources<T> : MonoBehaviour // TypeDefIndex: 3270
{
	// Fields
	private static T m_instance; // 0x0

	// Properties
	public static T Instance { get; }
	public static bool IsInstantiated { get; }
	public static bool IsInstanceActive { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T get_Instance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A9942C Offset: 0x1A9942C VA: 0x1A9942C
	|-SingletonBehaviourFromResources<object>.get_Instance
	*/

	// RVA: -1 Offset: -1
	public static bool get_IsInstantiated() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99690 Offset: 0x1A99690 VA: 0x1A99690
	|-SingletonBehaviourFromResources<object>.get_IsInstantiated
	*/

	// RVA: -1 Offset: -1
	public static bool get_IsInstanceActive() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99734 Offset: 0x1A99734 VA: 0x1A99734
	|-SingletonBehaviourFromResources<object>.get_IsInstanceActive
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A99850 Offset: 0x1A99850 VA: 0x1A99850
	|-SingletonBehaviourFromResources<object>..ctor
	*/
}

// Namespace: Rotatelab