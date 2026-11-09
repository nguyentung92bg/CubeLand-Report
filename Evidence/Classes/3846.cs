public class CloudSaveData // TypeDefIndex: 3846
{
	// Fields
	public const long MaxVersion = 4;
	public long Version; // 0x8
	public long Timestamp; // 0x10
	[JsonProperty("Level")]
	public readonly ObservableLong LevelNumber; // 0x18
	[JsonProperty("Round")]
	public readonly ObservableLong RoundNumber; // 0x1C
	[JsonProperty("City")]
	public readonly ObservableLong CurrentCityIndex; // 0x20
	[JsonProperty("MetaProgress")]
	public readonly ObservableLong LatestMetaProgressLevel; // 0x24
	public readonly ObservableLong Coins; // 0x28
	[JsonProperty("NoAds")]
	public readonly ObservableBool IsNoAdsPurchased; // 0x2C
	[JsonProperty("CubePass")]
	public readonly ObservableBool IsCubePassPurchased; // 0x30
	[JsonProperty("StarterBundle")]
	public readonly ObservableBool IsStarterBundlePurchased; // 0x34
	[JsonProperty("ThanksgivingT")]
	public readonly ObservableBool IsThanksgivingTreatPurchased; // 0x38
	public int FailProofPurchaseCount; // 0x3C
	public readonly ObservableBooster Magnet; // 0x40
	public readonly ObservableBooster MagicWand; // 0x44
	public readonly ObservableBooster Bounce; // 0x48
	public readonly ObservableBooster Vacuum; // 0x4C
	public readonly ObservableBooster ExtraSlot; // 0x50
	public readonly ObservableBooster Merge; // 0x54
	public ObservableEnergy Lives; // 0x58
	[JsonProperty("LevelAttempt")]
	public long LevelAttemptCount; // 0x60
	[JsonProperty("TotalFail")]
	public long TotalLevelFailures; // 0x68
	[JsonProperty("TotalManualRot")]
	public long TotalManualRotationUseCount; // 0x70
	[JsonProperty("TotalPlayOn")]
	public long TotalPlayOnUseCount; // 0x78
	[JsonProperty("DailyDelCycle")]
	public int DailyDeliveryCycle; // 0x80
	[JsonProperty("DailyDelDay")]
	public int DailyDeliveryClaimedDayCount; // 0x84
	[JsonProperty("DailyDelDate")]
	public DateTime DailyDeliveryLastClaimDate; // 0x88
	[JsonProperty("ChainOWeek")]
	public int ChainOfferActiveWeek; // 0x90
	[JsonProperty("ChainOStep")]
	public int ChainOfferStep; // 0x94
	[JsonProperty("WinStrCycle")]
	public int WinStreakCycle; // 0x98
	[JsonProperty("WinStrPrev")]
	public int WinStreakPreviousLevel; // 0x9C
	[JsonProperty("WinStrCurr")]
	public int WinStreakCurrentLevel; // 0xA0
	[JsonProperty("WinStrClm")]
	public int WinStreakLastClaimedStage; // 0xA4
	[JsonProperty("TutorialWinStreak")]
	public bool IsWinStreakTutorialShown; // 0xA8
	[JsonProperty("MidLdrbd")]
	public LeaderboardSaveData MidGameLeaderboard; // 0xAC
	[JsonProperty("LateLdrbd")]
	public LeaderboardSaveData LateGameLeaderboard; // 0xB0
	[JsonProperty("MidLdrbdWinStrk")]
	public int MidGameLeaderboardWinStreak; // 0xB4
	[JsonProperty("TutorialProfile")]
	public bool IsProfileTutorialShown; // 0xB8
	public double AdRevenue; // 0xC0
	public double IAPRevenue; // 0xC8
	[JsonProperty("TotalRewarded")]
	public long TotalRewardedImpressions; // 0xD0
	[JsonProperty("TotalInterstitial")]
	public long TotalInterstitialImpressions; // 0xD8
	public float FirstEcpm; // 0xE0
	public string FirstEcpmSource; // 0xE4

	// Properties
	public static CloudSaveData Instance { get; }
	[JsonIgnore]
	public bool IsInRoundMode { get; set; }

	// Methods

	// RVA: 0x1140B84 Offset: 0x1140B84 VA: 0x1140B84
	public static CloudSaveData get_Instance() { }

	// RVA: 0x1140BE4 Offset: 0x1140BE4 VA: 0x1140BE4
	public bool get_IsInRoundMode() { }

	// RVA: 0x1140C08 Offset: 0x1140C08 VA: 0x1140C08
	public void set_IsInRoundMode(bool value) { }

	// RVA: 0x1140D0C Offset: 0x1140D0C VA: 0x1140D0C
	public void MigrateToNewestVersion() { }

	// RVA: 0x1140E58 Offset: 0x1140E58 VA: 0x1140E58
	private void MigrateToV2() { }

	// RVA: 0x1141094 Offset: 0x1141094 VA: 0x1141094
	private void MigrateToV3() { }

	// RVA: 0x1141188 Offset: 0x1141188 VA: 0x1141188
	private void MigrateToV4() { }

	// RVA: 0x1141350 Offset: 0x1141350 VA: 0x1141350
	public void .ctor() { }
}

// Namespace: 