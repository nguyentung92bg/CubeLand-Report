public static class RecentLogRecorder // TypeDefIndex: 3173
{
	// Fields
	private const int Capacity = 20;
	private static readonly RecentLogRecorder.Entry[] Entries; // 0x0
	private static readonly object BufferLock; // 0x4
	private static int count; // 0x8
	private static int nextIndex; // 0xC

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0xFBABA8 Offset: 0xFBABA8 VA: 0xFBABA8
	private static void Initialize() { }

	// RVA: 0xFBADA8 Offset: 0xFBADA8 VA: 0xFBADA8
	private static void OnLogMessageReceived(string condition, string stackTrace, LogType type) { }

	// RVA: 0xFBA710 Offset: 0xFBA710 VA: 0xFBA710
	public static void AppendTo(StringBuilder sb, int maxEntries, int stackTraceLineLimit, int maxBlockChars, bool includeWarnings) { }

	// RVA: 0xFBB1FC Offset: 0xFBB1FC VA: 0xFBB1FC
	private static string Format(in RecentLogRecorder.Entry entry, int stackTraceLineLimit) { }

	// RVA: 0xFBB710 Offset: 0xFBB710 VA: 0xFBB710
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]