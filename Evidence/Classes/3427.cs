public class CycleData // TypeDefIndex: 3427
{
	// Fields
	[JsonProperty("Start")]
	public DateTime StartTime; // 0x8
	[JsonIgnore]
	public DateTime EndTime; // 0x10
	[JsonProperty("Score")]
	public int PlayerScore; // 0x18
	[JsonProperty("LastRank")]
	public int LastPlayerRank; // 0x1C
	[JsonIgnore]
	public BotData[] Bots; // 0x20
	public int Seed; // 0x24

	// Properties
	[JsonIgnore]
	public int PlayerRank { get; }

	// Methods

	// RVA: 0x10AE0E0 Offset: 0x10AE0E0 VA: 0x10AE0E0
	public int get_PlayerRank() { }

	// RVA: 0x10B1A28 Offset: 0x10B1A28 VA: 0x10B1A28
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10B1A30 Offset: 0x10B1A30 VA: 0x10B1A30
	private bool <get_PlayerRank>b__4_0(BotData e) { }
}

// Namespace: Rotatelab.Leaderboard