public class AdManager : SingletonBehaviour<AdManager> // TypeDefIndex: 3658
{
	// Fields
	[CompilerGenerated]
	private bool <IsInitialized>k__BackingField; // 0x10
	[CompilerGenerated]
	private float <InitializedTime>k__BackingField; // 0x14
	[CompilerGenerated]
	private bool <IsNeftaInitialized>k__BackingField; // 0x18
	private Nullable<AdManager.NeftaSession> neftaSession; // 0x1C
	private Action<AdManager.NeftaSession> m_onNeftaSessionResolved; // 0x38
	[CompilerGenerated]
	private AdManager.NeftaMode <CurrentNeftaMode>k__BackingField; // 0x3C
	private const float NeftaGroupTimeoutSeconds = 20;
	private const float NeftaReadyTimeoutSeconds = 10;
	private const float NeftaWaitMaxFrameSeconds = 0.1;
	private int resumeCount; // 0x40
	[CompilerGenerated]
	private BannerAdFormat <BannerAd>k__BackingField; // 0x44
	[CompilerGenerated]
	private InterstitialAdFormat <InterstitialAd>k__BackingField; // 0x48
	[CompilerGenerated]
	private RewardedAdFormat <RewardedAd>k__BackingField; // 0x4C
	[CompilerGenerated]
	private int <CurrentLevel>k__BackingField; // 0x50

	// Properties
	public bool IsEnabled { get; }
	public bool IsInitialized { get; set; }
	public float InitializedTime { get; set; }
	internal bool IsNeftaInitialized { get; set; }
	public AdManager.NeftaMode CurrentNeftaMode { get; set; }
	public string CurrentNeftaModeName { get; }
	public BannerAdFormat BannerAd { get; set; }
	public InterstitialAdFormat InterstitialAd { get; set; }
	public RewardedAdFormat RewardedAd { get; set; }
	internal int CurrentLevel { get; set; }

	// Methods

	// RVA: 0x10F5748 Offset: 0x10F5748 VA: 0x10F5748
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10F57A8 Offset: 0x10F57A8 VA: 0x10F57A8
	public bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x10F57B0 Offset: 0x10F57B0 VA: 0x10F57B0
	private void set_IsInitialized(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10F57B8 Offset: 0x10F57B8 VA: 0x10F57B8
	public float get_InitializedTime() { }

	[CompilerGenerated]
	// RVA: 0x10F57C0 Offset: 0x10F57C0 VA: 0x10F57C0
	private void set_InitializedTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x10F57C8 Offset: 0x10F57C8 VA: 0x10F57C8
	internal bool get_IsNeftaInitialized() { }

	[CompilerGenerated]
	// RVA: 0x10F57D0 Offset: 0x10F57D0 VA: 0x10F57D0
	private void set_IsNeftaInitialized(bool value) { }

	// RVA: 0x10F57D8 Offset: 0x10F57D8 VA: 0x10F57D8
	public void add_OnNeftaSessionResolved(Action<AdManager.NeftaSession> value) { }

	// RVA: 0x10F5938 Offset: 0x10F5938 VA: 0x10F5938
	public void remove_OnNeftaSessionResolved(Action<AdManager.NeftaSession> value) { }

	[CompilerGenerated]
	// RVA: 0x10F5A0C Offset: 0x10F5A0C VA: 0x10F5A0C
	public AdManager.NeftaMode get_CurrentNeftaMode() { }

	[CompilerGenerated]
	// RVA: 0x10F5A14 Offset: 0x10F5A14 VA: 0x10F5A14
	private void set_CurrentNeftaMode(AdManager.NeftaMode value) { }

	// RVA: 0x10F5A1C Offset: 0x10F5A1C VA: 0x10F5A1C
	public string get_CurrentNeftaModeName() { }

	[CompilerGenerated]
	// RVA: 0x10F5AAC Offset: 0x10F5AAC VA: 0x10F5AAC
	public BannerAdFormat get_BannerAd() { }

	[CompilerGenerated]
	// RVA: 0x10F5AB4 Offset: 0x10F5AB4 VA: 0x10F5AB4
	private void set_BannerAd(BannerAdFormat value) { }

	[CompilerGenerated]
	// RVA: 0x10F5ABC Offset: 0x10F5ABC VA: 0x10F5ABC
	public InterstitialAdFormat get_InterstitialAd() { }

	[CompilerGenerated]
	// RVA: 0x10F5AC4 Offset: 0x10F5AC4 VA: 0x10F5AC4
	private void set_InterstitialAd(InterstitialAdFormat value) { }

	[CompilerGenerated]
	// RVA: 0x10F5ACC Offset: 0x10F5ACC VA: 0x10F5ACC
	public RewardedAdFormat get_RewardedAd() { }

	[CompilerGenerated]
	// RVA: 0x10F5AD4 Offset: 0x10F5AD4 VA: 0x10F5AD4
	private void set_RewardedAd(RewardedAdFormat value) { }

	[CompilerGenerated]
	// RVA: 0x10F5ADC Offset: 0x10F5ADC VA: 0x10F5ADC
	internal int get_CurrentLevel() { }

	[CompilerGenerated]
	// RVA: 0x10F5AE4 Offset: 0x10F5AE4 VA: 0x10F5AE4
	private void set_CurrentLevel(int value) { }

	// RVA: 0x10F5AEC Offset: 0x10F5AEC VA: 0x10F5AEC
	protected void Start() { }

	// RVA: 0x10F5C18 Offset: 0x10F5C18 VA: 0x10F5C18
	public IEnumerator InitializeCoroutine() { }

	// RVA: 0x10F5CAC Offset: 0x10F5CAC VA: 0x10F5CAC
	private IEnumerator InitializeNeftaCoroutine(AdConfig.PlatformSpecificData platformData) { }

	// RVA: 0x10F5D94 Offset: 0x10F5D94 VA: 0x10F5D94
	private IEnumerator WaitForegroundCoroutine(Func<bool> isDone, float timeoutSeconds, bool restartOnResume) { }

	// RVA: 0x10F5E54 Offset: 0x10F5E54 VA: 0x10F5E54
	private void ResolveNeftaSession(AdManager.NeftaSession session) { }

	// RVA: 0x10F62A0 Offset: 0x10F62A0 VA: 0x10F62A0
	private static void ForwardImpressionToNefta(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F63E8 Offset: 0x10F63E8 VA: 0x10F63E8
	public IEnumerator WaitForInitializationCoroutine() { }

	// RVA: 0x10F647C Offset: 0x10F647C VA: 0x10F647C
	private void OnApplicationPause(bool pauseStatus) { }

	// RVA: 0x10F6520 Offset: 0x10F6520 VA: 0x10F6520
	private void OnSatoriFlagsRefreshed() { }

	// RVA: 0x10F65DC Offset: 0x10F65DC VA: 0x10F65DC
	public void LevelStarted(int level) { }

	// RVA: 0x10F65E4 Offset: 0x10F65E4 VA: 0x10F65E4
	public void LevelCompleted() { }

	// RVA: 0x10F65F4 Offset: 0x10F65F4 VA: 0x10F65F4
	public void LevelFailed() { }

	// RVA: 0x10F6604 Offset: 0x10F6604 VA: 0x10F6604
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10F6660 Offset: 0x10F6660 VA: 0x10F6660
	private void <InitializeCoroutine>b__48_0(string _, MaxSdkBase.AdInfo _) { }

	[CompilerGenerated]
	// RVA: 0x10F6678 Offset: 0x10F6678 VA: 0x10F6678
	private void <InitializeCoroutine>b__48_1() { }
}

// Namespace: Rotatelab.Ads