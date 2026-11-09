private class PooledClosure.PooledAction<P1> // TypeDefIndex: 3292
{
	// Fields
	private static readonly Stack<PooledClosure.PooledAction<P1>> Pool; // 0x0
	private Action<P1> callback; // 0x0
	private P1 parameter1; // 0x0
	private readonly Action action; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186DD74 Offset: 0x186DD74 VA: 0x186DD74
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public static Action Get(P1 parameter1, Action<P1> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186DE14 Offset: 0x186DE14 VA: 0x186DE14
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	private void Invoke() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E1DC Offset: 0x186E1DC VA: 0x186E1DC
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x186E3CC Offset: 0x186E3CC VA: 0x186E3CC
	|-PooledClosure.PooledAction<__Il2CppFullySharedGenericType>..cctor
	*/
}

// Namespace: 