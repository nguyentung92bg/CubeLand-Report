internal class NeftaDualTrackLoader // TypeDefIndex: 3639
{
	// Fields
	private readonly NeftaDualTrackLoader.Track[] tracks; // 0x8
	private readonly NeftaAdapterEvents.AdType adType; // 0xC
	private readonly Action<string> load; // 0x10
	private readonly Func<string, bool> isReady; // 0x14
	private readonly Action<string, string, string> setExtraParameter; // 0x18
	private bool isFirstRequest; // 0x1C
	private bool isAdRequested; // 0x1D
	private bool isFirstOptimizedResponseReceived; // 0x1E
	private int globalCooldownCount; // 0x20

	// Properties
	private int InsightType { get; }
	private float FirstResponseTimeout { get; }
	internal bool IsShowing { get; }

	// Methods

	// RVA: 0x10F244C Offset: 0x10F244C VA: 0x10F244C
	private int get_InsightType() { }

	// RVA: 0x10F2460 Offset: 0x10F2460 VA: 0x10F2460
	private float get_FirstResponseTimeout() { }

	// RVA: 0x10F0974 Offset: 0x10F0974 VA: 0x10F0974
	internal void .ctor(string defaultAdUnitId, string optimizedAdUnitIdA, string optimizedAdUnitIdB, NeftaAdapterEvents.AdType adType, Action<string> load, Func<string, bool> isReady, Action<string, string, string> setExtraParameter) { }

	// RVA: 0x10F0504 Offset: 0x10F0504 VA: 0x10F0504
	internal MaxSdkBase.AdInfo Load() { }

	// RVA: 0x10F114C Offset: 0x10F114C VA: 0x10F114C
	internal bool IsAnyReady() { }

	// RVA: 0x10EFEE0 Offset: 0x10EFEE0 VA: 0x10EFEE0
	internal bool get_IsShowing() { }

	// RVA: 0x10F12F4 Offset: 0x10F12F4 VA: 0x10F12F4
	internal bool TryGetTrackRole(string adUnitId, out string role, out bool isFloored) { }

	// RVA: 0x10EFE9C Offset: 0x10EFE9C VA: 0x10EFE9C
	internal MaxSdkBase.AdInfo PeekBestAdInfo() { }

	// RVA: 0x10F0D3C Offset: 0x10F0D3C VA: 0x10F0D3C
	internal string TakeAdUnitToShow() { }

	// RVA: 0x10F1364 Offset: 0x10F1364 VA: 0x10F1364
	internal bool OnLoaded(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x10F1660 Offset: 0x10F1660 VA: 0x10F1660
	internal void OnLoadFailed(string adUnitId) { }

	// RVA: 0x10F1828 Offset: 0x10F1828 VA: 0x10F1828
	internal void OnShowFinished(string adUnitId) { }

	// RVA: 0x10F14D8 Offset: 0x10F14D8 VA: 0x10F14D8
	internal void OnExpiredAdReloaded(string adUnitId, MaxSdkBase.AdInfo newAdInfo) { }

	// RVA: 0x10F2AD0 Offset: 0x10F2AD0 VA: 0x10F2AD0
	private bool TryGetTrack(string adUnitId, out NeftaDualTrackLoader.Track track) { }

	// RVA: 0x10F29E4 Offset: 0x10F29E4 VA: 0x10F29E4
	private NeftaDualTrackLoader.Track GetBestReadyTrack() { }

	// RVA: 0x10F26B4 Offset: 0x10F26B4 VA: 0x10F26B4
	private void LoadTrack(NeftaDualTrackLoader.Track track) { }

	// RVA: 0x10F2538 Offset: 0x10F2538 VA: 0x10F2538
	private void ContinueLoading() { }

	// RVA: 0x10F2BF4 Offset: 0x10F2BF4 VA: 0x10F2BF4
	private IEnumerator ContinueOptimizedCoroutine() { }

	// RVA: 0x10F2948 Offset: 0x10F2948 VA: 0x10F2948
	private IEnumerator WaitDelayCoroutine(NeftaDualTrackLoader.Track track, float delay) { }

	// RVA: 0x10F2CB4 Offset: 0x10F2CB4 VA: 0x10F2CB4
	private IEnumerator RetryOptimizedCoroutine(NeftaDualTrackLoader.Track track) { }

	// RVA: 0x10F28C0 Offset: 0x10F28C0 VA: 0x10F28C0
	private IEnumerator ForceStartSecondTrackCoroutine(float delay) { }
}

// Namespace: 