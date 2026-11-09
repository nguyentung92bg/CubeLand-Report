public class AdvancedAssetReference<T> : AdvancedAssetReference // TypeDefIndex: 3845
{
	// Properties
	public T Asset { get; }

	// Methods

	// RVA: -1 Offset: -1
	public T get_Asset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F1CA8C Offset: 0x1F1CA8C VA: 0x1F1CA8C
	|-AdvancedAssetReference<object>.get_Asset
	*/

	// RVA: -1 Offset: -1
	public void .ctor(string guid) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F1CAE4 Offset: 0x1F1CAE4 VA: 0x1F1CAE4
	|-AdvancedAssetReference<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public T LoadAsset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F1CAEC Offset: 0x1F1CAEC VA: 0x1F1CAEC
	|-AdvancedAssetReference<object>.LoadAsset
	*/

	// RVA: -1 Offset: -1
	public UniTask<T> LoadAssetAsync() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1F1CB1C Offset: 0x1F1CB1C VA: 0x1F1CB1C
	|-AdvancedAssetReference<object>.LoadAssetAsync
	*/
}

// Namespace: Rotatelab.Networking
[Serializable]