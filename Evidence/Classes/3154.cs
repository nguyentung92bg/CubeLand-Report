public class ObservableValue<T> : IObservableValue // TypeDefIndex: 3154
{
	// Fields
	private T m_value; // 0x0
	[CompilerGenerated]
	[JsonIgnore]
	private Action<T> OnValueChanged; // 0x0

	// Properties
	[JsonProperty(Order = -100)]
	public virtual T Value { get; set; }
	[JsonIgnore]
	private object Rotatelab.IObservableValue.Value { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 6
	public virtual T get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D360 Offset: 0x185D360 VA: 0x185D360
	|-ObservableValue<long>.get_Value
	|
	|-RVA: 0x185DAA8 Offset: 0x185DAA8 VA: 0x185DAA8
	|-ObservableValue<__Il2CppFullySharedGenericType>.get_Value
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public virtual void set_Value(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D368 Offset: 0x185D368 VA: 0x185D368
	|-ObservableValue<long>.set_Value
	|
	|-RVA: 0x185DADC Offset: 0x185DADC VA: 0x185DADC
	|-ObservableValue<__Il2CppFullySharedGenericType>.set_Value
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private object Rotatelab.IObservableValue.get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D420 Offset: 0x185D420 VA: 0x185D420
	|-ObservableValue<long>.Rotatelab.IObservableValue.get_Value
	|
	|-RVA: 0x185DD38 Offset: 0x185DD38 VA: 0x185DD38
	|-ObservableValue<__Il2CppFullySharedGenericType>.Rotatelab.IObservableValue.get_Value
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private void Rotatelab.IObservableValue.set_Value(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D45C Offset: 0x185D45C VA: 0x185D45C
	|-ObservableValue<long>.Rotatelab.IObservableValue.set_Value
	|
	|-RVA: 0x185DDE8 Offset: 0x185DDE8 VA: 0x185DDE8
	|-ObservableValue<__Il2CppFullySharedGenericType>.Rotatelab.IObservableValue.set_Value
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void add_OnValueChanged(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D4E4 Offset: 0x185D4E4 VA: 0x185D4E4
	|-ObservableValue<long>.add_OnValueChanged
	|
	|-RVA: 0x185DECC Offset: 0x185DECC VA: 0x185DECC
	|-ObservableValue<__Il2CppFullySharedGenericType>.add_OnValueChanged
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public void remove_OnValueChanged(Action<T> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D57C Offset: 0x185D57C VA: 0x185D57C
	|-ObservableValue<long>.remove_OnValueChanged
	|
	|-RVA: 0x185DF9C Offset: 0x185DF9C VA: 0x185DF9C
	|-ObservableValue<__Il2CppFullySharedGenericType>.remove_OnValueChanged
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D614 Offset: 0x185D614 VA: 0x185D614
	|-ObservableValue<long>..ctor
	|
	|-RVA: 0x185E06C Offset: 0x185E06C VA: 0x185E06C
	|-ObservableValue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D828 Offset: 0x185D828 VA: 0x185D828
	|-ObservableValue<long>..ctor
	|
	|-RVA: 0x185E280 Offset: 0x185E280 VA: 0x185E280
	|-ObservableValue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	protected void ForceInvokeOnValueChanged() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D848 Offset: 0x185D848 VA: 0x185D848
	|-ObservableValue<long>.ForceInvokeOnValueChanged
	|
	|-RVA: 0x185E34C Offset: 0x185E34C VA: 0x185E34C
	|-ObservableValue<__Il2CppFullySharedGenericType>.ForceInvokeOnValueChanged
	*/

	// RVA: -1 Offset: -1
	protected void ForceInvokeOnValueChanged(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D890 Offset: 0x185D890 VA: 0x185D890
	|-ObservableValue<long>.ForceInvokeOnValueChanged
	|
	|-RVA: 0x185E44C Offset: 0x185E44C VA: 0x185E44C
	|-ObservableValue<__Il2CppFullySharedGenericType>.ForceInvokeOnValueChanged
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D8C0 Offset: 0x185D8C0 VA: 0x185D8C0
	|-ObservableValue<long>.ToString
	|
	|-RVA: 0x185E538 Offset: 0x185E538 VA: 0x185E538
	|-ObservableValue<__Il2CppFullySharedGenericType>.ToString
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public override int GetHashCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D908 Offset: 0x185D908 VA: 0x185D908
	|-ObservableValue<long>.GetHashCode
	|
	|-RVA: 0x185E670 Offset: 0x185E670 VA: 0x185E670
	|-ObservableValue<__Il2CppFullySharedGenericType>.GetHashCode
	*/

	// RVA: -1 Offset: -1 Slot: 0
	public override bool Equals(object obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185D92C Offset: 0x185D92C VA: 0x185D92C
	|-ObservableValue<long>.Equals
	|
	|-RVA: 0x185E694 Offset: 0x185E694 VA: 0x185E694
	|-ObservableValue<__Il2CppFullySharedGenericType>.Equals
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(ObservableValue<T> instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185DA18 Offset: 0x185DA18 VA: 0x185DA18
	|-ObservableValue<long>.op_Implicit
	|
	|-RVA: 0x185E83C Offset: 0x185E83C VA: 0x185E83C
	|-ObservableValue<__Il2CppFullySharedGenericType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	public static bool op_Equality(ObservableValue<T> e1, ObservableValue<T> e2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185DA44 Offset: 0x185DA44 VA: 0x185DA44
	|-ObservableValue<long>.op_Equality
	|
	|-RVA: 0x185E908 Offset: 0x185E908 VA: 0x185E908
	|-ObservableValue<__Il2CppFullySharedGenericType>.op_Equality
	*/

	// RVA: -1 Offset: -1
	public static bool op_Inequality(ObservableValue<T> e1, ObservableValue<T> e2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x185DA70 Offset: 0x185DA70 VA: 0x185DA70
	|-ObservableValue<long>.op_Inequality
	|
	|-RVA: 0x185E934 Offset: 0x185E934 VA: 0x185E934
	|-ObservableValue<__Il2CppFullySharedGenericType>.op_Inequality
	*/
}

// Namespace: Rotatelab
[Preserve]