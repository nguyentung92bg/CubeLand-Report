public class HiroController : SingletonBehaviour<HiroController> // TypeDefIndex: 3887
{
	// Fields
	[CompilerGenerated]
	private bool <IsInitialized>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <UserID>k__BackingField; // 0x14
	[CompilerGenerated]
	private string <DeviceID>k__BackingField; // 0x18
	[CompilerGenerated]
	private Systems <Systems>k__BackingField; // 0x1C
	[CompilerGenerated]
	private NakamaSystem <Nakama>k__BackingField; // 0x20
	[CompilerGenerated]
	private SatoriSystem <Satori>k__BackingField; // 0x24
	[CompilerGenerated]
	private RewardMailboxSystem <RewardMailbox>k__BackingField; // 0x28
	[CompilerGenerated]
	private NetworkMonitor <Monitor>k__BackingField; // 0x2C
	[CompilerGenerated]
	private HiroLogger <Logger>k__BackingField; // 0x30
	private readonly SavedString nakamaAuthToken; // 0x34
	private readonly SavedString nakamaRefreshToken; // 0x38
	private readonly SavedString satoriAuthToken; // 0x3C
	private readonly SavedString satoriRefreshToken; // 0x40
	public readonly SavedBool IsUserEnrolledInAnyExperiment; // 0x44
	private static readonly SavedString lastUserID; // 0x0
	private const string UserIDWipeDataIndicator = "WIPE_DATA";
	private const string Level200AchievedProperty = "level200Achieved";
	private const int Level200AchievedLevel = 200;
	[SerializeField]
	private VersionDataSo versionData; // 0x48
	[SerializeField]
	private HiroController.ServerData nakamaDevData; // 0x4C
	[SerializeField]
	private HiroController.ServerData nakamaProdData; // 0x50
	[SerializeField]
	private HiroController.ServerData satoriDevData; // 0x54
	[SerializeField]
	private HiroController.ServerData satoriProdData; // 0x58
	[SerializeField]
	private HiroRewardDialog rewardDialog; // 0x5C
	[SerializeField]
	private Sprite noConnectionIcon; // 0x60
	[SerializeField]
	[HideInInspector]
	private bool useProdEnvironment; // 0x64
	private bool isFirstSession; // 0x65
	private StopwatchEvent initializationStopwatch; // 0x68
	public const int FailedNetworkOperationRetryDelayMs = 500;
	public const int FailedNetworkOperationMaxRetryDelayMs = 60000;

	// Properties
	public bool IsInitialized { get; set; }
	public string UserID { get; set; }
	public string DeviceID { get; set; }
	public Systems Systems { get; set; }
	public NakamaSystem Nakama { get; set; }
	public SatoriSystem Satori { get; set; }
	public RewardMailboxSystem RewardMailbox { get; set; }
	public NetworkMonitor Monitor { get; set; }
	public HiroLogger Logger { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x11494E0 Offset: 0x11494E0 VA: 0x11494E0
	public bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x11494E8 Offset: 0x11494E8 VA: 0x11494E8
	private void set_IsInitialized(bool value) { }

	[CompilerGenerated]
	// RVA: 0x11494F0 Offset: 0x11494F0 VA: 0x11494F0
	public string get_UserID() { }

	[CompilerGenerated]
	// RVA: 0x11494F8 Offset: 0x11494F8 VA: 0x11494F8
	private void set_UserID(string value) { }

	[CompilerGenerated]
	// RVA: 0x1149500 Offset: 0x1149500 VA: 0x1149500
	public string get_DeviceID() { }

	[CompilerGenerated]
	// RVA: 0x1149508 Offset: 0x1149508 VA: 0x1149508
	private void set_DeviceID(string value) { }

	[CompilerGenerated]
	// RVA: 0x1149510 Offset: 0x1149510 VA: 0x1149510
	public Systems get_Systems() { }

	[CompilerGenerated]
	// RVA: 0x1149518 Offset: 0x1149518 VA: 0x1149518
	private void set_Systems(Systems value) { }

	[CompilerGenerated]
	// RVA: 0x1149520 Offset: 0x1149520 VA: 0x1149520
	public NakamaSystem get_Nakama() { }

	[CompilerGenerated]
	// RVA: 0x1149528 Offset: 0x1149528 VA: 0x1149528
	private void set_Nakama(NakamaSystem value) { }

	[CompilerGenerated]
	// RVA: 0x1149530 Offset: 0x1149530 VA: 0x1149530
	public SatoriSystem get_Satori() { }

	[CompilerGenerated]
	// RVA: 0x1149538 Offset: 0x1149538 VA: 0x1149538
	private void set_Satori(SatoriSystem value) { }

	[CompilerGenerated]
	// RVA: 0x1149540 Offset: 0x1149540 VA: 0x1149540
	public RewardMailboxSystem get_RewardMailbox() { }

	[CompilerGenerated]
	// RVA: 0x1149548 Offset: 0x1149548 VA: 0x1149548
	private void set_RewardMailbox(RewardMailboxSystem value) { }

	[CompilerGenerated]
	// RVA: 0x1149550 Offset: 0x1149550 VA: 0x1149550
	public NetworkMonitor get_Monitor() { }

	[CompilerGenerated]
	// RVA: 0x1149558 Offset: 0x1149558 VA: 0x1149558
	private void set_Monitor(NetworkMonitor value) { }

	[CompilerGenerated]
	// RVA: 0x1149560 Offset: 0x1149560 VA: 0x1149560
	public HiroLogger get_Logger() { }

	[CompilerGenerated]
	// RVA: 0x1149568 Offset: 0x1149568 VA: 0x1149568
	private void set_Logger(HiroLogger value) { }

	// RVA: 0x1149570 Offset: 0x1149570 VA: 0x1149570 Slot: 4
	protected override void Awake() { }

	// RVA: 0x114A3C0 Offset: 0x114A3C0 VA: 0x114A3C0
	protected void Start() { }

	// RVA: 0x11498BC Offset: 0x11498BC VA: 0x11498BC
	private void CreateSystems() { }

	// RVA: 0x11496CC Offset: 0x11496CC VA: 0x11496CC
	private void InitializeDeviceID() { }

	[AsyncStateMachine(typeof(HiroController.<InitializeSystemsAsync>d__62))]
	// RVA: 0x114A6CC Offset: 0x114A6CC VA: 0x114A6CC
	private UniTaskVoid InitializeSystemsAsync() { }

	[AsyncStateMachine(typeof(HiroController.<ProcessSatoriUserPropertiesAsync>d__63))]
	// RVA: 0x114A7D4 Offset: 0x114A7D4 VA: 0x114A7D4
	private UniTaskVoid ProcessSatoriUserPropertiesAsync() { }

	// RVA: 0x114A878 Offset: 0x114A878 VA: 0x114A878
	private void OnLevelNumberChangedBeforeLevel200Achieved(long levelNumber) { }

	[AsyncStateMachine(typeof(HiroController.<SendLevel200AchievedAsync>d__65))]
	// RVA: 0x114A988 Offset: 0x114A988 VA: 0x114A988
	private UniTaskVoid SendLevel200AchievedAsync() { }

	[AsyncStateMachine(typeof(HiroController.<MigrateIAPRevenueToSatoriAsync>d__66))]
	// RVA: 0x114AA2C Offset: 0x114AA2C VA: 0x114AA2C
	private UniTaskVoid MigrateIAPRevenueToSatoriAsync(double revenue) { }

	[AsyncStateMachine(typeof(HiroController.<AuthenticateNakamaAsync>d__67))]
	// RVA: 0x114AAC8 Offset: 0x114AAC8 VA: 0x114AAC8
	private UniTask<ISession> AuthenticateNakamaAsync(IClient client) { }

	// RVA: 0x114ABEC Offset: 0x114ABEC VA: 0x114ABEC
	private void OnNakamaAuthTokensRefreshed(ISession session) { }

	[AsyncStateMachine(typeof(HiroController.<SetUserIDAsync>d__69))]
	// RVA: 0x114ADF4 Offset: 0x114ADF4 VA: 0x114ADF4
	private UniTask SetUserIDAsync(string userID) { }

	// RVA: 0x114AECC Offset: 0x114AECC VA: 0x114AECC
	private UniTask<ISession> TryAuthenticateWithSilentSignInAsync(IClient client, ISession deviceIDSession) { }

	[AsyncStateMachine(typeof(HiroController.<TryAuthenticateWithGooglePlayGamesAsync>d__71))]
	// RVA: 0x114AFD0 Offset: 0x114AFD0 VA: 0x114AFD0
	private UniTask<ISession> TryAuthenticateWithGooglePlayGamesAsync(IClient client, ISession deviceIDSession) { }

	// RVA: 0x114B0FC Offset: 0x114B0FC VA: 0x114B0FC
	private UniTask<SignInStatus> AuthenticateGooglePlayGamesAsync(TimeSpan timeout) { }

	// RVA: 0x114B32C Offset: 0x114B32C VA: 0x114B32C
	private UniTask<string> RequestGooglePlayGamesAuthTokenAsync(TimeSpan timeout) { }

	[AsyncStateMachine(typeof(HiroController.<TryMigrateDeviceIDToAccountAsync>d__74))]
	// RVA: 0x114B560 Offset: 0x114B560 VA: 0x114B560
	private UniTask TryMigrateDeviceIDToAccountAsync(IClient client, ISession deviceIDSession, ISession newSession) { }

	[AsyncStateMachine(typeof(HiroController.<AuthenticateSatoriAsync>d__75))]
	// RVA: 0x114B670 Offset: 0x114B670 VA: 0x114B670
	private UniTask<ISession> AuthenticateSatoriAsync(IClient client) { }

	[AsyncStateMachine(typeof(HiroController.<AuthenticateSatoriInBackgroundAsync>d__76))]
	// RVA: 0x114B794 Offset: 0x114B794 VA: 0x114B794
	private UniTaskVoid AuthenticateSatoriInBackgroundAsync(Dictionary<string, string> defaultProperties) { }

	// RVA: 0x114B848 Offset: 0x114B848 VA: 0x114B848
	private void OnSatoriAuthTokensRefreshed(ISession session) { }

	[AsyncStateMachine(typeof(HiroController.<ProcessSatoriExperimentsAsync>d__78))]
	// RVA: 0x114B9CC Offset: 0x114B9CC VA: 0x114B9CC
	public UniTaskVoid ProcessSatoriExperimentsAsync() { }

	// RVA: 0x114BA70 Offset: 0x114BA70 VA: 0x114BA70
	private void OnAuthenticationError(Exception e, int attempt) { }

	[AsyncStateMachine(typeof(HiroController.<SaveAndSyncSystemsDelayed>d__80))]
	// RVA: 0x114BBE8 Offset: 0x114BBE8 VA: 0x114BBE8
	private UniTaskVoid SaveAndSyncSystemsDelayed() { }

	// RVA: 0x114BC84 Offset: 0x114BC84 VA: 0x114BC84
	public void SaveAndSyncSystems() { }

	// RVA: 0x114BC94 Offset: 0x114BC94 VA: 0x114BC94
	public void SaveSystems() { }

	// RVA: 0x114C050 Offset: 0x114C050 VA: 0x114C050
	public void SyncSystems() { }

	[AsyncStateMachine(typeof(HiroController.<ProcessRewardBoxAsync>d__84))]
	// RVA: 0x114C0D0 Offset: 0x114C0D0 VA: 0x114C0D0
	private UniTask ProcessRewardBoxAsync() { }

	[AsyncStateMachine(typeof(HiroController.<DeleteAccountAsync>d__85))]
	// RVA: 0x114C19C Offset: 0x114C19C VA: 0x114C19C
	public UniTaskVoid DeleteAccountAsync() { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x114C240 Offset: 0x114C240 VA: 0x114C240
	private static void WipeAllDataIfPlayerIDChanged() { }

	// RVA: 0x114C700 Offset: 0x114C700 VA: 0x114C700
	private static bool WipeAllDataOnAndroid() { }

	[AsyncStateMachine(typeof(HiroController.<ExecuteTask>d__88))]
	// RVA: 0x114CC9C Offset: 0x114CC9C VA: 0x114CC9C
	public static UniTask<bool> ExecuteTask(Func<UniTask> task, int attemptCount = 1, Action<Exception, int> onError, float retryDelayMultiplier = 2, bool skipFirstOnlineCheck = False, StopwatchEvent stopwatch) { }

	// RVA: 0x114CE04 Offset: 0x114CE04 VA: 0x114CE04
	public UniTask ShowInternetConnectionDialogAsync(string message) { }

	// RVA: 0x114CF0C Offset: 0x114CF0C VA: 0x114CF0C
	protected void OnApplicationPause(bool isPaused) { }

	// RVA: 0x114CFE4 Offset: 0x114CFE4 VA: 0x114CFE4
	protected void OnApplicationQuit() { }

	// RVA: 0x114D0AC Offset: 0x114D0AC VA: 0x114D0AC
	public void .ctor() { }

	// RVA: 0x114D2B4 Offset: 0x114D2B4 VA: 0x114D2B4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x114D36C Offset: 0x114D36C VA: 0x114D36C
	private void <Start>b__59_0() { }

	[CompilerGenerated]
	// RVA: 0x114D398 Offset: 0x114D398 VA: 0x114D398
	private void <Start>b__59_1() { }

	[CompilerGenerated]
	// RVA: 0x114D3C4 Offset: 0x114D3C4 VA: 0x114D3C4
	private void <Start>b__59_2() { }

	[CompilerGenerated]
	// RVA: 0x114D3F0 Offset: 0x114D3F0 VA: 0x114D3F0
	private void <Start>b__59_3() { }

	[CompilerGenerated]
	// RVA: 0x114D41C Offset: 0x114D41C VA: 0x114D41C
	private void <Start>b__59_4(IapObject _) { }

	[AsyncStateMachine(typeof(HiroController.<<CreateSystems>b__60_0>d))]
	[CompilerGenerated]
	// RVA: 0x114D448 Offset: 0x114D448 VA: 0x114D448
	private Task<ISession> <CreateSystems>b__60_0(IClient client) { }

	[AsyncStateMachine(typeof(HiroController.<<CreateSystems>b__60_1>d))]
	[CompilerGenerated]
	// RVA: 0x114D590 Offset: 0x114D590 VA: 0x114D590
	private Task<ISession> <CreateSystems>b__60_1(IClient client) { }

	[AsyncStateMachine(typeof(HiroController.<<InitializeSystemsAsync>b__62_0>d))]
	[CompilerGenerated]
	// RVA: 0x114D6D8 Offset: 0x114D6D8 VA: 0x114D6D8
	private UniTask <InitializeSystemsAsync>b__62_0() { }

	[AsyncStateMachine(typeof(HiroController.<<InitializeSystemsAsync>b__62_2>d))]
	[CompilerGenerated]
	// RVA: 0x114D79C Offset: 0x114D79C VA: 0x114D79C
	private UniTask <InitializeSystemsAsync>b__62_2() { }

	[CompilerGenerated]
	// RVA: 0x114D860 Offset: 0x114D860 VA: 0x114D860
	private UniTask <SendLevel200AchievedAsync>b__65_0() { }

	[CompilerGenerated]
	// RVA: 0x114D908 Offset: 0x114D908 VA: 0x114D908
	private bool <ProcessSatoriExperimentsAsync>b__78_0() { }

	[CompilerGenerated]
	// RVA: 0x114D924 Offset: 0x114D924 VA: 0x114D924
	private bool <ProcessRewardBoxAsync>b__84_0() { }

	[CompilerGenerated]
	// RVA: 0x114C3EC Offset: 0x114C3EC VA: 0x114C3EC
	internal static void <WipeAllDataIfPlayerIDChanged>g__ClearDirectory|86_0(string path) { }
}

// Namespace: Rotatelab.Networking