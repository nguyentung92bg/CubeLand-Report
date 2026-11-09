private class ControllerFirebase.QueuedEvent // TypeDefIndex: 4183
{
	// Fields
	[JsonProperty]
	public readonly string Name; // 0x8
	[JsonProperty("Properties")]
	private readonly ControllerFirebase.QueuedEventParameter[] m_parameters; // 0xC

	// Properties
	[JsonIgnore]
	public Parameter[] Parameters { get; }

	// Methods

	// RVA: 0x1061784 Offset: 0x1061784 VA: 0x1061784
	public Parameter[] get_Parameters() { }

	[JsonConstructor]
	// RVA: 0x10618EC Offset: 0x10618EC VA: 0x10618EC
	private void .ctor() { }

	// RVA: 0x1061274 Offset: 0x1061274 VA: 0x1061274
	public void .ctor(string eventName, Parameter[] parameters) { }
}

// Namespace: 