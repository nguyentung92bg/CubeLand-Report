public class CloudRushController : SingletonBehaviour<CloudRushController> // TypeDefIndex: 3570
{
	// Fields
	[SerializeField]
	private CloudRushManager cloudRushManager; // 0x10
	[SerializeField]
	private List<TMP_Text> timeTexts; // 0x14
	private bool _isCheckingAvailable; // 0x18
	private Coroutine _refreshRoutine; // 0x1C
	private bool _isFlowOpen; // 0x20
	private static readonly int[] CycleStartDayOffsets; // 0x0
	public const int TotalPlayerCount = 100;
	public const int TotalLevelCount = 7;
	public const long TotalPrize = 10000;
	private const double FailedResetDelayMinutes = 30;
	private const double InProgressDurationHours = 24;
	public readonly SavedDateTime CloudRushLastVisitDate; // 0x24
	public readonly SavedDateTime CloudRushFailDate; // 0x28
	public readonly SavedDateTime CloudRushStartDate; // 0x2C
	private static readonly SavedFloat CreativeTimeOffsetSeconds; // 0x4
	[CompilerGenerated]
	private bool <IsJustCompleted>k__BackingField; // 0x30

	// Properties
	private static DateTime Now { get; }
	public bool IsJustCompleted { get; set; }
	public static bool IsForcedCloudRushShown { get; set; }
	public int CloudRushCurrentLevel { get; set; }
	public int CloudRushCurrentPlayerCount { get; set; }
	public int CloudRushCurrentVisiblePlayerCount { get; set; }
	public int CloudRushRewardAmount { get; set; }
	public bool CloudRushIsEntryRewardReady { get; set; }
	public bool ShowCloudRushProgressOnSessionStarted { get; set; }
	public CloudRushController.CloudRushState CloudRushCurrentState { get; set; }

	// Methods

	// RVA: 0x10DBBB0 Offset: 0x10DBBB0 VA: 0x10DBBB0
	private static DateTime get_Now() { }

	[CompilerGenerated]
	// RVA: 0x10DBCC8 Offset: 0x10DBCC8 VA: 0x10DBCC8
	public bool get_IsJustCompleted() { }

	[CompilerGenerated]
	// RVA: 0x10DBCD0 Offset: 0x10DBCD0 VA: 0x10DBCD0
	public void set_IsJustCompleted(bool value) { }

	// RVA: 0x10DBCD8 Offset: 0x10DBCD8 VA: 0x10DBCD8
	public static bool get_IsForcedCloudRushShown() { }

	// RVA: 0x10DBD2C Offset: 0x10DBD2C VA: 0x10DBD2C
	public static void set_IsForcedCloudRushShown(bool value) { }

	// RVA: 0x10DBD84 Offset: 0x10DBD84 VA: 0x10DBD84
	public int get_CloudRushCurrentLevel() { }

	// RVA: 0x10DBDD8 Offset: 0x10DBDD8 VA: 0x10DBDD8
	public void set_CloudRushCurrentLevel(int value) { }

	// RVA: 0x10DBE30 Offset: 0x10DBE30 VA: 0x10DBE30
	public int get_CloudRushCurrentPlayerCount() { }

	// RVA: 0x10DBE84 Offset: 0x10DBE84 VA: 0x10DBE84
	public void set_CloudRushCurrentPlayerCount(int value) { }

	// RVA: 0x10DBEDC Offset: 0x10DBEDC VA: 0x10DBEDC
	public int get_CloudRushCurrentVisiblePlayerCount() { }

	// RVA: 0x10DBF30 Offset: 0x10DBF30 VA: 0x10DBF30
	public void set_CloudRushCurrentVisiblePlayerCount(int value) { }

	// RVA: 0x10DBF88 Offset: 0x10DBF88 VA: 0x10DBF88
	public int get_CloudRushRewardAmount() { }

	// RVA: 0x10DBFDC Offset: 0x10DBFDC VA: 0x10DBFDC
	public void set_CloudRushRewardAmount(int value) { }

	// RVA: 0x10DC034 Offset: 0x10DC034 VA: 0x10DC034
	public bool get_CloudRushIsEntryRewardReady() { }

	// RVA: 0x10DC088 Offset: 0x10DC088 VA: 0x10DC088
	public void set_CloudRushIsEntryRewardReady(bool value) { }

	// RVA: 0x10DC0E0 Offset: 0x10DC0E0 VA: 0x10DC0E0
	public bool get_ShowCloudRushProgressOnSessionStarted() { }

	// RVA: 0x10DC134 Offset: 0x10DC134 VA: 0x10DC134
	public void set_ShowCloudRushProgressOnSessionStarted(bool value) { }

	// RVA: 0x10DC18C Offset: 0x10DC18C VA: 0x10DC18C
	public CloudRushController.CloudRushState get_CloudRushCurrentState() { }

	// RVA: 0x10DC1E0 Offset: 0x10DC1E0 VA: 0x10DC1E0
	public void set_CloudRushCurrentState(CloudRushController.CloudRushState value) { }

	// RVA: 0x10DC3CC Offset: 0x10DC3CC VA: 0x10DC3CC
	private void OnEnable() { }

	// RVA: 0x10DC4CC Offset: 0x10DC4CC VA: 0x10DC4CC
	private void OnDisable() { }

	// RVA: 0x10DC5CC Offset: 0x10DC5CC VA: 0x10DC5CC
	private void Start() { }

	// RVA: 0x10DC5D0 Offset: 0x10DC5D0 VA: 0x10DC5D0
	private void CheckAvailable() { }

	// RVA: 0x10DC704 Offset: 0x10DC704 VA: 0x10DC704
	private void OpenCloudRush() { }

	// RVA: 0x10DC840 Offset: 0x10DC840 VA: 0x10DC840
	private void CloseCloudRush() { }

	// RVA: 0x10DCC7C Offset: 0x10DCC7C VA: 0x10DCC7C
	private void RequestPopup() { }

	// RVA: 0x10DC8D8 Offset: 0x10DC8D8 VA: 0x10DC8D8
	private void CheckSystem() { }

	// RVA: 0x10DD180 Offset: 0x10DD180 VA: 0x10DD180
	private bool IsCurrentStateExpired(DateTime now) { }

	// RVA: 0x10DD364 Offset: 0x10DD364 VA: 0x10DD364
	private bool IsSystemCheckDue() { }

	// RVA: 0x10DD4B0 Offset: 0x10DD4B0 VA: 0x10DD4B0
	public void NotifyFlowOpened() { }

	// RVA: 0x10DD4BC Offset: 0x10DD4BC VA: 0x10DD4BC
	public void NotifyFlowClosed() { }

	// RVA: 0x10DCD48 Offset: 0x10DCD48 VA: 0x10DCD48
	public void ResetCloudRush() { }

	// RVA: 0x10DD58C Offset: 0x10DD58C VA: 0x10DD58C
	public void SavePendingProgression(int fromLevel, int fromPlayerCount, int toLevel, int toPlayerCount, int droppingPlayerCount) { }

	// RVA: 0x10DDA60 Offset: 0x10DDA60 VA: 0x10DDA60
	public CloudRushController.PendingProgression GetPendingProgression() { }

	// RVA: 0x10DD534 Offset: 0x10DD534 VA: 0x10DD534
	public void ClearPendingProgression() { }

	// RVA: 0x10DCED0 Offset: 0x10DCED0 VA: 0x10DCED0
	private static DateTime GetStartOfCycle(DateTime time) { }

	// RVA: 0x10DDBF4 Offset: 0x10DDBF4 VA: 0x10DDBF4
	private static DateTime GetNextCycleStart(DateTime time) { }

	// RVA: 0x10DCB44 Offset: 0x10DCB44 VA: 0x10DCB44
	private IEnumerator CheckRefreshRoutine() { }

	// RVA: 0x10DDE9C Offset: 0x10DDE9C VA: 0x10DDE9C
	private void SetTime() { }

	// RVA: 0x10DE1FC Offset: 0x10DE1FC VA: 0x10DE1FC
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	// RVA: 0x10DE208 Offset: 0x10DE208 VA: 0x10DE208
	public void SetTimeLeftForCreative(TimeSpan timeLeft) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10DE610 Offset: 0x10DE610 VA: 0x10DE610
	private void Log(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10DE678 Offset: 0x10DE678 VA: 0x10DE678
	private void LogWarning(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10DE6E0 Offset: 0x10DE6E0 VA: 0x10DE6E0
	private void LogError(string log) { }

	// RVA: 0x10DE748 Offset: 0x10DE748 VA: 0x10DE748
	public void .ctor() { }

	// RVA: 0x10DE8C8 Offset: 0x10DE8C8 VA: 0x10DE8C8
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x10DE9FC Offset: 0x10DE9FC VA: 0x10DE9FC
	private void <RequestPopup>b__53_0() { }
}

// Namespace: Rotatelab.CloudRush