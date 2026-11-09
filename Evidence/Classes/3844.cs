public abstract class AdvancedAssetReference : AssetReference // TypeDefIndex: 3844
{
	// Methods

	// RVA: 0x1140B38 Offset: 0x1140B38 VA: 0x1140B38
	protected void .ctor(string guid) { }

	// RVA: -1 Offset: -1
	public T LoadAsset<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x13A5338 Offset: 0x13A5338 VA: 0x13A5338
	|-AdvancedAssetReference.LoadAsset<object>
	*/

	[AsyncStateMachine(typeof(AdvancedAssetReference.<LoadAssetAsync>d__2<T>))]
	// RVA: -1 Offset: -1
	public UniTask<T> LoadAssetAsync<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x13A5404 Offset: 0x13A5404 VA: 0x13A5404
	|-AdvancedAssetReference.LoadAssetAsync<object>
	*/

	// RVA: 0x1140B40 Offset: 0x1140B40 VA: 0x1140B40 Slot: 18
	public override void ReleaseAsset() { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: -1 Offset: -1
	private AsyncOperationHandle<TObject> <>n__0<TObject>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x13A5274 Offset: 0x13A5274 VA: 0x13A5274
	|-AdvancedAssetReference.<>n__0<object>
	|
	|-RVA: 0x13A52D4 Offset: 0x13A52D4 VA: 0x13A52D4
	|-AdvancedAssetReference.<>n__0<__Il2CppFullySharedGenericType>
	*/
}

// Namespace: Rotatelab.Networking
[Serializable]