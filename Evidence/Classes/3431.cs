public class LeaderboardSaveData // TypeDefIndex: 3431
{
	// Fields
	[JsonProperty("Cycle", ObjectCreationHandling = 2)]
	public CycleData CurrentCycle; // 0x8
	[JsonProperty("Pending", ObjectCreationHandling = 2)]
	public CycleData PendingFinishedCycle; // 0xC
	public LeaderboardTutorialController.Phase Tutorial; // 0x10

	// Methods

	// RVA: 0x10B1A78 Offset: 0x10B1A78 VA: 0x10B1A78
	public void .ctor() { }
}

// Namespace: Rotatelab.Leaderboard