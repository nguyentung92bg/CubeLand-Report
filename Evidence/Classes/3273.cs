public abstract class SingletonScriptableObject<T> : ScriptableObject // TypeDefIndex: 3273
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
	|-RVA: 0x1A9A0A8 Offset: 0x1A9A0A8 VA: 0x1A9A0A8
	|-SingletonScriptableObject<object>.get_Instance
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A9A274 Offset: 0x1A9A274 VA: 0x1A9A274
	|-SingletonScriptableObject<object>..ctor
	*/
}

// Namespace: Rotatelab