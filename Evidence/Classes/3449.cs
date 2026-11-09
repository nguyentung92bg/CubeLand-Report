public class LateGameLeaderboardManager : BaseLeaderboardManager<LateGameLeaderboardManager> // TypeDefIndex: 3449
{
	// Fields
	[SerializeField]
	private LateGameLeaderboardManager.BotTier[] botTiers; // 0x34
	[SerializeField]
	private LeaderboardRewardsSo rewardsSo; // 0x38
	[SerializeField]
	private Sprite scoreIcon; // 0x3C

	// Properties
	public override bool IsActive { get; }
	public override LeaderboardRewardGroup[] Rewards { get; }
	public override LeaderboardSaveData Data { get; }

	// Methods

	// RVA: 0x10B6590 Offset: 0x10B6590 VA: 0x10B6590 Slot: 16
	public override bool get_IsActive() { }

	// RVA: 0x10B65F0 Offset: 0x10B65F0 VA: 0x10B65F0 Slot: 17
	public override LeaderboardRewardGroup[] get_Rewards() { }

	// RVA: 0x10B660C Offset: 0x10B660C VA: 0x10B660C Slot: 18
	public override LeaderboardSaveData get_Data() { }

	// RVA: 0x10B6630 Offset: 0x10B6630 VA: 0x10B6630 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10B6798 Offset: 0x10B6798 VA: 0x10B6798 Slot: 19
	protected override DateTime GetCycleStartTime(DateTime currentTime) { }

	// RVA: 0x10B6828 Offset: 0x10B6828 VA: 0x10B6828 Slot: 20
	protected override DateTime GetCycleEndTime(DateTime startTime) { }

	// RVA: 0x10B690C Offset: 0x10B690C VA: 0x10B690C Slot: 22
	protected override void CalculateBotScore(BotData bot, float elapsedDays) { }

	// RVA: 0x10B6D5C Offset: 0x10B6D5C VA: 0x10B6D5C Slot: 23
	protected override int GetPlayerScoreToMigrate() { }

	// RVA: 0x10B6DF0 Offset: 0x10B6DF0 VA: 0x10B6DF0 Slot: 24
	public override Sprite GetScoreIcon(CycleData cycle) { }

	// RVA: 0x10B6DF8 Offset: 0x10B6DF8 VA: 0x10B6DF8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10B6BF0 Offset: 0x10B6BF0 VA: 0x10B6BF0
	internal static int <CalculateBotScore>g__GetScoreInDay|13_1(float dayElapsedAmount, ref LateGameLeaderboardManager.<>c__DisplayClass13_0 ) { }
}

// Namespace: Rotatelab.Leaderboard