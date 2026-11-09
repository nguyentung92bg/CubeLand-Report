public class MidGameLeaderboardManager : BaseLeaderboardManager<MidGameLeaderboardManager> // TypeDefIndex: 3453
{
	// Fields
	[SerializeField]
	private int[] winStreakScoreMultipliers; // 0x34
	[SerializeField]
	private MidGameLeaderboardManager.BotTier[] botTiers; // 0x38
	[SerializeField]
	private LeaderboardRewardsSo rewardsSo; // 0x3C
	[SerializeField]
	private LeaderboardRewardsSo alternateRewardsSo; // 0x40
	[SerializeField]
	private MidGameThemeSo themeSo; // 0x44
	public static GameAction OnThemeChanged; // 0x0
	public static readonly SavedInt ThemeOverride; // 0x4

	// Properties
	public override bool IsActive { get; }
	public override LeaderboardRewardGroup[] Rewards { get; }
	public override LeaderboardSaveData Data { get; }
	public MidGameTheme CurrentTheme { get; }

	// Methods

	// RVA: 0x10B6F00 Offset: 0x10B6F00 VA: 0x10B6F00 Slot: 16
	public override bool get_IsActive() { }

	// RVA: 0x10B6FE0 Offset: 0x10B6FE0 VA: 0x10B6FE0 Slot: 17
	public override LeaderboardRewardGroup[] get_Rewards() { }

	// RVA: 0x10B7080 Offset: 0x10B7080 VA: 0x10B7080 Slot: 18
	public override LeaderboardSaveData get_Data() { }

	// RVA: 0x10B70A4 Offset: 0x10B70A4 VA: 0x10B70A4 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10B72F4 Offset: 0x10B72F4 VA: 0x10B72F4
	protected void OnDestroy() { }

	// RVA: 0x10B73F4 Offset: 0x10B73F4 VA: 0x10B73F4 Slot: 19
	protected override DateTime GetCycleStartTime(DateTime currentTime) { }

	// RVA: 0x10B7478 Offset: 0x10B7478 VA: 0x10B7478 Slot: 20
	protected override DateTime GetCycleEndTime(DateTime startTime) { }

	// RVA: 0x10B7528 Offset: 0x10B7528 VA: 0x10B7528 Slot: 22
	protected override void CalculateBotScore(BotData bot, float elapsedDays) { }

	// RVA: 0x10B79A8 Offset: 0x10B79A8 VA: 0x10B79A8 Slot: 23
	protected override int GetPlayerScoreToMigrate() { }

	// RVA: 0x10B7960 Offset: 0x10B7960 VA: 0x10B7960
	public int GetWinStreakScore(int winStreak) { }

	// RVA: 0x10B7A3C Offset: 0x10B7A3C VA: 0x10B7A3C
	public bool WouldLoseStreakOnFail() { }

	// RVA: 0x10B7A88 Offset: 0x10B7A88 VA: 0x10B7A88
	public int AdvancePlayerWinStreakAndGetScore() { }

	// RVA: 0x10B7AC0 Offset: 0x10B7AC0 VA: 0x10B7AC0
	private void OnLevelFailedHandler() { }

	// RVA: 0x10B7AE8 Offset: 0x10B7AE8 VA: 0x10B7AE8 Slot: 21
	protected override void OnCurrentCycleEnded() { }

	// RVA: 0x10B7BB0 Offset: 0x10B7BB0 VA: 0x10B7BB0
	public static MidGameTheme GetTheme(CycleData cycle) { }

	// RVA: 0x10B7D6C Offset: 0x10B7D6C VA: 0x10B7D6C
	public static void CycleThemeOverride() { }

	// RVA: 0x10B7E9C Offset: 0x10B7E9C VA: 0x10B7E9C
	public Sprite GetThemeSprite(MidGameThemeSlot slot, CycleData cycle) { }

	// RVA: 0x10B81A8 Offset: 0x10B81A8 VA: 0x10B81A8
	public MidGameTheme get_CurrentTheme() { }

	// RVA: 0x10B8264 Offset: 0x10B8264 VA: 0x10B8264
	public Sprite GetThemeSprite(MidGameThemeSlot slot) { }

	// RVA: 0x10B8298 Offset: 0x10B8298 VA: 0x10B8298 Slot: 24
	public override Sprite GetScoreIcon(CycleData cycle) { }

	// RVA: 0x10B82A4 Offset: 0x10B82A4 VA: 0x10B82A4
	public void .ctor() { }

	// RVA: 0x10B82F8 Offset: 0x10B82F8 VA: 0x10B82F8
	private static void .cctor() { }
}

// Namespace: Rotatelab.Leaderboard