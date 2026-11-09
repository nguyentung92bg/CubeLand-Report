public abstract class SatoriFlag<T> // TypeDefIndex: 3922
{
	// Fields
	[SerializeField]
	protected string remoteKey; // 0x0

	// Properties
	public abstract T Value { get; }
	public bool HasRemoteValue { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract T get_Value();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-SatoriFlag<__Il2CppFullySharedGenericType>.get_Value
	*/

	// RVA: -1 Offset: -1
	public bool get_HasRemoteValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A88A24 Offset: 0x1A88A24 VA: 0x1A88A24
	|-SatoriFlag<bool>.get_HasRemoteValue
	|
	|-RVA: 0x1A88B34 Offset: 0x1A88B34 VA: 0x1A88B34
	|-SatoriFlag<int>.get_HasRemoteValue
	|
	|-RVA: 0x1A88C20 Offset: 0x1A88C20 VA: 0x1A88C20
	|-SatoriFlag<object>.get_HasRemoteValue
	|
	|-RVA: 0x1A88D00 Offset: 0x1A88D00 VA: 0x1A88D00
	|-SatoriFlag<float>.get_HasRemoteValue
	|
	|-RVA: 0x1A88DEC Offset: 0x1A88DEC VA: 0x1A88DEC
	|-SatoriFlag<__Il2CppFullySharedGenericType>.get_HasRemoteValue
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A88A98 Offset: 0x1A88A98 VA: 0x1A88A98
	|-SatoriFlag<bool>.ToString
	|
	|-RVA: 0x1A88BA8 Offset: 0x1A88BA8 VA: 0x1A88BA8
	|-SatoriFlag<int>.ToString
	|
	|-RVA: 0x1A88C94 Offset: 0x1A88C94 VA: 0x1A88C94
	|-SatoriFlag<object>.ToString
	|
	|-RVA: 0x1A88D74 Offset: 0x1A88D74 VA: 0x1A88D74
	|-SatoriFlag<float>.ToString
	|
	|-RVA: 0x1A88E60 Offset: 0x1A88E60 VA: 0x1A88E60
	|-SatoriFlag<__Il2CppFullySharedGenericType>.ToString
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(SatoriFlag<T> instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A88B00 Offset: 0x1A88B00 VA: 0x1A88B00
	|-SatoriFlag<bool>.op_Implicit
	|
	|-RVA: 0x1A88BEC Offset: 0x1A88BEC VA: 0x1A88BEC
	|-SatoriFlag<int>.op_Implicit
	|
	|-RVA: 0x1A88CCC Offset: 0x1A88CCC VA: 0x1A88CCC
	|-SatoriFlag<object>.op_Implicit
	|
	|-RVA: 0x1A88DB8 Offset: 0x1A88DB8 VA: 0x1A88DB8
	|-SatoriFlag<float>.op_Implicit
	|
	|-RVA: 0x1A88FF4 Offset: 0x1A88FF4 VA: 0x1A88FF4
	|-SatoriFlag<__Il2CppFullySharedGenericType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A88B2C Offset: 0x1A88B2C VA: 0x1A88B2C
	|-SatoriFlag<bool>..ctor
	|
	|-RVA: 0x1A88C18 Offset: 0x1A88C18 VA: 0x1A88C18
	|-SatoriFlag<int>..ctor
	|
	|-RVA: 0x1A88CF8 Offset: 0x1A88CF8 VA: 0x1A88CF8
	|-SatoriFlag<object>..ctor
	|
	|-RVA: 0x1A88DE4 Offset: 0x1A88DE4 VA: 0x1A88DE4
	|-SatoriFlag<float>..ctor
	|
	|-RVA: 0x1A890C0 Offset: 0x1A890C0 VA: 0x1A890C0
	|-SatoriFlag<__Il2CppFullySharedGenericType>..ctor
	*/
}

// Namespace: Rotatelab.Networking
[Serializable]