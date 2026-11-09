public class CustomRotateEventsController : MonoBehaviour // TypeDefIndex: 3220
{
	// Fields
	public const int TelemetryContractVersion = 8;
	private float levelDurationTimer; // 0x10
	private float sessionDurationTimer; // 0x14
	private bool isLevelTimerRunning; // 0x18
	private bool wasLevelTimerRunningBeforeInterruption; // 0x19
	private int sessionBaseCompletedLevelCount; // 0x1C
	private readonly Queue<ValueTuple<string, Dictionary<string, string>>> axonEventsAwaitingMaxInit; // 0x20
	private const float FlooredEcpmFallbackSeconds = 15;
	private MaxSdkBase.AdInfo parkedEcpmFill; // 0x24
	private string parkedEcpmRole; // 0x28
	private Coroutine parkedEcpmCoroutine; // 0x2C
	private float knownFirstEcpm; // 0x30
	public static string IsoCurrencyCode; // 0x0
	private Dictionary<string, int> _levelReportingThresholds; // 0x34
	private Dictionary<string, int> _rewardedReportingThresholds; // 0x38

	// Properties
	public static int LevelBaseManualRotationUseCount { get; set; }
	private int LastLevelStartThatReportedToAxon { get; set; }

	// Methods

	// RVA: 0xFC6564 Offset: 0xFC6564 VA: 0xFC6564
	public static int get_LevelBaseManualRotationUseCount() { }

	// RVA: 0xFC65B8 Offset: 0xFC65B8 VA: 0xFC65B8
	public static void set_LevelBaseManualRotationUseCount(int value) { }

	// RVA: 0xFC6610 Offset: 0xFC6610 VA: 0xFC6610
	private int get_LastLevelStartThatReportedToAxon() { }

	// RVA: 0xFC6664 Offset: 0xFC6664 VA: 0xFC6664
	private void set_LastLevelStartThatReportedToAxon(int value) { }

	// RVA: 0xFC66BC Offset: 0xFC66BC VA: 0xFC66BC
	private static string GetBoosterUseCountKey(bool isPreBooster, bool isLevelBase, int boosterId) { }

	// RVA: 0xFC67D4 Offset: 0xFC67D4 VA: 0xFC67D4
	public static int GetLevelBaseBoosterUseCount(bool isPreBooster, int boosterId) { }

	// RVA: 0xFC6850 Offset: 0xFC6850 VA: 0xFC6850
	public static void SetLevelBaseBoosterUseCount(bool isPreBooster, int boosterId, int value) { }

	// RVA: 0xFC68D0 Offset: 0xFC68D0 VA: 0xFC68D0
	protected void Awake() { }

	// RVA: 0xFC77D4 Offset: 0xFC77D4 VA: 0xFC77D4
	protected IEnumerator Start() { }

	// RVA: 0xFC7868 Offset: 0xFC7868 VA: 0xFC7868
	private void Update() { }

	// RVA: 0xFC78B8 Offset: 0xFC78B8 VA: 0xFC78B8
	private void StopLevelDurationTimer() { }

	// RVA: 0xFC78C4 Offset: 0xFC78C4 VA: 0xFC78C4
	private void OnPlayOnCompleteHandler() { }

	// RVA: 0xFC78D0 Offset: 0xFC78D0 VA: 0xFC78D0
	private void PauseLevelDurationTimerForInterruption() { }

	// RVA: 0xFC78E4 Offset: 0xFC78E4 VA: 0xFC78E4
	private void ResumeLevelDurationTimerAfterInterruption() { }

	// RVA: 0xFC78F0 Offset: 0xFC78F0 VA: 0xFC78F0
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0xFC88DC Offset: 0xFC88DC VA: 0xFC88DC
	private void OnPlayOnRequestedHandler(PlayOnOffer offer) { }

	// RVA: 0xFC8FB0 Offset: 0xFC8FB0 VA: 0xFC8FB0
	private void OnCoinConsumedHandler(int amount, string source) { }

	// RVA: 0xFC96E0 Offset: 0xFC96E0 VA: 0xFC96E0
	private void OnCoinOrBoosterEarnedHandler(CurrencyType type, long amount) { }

	// RVA: 0xFC9788 Offset: 0xFC9788 VA: 0xFC9788
	private void OnManualObjectRotationModeToggled(bool isManuelRotationActivated) { }

	// RVA: 0xFC9820 Offset: 0xFC9820 VA: 0xFC9820
	private void OnLevelStartedHandler() { }

	// RVA: 0xFCAA68 Offset: 0xFCAA68 VA: 0xFCAA68
	private void OnLevelFailedHandler() { }

	// RVA: 0xFCC620 Offset: 0xFCC620 VA: 0xFCC620
	private void OnLevelSucceedHandler(bool isFromRW) { }

	// RVA: 0xFCE554 Offset: 0xFCE554 VA: 0xFCE554
	private void OnLevelUpliftedHandler() { }

	// RVA: 0xFCA97C Offset: 0xFCA97C VA: 0xFCA97C
	private ValueTuple<bool, int, string> GetProgressInfo(LevelAttemptInfo attempt) { }

	// RVA: 0xFCA180 Offset: 0xFCA180 VA: 0xFCA180
	private void ResetLevelStats() { }

	// RVA: 0xFCE7D4 Offset: 0xFCE7D4 VA: 0xFCE7D4
	private void OnNoAdsPopupShownHandler() { }

	// RVA: 0xFCEA88 Offset: 0xFCEA88 VA: 0xFCEA88
	private void OnStarterPopupShownHandler() { }

	// RVA: 0xFCED3C Offset: 0xFCED3C VA: 0xFCED3C
	private void OnSeasonalOfferPopupShownHandler() { }

	// RVA: 0xFCEFF0 Offset: 0xFCEFF0 VA: 0xFCEFF0
	private void OnShopOpenedHandler() { }

	// RVA: 0xFCF770 Offset: 0xFCF770 VA: 0xFCF770
	private void OnShopClosedHandler() { }

	// RVA: 0xFCF77C Offset: 0xFCF77C VA: 0xFCF77C
	private void OnShopOfferTappedHandler(string productId, string productName) { }

	// RVA: 0xFCF9BC Offset: 0xFCF9BC VA: 0xFCF9BC
	private void OnSomethingOfferedHandler(string offerName, string result) { }

	// RVA: 0xFCFF70 Offset: 0xFCFF70 VA: 0xFCFF70
	private static void AddRewardedNotReadyParameters(List<Parameter> parameters) { }

	// RVA: 0xFD0744 Offset: 0xFD0744 VA: 0xFD0744
	private void OnTutorialStepStartedHandler(int stepIndex, string tutorialName) { }

	// RVA: 0xFD09E4 Offset: 0xFD09E4 VA: 0xFD09E4
	private void OnTutorialStepCompletedHandler(int stepIndex, string tutorialName) { }

	// RVA: 0xFD0C84 Offset: 0xFD0C84 VA: 0xFD0C84
	private void OnAdRevenuePaidBackground(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD1474 Offset: 0xFD1474 VA: 0xFD1474
	private void OnAdRevenuePaidMainThread(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD18C4 Offset: 0xFD18C4 VA: 0xFD18C4
	private void OnCustomAdClickedHandler(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD1D90 Offset: 0xFD1D90 VA: 0xFD1D90
	private void OnCustomAdFailedHandler(MaxSdkBase.AdInfo adInfo, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0xFD223C Offset: 0xFD223C VA: 0xFD223C
	private void OnCustomInterAdLoadedHandler(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD27D0 Offset: 0xFD27D0 VA: 0xFD27D0
	private void OnCustomRewardedAdLoadedHandler(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD28A4 Offset: 0xFD28A4 VA: 0xFD28A4
	private void OnInterstitialFilledHandler(MaxSdkBase.AdInfo adInfo, string role, bool isFloored) { }

	// RVA: 0xFD2A24 Offset: 0xFD2A24 VA: 0xFD2A24
	private IEnumerator WriteParkedEcpmCoroutine() { }

	// RVA: 0xFD2E58 Offset: 0xFD2E58 VA: 0xFD2E58
	private void WriteParkedEcpm() { }

	// RVA: 0xFD2DE0 Offset: 0xFD2DE0 VA: 0xFD2DE0
	private void ClearParkedEcpm() { }

	// RVA: 0xFD2EFC Offset: 0xFD2EFC VA: 0xFD2EFC
	protected void OnApplicationPause(bool pauseStatus) { }

	// RVA: 0xFD2A9C Offset: 0xFD2A9C VA: 0xFD2A9C
	private bool SetEcpmProperties(MaxSdkBase.AdInfo adInfo, string role, string source, bool isLastEcpm) { }

	// RVA: 0xFD2FD8 Offset: 0xFD2FD8 VA: 0xFD2FD8
	private float ConvertAdRevenueToECPMRevenue(double adRevenue) { }

	// RVA: 0xFD36F4 Offset: 0xFD36F4 VA: 0xFD36F4
	private void SendEcpmProperties(string lastEcpm, bool refreshFlags = False) { }

	// RVA: 0xFD3AA0 Offset: 0xFD3AA0 VA: 0xFD3AA0
	private void OnCloudSaveDataOverwrittenHandler() { }

	// RVA: 0xFD3118 Offset: 0xFD3118 VA: 0xFD3118
	private void SendEcpmSetEvent(float eCpm, string ecpmSource, string role, string revenuePrecision) { }

	[AsyncStateMachine(typeof(CustomRotateEventsController.<SendEcpmToSatoriAsync>d__68))]
	// RVA: 0xFD39F0 Offset: 0xFD39F0 VA: 0xFD39F0
	private UniTaskVoid SendEcpmToSatoriAsync(Dictionary<string, string> properties, bool refreshFlags) { }

	// RVA: 0xFD2310 Offset: 0xFD2310 VA: 0xFD2310
	private void SendSessionAdLoaded(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD3C08 Offset: 0xFD3C08 VA: 0xFD3C08
	private void OnNeftaSessionResolvedHandler(AdManager.NeftaSession session) { }

	// RVA: 0xFD40C4 Offset: 0xFD40C4 VA: 0xFD40C4
	private void OnCustomAdDisplayedHandler(string arg1, MaxSdkBase.AdInfo arg2) { }

	// RVA: 0xFD411C Offset: 0xFD411C VA: 0xFD411C
	private void OnBoosterTutorialsCompletedHandler() { }

	// RVA: 0xFD4174 Offset: 0xFD4174 VA: 0xFD4174
	private void OnLivesDepleteHandler() { }

	// RVA: 0xFD41CC Offset: 0xFD41CC VA: 0xFD41CC
	private void OnPurchaseBeginHandler() { }

	// RVA: 0xFD4224 Offset: 0xFD4224 VA: 0xFD4224
	private void OnPurchaseCompletedHandler(double localizedPrice, string isoCurrencyCode) { }

	// RVA: 0xFD43CC Offset: 0xFD43CC VA: 0xFD43CC
	private void OnRewardShowedHandler() { }

	// RVA: 0xFD4450 Offset: 0xFD4450 VA: 0xFD4450
	private void OnRewardSucceededHandler(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFD4BBC Offset: 0xFD4BBC VA: 0xFD4BBC
	private void OnSatoriFlagsRefreshedHandler() { }

	[AsyncStateMachine(typeof(CustomRotateEventsController.<SetCampaignUserPropertyAsync>d__79))]
	// RVA: 0xFD55DC Offset: 0xFD55DC VA: 0xFD55DC
	private UniTask SetCampaignUserPropertyAsync() { }

	// RVA: 0xFCA284 Offset: 0xFCA284 VA: 0xFCA284
	private void SetUserProperties() { }

	// RVA: 0xFD568C Offset: 0xFD568C VA: 0xFD568C
	private static int GetUnixTimeStamp() { }

	// RVA: 0xFCE038 Offset: 0xFCE038 VA: 0xFCE038
	private void CheckAndReport(Dictionary<string, int> reportingThreshold, long count, string eventPrefix) { }

	// RVA: 0xFD571C Offset: 0xFD571C VA: 0xFD571C
	private void ReportToAdjust(string token, long count) { }

	// RVA: 0xFC83EC Offset: 0xFC83EC VA: 0xFC83EC
	private void ReportToAxon(string eventName, Dictionary<string, object> parameters) { }

	// RVA: 0xFC8734 Offset: 0xFC8734 VA: 0xFC8734
	private void ReportVirtualResourceTransactionToAxon(long value, string resourceType) { }

	// RVA: 0xFC833C Offset: 0xFC833C VA: 0xFC833C
	private void LogMessage(string log) { }

	// RVA: 0xFD5A28 Offset: 0xFD5A28 VA: 0xFD5A28
	public void .ctor() { }

	// RVA: 0xFD67C4 Offset: 0xFD67C4 VA: 0xFD67C4
	private static void .cctor() { }
}

// Namespace: Rotatelab