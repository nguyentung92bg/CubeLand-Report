public class StopwatchEvent : IDisposable // TypeDefIndex: 3939
{
	// Fields
	private const string LogPrefix = "[Stopwatch] ";
	private readonly string name; // 0x8
	private readonly StopwatchEvent parent; // 0xC
	private double startTime; // 0x10
	private double endTime; // 0x18
	private readonly List<Parameter> firebaseParameters; // 0x20
	private List<StopwatchEvent> children; // 0x24

	// Properties
	private double Duration { get; }
	private static double CurrentTime { get; }

	// Methods

	// RVA: 0xFE8D5C Offset: 0xFE8D5C VA: 0xFE8D5C
	private double get_Duration() { }

	// RVA: 0xFE8D70 Offset: 0xFE8D70 VA: 0xFE8D70
	private static double get_CurrentTime() { }

	// RVA: 0xFE8D78 Offset: 0xFE8D78 VA: 0xFE8D78
	public void .ctor(string name, StopwatchEvent parent, bool autoStart = True) { }

	// RVA: 0xFE8FE4 Offset: 0xFE8FE4 VA: 0xFE8FE4
	public StopwatchEvent Start() { }

	// RVA: 0xFE9010 Offset: 0xFE9010 VA: 0xFE9010 Slot: 4
	private void System.IDisposable.Dispose() { }

	// RVA: 0xFE9014 Offset: 0xFE9014 VA: 0xFE9014
	public void Complete() { }

	// RVA: 0xFE9AE8 Offset: 0xFE9AE8 VA: 0xFE9AE8
	public StopwatchEvent AddParameter(string name, string value) { }

	// RVA: 0xFE9C6C Offset: 0xFE9C6C VA: 0xFE9C6C
	public StopwatchEvent AddTimestamp(string name) { }

	// RVA: 0xFE99C0 Offset: 0xFE99C0 VA: 0xFE99C0
	public StopwatchEvent AddParameter(string name, double value) { }

	// RVA: 0xFE9CA8 Offset: 0xFE9CA8 VA: 0xFE9CA8
	public StopwatchEvent AddParameter(string name, long value) { }

	// RVA: 0xFE9BF8 Offset: 0xFE9BF8 VA: 0xFE9BF8
	private string GetParameterName(string parameterName) { }

	// RVA: 0xFE9950 Offset: 0xFE9950 VA: 0xFE9950
	private string GetFullName() { }
}

// Namespace: 
[CompilerGenerated]