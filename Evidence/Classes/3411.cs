public interface ILeaderboardManager // TypeDefIndex: 3411
{
	// Properties
	public abstract LeaderboardRewardGroup[] Rewards { get; }
	public abstract LeaderboardSaveData Data { get; }
	public abstract string RemainingTimeText { get; }
	public abstract BaseLeaderboardPanelController Leaderboard { get; }
	public abstract LeaderboardTutorialController Tutorial { get; }
	public abstract LeaderboardInfoController Info { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract LeaderboardRewardGroup[] get_Rewards();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract LeaderboardSaveData get_Data();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_RemainingTimeText();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract BaseLeaderboardPanelController get_Leaderboard();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract LeaderboardTutorialController get_Tutorial();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract LeaderboardInfoController get_Info();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void OnResultsPanelHidden();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool HasRewardAtRank(int rank);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Sprite GetScoreIcon(CycleData cycle);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void ShowLeaderboard();
}

// Namespace: 
[Serializable]