public class AdConfig : SingletonScriptableObject<AdConfig> // TypeDefIndex: 3611
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("Determines whether or not ads are enabled.")]
	private bool <IsEnabled>k__BackingField; // 0xC
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("Enables the debugger panels and debugging logs.")]
	private bool <DebugMode>k__BackingField; // 0xD
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("If enabled, AdManager is initialized automatically at startup.")]
	private bool <AutoInitialize>k__BackingField; // 0xE
	[SerializeField]
	[Tooltip("Enables Nefta dynamic bid floors (app id + Nefta ad units per platform below). Always off in the Editor so test sessions don't report to the live Nefta app.")]
	private bool isNeftaEnabled; // 0xF
	[SerializeField]
	private AdConfig.PlatformSpecificData androidData; // 0x10
	[CompilerGenerated]
	[SerializeField]
	private bool <InterstitialAdEnabled>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private bool <ShowInterstitialWhenLevelEnds>k__BackingField; // 0x31
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("The minimum level that the user must be in to be able to show an interstitial ad.")]
	private int <InterstitialFirstAllowedLevel>k__BackingField; // 0x34
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("The minimum time that needs to pass after the game starts to show an interstitial ad.")]
	private float <InterstitialInitialCooldown>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("The minimum time after the first cooldown that needs to pass to show an interstitial ad.")]
	private float <InterstitialRegularCooldown>k__BackingField; // 0x3C
	[CompilerGenerated]
	[SerializeField]
	private bool <AutoShowInterstitialAfterCooldown>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private bool <BannerAdEnabled>k__BackingField; // 0x41
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("Show Banner Ad automatically at the beginning of the game.")]
	private bool <ShowBannerAtStart>k__BackingField; // 0x42
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("If non-zero, banner won't refresh itself automatically when the next ad is ready. Instead, it'll refresh at the given interval.")]
	private float <BannerRefreshInterval>k__BackingField; // 0x44
	[CompilerGenerated]
	[SerializeField]
	[Tooltip("If non-transparent, a background with this color will be displayed behind the banner ad.")]
	private Color <BannerBackgroundColor>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private bool <RewardedAdEnabled>k__BackingField; // 0x58

	// Properties
	internal bool IsEnabled { get; set; }
	internal bool DebugMode { get; set; }
	internal bool AutoInitialize { get; set; }
	internal bool IsNeftaEnabled { get; }
	internal AdConfig.PlatformSpecificData CurrentPlatformData { get; }
	internal bool InterstitialAdEnabled { get; set; }
	internal bool ShowInterstitialWhenLevelEnds { get; set; }
	internal int InterstitialFirstAllowedLevel { get; set; }
	internal float InterstitialInitialCooldown { get; set; }
	internal float InterstitialRegularCooldown { get; set; }
	internal bool AutoShowInterstitialAfterCooldown { get; set; }
	internal bool BannerAdEnabled { get; set; }
	internal bool ShowBannerAtStart { get; set; }
	internal float BannerRefreshInterval { get; set; }
	internal Color BannerBackgroundColor { get; set; }
	internal bool RewardedAdEnabled { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10ED8D8 Offset: 0x10ED8D8 VA: 0x10ED8D8
	internal bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10ED8E0 Offset: 0x10ED8E0 VA: 0x10ED8E0
	private void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10ED8E8 Offset: 0x10ED8E8 VA: 0x10ED8E8
	internal bool get_DebugMode() { }

	[CompilerGenerated]
	// RVA: 0x10ED8F0 Offset: 0x10ED8F0 VA: 0x10ED8F0
	private void set_DebugMode(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10ED8F8 Offset: 0x10ED8F8 VA: 0x10ED8F8
	internal bool get_AutoInitialize() { }

	[CompilerGenerated]
	// RVA: 0x10ED900 Offset: 0x10ED900 VA: 0x10ED900
	private void set_AutoInitialize(bool value) { }

	// RVA: 0x10ED908 Offset: 0x10ED908 VA: 0x10ED908
	internal bool get_IsNeftaEnabled() { }

	// RVA: 0x10ED984 Offset: 0x10ED984 VA: 0x10ED984
	internal AdConfig.PlatformSpecificData get_CurrentPlatformData() { }

	[CompilerGenerated]
	// RVA: 0x10ED99C Offset: 0x10ED99C VA: 0x10ED99C
	internal bool get_InterstitialAdEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10ED9A4 Offset: 0x10ED9A4 VA: 0x10ED9A4
	private void set_InterstitialAdEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9AC Offset: 0x10ED9AC VA: 0x10ED9AC
	internal bool get_ShowInterstitialWhenLevelEnds() { }

	[CompilerGenerated]
	// RVA: 0x10ED9B4 Offset: 0x10ED9B4 VA: 0x10ED9B4
	private void set_ShowInterstitialWhenLevelEnds(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9BC Offset: 0x10ED9BC VA: 0x10ED9BC
	internal int get_InterstitialFirstAllowedLevel() { }

	[CompilerGenerated]
	// RVA: 0x10ED9C4 Offset: 0x10ED9C4 VA: 0x10ED9C4
	private void set_InterstitialFirstAllowedLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9CC Offset: 0x10ED9CC VA: 0x10ED9CC
	internal float get_InterstitialInitialCooldown() { }

	[CompilerGenerated]
	// RVA: 0x10ED9D4 Offset: 0x10ED9D4 VA: 0x10ED9D4
	private void set_InterstitialInitialCooldown(float value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9DC Offset: 0x10ED9DC VA: 0x10ED9DC
	internal float get_InterstitialRegularCooldown() { }

	[CompilerGenerated]
	// RVA: 0x10ED9E4 Offset: 0x10ED9E4 VA: 0x10ED9E4
	private void set_InterstitialRegularCooldown(float value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9EC Offset: 0x10ED9EC VA: 0x10ED9EC
	internal bool get_AutoShowInterstitialAfterCooldown() { }

	[CompilerGenerated]
	// RVA: 0x10ED9F4 Offset: 0x10ED9F4 VA: 0x10ED9F4
	private void set_AutoShowInterstitialAfterCooldown(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10ED9FC Offset: 0x10ED9FC VA: 0x10ED9FC
	internal bool get_BannerAdEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10EDA04 Offset: 0x10EDA04 VA: 0x10EDA04
	private void set_BannerAdEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10EDA0C Offset: 0x10EDA0C VA: 0x10EDA0C
	internal bool get_ShowBannerAtStart() { }

	[CompilerGenerated]
	// RVA: 0x10EDA14 Offset: 0x10EDA14 VA: 0x10EDA14
	private void set_ShowBannerAtStart(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10EDA1C Offset: 0x10EDA1C VA: 0x10EDA1C
	internal float get_BannerRefreshInterval() { }

	[CompilerGenerated]
	// RVA: 0x10EDA24 Offset: 0x10EDA24 VA: 0x10EDA24
	private void set_BannerRefreshInterval(float value) { }

	[CompilerGenerated]
	// RVA: 0x10EDA2C Offset: 0x10EDA2C VA: 0x10EDA2C
	internal Color get_BannerBackgroundColor() { }

	[CompilerGenerated]
	// RVA: 0x10EDA3C Offset: 0x10EDA3C VA: 0x10EDA3C
	private void set_BannerBackgroundColor(Color value) { }

	[CompilerGenerated]
	// RVA: 0x10EDA4C Offset: 0x10EDA4C VA: 0x10EDA4C
	internal bool get_RewardedAdEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10EDA54 Offset: 0x10EDA54 VA: 0x10EDA54
	private void set_RewardedAdEnabled(bool value) { }

	// RVA: 0x10EDA5C Offset: 0x10EDA5C VA: 0x10EDA5C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]