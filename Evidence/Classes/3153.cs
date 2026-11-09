public interface IObservableValue // TypeDefIndex: 3153
{
	// Fields
	internal static readonly List<WeakReference<IObservableValue>> instances; // 0x0

	// Properties
	public abstract object Value { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object get_Value();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_Value(object value);

	// RVA: -1 Offset: -1
	public static WeakReferenceListEnumerator<IObservableValue, T> EnumerateInstances<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x14A48EC Offset: 0x14A48EC VA: 0x14A48EC
	|-IObservableValue.EnumerateInstances<object>
	*/

	// RVA: 0xFB451C Offset: 0xFB451C VA: 0xFB451C
	private static void .cctor() { }
}

// Namespace: Rotatelab
[JsonConverter(typeof(InlineObservableValueConverter))]