public class HiroLogger : ILogger, ILogger // TypeDefIndex: 3888
{
	// Fields
	private readonly bool verboseLogging; // 0x8

	// Methods

	// RVA: 0x114A770 Offset: 0x114A770 VA: 0x114A770
	public void .ctor(bool verboseLogging) { }

	// RVA: 0x115F600 Offset: 0x115F600 VA: 0x115F600 Slot: 4
	public void DebugFormat(string format, object[] args) { }

	// RVA: 0x115F684 Offset: 0x115F684 VA: 0x115F684
	public void Info(string message) { }

	// RVA: 0x115F700 Offset: 0x115F700 VA: 0x115F700 Slot: 9
	public void InfoFormat(string format, object[] args) { }

	// RVA: 0x115F784 Offset: 0x115F784 VA: 0x115F784
	public void Warn(string message) { }

	// RVA: 0x115F7EC Offset: 0x115F7EC VA: 0x115F7EC Slot: 7
	public void WarnFormat(string format, object[] args) { }

	// RVA: 0x115F85C Offset: 0x115F85C VA: 0x115F85C
	public void Error(string message) { }

	// RVA: 0x115F8C4 Offset: 0x115F8C4 VA: 0x115F8C4 Slot: 8
	public void ErrorFormat(string format, object[] args) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]