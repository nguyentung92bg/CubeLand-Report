public abstract class AdFormat // TypeDefIndex: 3613
{
	// Fields
	[CompilerGenerated]
	private Action<string, MaxSdkBase.AdInfo> AdLoadedEvent; // 0x8
	[CompilerGenerated]
	private Action<MaxSdkBase.ErrorInfo> AdLoadFailedEvent; // 0xC
	[CompilerGenerated]
	private Action<string, MaxSdkBase.AdInfo> AdClickedEvent; // 0x10
	protected readonly string adUnitId; // 0x14
	private MaxSdkBase.AdInfo lastLoadedAdInfo; // 0x18
	private MaxSdkBase.AdInfo m_shownAdInfo; // 0x1C
	[CompilerGenerated]
	private int <LoadFailuresSinceLastLoad>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <LastLoadErrorCode>k__BackingField; // 0x24
	private const float LoadNowMinInterval = 5;
	private Coroutine retryCoroutine; // 0x28
	private float lastLoadNowTime; // 0x2C

	// Properties
	public virtual MaxSdkBase.AdInfo LoadedAdInfo { get; }
	protected MaxSdkBase.AdInfo ShownAdInfo { get; set; }
	public int LoadFailuresSinceLastLoad { get; set; }
	public int LastLoadErrorCode { get; set; }
	protected virtual Nullable<NeftaAdapterEvents.AdType> NeftaAdType { get; }
	private bool IsReportedToNefta { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EDAB8 Offset: 0x10EDAB8 VA: 0x10EDAB8
	public void add_AdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EDB68 Offset: 0x10EDB68 VA: 0x10EDB68
	public void remove_AdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EDC18 Offset: 0x10EDC18 VA: 0x10EDC18
	public void add_AdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EDCC8 Offset: 0x10EDCC8 VA: 0x10EDCC8
	public void remove_AdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0x10EDD78 Offset: 0x10EDD78 VA: 0x10EDD78 Slot: 4
	public virtual MaxSdkBase.AdInfo get_LoadedAdInfo() { }

	// RVA: 0x10EDD80 Offset: 0x10EDD80 VA: 0x10EDD80
	protected MaxSdkBase.AdInfo get_ShownAdInfo() { }

	// RVA: 0x10EDD88 Offset: 0x10EDD88 VA: 0x10EDD88
	protected void set_ShownAdInfo(MaxSdkBase.AdInfo value) { }

	[CompilerGenerated]
	// RVA: 0x10EDD9C Offset: 0x10EDD9C VA: 0x10EDD9C
	public int get_LoadFailuresSinceLastLoad() { }

	[CompilerGenerated]
	// RVA: 0x10EDDA4 Offset: 0x10EDDA4 VA: 0x10EDDA4
	private void set_LoadFailuresSinceLastLoad(int value) { }

	[CompilerGenerated]
	// RVA: 0x10EDDAC Offset: 0x10EDDAC VA: 0x10EDDAC
	public int get_LastLoadErrorCode() { }

	[CompilerGenerated]
	// RVA: 0x10EDDB4 Offset: 0x10EDDB4 VA: 0x10EDDB4
	private void set_LastLoadErrorCode(int value) { }

	// RVA: 0x10EDDBC Offset: 0x10EDDBC VA: 0x10EDDBC Slot: 5
	protected virtual Nullable<NeftaAdapterEvents.AdType> get_NeftaAdType() { }

	// RVA: 0x10EDDCC Offset: 0x10EDDCC VA: 0x10EDDCC
	private bool get_IsReportedToNefta() { }

	// RVA: 0x10EDE7C Offset: 0x10EDE7C VA: 0x10EDE7C
	protected void .ctor(string adUnitId) { }

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract void LoadAd();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Show();

	// RVA: 0x10EDEB4 Offset: 0x10EDEB4 VA: 0x10EDEB4 Slot: 8
	internal virtual void OnApplicationPause(bool isPaused) { }

	// RVA: 0x10EDEB8 Offset: 0x10EDEB8 VA: 0x10EDEB8
	protected void ReportNeftaRequest() { }

	// RVA: 0x10EDFA0 Offset: 0x10EDFA0 VA: 0x10EDFA0 Slot: 9
	protected virtual void OnAdLoaded(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10EE09C Offset: 0x10EE09C VA: 0x10EE09C Slot: 10
	protected virtual bool UpdateLoadedAdState(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10EE080 Offset: 0x10EE080 VA: 0x10EE080
	protected void NotifyAdLoaded(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10EE0A4 Offset: 0x10EE0A4 VA: 0x10EE0A4
	protected void OnExpiredAdReloaded(string adUnitId, MaxSdkBase.AdInfo newAdInfo) { }

	// RVA: 0x10EE0E0 Offset: 0x10EE0E0 VA: 0x10EE0E0 Slot: 11
	protected virtual void UpdateReloadedAdState(string adUnitId, MaxSdkBase.AdInfo newAdInfo) { }

	// RVA: 0x10EE0E4 Offset: 0x10EE0E4 VA: 0x10EE0E4 Slot: 12
	protected virtual void OnAdLoadFailed(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0x10EE1C4 Offset: 0x10EE1C4 VA: 0x10EE1C4 Slot: 13
	protected virtual void ScheduleLoadRetry(string adUnitId) { }

	// RVA: 0x10EE2F0 Offset: 0x10EE2F0 VA: 0x10EE2F0
	internal void LoadNowIfRetryPending() { }

	// RVA: 0x10EE3D0 Offset: 0x10EE3D0 VA: 0x10EE3D0 Slot: 14
	protected virtual void OnAdClicked(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	[CompilerGenerated]
	// RVA: 0x10EE268 Offset: 0x10EE268 VA: 0x10EE268
	private IEnumerator <ScheduleLoadRetry>g__RetryCoroutine|43_0(float delay) { }
}

// Namespace: 
[CompilerGenerated]