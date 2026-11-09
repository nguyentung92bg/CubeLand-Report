public class RemoteConfigManager : SingletonBehaviour<RemoteConfigManager> // TypeDefIndex: 3266
{
	// Fields
	private IDictionary<string, ConfigValue> firebaseVariables; // 0x10
	private Dictionary<string, string> satoriFlags; // 0x14
	private readonly List<SatoriObjectFlag> satoriObjectFlags; // 0x18
	public RemoteBoolSO remoteIsComplementaryBoosterTutorialActive; // 0x1C
	public RemoteBoolSO remoteIsRewardedActivationCheckByCoinAmount; // 0x20
	public RemoteIntegerSO remoteShopPopularBadgeIndex; // 0x24
	public RemoteIntegerSO remoteShopBestOfferBadgeIndex; // 0x28
	public RemoteStringSO remoteRateUsAndroid; // 0x2C
	public RemoteStringSO remoteRateUsIos; // 0x30
	public SatoriAdsConfigFlag AdsConfig; // 0x34
	public SatoriBoolFlag IsAlternateCrownTournamentRewardEnabled; // 0x38
	public SatoriBoolFlag IsIAPUser; // 0x3C
	public SatoriBoolFlag IsLevelStartMotionEnabled; // 0x40
	public SatoriBoolFlag IsLossAversionEnabled; // 0x44
	public SatoriBoolFlag IsOfflinePlayAllowed; // 0x48
	public SatoriBoolFlag IsConsecutivePlayOnEnabled; // 0x4C
	public SatoriAdBreakConfigFlag AdBreakConfig; // 0x50
	public SatoriLevelUpCoinRewardFlag LevelUpCoinReward; // 0x54
	public SatoriLevelUpDifficultyMultiplierFlag LevelUpDifficultyMultiplier; // 0x58
	public SatoriAppUpdateFlag AppUpdate; // 0x5C
	public SatoriFloatFlag FailCountdown; // 0x60
	public SatoriSeasonalOfferFlag SeasonalOffer; // 0x64
	public SatoriIntFlag LevelVersion; // 0x68
	public SatoriIntFlag CloudRushLevel; // 0x6C
	public SatoriNeftaFlag NeftaConfig; // 0x70
	public SatoriBoolFlag IsEcpmAnyTrackEnabled; // 0x74
	public SatoriOfferPopupConfigFlag OfferPopupConfig; // 0x78
	public SatoriSuperHardOfferConfigFlag SuperHardOfferConfig; // 0x7C
	public SatoriJewelFlag JewelConfig; // 0x80
	public SatoriNoAdsBundleConfigFlag NoAdsBundleConfig; // 0x84
	public SatoriFailProofOfferConfigFlag FailProofOfferConfig; // 0x88
	public SatoriMidGameLeaderboardConfigFlag MidGameLeaderboardConfig; // 0x8C
	private bool isRefreshingSatoriFlags; // 0x90
	[CompilerGenerated]
	private bool <HasFetchedSatoriFlags>k__BackingField; // 0x91
	private readonly HashSet<int> refreshedFlagLevels; // 0x94
	[CompilerGenerated]
	private Action OnSatoriFlagsRefreshed; // 0x98
	[CompilerGenerated]
	private RemoteConfigManager.State <InitializationState>k__BackingField; // 0x9C

	// Properties
	public bool HasFetchedSatoriFlags { get; set; }
	public RemoteConfigManager.State InitializationState { get; set; }
	public bool IsInitialized { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1073B40 Offset: 0x1073B40 VA: 0x1073B40
	public bool get_HasFetchedSatoriFlags() { }

	[CompilerGenerated]
	// RVA: 0x1073B48 Offset: 0x1073B48 VA: 0x1073B48
	private void set_HasFetchedSatoriFlags(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1073B50 Offset: 0x1073B50 VA: 0x1073B50
	public void add_OnSatoriFlagsRefreshed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x1073BF0 Offset: 0x1073BF0 VA: 0x1073BF0
	public void remove_OnSatoriFlagsRefreshed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x1073C90 Offset: 0x1073C90 VA: 0x1073C90
	public RemoteConfigManager.State get_InitializationState() { }

	[CompilerGenerated]
	// RVA: 0x1073C98 Offset: 0x1073C98 VA: 0x1073C98
	private void set_InitializationState(RemoteConfigManager.State value) { }

	// RVA: 0x1073CA0 Offset: 0x1073CA0 VA: 0x1073CA0
	public bool get_IsInitialized() { }

	// RVA: 0x1073CB4 Offset: 0x1073CB4 VA: 0x1073CB4 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10740F8 Offset: 0x10740F8 VA: 0x10740F8
	protected void Start() { }

	[AsyncStateMachine(typeof(RemoteConfigManager.<InitializeAsync>d__50))]
	// RVA: 0x1074448 Offset: 0x1074448 VA: 0x1074448
	public UniTask<bool> InitializeAsync() { }

	[AsyncStateMachine(typeof(RemoteConfigManager.<ActivateRemoteConfigAsync>d__51))]
	// RVA: 0x10746D8 Offset: 0x10746D8 VA: 0x10746D8
	private UniTask<bool> ActivateRemoteConfigAsync(StopwatchEvent initializationStopwatch) { }

	[AsyncStateMachine(typeof(RemoteConfigManager.<RefreshSatoriFlagsAsync>d__52))]
	// RVA: 0x10747F4 Offset: 0x10747F4 VA: 0x10747F4
	public UniTask RefreshSatoriFlagsAsync() { }

	// RVA: 0x1074554 Offset: 0x1074554 VA: 0x1074554
	private void OnSatoriFlagsRefreshedSuccessfully() { }

	// RVA: 0x10748BC Offset: 0x10748BC VA: 0x10748BC
	private void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10748E4 Offset: 0x10748E4 VA: 0x10748E4
	private void OnLevelLoaded(SoLevelData obj) { }

	// RVA: 0x10749FC Offset: 0x10749FC VA: 0x10749FC
	private void TryRefreshSatoriFlagsOnLevelThreshold() { }

	// RVA: 0x10748FC Offset: 0x10748FC VA: 0x10748FC
	private void ApplyInterstitialCooldown() { }

	// RVA: 0x1074AD8 Offset: 0x1074AD8 VA: 0x1074AD8
	public string GetString(string key, string defaultValue) { }

	// RVA: 0x1074C04 Offset: 0x1074C04 VA: 0x1074C04
	public int GetInt(string key, int defaultValue = 0) { }

	// RVA: 0x1074C48 Offset: 0x1074C48 VA: 0x1074C48
	public long GetLong(string key, long defaultValue = 0) { }

	// RVA: 0x1074C9C Offset: 0x1074C9C VA: 0x1074C9C
	public float GetFloat(string key, float defaultValue = 0) { }

	// RVA: 0x1074D6C Offset: 0x1074D6C VA: 0x1074D6C
	public double GetDouble(string key, double defaultValue = 0) { }

	// RVA: 0x1074E44 Offset: 0x1074E44 VA: 0x1074E44
	public bool GetBool(string key, bool defaultValue = False) { }

	// RVA: 0x1074EB8 Offset: 0x1074EB8 VA: 0x1074EB8
	public bool HasSatoriFlag(string key) { }

	// RVA: -1 Offset: -1
	public T GetSatoriFlag<T>(string key, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1595754 Offset: 0x1595754 VA: 0x1595754
	|-RemoteConfigManager.GetSatoriFlag<bool>
	|
	|-RVA: 0x15958C4 Offset: 0x15958C4 VA: 0x15958C4
	|-RemoteConfigManager.GetSatoriFlag<int>
	|
	|-RVA: 0x1595A34 Offset: 0x1595A34 VA: 0x1595A34
	|-RemoteConfigManager.GetSatoriFlag<object>
	|
	|-RVA: 0x1595BA4 Offset: 0x1595BA4 VA: 0x1595BA4
	|-RemoteConfigManager.GetSatoriFlag<float>
	|
	|-RVA: 0x1595D14 Offset: 0x1595D14 VA: 0x1595D14
	|-RemoteConfigManager.GetSatoriFlag<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1074444 Offset: 0x1074444 VA: 0x1074444
	private void RequestATTConsentPopup() { }

	// RVA: 0x1074F24 Offset: 0x1074F24 VA: 0x1074F24
	public void .ctor() { }
}

// Namespace: 