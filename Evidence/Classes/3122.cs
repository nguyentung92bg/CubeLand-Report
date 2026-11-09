public abstract class RemoteVariableSO<T> : ScriptableObject // TypeDefIndex: 3122
{
	// Fields
	[SerializeField]
	internal string remoteKey; // 0x0
	[SerializeField]
	internal bool needToCache; // 0x0

	// Properties
	public string SecurityPrefKey { get; }
	public string DefaultValuePrefKey { get; }
	public T value { get; }

	// Methods

	// RVA: -1 Offset: -1
	public string get_SecurityPrefKey() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81DC8 Offset: 0x1A81DC8 VA: 0x1A81DC8
	|-RemoteVariableSO<bool>.get_SecurityPrefKey
	|
	|-RVA: 0x1A82000 Offset: 0x1A82000 VA: 0x1A82000
	|-RemoteVariableSO<int>.get_SecurityPrefKey
	|
	|-RVA: 0x1A82214 Offset: 0x1A82214 VA: 0x1A82214
	|-RemoteVariableSO<object>.get_SecurityPrefKey
	|
	|-RVA: 0x1A8241C Offset: 0x1A8241C VA: 0x1A8241C
	|-RemoteVariableSO<float>.get_SecurityPrefKey
	|
	|-RVA: 0x1A82630 Offset: 0x1A82630 VA: 0x1A82630
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.get_SecurityPrefKey
	*/

	// RVA: -1 Offset: -1
	public string get_DefaultValuePrefKey() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81E20 Offset: 0x1A81E20 VA: 0x1A81E20
	|-RemoteVariableSO<bool>.get_DefaultValuePrefKey
	|
	|-RVA: 0x1A82058 Offset: 0x1A82058 VA: 0x1A82058
	|-RemoteVariableSO<int>.get_DefaultValuePrefKey
	|
	|-RVA: 0x1A8226C Offset: 0x1A8226C VA: 0x1A8226C
	|-RemoteVariableSO<object>.get_DefaultValuePrefKey
	|
	|-RVA: 0x1A82474 Offset: 0x1A82474 VA: 0x1A82474
	|-RemoteVariableSO<float>.get_DefaultValuePrefKey
	|
	|-RVA: 0x1A82688 Offset: 0x1A82688 VA: 0x1A82688
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.get_DefaultValuePrefKey
	*/

	// RVA: -1 Offset: -1
	public T get_value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81E78 Offset: 0x1A81E78 VA: 0x1A81E78
	|-RemoteVariableSO<bool>.get_value
	|
	|-RVA: 0x1A820B0 Offset: 0x1A820B0 VA: 0x1A820B0
	|-RemoteVariableSO<int>.get_value
	|
	|-RVA: 0x1A822C4 Offset: 0x1A822C4 VA: 0x1A822C4
	|-RemoteVariableSO<object>.get_value
	|
	|-RVA: 0x1A824CC Offset: 0x1A824CC VA: 0x1A824CC
	|-RemoteVariableSO<float>.get_value
	|
	|-RVA: 0x1A826E0 Offset: 0x1A826E0 VA: 0x1A826E0
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.get_value
	*/

	// RVA: -1 Offset: -1
	internal T GetValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81E88 Offset: 0x1A81E88 VA: 0x1A81E88
	|-RemoteVariableSO<bool>.GetValue
	|
	|-RVA: 0x1A820C0 Offset: 0x1A820C0 VA: 0x1A820C0
	|-RemoteVariableSO<int>.GetValue
	|
	|-RVA: 0x1A822D4 Offset: 0x1A822D4 VA: 0x1A822D4
	|-RemoteVariableSO<object>.GetValue
	|
	|-RVA: 0x1A824DC Offset: 0x1A824DC VA: 0x1A824DC
	|-RemoteVariableSO<float>.GetValue
	|
	|-RVA: 0x1A8278C Offset: 0x1A8278C VA: 0x1A8278C
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.GetValue
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract T ReadFromRemote();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.ReadFromRemote
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract T ReadFromSave();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.ReadFromSave
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void CacheIt(T value);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.CacheIt
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81F38 Offset: 0x1A81F38 VA: 0x1A81F38
	|-RemoteVariableSO<bool>.ToString
	|
	|-RVA: 0x1A82170 Offset: 0x1A82170 VA: 0x1A82170
	|-RemoteVariableSO<int>.ToString
	|
	|-RVA: 0x1A82384 Offset: 0x1A82384 VA: 0x1A82384
	|-RemoteVariableSO<object>.ToString
	|
	|-RVA: 0x1A8258C Offset: 0x1A8258C VA: 0x1A8258C
	|-RemoteVariableSO<float>.ToString
	|
	|-RVA: 0x1A82938 Offset: 0x1A82938 VA: 0x1A82938
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.ToString
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(RemoteVariableSO<T> instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81FAC Offset: 0x1A81FAC VA: 0x1A81FAC
	|-RemoteVariableSO<bool>.op_Implicit
	|
	|-RVA: 0x1A821C0 Offset: 0x1A821C0 VA: 0x1A821C0
	|-RemoteVariableSO<int>.op_Implicit
	|
	|-RVA: 0x1A823C8 Offset: 0x1A823C8 VA: 0x1A823C8
	|-RemoteVariableSO<object>.op_Implicit
	|
	|-RVA: 0x1A825DC Offset: 0x1A825DC VA: 0x1A825DC
	|-RemoteVariableSO<float>.op_Implicit
	|
	|-RVA: 0x1A82AD4 Offset: 0x1A82AD4 VA: 0x1A82AD4
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A81FF8 Offset: 0x1A81FF8 VA: 0x1A81FF8
	|-RemoteVariableSO<bool>..ctor
	|
	|-RVA: 0x1A8220C Offset: 0x1A8220C VA: 0x1A8220C
	|-RemoteVariableSO<int>..ctor
	|
	|-RVA: 0x1A82414 Offset: 0x1A82414 VA: 0x1A82414
	|-RemoteVariableSO<object>..ctor
	|
	|-RVA: 0x1A82628 Offset: 0x1A82628 VA: 0x1A82628
	|-RemoteVariableSO<float>..ctor
	|
	|-RVA: 0x1A82BE4 Offset: 0x1A82BE4 VA: 0x1A82BE4
	|-RemoteVariableSO<__Il2CppFullySharedGenericType>..ctor
	*/
}

// Namespace: 
[Serializable]