public class ObservableBool : ObservableLong // TypeDefIndex: 3146
{
	// Fields
	private Action<bool> m_onValueChanged; // 0x28

	// Properties
	[JsonIgnore]
	public bool Value { get; set; }

	// Methods

	// RVA: 0xFB2B74 Offset: 0xFB2B74 VA: 0xFB2B74
	public bool get_Value() { }

	// RVA: 0xFA6D68 Offset: 0xFA6D68 VA: 0xFA6D68
	public void set_Value(bool value) { }

	// RVA: 0xFAE0D0 Offset: 0xFAE0D0 VA: 0xFAE0D0
	public void add_OnValueChanged(Action<bool> value) { }

	// RVA: 0xFB2EC0 Offset: 0xFB2EC0 VA: 0xFB2EC0
	public void remove_OnValueChanged(Action<bool> value) { }

	// RVA: 0xFB302C Offset: 0xFB302C VA: 0xFB302C
	private void OnBaseValueChanged(long value) { }

	// RVA: 0xFB3068 Offset: 0xFB3068 VA: 0xFB3068 Slot: 3
	public override string ToString() { }

	// RVA: 0xFAC238 Offset: 0xFAC238 VA: 0xFAC238
	public static bool op_Implicit(ObservableBool instance) { }

	// RVA: 0xFB30C4 Offset: 0xFB30C4 VA: 0xFB30C4
	public void .ctor() { }
}

// Namespace: Rotatelab
[JsonConverter(typeof(DefaultObservableValueConverter))]