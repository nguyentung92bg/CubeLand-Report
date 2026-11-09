public abstract class SavedValue<T> : SavedValue // TypeDefIndex: 3312
{
	// Fields
	protected readonly string key; // 0x0
	private readonly T defaultValue; // 0x0
	[CompilerGenerated]
	private Func<T> DefaultValueOverride; // 0x0
	[CompilerGenerated]
	private Func<T, T> ValueSetterPreprocessor; // 0x0
	[CompilerGenerated]
	private Action<T> OnValueChanged; // 0x0
	private bool hasCachedValue; // 0x0
	private T cachedValue; // 0x0

	// Properties
	protected T DefaultValue { get; }
	public T Value { get; set; }

	// Methods

	// RVA: -1 Offset: -1
	protected T get_DefaultValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8AE04 Offset: 0x1A8AE04 VA: 0x1A8AE04
	|-SavedValue<bool>.get_DefaultValue
	|
	|-RVA: 0x1A8B1F0 Offset: 0x1A8B1F0 VA: 0x1A8B1F0
	|-SavedValue<DateTime>.get_DefaultValue
	|
	|-RVA: 0x1A8B694 Offset: 0x1A8B694 VA: 0x1A8B694
	|-SavedValue<int>.get_DefaultValue
	|
	|-RVA: 0x1A8BA3C Offset: 0x1A8BA3C VA: 0x1A8BA3C
	|-SavedValue<object>.get_DefaultValue
	|
	|-RVA: 0x1A8BD7C Offset: 0x1A8BD7C VA: 0x1A8BD7C
	|-SavedValue<float>.get_DefaultValue
	|
	|-RVA: 0x1A8C154 Offset: 0x1A8C154 VA: 0x1A8C154
	|-SavedValue<__Il2CppFullySharedGenericType>.get_DefaultValue
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void add_OnValueChanged(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8AE24 Offset: 0x1A8AE24 VA: 0x1A8AE24
	|-SavedValue<bool>.add_OnValueChanged
	|
	|-RVA: 0x1A8B234 Offset: 0x1A8B234 VA: 0x1A8B234
	|-SavedValue<DateTime>.add_OnValueChanged
	|
	|-RVA: 0x1A8B6B4 Offset: 0x1A8B6B4 VA: 0x1A8B6B4
	|-SavedValue<int>.add_OnValueChanged
	|
	|-RVA: 0x1A8BA5C Offset: 0x1A8BA5C VA: 0x1A8BA5C
	|-SavedValue<object>.add_OnValueChanged
	|
	|-RVA: 0x1A8BD9C Offset: 0x1A8BD9C VA: 0x1A8BD9C
	|-SavedValue<float>.add_OnValueChanged
	|
	|-RVA: 0x1A8C28C Offset: 0x1A8C28C VA: 0x1A8C28C
	|-SavedValue<__Il2CppFullySharedGenericType>.add_OnValueChanged
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void remove_OnValueChanged(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8AEBC Offset: 0x1A8AEBC VA: 0x1A8AEBC
	|-SavedValue<bool>.remove_OnValueChanged
	|
	|-RVA: 0x1A8B2CC Offset: 0x1A8B2CC VA: 0x1A8B2CC
	|-SavedValue<DateTime>.remove_OnValueChanged
	|
	|-RVA: 0x1A8B74C Offset: 0x1A8B74C VA: 0x1A8B74C
	|-SavedValue<int>.remove_OnValueChanged
	|
	|-RVA: 0x1A8BAF4 Offset: 0x1A8BAF4 VA: 0x1A8BAF4
	|-SavedValue<object>.remove_OnValueChanged
	|
	|-RVA: 0x1A8BE34 Offset: 0x1A8BE34 VA: 0x1A8BE34
	|-SavedValue<float>.remove_OnValueChanged
	|
	|-RVA: 0x1A8C35C Offset: 0x1A8C35C VA: 0x1A8C35C
	|-SavedValue<__Il2CppFullySharedGenericType>.remove_OnValueChanged
	*/

	// RVA: -1 Offset: -1
	public T get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8AF54 Offset: 0x1A8AF54 VA: 0x1A8AF54
	|-SavedValue<bool>.get_Value
	|
	|-RVA: 0x1A8B364 Offset: 0x1A8B364 VA: 0x1A8B364
	|-SavedValue<DateTime>.get_Value
	|
	|-RVA: 0x1A8B7E4 Offset: 0x1A8B7E4 VA: 0x1A8B7E4
	|-SavedValue<int>.get_Value
	|
	|-RVA: 0x1A8BB8C Offset: 0x1A8BB8C VA: 0x1A8BB8C
	|-SavedValue<object>.get_Value
	|
	|-RVA: 0x1A8BECC Offset: 0x1A8BECC VA: 0x1A8BECC
	|-SavedValue<float>.get_Value
	|
	|-RVA: 0x1A8C42C Offset: 0x1A8C42C VA: 0x1A8C42C
	|-SavedValue<__Il2CppFullySharedGenericType>.get_Value
	*/

	// RVA: -1 Offset: -1
	public void set_Value(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8AF9C Offset: 0x1A8AF9C VA: 0x1A8AF9C
	|-SavedValue<bool>.set_Value
	|
	|-RVA: 0x1A8B3BC Offset: 0x1A8B3BC VA: 0x1A8B3BC
	|-SavedValue<DateTime>.set_Value
	|
	|-RVA: 0x1A8B820 Offset: 0x1A8B820 VA: 0x1A8B820
	|-SavedValue<int>.set_Value
	|
	|-RVA: 0x1A8BBD8 Offset: 0x1A8BBD8 VA: 0x1A8BBD8
	|-SavedValue<object>.set_Value
	|
	|-RVA: 0x1A8BF14 Offset: 0x1A8BF14 VA: 0x1A8BF14
	|-SavedValue<float>.set_Value
	|
	|-RVA: 0x1A8C574 Offset: 0x1A8C574 VA: 0x1A8C574
	|-SavedValue<__Il2CppFullySharedGenericType>.set_Value
	*/

	// RVA: -1 Offset: -1
	protected void .ctor(string key, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8B09C Offset: 0x1A8B09C VA: 0x1A8B09C
	|-SavedValue<bool>..ctor
	|
	|-RVA: 0x1A8B4E4 Offset: 0x1A8B4E4 VA: 0x1A8B4E4
	|-SavedValue<DateTime>..ctor
	|
	|-RVA: 0x1A8B918 Offset: 0x1A8B918 VA: 0x1A8B918
	|-SavedValue<int>..ctor
	|
	|-RVA: 0x1A8BCB0 Offset: 0x1A8BCB0 VA: 0x1A8BCB0
	|-SavedValue<object>..ctor
	|
	|-RVA: 0x1A8C020 Offset: 0x1A8C020 VA: 0x1A8C020
	|-SavedValue<float>..ctor
	|
	|-RVA: 0x1A8C960 Offset: 0x1A8C960 VA: 0x1A8C960
	|-SavedValue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract T GetSavedValue();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-SavedValue<__Il2CppFullySharedGenericType>.GetSavedValue
	*/

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void SetSavedValue(T value);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-SavedValue<__Il2CppFullySharedGenericType>.SetSavedValue
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8B0CC Offset: 0x1A8B0CC VA: 0x1A8B0CC
	|-SavedValue<bool>.ToString
	|
	|-RVA: 0x1A8B518 Offset: 0x1A8B518 VA: 0x1A8B518
	|-SavedValue<DateTime>.ToString
	|
	|-RVA: 0x1A8B948 Offset: 0x1A8B948 VA: 0x1A8B948
	|-SavedValue<int>.ToString
	|
	|-RVA: 0x1A8BCEC Offset: 0x1A8BCEC VA: 0x1A8BCEC
	|-SavedValue<object>.ToString
	|
	|-RVA: 0x1A8C050 Offset: 0x1A8C050 VA: 0x1A8C050
	|-SavedValue<float>.ToString
	|
	|-RVA: 0x1A8CA4C Offset: 0x1A8CA4C VA: 0x1A8CA4C
	|-SavedValue<__Il2CppFullySharedGenericType>.ToString
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(SavedValue<T> instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8B15C Offset: 0x1A8B15C VA: 0x1A8B15C
	|-SavedValue<bool>.op_Implicit
	|
	|-RVA: 0x1A8B5F0 Offset: 0x1A8B5F0 VA: 0x1A8B5F0
	|-SavedValue<DateTime>.op_Implicit
	|
	|-RVA: 0x1A8B9B4 Offset: 0x1A8B9B4 VA: 0x1A8B9B4
	|-SavedValue<int>.op_Implicit
	|
	|-RVA: 0x1A8BD1C Offset: 0x1A8BD1C VA: 0x1A8BD1C
	|-SavedValue<object>.op_Implicit
	|
	|-RVA: 0x1A8C0C0 Offset: 0x1A8C0C0 VA: 0x1A8C0C0
	|-SavedValue<float>.op_Implicit
	|
	|-RVA: 0x1A8CB88 Offset: 0x1A8CB88 VA: 0x1A8CB88
	|-SavedValue<__Il2CppFullySharedGenericType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	public void ResetValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8B1C8 Offset: 0x1A8B1C8 VA: 0x1A8B1C8
	|-SavedValue<bool>.ResetValue
	|
	|-RVA: 0x1A8B66C Offset: 0x1A8B66C VA: 0x1A8B66C
	|-SavedValue<DateTime>.ResetValue
	|
	|-RVA: 0x1A8BA14 Offset: 0x1A8BA14 VA: 0x1A8BA14
	|-SavedValue<int>.ResetValue
	|
	|-RVA: 0x1A8BD54 Offset: 0x1A8BD54 VA: 0x1A8BD54
	|-SavedValue<object>.ResetValue
	|
	|-RVA: 0x1A8C12C Offset: 0x1A8C12C VA: 0x1A8C12C
	|-SavedValue<float>.ResetValue
	|
	|-RVA: 0x1A8CC98 Offset: 0x1A8CC98 VA: 0x1A8CC98
	|-SavedValue<__Il2CppFullySharedGenericType>.ResetValue
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public virtual void SaveChanges() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1A8B1E8 Offset: 0x1A8B1E8 VA: 0x1A8B1E8
	|-SavedValue<bool>.SaveChanges
	|
	|-RVA: 0x1A8B68C Offset: 0x1A8B68C VA: 0x1A8B68C
	|-SavedValue<DateTime>.SaveChanges
	|
	|-RVA: 0x1A8BA34 Offset: 0x1A8BA34 VA: 0x1A8BA34
	|-SavedValue<int>.SaveChanges
	|
	|-RVA: 0x1A8BD74 Offset: 0x1A8BD74 VA: 0x1A8BD74
	|-SavedValue<object>.SaveChanges
	|
	|-RVA: 0x1A8C14C Offset: 0x1A8C14C VA: 0x1A8C14C
	|-SavedValue<float>.SaveChanges
	|
	|-RVA: 0x1A8CCEC Offset: 0x1A8CCEC VA: 0x1A8CCEC
	|-SavedValue<__Il2CppFullySharedGenericType>.SaveChanges
	*/
}

// Namespace: Rotatelab.Save