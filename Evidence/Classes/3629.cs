public class InterstitialAdFormat : AdFormat // TypeDefIndex: 3629
{
	// Fields
	[CompilerGenerated]
	private Action<string, MaxSdkBase.AdInfo> AdDisplayedEvent; // 0x30
	[CompilerGenerated]
	private Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> AdDisplayFailedEvent; // 0x34
	[CompilerGenerated]
	private Action AdHiddenEvent; // 0x38
	[CompilerGenerated]
	private Action<MaxSdkBase.AdInfo, string, bool> AdFilledEvent; // 0x3C
	internal float cooldownInterval; // 0x40
	private float cooldownFinishTime; // 0x44
	private bool isPaused; // 0x48
	private NeftaDualTrackLoader neftaLoader; // 0x4C

	// Properties
	protected override Nullable<NeftaAdapterEvents.AdType> NeftaAdType { get; }
	public override MaxSdkBase.AdInfo LoadedAdInfo { get; }
	public bool IsShowing { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EF89C Offset: 0x10EF89C VA: 0x10EF89C
	public void add_AdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EF94C Offset: 0x10EF94C VA: 0x10EF94C
	public void remove_AdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EF9FC Offset: 0x10EF9FC VA: 0x10EF9FC
	public void add_AdDisplayFailedEvent(Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EFAAC Offset: 0x10EFAAC VA: 0x10EFAAC
	public void remove_AdDisplayFailedEvent(Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10EFB5C Offset: 0x10EFB5C VA: 0x10EFB5C
	public void add_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EFBFC Offset: 0x10EFBFC VA: 0x10EFBFC
	public void remove_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EFC9C Offset: 0x10EFC9C VA: 0x10EFC9C
	public void add_AdFilledEvent(Action<MaxSdkBase.AdInfo, string, bool> value) { }

	[CompilerGenerated]
	// RVA: 0x10EFD4C Offset: 0x10EFD4C VA: 0x10EFD4C
	public void remove_AdFilledEvent(Action<MaxSdkBase.AdInfo, string, bool> value) { }

	// RVA: 0x10EFDFC Offset: 0x10EFDFC VA: 0x10EFDFC Slot: 5
	protected override Nullable<NeftaAdapterEvents.AdType> get_NeftaAdType() { }

	// RVA: 0x10EFE60 Offset: 0x10EFE60 VA: 0x10EFE60 Slot: 4
	public override MaxSdkBase.AdInfo get_LoadedAdInfo() { }

	// RVA: 0x10EFEB4 Offset: 0x10EFEB4 VA: 0x10EFEB4
	public bool get_IsShowing() { }

	// RVA: 0x10F0008 Offset: 0x10F0008 VA: 0x10F0008
	internal void .ctor(string adUnitId) { }

	// RVA: 0x10F0414 Offset: 0x10F0414 VA: 0x10F0414
	public void OverrideCooldownInterval(float interval) { }

	// RVA: 0x10F041C Offset: 0x10F041C VA: 0x10F041C
	public void RestartCooldownTimer() { }

	// RVA: 0x10F0440 Offset: 0x10F0440 VA: 0x10F0440
	internal void Stop() { }

	// RVA: 0x10F0450 Offset: 0x10F0450 VA: 0x10F0450 Slot: 6
	internal override void LoadAd() { }

	// RVA: 0x10F07C4 Offset: 0x10F07C4 VA: 0x10F07C4
	internal void EnableNeftaOptimization(string adUnitIdA, string adUnitIdB) { }

	// RVA: 0x10F0C14 Offset: 0x10F0C14 VA: 0x10F0C14 Slot: 7
	public override void Show() { }

	// RVA: 0x10F0CD0 Offset: 0x10F0CD0 VA: 0x10F0CD0
	public bool IsAdReady() { }

	// RVA: 0x10F0D60 Offset: 0x10F0D60 VA: 0x10F0D60
	internal bool IsAdReady(bool logErrors) { }

	// RVA: 0x10F039C Offset: 0x10F039C VA: 0x10F039C
	private IEnumerator ShowAfterCooldownCoroutine() { }

	// RVA: 0x10F1198 Offset: 0x10F1198 VA: 0x10F1198
	internal void OnCurrentLevelEnded() { }

	// RVA: 0x10F121C Offset: 0x10F121C VA: 0x10F121C Slot: 8
	internal override void OnApplicationPause(bool isPaused) { }

	// RVA: 0x10F1224 Offset: 0x10F1224 VA: 0x10F1224 Slot: 9
	protected override void OnAdLoaded(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F1350 Offset: 0x10F1350 VA: 0x10F1350 Slot: 10
	protected override bool UpdateLoadedAdState(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F14C8 Offset: 0x10F14C8 VA: 0x10F14C8 Slot: 11
	protected override void UpdateReloadedAdState(string adUnitId, MaxSdkBase.AdInfo newAdInfo) { }

	// RVA: 0x10F1648 Offset: 0x10F1648 VA: 0x10F1648 Slot: 13
	protected override void ScheduleLoadRetry(string adUnitId) { }

	// RVA: 0x10F17CC Offset: 0x10F17CC VA: 0x10F17CC
	private void OnAdDisplayFailed(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F1868 Offset: 0x10F1868 VA: 0x10F1868
	private void OnAdDisplayed(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F18BC Offset: 0x10F18BC VA: 0x10F18BC
	private void OnAdHidden(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	[CompilerGenerated]
	// RVA: 0x10F1940 Offset: 0x10F1940 VA: 0x10F1940
	private void <.ctor>b__22_0(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F1A78 Offset: 0x10F1A78 VA: 0x10F1A78
	private void <.ctor>b__22_1(string id, MaxSdkBase.ErrorInfo error) { }

	[CompilerGenerated]
	// RVA: 0x10F1BB0 Offset: 0x10F1BB0 VA: 0x10F1BB0
	private void <.ctor>b__22_2(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F1CE8 Offset: 0x10F1CE8 VA: 0x10F1CE8
	private void <.ctor>b__22_3(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F1E20 Offset: 0x10F1E20 VA: 0x10F1E20
	private void <.ctor>b__22_4(string id, MaxSdkBase.ErrorInfo error, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F1F6C Offset: 0x10F1F6C VA: 0x10F1F6C
	private void <.ctor>b__22_5(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F20A4 Offset: 0x10F20A4 VA: 0x10F20A4
	private void <.ctor>b__22_6(string id, MaxSdkBase.AdInfo _, MaxSdkBase.AdInfo newInfo) { }
}

// Namespace: 