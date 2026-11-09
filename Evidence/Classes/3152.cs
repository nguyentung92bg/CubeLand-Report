public class ObservableLong : ObservableValue<long> // TypeDefIndex: 3152
{
	// Fields
	[CompilerGenerated]
	private long <MinValue>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <MaxValue>k__BackingField; // 0x20

	// Properties
	public override long Value { get; set; }
	[JsonIgnore]
	public virtual long MinValue { get; set; }
	[JsonIgnore]
	public virtual long MaxValue { get; set; }

	// Methods

	// RVA: 0xFB2B94 Offset: 0xFB2B94 VA: 0xFB2B94 Slot: 6
	public override long get_Value() { }

	// RVA: 0xFB2D14 Offset: 0xFB2D14 VA: 0xFB2D14 Slot: 7
	public override void set_Value(long value) { }

	[CompilerGenerated]
	// RVA: 0xFB3FF0 Offset: 0xFB3FF0 VA: 0xFB3FF0 Slot: 8
	public virtual long get_MinValue() { }

	[CompilerGenerated]
	// RVA: 0xFB3FF8 Offset: 0xFB3FF8 VA: 0xFB3FF8 Slot: 9
	public virtual void set_MinValue(long value) { }

	[CompilerGenerated]
	// RVA: 0xFB4008 Offset: 0xFB4008 VA: 0xFB4008 Slot: 10
	public virtual long get_MaxValue() { }

	[CompilerGenerated]
	// RVA: 0xFB4010 Offset: 0xFB4010 VA: 0xFB4010 Slot: 11
	public virtual void set_MaxValue(long value) { }

	// RVA: 0xFB30C8 Offset: 0xFB30C8 VA: 0xFB30C8
	public void .ctor() { }

	// RVA: 0xFB3140 Offset: 0xFB3140 VA: 0xFB3140
	public void .ctor(long value) { }

	// RVA: 0xFB4020 Offset: 0xFB4020 VA: 0xFB4020
	public Tween SetValueAnimated(long value, float duration, float delay = 0) { }

	// RVA: 0xFB4344 Offset: 0xFB4344 VA: 0xFB4344
	public static long op_Implicit(ObservableLong instance) { }

	// RVA: 0xFA4FF4 Offset: 0xFA4FF4 VA: 0xFA4FF4
	public static int op_Implicit(ObservableLong instance) { }
}

// Namespace: Rotatelab