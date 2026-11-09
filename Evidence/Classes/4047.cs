public static class LevelMovePathRecorder // TypeDefIndex: 4047
{
	// Fields
	public static readonly List<string> tokens; // 0x0
	private static int levelIndex; // 0x4
	private static bool isRecording; // 0x8

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1014970 Offset: 0x1014970 VA: 0x1014970
	private static void Initialize() { }

	// RVA: 0x1014D44 Offset: 0x1014D44 VA: 0x1014D44
	private static void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0x10126A4 Offset: 0x10126A4 VA: 0x10126A4
	public static void RecordPlacement(BlasterController blaster) { }

	// RVA: 0x1015064 Offset: 0x1015064 VA: 0x1015064
	private static void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x10152B4 Offset: 0x10152B4 VA: 0x10152B4
	private static void OnPlayOnRequested(PlayOnOffer offer) { }

	// RVA: 0x1015B00 Offset: 0x1015B00 VA: 0x1015B00
	private static void OnPlayOnComplete() { }

	// RVA: 0x1015C38 Offset: 0x1015C38 VA: 0x1015C38
	private static void OnLevelSucceeded() { }

	// RVA: 0x1015D24 Offset: 0x1015D24 VA: 0x1015D24
	private static void OnLevelFailed() { }

	// RVA: 0x1015430 Offset: 0x1015430 VA: 0x1015430
	private static void AppendDockedBlasterIds(string marker) { }

	// RVA: 0x1015C98 Offset: 0x1015C98 VA: 0x1015C98
	private static void Flush(bool success) { }

	// RVA: 0x1015DE0 Offset: 0x1015DE0 VA: 0x1015DE0
	public static List<string> GetCompactChunks(int maxLen = 100) { }

	// RVA: 0x10151A8 Offset: 0x10151A8 VA: 0x10151A8
	private static string ToBoosterToken(CurrencyType boosterType) { }

	// RVA: 0x1016200 Offset: 0x1016200 VA: 0x1016200
	private static void .cctor() { }
}

// Namespace: 