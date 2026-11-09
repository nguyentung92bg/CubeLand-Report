public class BannerAdFormat : AdFormat // TypeDefIndex: 3620
{
	// Fields
	[CompilerGenerated]
	private Action AdDisplayedEvent; // 0x30
	[CompilerGenerated]
	private Action AdHiddenEvent; // 0x34
	[CompilerGenerated]
	private Action AdCollapsedEvent; // 0x38
	[CompilerGenerated]
	private Action AdExpandedEvent; // 0x3C
	[CompilerGenerated]
	private bool <IsVisible>k__BackingField; // 0x40

	// Properties
	public bool IsVisible { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EE5E0 Offset: 0x10EE5E0 VA: 0x10EE5E0
	public void add_AdDisplayedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EE680 Offset: 0x10EE680 VA: 0x10EE680
	public void remove_AdDisplayedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EE720 Offset: 0x10EE720 VA: 0x10EE720
	public void add_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EE7C0 Offset: 0x10EE7C0 VA: 0x10EE7C0
	public void remove_AdHiddenEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x10EE860 Offset: 0x10EE860 VA: 0x10EE860
	public bool get_IsVisible() { }

	[CompilerGenerated]
	// RVA: 0x10EE868 Offset: 0x10EE868 VA: 0x10EE868
	private void set_IsVisible(bool value) { }

	// RVA: 0x10EE870 Offset: 0x10EE870 VA: 0x10EE870
	internal void .ctor(string adUnitId) { }

	// RVA: 0x10EEBE8 Offset: 0x10EEBE8 VA: 0x10EEBE8
	private IEnumerator RefreshBannerRegularlyCoroutine(float interval) { }

	// RVA: 0x10EEC8C Offset: 0x10EEC8C VA: 0x10EEC8C Slot: 6
	internal override void LoadAd() { }

	// RVA: 0x10EED10 Offset: 0x10EED10 VA: 0x10EED10 Slot: 7
	public override void Show() { }

	// RVA: 0x10EEDB0 Offset: 0x10EEDB0 VA: 0x10EEDB0
	public void Hide() { }

	// RVA: 0x10EEE50 Offset: 0x10EEE50 VA: 0x10EEE50
	private void OnAdCollapsed(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10EEE90 Offset: 0x10EEE90 VA: 0x10EEE90
	private void OnAdExpanded(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	[CompilerGenerated]
	// RVA: 0x10EEED0 Offset: 0x10EEED0 VA: 0x10EEED0
	private void <.ctor>b__16_0(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10EF170 Offset: 0x10EF170 VA: 0x10EF170
	private void <.ctor>b__16_1(string id, MaxSdkBase.ErrorInfo error) { }

	[CompilerGenerated]
	// RVA: 0x10EF2A8 Offset: 0x10EF2A8 VA: 0x10EF2A8
	private void <.ctor>b__16_2(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10EF3E0 Offset: 0x10EF3E0 VA: 0x10EF3E0
	private void <.ctor>b__16_3(string id, MaxSdkBase.AdInfo info) { }

	[CompilerGenerated]
	// RVA: 0x10EF518 Offset: 0x10EF518 VA: 0x10EF518
	private void <.ctor>b__16_4(string id, MaxSdkBase.AdInfo info) { }
}

// Namespace: 
[CompilerGenerated]