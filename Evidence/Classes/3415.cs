public abstract class BaseLeaderboardManager<T> : SingletonBehaviour<T>, ILeaderboardManager // TypeDefIndex: 3415
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private BaseLeaderboardPanelController <Leaderboard>k__BackingField; // 0x0
	[CompilerGenerated]
	[SerializeField]
	private LeaderboardResultsController <ResultsPanel>k__BackingField; // 0x0
	[CompilerGenerated]
	[SerializeField]
	private LeaderboardTutorialController <Tutorial>k__BackingField; // 0x0
	[CompilerGenerated]
	[SerializeField]
	private LeaderboardInfoController <Info>k__BackingField; // 0x0
	[SerializeField]
	private Button showLeaderboardButton; // 0x0
	[SerializeField]
	private GameObject playerRankChangedNotification; // 0x0
	[SerializeField]
	private BotNameGeneratorSo botNameGenerator; // 0x0
	[SerializeField]
	private BaseLeaderboardManager.BotConfiguration<T>[] botConfiguration; // 0x0
	[SerializeField]
	private TextMeshProUGUI[] timeTexts; // 0x0

	// Properties
	public BaseLeaderboardPanelController Leaderboard { get; set; }
	public LeaderboardResultsController ResultsPanel { get; set; }
	public LeaderboardTutorialController Tutorial { get; set; }
	public LeaderboardInfoController Info { get; set; }
	public string RemainingTimeText { get; }
	public abstract bool IsActive { get; }
	public abstract LeaderboardRewardGroup[] Rewards { get; }
	public abstract LeaderboardSaveData Data { get; }
	private CycleData CurrentCycle { get; }
	private CycleData PendingFinishedCycle { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 8
	public BaseLeaderboardPanelController get_Leaderboard() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1D4 Offset: 0x1DDE1D4 VA: 0x1DDE1D4
	|-BaseLeaderboardManager<object>.get_Leaderboard
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_Leaderboard(BaseLeaderboardPanelController value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1DC Offset: 0x1DDE1DC VA: 0x1DDE1DC
	|-BaseLeaderboardManager<object>.set_Leaderboard
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 15
	public LeaderboardResultsController get_ResultsPanel() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1E4 Offset: 0x1DDE1E4 VA: 0x1DDE1E4
	|-BaseLeaderboardManager<object>.get_ResultsPanel
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_ResultsPanel(LeaderboardResultsController value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1EC Offset: 0x1DDE1EC VA: 0x1DDE1EC
	|-BaseLeaderboardManager<object>.set_ResultsPanel
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 9
	public LeaderboardTutorialController get_Tutorial() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1F4 Offset: 0x1DDE1F4 VA: 0x1DDE1F4
	|-BaseLeaderboardManager<object>.get_Tutorial
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_Tutorial(LeaderboardTutorialController value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE1FC Offset: 0x1DDE1FC VA: 0x1DDE1FC
	|-BaseLeaderboardManager<object>.set_Tutorial
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 10
	public LeaderboardInfoController get_Info() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE204 Offset: 0x1DDE204 VA: 0x1DDE204
	|-BaseLeaderboardManager<object>.get_Info
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_Info(LeaderboardInfoController value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE20C Offset: 0x1DDE20C VA: 0x1DDE20C
	|-BaseLeaderboardManager<object>.set_Info
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public string get_RemainingTimeText() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE214 Offset: 0x1DDE214 VA: 0x1DDE214
	|-BaseLeaderboardManager<object>.get_RemainingTimeText
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public abstract bool get_IsActive();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.get_IsActive
	*/

	// RVA: -1 Offset: -1 Slot: 17
	public abstract LeaderboardRewardGroup[] get_Rewards();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.get_Rewards
	*/

	// RVA: -1 Offset: -1 Slot: 18
	public abstract LeaderboardSaveData get_Data();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.get_Data
	*/

	// RVA: -1 Offset: -1
	private ref CycleData get_CurrentCycle() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE260 Offset: 0x1DDE260 VA: 0x1DDE260
	|-BaseLeaderboardManager<object>.get_CurrentCycle
	*/

	// RVA: -1 Offset: -1
	private ref CycleData get_PendingFinishedCycle() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE28C Offset: 0x1DDE28C VA: 0x1DDE28C
	|-BaseLeaderboardManager<object>.get_PendingFinishedCycle
	*/

	// RVA: -1 Offset: -1 Slot: 4
	protected override void Awake() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE2B8 Offset: 0x1DDE2B8 VA: 0x1DDE2B8
	|-BaseLeaderboardManager<object>.Awake
	*/

	// RVA: -1 Offset: -1
	protected void Start() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE3C0 Offset: 0x1DDE3C0 VA: 0x1DDE3C0
	|-BaseLeaderboardManager<object>.Start
	*/

	// RVA: -1 Offset: -1 Slot: 19
	protected abstract DateTime GetCycleStartTime(DateTime startTime);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.GetCycleStartTime
	*/

	// RVA: -1 Offset: -1 Slot: 20
	protected abstract DateTime GetCycleEndTime(DateTime startTime);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.GetCycleEndTime
	*/

	// RVA: -1 Offset: -1
	private void OnCloudSaveDataOverwritten() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE700 Offset: 0x1DDE700 VA: 0x1DDE700
	|-BaseLeaderboardManager<object>.OnCloudSaveDataOverwritten
	*/

	// RVA: -1 Offset: -1
	private void OnMainCanvasChangeHalfway(MainCanvasType type, bool isAnimationPlayed) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE79C Offset: 0x1DDE79C VA: 0x1DDE79C
	|-BaseLeaderboardManager<object>.OnMainCanvasChangeHalfway
	*/

	// RVA: -1 Offset: -1
	public void Refresh() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDE7B4 Offset: 0x1DDE7B4 VA: 0x1DDE7B4
	|-BaseLeaderboardManager<object>.Refresh
	*/

	// RVA: -1 Offset: -1 Slot: 21
	protected virtual void OnCurrentCycleEnded() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDEBD0 Offset: 0x1DDEBD0 VA: 0x1DDEBD0
	|-BaseLeaderboardManager<object>.OnCurrentCycleEnded
	*/

	// RVA: -1 Offset: -1
	public void ForceEndCurrentCycleNow() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDED50 Offset: 0x1DDED50 VA: 0x1DDED50
	|-BaseLeaderboardManager<object>.ForceEndCurrentCycleNow
	*/

	// RVA: -1 Offset: -1 Slot: 11
	private void Rotatelab.Leaderboard.ILeaderboardManager.OnResultsPanelHidden() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDEE44 Offset: 0x1DDEE44 VA: 0x1DDEE44
	|-BaseLeaderboardManager<object>.Rotatelab.Leaderboard.ILeaderboardManager.OnResultsPanelHidden
	*/

	// RVA: -1 Offset: -1
	private IEnumerator RefreshRemainingTimeRegularlyCoroutine() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDEEA0 Offset: 0x1DDEEA0 VA: 0x1DDEEA0
	|-BaseLeaderboardManager<object>.RefreshRemainingTimeRegularlyCoroutine
	*/

	// RVA: -1 Offset: -1
	protected CycleData GenerateNewData() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDEF0C Offset: 0x1DDEF0C VA: 0x1DDEF0C
	|-BaseLeaderboardManager<object>.GenerateNewData
	*/

	// RVA: -1 Offset: -1
	private void PostProcessLoadedData(CycleData data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF02C Offset: 0x1DDF02C VA: 0x1DDF02C
	|-BaseLeaderboardManager<object>.PostProcessLoadedData
	*/

	// RVA: -1 Offset: -1
	public void IncreasePlayerScore(int score) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF4B8 Offset: 0x1DDF4B8 VA: 0x1DDF4B8
	|-BaseLeaderboardManager<object>.IncreasePlayerScore
	*/

	// RVA: -1 Offset: -1
	private void CalculateBotScores(CycleData data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF544 Offset: 0x1DDF544 VA: 0x1DDF544
	|-BaseLeaderboardManager<object>.CalculateBotScores
	*/

	// RVA: -1 Offset: -1 Slot: 22
	protected abstract void CalculateBotScore(BotData bot, float elapsedDays);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.CalculateBotScore
	*/

	// RVA: -1 Offset: -1 Slot: 23
	protected abstract int GetPlayerScoreToMigrate();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.GetPlayerScoreToMigrate
	*/

	// RVA: -1 Offset: -1 Slot: 24
	public abstract Sprite GetScoreIcon(CycleData cycle);
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-BaseLeaderboardManager<object>.GetScoreIcon
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public bool HasRewardAtRank(int rank) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF7C8 Offset: 0x1DDF7C8 VA: 0x1DDF7C8
	|-BaseLeaderboardManager<object>.HasRewardAtRank
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public void ShowLeaderboard() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF870 Offset: 0x1DDF870 VA: 0x1DDF870
	|-BaseLeaderboardManager<object>.ShowLeaderboard
	*/

	// RVA: -1 Offset: -1
	private void RefreshPlayerRankChangedNotification() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF8D8 Offset: 0x1DDF8D8 VA: 0x1DDF8D8
	|-BaseLeaderboardManager<object>.RefreshPlayerRankChangedNotification
	*/

	// RVA: -1 Offset: -1
	private int GetRandomSeed() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF920 Offset: 0x1DDF920 VA: 0x1DDF920
	|-BaseLeaderboardManager<object>.GetRandomSeed
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF960 Offset: 0x1DDF960 VA: 0x1DDF960
	|-BaseLeaderboardManager<object>..ctor
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private BotData <PostProcessLoadedData>b__46_1(string name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1DDF970 Offset: 0x1DDF970 VA: 0x1DDF970
	|-BaseLeaderboardManager<object>.<PostProcessLoadedData>b__46_1
	*/
}

// Namespace: 
[CompilerGenerated]
[Serializable]