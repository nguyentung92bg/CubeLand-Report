private class RotateAdLogicManager.PendingAdImpression // TypeDefIndex: 3123
{
	// Fields
	public string AdFormat; // 0x8
	public string AdSource; // 0xC
	public string AdUnitName; // 0x10
	public string NetworkPlacement; // 0x14
	public double AdRevenue; // 0x18
	public string CreativeIdentifier; // 0x20
	public long LatencyMillis; // 0x28
	public string NeftaMode; // 0x30
	public long StartUtcTicks; // 0x38

	// Properties
	[JsonIgnore]
	public DateTime StartUtc { get; }

	// Methods

	// RVA: 0xFAD310 Offset: 0xFAD310 VA: 0xFAD310
	public DateTime get_StartUtc() { }

	// RVA: 0xFAC69C Offset: 0xFAC69C VA: 0xFAC69C
	public Parameter[] ToParameters(Parameter[] extraParameters) { }

	// RVA: 0xFAC694 Offset: 0xFAC694 VA: 0xFAC694
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]