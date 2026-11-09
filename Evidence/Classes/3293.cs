private class PooledClosure.PooledAction<P1, P2> // TypeDefIndex: 3293
{
	// Fields
	private static readonly Stack<PooledClosure.PooledAction<P1, P2>> Pool; // 0x0
	private Action<P1, P2> callback; // 0x0
	private P1 parameter1; // 0x0
	private P2 parameter2; // 0x0
	private readonly Action action; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E4CC Offset: 0x186E4CC VA: 0x186E4CC
	|-PooledClosure.PooledAction<object, Int32Enum>..ctor
	|
	|-RVA: 0x186E8E0 Offset: 0x186E8E0 VA: 0x186E8E0
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public static Action Get(P1 parameter1, P2 parameter2, Action<P1, P2> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E55C Offset: 0x186E55C VA: 0x186E55C
	|-PooledClosure.PooledAction<object, Int32Enum>.Get
	|
	|-RVA: 0x186E980 Offset: 0x186E980 VA: 0x186E980
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	private void Invoke() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E73C Offset: 0x186E73C VA: 0x186E73C
	|-PooledClosure.PooledAction<object, Int32Enum>.Invoke
	|
	|-RVA: 0x186EE20 Offset: 0x186EE20 VA: 0x186EE20
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E80C Offset: 0x186E80C VA: 0x186E80C
	|-PooledClosure.PooledAction<object, Int32Enum>..cctor
	|
	|-RVA: 0x186F0C4 Offset: 0x186F0C4 VA: 0x186F0C4
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/
}

// Namespace: 