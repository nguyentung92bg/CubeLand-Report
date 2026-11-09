private class ControllerFirebase.QueuedEventParameter // TypeDefIndex: 4185
{
	// Fields
	[JsonProperty]
	private readonly string name; // 0x8
	[JsonProperty]
	private readonly object value; // 0xC
	[JsonProperty]
	private readonly ControllerFirebase.QueuedEventParameter.ValueType type; // 0x10

	// Methods

	[JsonConstructor]
	// RVA: 0x1061DBC Offset: 0x1061DBC VA: 0x1061DBC
	private void .ctor() { }

	// RVA: 0x1061C04 Offset: 0x1061C04 VA: 0x1061C04
	public void .ctor(Parameter parameter) { }

	// RVA: 0x1061990 Offset: 0x1061990 VA: 0x1061990
	public Parameter ToFirebaseParameter() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]