public class SavedGenericValue<T> : SavedValue<T> // TypeDefIndex: 3318
{
	// Fields
	private readonly bool createNewInstanceAsDefault; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string key, T defaultValue, bool createNewInstanceAsDefault = False) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A890C8 Offset: 0x1A890C8 VA: 0x1A890C8
	|-SavedGenericValue<object>..ctor
	|
	|-RVA: 0x1A89354 Offset: 0x1A89354 VA: 0x1A89354
	|-SavedGenericValue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected override T GetSavedValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A890E0 Offset: 0x1A890E0 VA: 0x1A890E0
	|-SavedGenericValue<object>.GetSavedValue
	|
	|-RVA: 0x1A89440 Offset: 0x1A89440 VA: 0x1A89440
	|-SavedGenericValue<__Il2CppFullySharedGenericType>.GetSavedValue
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected override void SetSavedValue(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A89284 Offset: 0x1A89284 VA: 0x1A89284
	|-SavedGenericValue<object>.SetSavedValue
	|
	|-RVA: 0x1A896F0 Offset: 0x1A896F0 VA: 0x1A896F0
	|-SavedGenericValue<__Il2CppFullySharedGenericType>.SetSavedValue
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public override void SaveChanges() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A89304 Offset: 0x1A89304 VA: 0x1A89304
	|-SavedGenericValue<object>.SaveChanges
	|
	|-RVA: 0x1A89824 Offset: 0x1A89824 VA: 0x1A89824
	|-SavedGenericValue<__Il2CppFullySharedGenericType>.SaveChanges
	*/
}

// Namespace: Rotatelab.Save
[DefaultMember("Item")]