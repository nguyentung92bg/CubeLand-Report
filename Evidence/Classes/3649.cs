public class RewardedAdFormat : AdFormat // TypeDefIndex: 3649
{
	// Fields
	[CompilerGenerated]
	private Action<string, MaxSdkBase.AdInfo> AdDisplayedEvent; // 0x30
	[CompilerGenerated]
	private Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> AdDisplayFailedEvent; // 0x34
	[CompilerGenerated]
	private Action AdHiddenEvent; // 0x38
	[CompilerGenerated]
	private Action<MaxSdkBase.Reward, MaxSdkBase.AdInfo> AdReceivedRewardEvent; // 0x3C
	[CompilerGenerated]
	private Action<RewardedAdFormat.CustomReward> AdReceivedCustomRewardEvent; // 0x40
	private Nullable<RewardedAdFormat.CustomReward> customReward; // 0x44
	private NeftaDualTrackLoader neftaLoader; // 0x54
	private float showTime; // 0x58
	private float showEndTime; // 0x5C

	// Properties
	protected override Nullable<NeftaAdapterEvents.AdType> NeftaAdType { get; }
	public override MaxSdkBase.AdInfo LoadedAdInfo { get; }
	public bool IsShowing { get; }
	public float SecondsSinceShow { get; }
	public float SecondsSinceShowEnd { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10F38E0 Offset: 0x10F38E0 VA: 0x10F38E0
	public void add_AdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3990 Offset: 0x10F3990 VA: 0x10F3990
	public void remove_AdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3A40 Offset: 0x10F3A40 VA: 0x10F3A40
	public void add_AdDisplayFailedEvent(Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3AF0 Offset: 0x10F3AF0 VA: 0x10F3AF0
	public void remove_AdDisplayFailedEvent(Action<MaxSdkBase.AdInfo, MaxSdkBase.ErrorInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3BA0 Offset: 0x10F3BA0 VA: 0x10F3BA0
	public void add_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10F3C40 Offset: 0x10F3C40 VA: 0x10F3C40
	public void remove_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10F3CE0 Offset: 0x10F3CE0 VA: 0x10F3CE0
	public void add_AdReceivedRewardEvent(Action<MaxSdkBase.Reward, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3D90 Offset: 0x10F3D90 VA: 0x10F3D90
	public void remove_AdReceivedRewardEvent(Action<MaxSdkBase.Reward, MaxSdkBase.AdInfo> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3E40 Offset: 0x10F3E40 VA: 0x10F3E40
	public void add_AdReceivedCustomRewardEvent(Action<RewardedAdFormat.CustomReward> value) { }

	[CompilerGenerated]
	// RVA: 0x10F3EF0 Offset: 0x10F3EF0 VA: 0x10F3EF0
	public void remove_AdReceivedCustomRewardEvent(Action<RewardedAdFormat.CustomReward> value) { }

	// RVA: 0x10F3FA0 Offset: 0x10F3FA0 VA: 0x10F3FA0 Slot: 5
	protected override Nullable<NeftaAdapterEvents.AdType> get_NeftaAdType() { }

	// RVA: 0x10F4004 Offset: 0x10F4004 VA: 0x10F4004 Slot: 4
	public override MaxSdkBase.AdInfo get_LoadedAdInfo() { }

	// RVA: 0x10F4040 Offset: 0x10F4040 VA: 0x10F4040
	public bool get_IsShowing() { }

	// RVA: 0x10F405C Offset: 0x10F405C VA: 0x10F405C
	public float get_SecondsSinceShow() { }

	// RVA: 0x10F409C Offset: 0x10F409C VA: 0x10F409C
	public float get_SecondsSinceShowEnd() { }

	// RVA: 0x10F40DC Offset: 0x10F40DC VA: 0x10F40DC
	internal void .ctor(string adUnitId) { }

	// RVA: 0x10F4410 Offset: 0x10F4410 VA: 0x10F4410 Slot: 6
	internal override void LoadAd() { }

	// RVA: 0x10F44C4 Offset: 0x10F44C4 VA: 0x10F44C4
	internal void EnableNeftaOptimization(string adUnitIdA, string adUnitIdB) { }

	// RVA: 0x10F4674 Offset: 0x10F4674 VA: 0x10F4674
	public void Show(RewardedAdFormat.CustomReward customReward) { }

	// RVA: 0x10F47B4 Offset: 0x10F47B4 VA: 0x10F47B4 Slot: 7
	public override void Show() { }

	// RVA: 0x10F4734 Offset: 0x10F4734 VA: 0x10F4734
	public bool IsAdReady() { }

	// RVA: 0x10F4880 Offset: 0x10F4880 VA: 0x10F4880 Slot: 10
	protected override bool UpdateLoadedAdState(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F4894 Offset: 0x10F4894 VA: 0x10F4894 Slot: 11
	protected override void UpdateReloadedAdState(string adUnitId, MaxSdkBase.AdInfo newAdInfo) { }

	// RVA: 0x10F48A4 Offset: 0x10F48A4 VA: 0x10F48A4 Slot: 13
	protected override void ScheduleLoadRetry(string adUnitId) { }

	// RVA: 0x10F48BC Offset: 0x10F48BC VA: 0x10F48BC
	private void OnAdDisplayFailed(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F4930 Offset: 0x10F4930 VA: 0x10F4930
	private void OnAdDisplayed(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F4984 Offset: 0x10F4984 VA: 0x10F4984
	private void OnAdHidden(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F4A00 Offset: 0x10F4A00 VA: 0x10F4A00
	private void OnAdReceivedReward(string adUnitId, MaxSdkBase.Reward reward, MaxSdkBase.AdInfo adInfo) { }

	[CompilerGenerated]
	// RVA: 0x10F4AE4 Offset: 0x10F4AE4 VA: 0x10F4AE4
	private void <.ctor>b__30_0(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F4C1C Offset: 0x10F4C1C VA: 0x10F4C1C
	private void <.ctor>b__30_1(string id, MaxSdkBase.ErrorInfo error) { }

	[CompilerGenerated]
	// RVA: 0x10F4D54 Offset: 0x10F4D54 VA: 0x10F4D54
	private void <.ctor>b__30_2(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F4E8C Offset: 0x10F4E8C VA: 0x10F4E8C
	private void <.ctor>b__30_3(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F4FC4 Offset: 0x10F4FC4 VA: 0x10F4FC4
	private void <.ctor>b__30_4(string id, MaxSdkBase.ErrorInfo error, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F5110 Offset: 0x10F5110 VA: 0x10F5110
	private void <.ctor>b__30_5(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F5248 Offset: 0x10F5248 VA: 0x10F5248
	private void <.ctor>b__30_6(string id, MaxSdkBase.Reward reward, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10F539C Offset: 0x10F539C VA: 0x10F539C
	private void <.ctor>b__30_7(string id, MaxSdkBase.AdInfo _, MaxSdkBase.AdInfo newInfo) { }
}

// Namespace: 