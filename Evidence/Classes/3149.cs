public class ObservableEnergy : ObservableLong // TypeDefIndex: 3149
{
	// Fields
	[JsonIgnore]
	public long RefillSeconds; // 0x28
	[JsonIgnore]
	public long RefillAmount; // 0x30
	[CompilerGenerated]
	private long <RemainingSecondsToRefill>k__BackingField; // 0x38
	[JsonProperty("NextRefill")]
	private long nextRefillTimeInSeconds; // 0x40
	[CompilerGenerated]
	[JsonIgnore]
	private Action<long> OnRefillTimerChanged; // 0x48
	[CompilerGenerated]
	private long <RemainingSecondsOfInfinity>k__BackingField; // 0x50
	[JsonProperty("InfiniteEnd")]
	private long infiniteModifierEndTimeInSeconds; // 0x58
	[CompilerGenerated]
	[JsonIgnore]
	private Action<long> OnInfinityTimerChanged; // 0x60

	// Properties
	public override long Value { get; set; }
	[JsonIgnore]
	public long RemainingSecondsToRefill { get; set; }
	[JsonIgnore]
	public long SecondsToFull { get; }
	[JsonIgnore]
	public long RemainingSecondsOfInfinity { get; set; }
	[JsonIgnore]
	public bool IsInfinite { get; }

	// Methods

	// RVA: 0xFB31C0 Offset: 0xFB31C0 VA: 0xFB31C0 Slot: 6
	public override long get_Value() { }

	// RVA: 0xFB31FC Offset: 0xFB31FC VA: 0xFB31FC Slot: 7
	public override void set_Value(long value) { }

	[CompilerGenerated]
	// RVA: 0xFB36BC Offset: 0xFB36BC VA: 0xFB36BC
	public long get_RemainingSecondsToRefill() { }

	[CompilerGenerated]
	// RVA: 0xFB36C4 Offset: 0xFB36C4 VA: 0xFB36C4
	private void set_RemainingSecondsToRefill(long value) { }

	[CompilerGenerated]
	// RVA: 0xFB36D4 Offset: 0xFB36D4 VA: 0xFB36D4
	public void add_OnRefillTimerChanged(Action<long> value) { }

	[CompilerGenerated]
	// RVA: 0xFB3784 Offset: 0xFB3784 VA: 0xFB3784
	public void remove_OnRefillTimerChanged(Action<long> value) { }

	// RVA: 0xFB3834 Offset: 0xFB3834 VA: 0xFB3834
	public long get_SecondsToFull() { }

	[CompilerGenerated]
	// RVA: 0xFB3910 Offset: 0xFB3910 VA: 0xFB3910
	public long get_RemainingSecondsOfInfinity() { }

	[CompilerGenerated]
	// RVA: 0xFB3918 Offset: 0xFB3918 VA: 0xFB3918
	private void set_RemainingSecondsOfInfinity(long value) { }

	// RVA: 0xFB31E4 Offset: 0xFB31E4 VA: 0xFB31E4
	public bool get_IsInfinite() { }

	[CompilerGenerated]
	// RVA: 0xFB3928 Offset: 0xFB3928 VA: 0xFB3928
	public void add_OnInfinityTimerChanged(Action<long> value) { }

	[CompilerGenerated]
	// RVA: 0xFB39D8 Offset: 0xFB39D8 VA: 0xFB39D8
	public void remove_OnInfinityTimerChanged(Action<long> value) { }

	// RVA: 0xFB3A88 Offset: 0xFB3A88 VA: 0xFB3A88
	public void GrantInfiniteEnergy(long durationInSeconds) { }

	// RVA: 0xFB3BD0 Offset: 0xFB3BD0 VA: 0xFB3BD0
	public static IEnumerator UpdateTimersCoroutine() { }

	// RVA: 0xFB32F0 Offset: 0xFB32F0 VA: 0xFB32F0
	private void UpdateTimers(long currentTimeInSeconds) { }

	// RVA: 0xFB3C50 Offset: 0xFB3C50 VA: 0xFB3C50
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]