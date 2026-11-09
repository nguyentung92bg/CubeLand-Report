public static class RemoteSolverClient // TypeDefIndex: 4154
{
	// Fields
	private const string ApiToken = "rotate2026key";
	private const string BaseUrl = "https://cnn.rotatelab.dev";
	private const string NearestToBlasterStrategy = "NRPA_NearestToBlaster";
	private static readonly List<string> OtherStrategies; // 0x0
	private const double TurnTimeBudgetSeconds = 300;

	// Methods

	// RVA: 0x105A6A4 Offset: 0x105A6A4 VA: 0x105A6A4
	public static IEnumerator Solve(LevelDataWire level, List<int[]> shootableCells, int seed, Action<SolveStreamEvent> onProgress, Action<SolveResult> onResult, Action<string> onError, Action<UnityWebRequest> onRequestStarted) { }

	// RVA: 0x105A7EC Offset: 0x105A7EC VA: 0x105A7EC
	private static void .cctor() { }
}

// Namespace: Rotatelab.Scripts