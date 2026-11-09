public class RotateAdLogicManager : SingletonBehaviour<RotateAdLogicManager> // TypeDefIndex: 3126
{
	// Fields
	private Action _tryShowRewardOnFinished; // 0x10
	private string _tryShowEventName; // 0x14
	public static Action OnFirstInterstitialFinished; // 0x0
	private static readonly TimeSpan AdFreezeThreshold; // 0x8
	public readonly SavedList<string> LastAdRecords; // 0x18

	// Properties
	public static ObservableBool IsNoAds { get; }
	public static bool IsFirstInterstitialShown { get; set; }
	public static bool IsRestored { get; set; }

	// Methods

	// RVA: 0xFA6FE8 Offset: 0xFA6FE8 VA: 0xFA6FE8
	public static ObservableBool get_IsNoAds() { }

	// RVA: 0xFAB150 Offset: 0xFAB150 VA: 0xFAB150
	public static bool get_IsFirstInterstitialShown() { }

	// RVA: 0xFAB1A4 Offset: 0xFAB1A4 VA: 0xFAB1A4
	public static void set_IsFirstInterstitialShown(bool value) { }

	// RVA: 0xFAB1FC Offset: 0xFAB1FC VA: 0xFAB1FC
	public static bool get_IsRestored() { }

	// RVA: 0xFAB250 Offset: 0xFAB250 VA: 0xFAB250
	public static void set_IsRestored(bool value) { }

	// RVA: 0xFAB2A8 Offset: 0xFAB2A8 VA: 0xFAB2A8
	protected IEnumerator Start() { }

	// RVA: 0xFAB33C Offset: 0xFAB33C VA: 0xFAB33C
	public bool TryShowRewarded(Action onFinished, string eventName) { }

	// RVA: 0xFAB434 Offset: 0xFAB434 VA: 0xFAB434
	private void ShowRewarded() { }

	// RVA: 0xFABA50 Offset: 0xFABA50 VA: 0xFABA50
	private void OnRewardedClosed() { }

	// RVA: 0xFABE84 Offset: 0xFABE84 VA: 0xFABE84
	private void OnRewardedAdRewardReceived(MaxSdkBase.Reward obj, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFABF8C Offset: 0xFABF8C VA: 0xFABF8C
	public void TryShowInter() { }

	// RVA: 0xFAC26C Offset: 0xFAC26C VA: 0xFAC26C
	private void ShowInter() { }

	// RVA: 0xFAC414 Offset: 0xFAC414 VA: 0xFAC414
	private void OnInterstitialClosed() { }

	// RVA: 0xFAC47C Offset: 0xFAC47C VA: 0xFAC47C
	private void SetBannerAdVisibility(bool isVisible) { }

	// RVA: 0xFAB750 Offset: 0xFAB750 VA: 0xFAB750
	private void SendAdImpressionStartEvent(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFABA68 Offset: 0xFABA68 VA: 0xFABA68
	private void SendAdImpressionEndEvent() { }

	// RVA: 0xFAD348 Offset: 0xFAD348 VA: 0xFAD348
	private void OnAdDisplayFailed(MaxSdkBase.AdInfo adInfo, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0xFAD3B8 Offset: 0xFAD3B8 VA: 0xFAD3B8
	private void ReportAdImpressionFreeze() { }

	// RVA: 0xFAD148 Offset: 0xFAD148 VA: 0xFAD148
	private static bool TryConsumePendingAdImpression(out RotateAdLogicManager.PendingAdImpression impression) { }

	// RVA: 0xFACCF8 Offset: 0xFACCF8 VA: 0xFACCF8
	private void RecordInformationAboutAd(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0xFABD4C Offset: 0xFABD4C VA: 0xFABD4C
	private void MarkLastAdRecordAsWatched() { }

	// RVA: 0xFAD744 Offset: 0xFAD744 VA: 0xFAD744
	public void .ctor() { }

	// RVA: 0xFAD818 Offset: 0xFAD818 VA: 0xFAD818
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0xFAD8C0 Offset: 0xFAD8C0 VA: 0xFAD8C0
	private void <Start>b__13_0(bool value) { }

	[CompilerGenerated]
	// RVA: 0xFAB5C8 Offset: 0xFAB5C8 VA: 0xFAB5C8
	private void <TryShowRewarded>g__AdNotReady|14_0() { }
}

// Namespace: 