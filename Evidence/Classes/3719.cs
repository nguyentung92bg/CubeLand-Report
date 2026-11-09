public class CreativeCanvasController : SingletonBehaviour<CreativeCanvasController> // TypeDefIndex: 3719
{
	// Fields
	[SerializeField]
	private RectTransform creativePanel; // 0x10
	[SerializeField]
	private TMP_Text versionDataText; // 0x14
	[SerializeField]
	private TMP_Text customLog; // 0x18
	[SerializeField]
	private TMP_InputField levelField; // 0x1C
	[SerializeField]
	private VersionDataSo versionDataSo; // 0x20
	[SerializeField]
	private TMP_InputField coinsInputField; // 0x24
	[SerializeField]
	private List<Image> tabButtons; // 0x28
	[SerializeField]
	private List<CanvasGroup> tabPages; // 0x2C
	[SerializeField]
	private Color tabActiveColor; // 0x30
	[SerializeField]
	private Color tabDeActiveColor; // 0x40
	private LevelManager levelManager; // 0x50
	private float _tol; // 0x54
	private float _timer; // 0x58
	private float _lvIncPatternTimer; // 0x5C
	private bool _isDragging; // 0x60
	private bool _isLevelIncrease; // 0x61
	private int _currentTabIndex; // 0x64
	private readonly StringBuilder logsStringBuilder; // 0x68
	private SavedBool rainbowShooterEnabledSaved; // 0x6C
	[SerializeField]
	private CreativeSlider idleRotationSpeed1BlasterShooting; // 0x70
	[SerializeField]
	private CreativeSlider idleRotationSpeed2BlasterShooting; // 0x74
	[SerializeField]
	private CreativeSlider idleRotationSpeed3BlasterShooting; // 0x78
	[SerializeField]
	private CreativeSlider idleRotationSpeed4BlasterShooting; // 0x7C
	[SerializeField]
	private CreativeSlider idleRotationSpeed5OrMoreBlasterShooting; // 0x80
	[SerializeField]
	private CreativeSlider idleRotationSpeedNoneBlasterShooting; // 0x84
	[SerializeField]
	private TMP_Text changeChainOfferModeText; // 0x88
	[SerializeField]
	private TMP_Text changeCrownTournamentThemeText; // 0x8C
	[SerializeField]
	private Toggle noAdsToggle; // 0x90
	[SerializeField]
	private Toggle cubePassToggle; // 0x94
	[SerializeField]
	private Toggle starterBundleToggle; // 0x98
	[SerializeField]
	private Toggle lightModeToggle; // 0x9C
	[SerializeField]
	private TMP_Dropdown levelVariantDropdown; // 0xA0
	[SerializeField]
	private Toggle perfHudToggle; // 0xA4
	[SerializeField]
	private CreativeSlider seasonPassIncreaseAmountOfCubePerLevel; // 0xA8
	[SerializeField]
	private CreativeSlider cubeLeagueIncreaseAmountOfTrophyPerLevel; // 0xAC
	[SerializeField]
	private CreativeSlider crownTournamentIncreaseAmountOfCrownPerLevel; // 0xB0
	[SerializeField]
	private CreativeSlider jewelIncreaseAmountOfPerBlasterJewel; // 0xB4
	[SerializeField]
	private CreativeSlider rainbowShooterEnabled; // 0xB8
	[SerializeField]
	private CreativeSlider rainbowShooterRequiredBulletCount; // 0xBC
	[SerializeField]
	private CreativeSlider rainbowShooterDrainPerSecond; // 0xC0
	[SerializeField]
	private CreativeSlider rainbowShooterDrainGracePeriod; // 0xC4
	[SerializeField]
	private CreativeSlider rainbowShooterBulletCount; // 0xC8
	private static readonly TimeSpan CloudRushCreativeTimeLeft; // 0x0

	// Properties
	public int SeasonPassIncreaseAmountOfCubePerLevel { get; }
	public int CubeLeagueIncreaseAmountOfTrophyPerLevel { get; }
	public int CrownTournamentIncreaseAmountOfCrownPerLevel { get; }
	public int JewelIncreaseAmountOfPerBlasterJewel { get; }
	public float IdleRotationSpeed1BlasterShooting { get; }
	public float IdleRotationSpeed2BlasterShooting { get; }
	public float IdleRotationSpeed3BlasterShooting { get; }
	public float IdleRotationSpeed4BlasterShooting { get; }
	public float IdleRotationSpeed5OrMoreBlasterShooting { get; }
	public float IdleRotationSpeedNoneBlasterShooting { get; }
	public bool RainbowShooterEnabled { get; }
	public int RainbowShooterRequiredBulletCount { get; }
	public float RainbowShooterDrainPerSecond { get; }
	public float RainbowShooterDrainGracePeriod { get; }
	public int RainbowShooterBulletCount { get; }

	// Methods

	// RVA: 0x110AD20 Offset: 0x110AD20 VA: 0x110AD20
	public int get_SeasonPassIncreaseAmountOfCubePerLevel() { }

	// RVA: 0x110AE98 Offset: 0x110AE98 VA: 0x110AE98
	public int get_CubeLeagueIncreaseAmountOfTrophyPerLevel() { }

	// RVA: 0x110AFD0 Offset: 0x110AFD0 VA: 0x110AFD0
	public int get_CrownTournamentIncreaseAmountOfCrownPerLevel() { }

	// RVA: 0x110B108 Offset: 0x110B108 VA: 0x110B108
	public int get_JewelIncreaseAmountOfPerBlasterJewel() { }

	// RVA: 0x110B23C Offset: 0x110B23C VA: 0x110B23C
	public float get_IdleRotationSpeed1BlasterShooting() { }

	// RVA: 0x110B25C Offset: 0x110B25C VA: 0x110B25C
	public float get_IdleRotationSpeed2BlasterShooting() { }

	// RVA: 0x110B27C Offset: 0x110B27C VA: 0x110B27C
	public float get_IdleRotationSpeed3BlasterShooting() { }

	// RVA: 0x110B29C Offset: 0x110B29C VA: 0x110B29C
	public float get_IdleRotationSpeed4BlasterShooting() { }

	// RVA: 0x110B2BC Offset: 0x110B2BC VA: 0x110B2BC
	public float get_IdleRotationSpeed5OrMoreBlasterShooting() { }

	// RVA: 0x110B2DC Offset: 0x110B2DC VA: 0x110B2DC
	public float get_IdleRotationSpeedNoneBlasterShooting() { }

	// RVA: 0x110B2FC Offset: 0x110B2FC VA: 0x110B2FC
	public bool get_RainbowShooterEnabled() { }

	// RVA: 0x110B360 Offset: 0x110B360 VA: 0x110B360
	public int get_RainbowShooterRequiredBulletCount() { }

	// RVA: 0x110B494 Offset: 0x110B494 VA: 0x110B494
	public float get_RainbowShooterDrainPerSecond() { }

	// RVA: 0x110B4B4 Offset: 0x110B4B4 VA: 0x110B4B4
	public float get_RainbowShooterDrainGracePeriod() { }

	// RVA: 0x110B4D8 Offset: 0x110B4D8 VA: 0x110B4D8
	public int get_RainbowShooterBulletCount() { }

	// RVA: 0x110B60C Offset: 0x110B60C VA: 0x110B60C Slot: 4
	protected override void Awake() { }

	// RVA: 0x110BBD4 Offset: 0x110BBD4 VA: 0x110BBD4
	protected void Start() { }

	// RVA: 0x110BCF0 Offset: 0x110BCF0 VA: 0x110BCF0
	private void OnLevelLoaded(SoLevelData level) { }

	// RVA: 0x110BF84 Offset: 0x110BF84 VA: 0x110BF84
	public void OnSolutionGuideToggleChanged(bool isOn) { }

	// RVA: 0x110C0C4 Offset: 0x110C0C4 VA: 0x110C0C4
	public void OnLiveSolverGuideToggleChanged(bool isOn) { }

	// RVA: 0x110C1C4 Offset: 0x110C1C4 VA: 0x110C1C4
	public void OnPerfHudToggleChanged(bool isOn) { }

	// RVA: 0x110C358 Offset: 0x110C358 VA: 0x110C358
	public void OnLightModeToggleChanged(bool isOn) { }

	// RVA: 0x110C438 Offset: 0x110C438 VA: 0x110C438
	public void OnNoAdsToggleChanged(bool isOn) { }

	// RVA: 0x110C53C Offset: 0x110C53C VA: 0x110C53C
	public void OnCubePassToggleChanged(bool isOn) { }

	// RVA: 0x110C648 Offset: 0x110C648 VA: 0x110C648
	public void OnStarterBundleToggleChanged(bool isOn) { }

	// RVA: 0x110C72C Offset: 0x110C72C VA: 0x110C72C
	private void Update() { }

	// RVA: 0x110C8C8 Offset: 0x110C8C8 VA: 0x110C8C8
	public void ShowCreativePanel() { }

	// RVA: 0x110D258 Offset: 0x110D258 VA: 0x110D258
	public void HideCreativePanel() { }

	// RVA: 0x110D508 Offset: 0x110D508 VA: 0x110D508
	public void HideCreativePanelAndSettings() { }

	// RVA: 0x110D0AC Offset: 0x110D0AC VA: 0x110D0AC
	private void SetTab() { }

	// RVA: 0x110D644 Offset: 0x110D644 VA: 0x110D644
	public void IncreaseCoin() { }

	// RVA: 0x110D71C Offset: 0x110D71C VA: 0x110D71C
	private void OnCoinsModified(string value) { }

	// RVA: 0x110D894 Offset: 0x110D894 VA: 0x110D894
	private void OnLevelModifiedViaInputField(string value) { }

	// RVA: 0x110BCF4 Offset: 0x110BCF4 VA: 0x110BCF4
	private void RefreshLevelVariantsDropdown() { }

	// RVA: 0x110D9E4 Offset: 0x110D9E4 VA: 0x110D9E4
	private void OnLevelVariantModified(int variantIndex) { }

	// RVA: 0x110DAE0 Offset: 0x110DAE0 VA: 0x110DAE0
	public void PlayClick() { }

	// RVA: 0x110DF44 Offset: 0x110DF44 VA: 0x110DF44
	public void OnPointerDownNext() { }

	// RVA: 0x110DF50 Offset: 0x110DF50 VA: 0x110DF50
	public void OnPointerUpNext() { }

	// RVA: 0x110DF8C Offset: 0x110DF8C VA: 0x110DF8C
	public void OnPointerDownPrevious() { }

	// RVA: 0x110DF98 Offset: 0x110DF98 VA: 0x110DF98
	public void OnPointerUpPrevious() { }

	// RVA: 0x110C7CC Offset: 0x110C7CC VA: 0x110C7CC
	private void IncreaseLevelBy(int value) { }

	// RVA: 0x110DFD4 Offset: 0x110DFD4 VA: 0x110DFD4
	public void ActivateTab(int index) { }

	// RVA: 0x110DFDC Offset: 0x110DFDC VA: 0x110DFDC
	public void CompleteLevel() { }

	// RVA: 0x110E058 Offset: 0x110E058 VA: 0x110E058
	public void FailLevel() { }

	// RVA: 0x110E0D4 Offset: 0x110E0D4 VA: 0x110E0D4
	public void SetSeasonPassLastVisitDateToPreviousMonth() { }

	// RVA: 0x110E21C Offset: 0x110E21C VA: 0x110E21C
	public void ForceEndLateGameLeaderboardCycleNow() { }

	// RVA: 0x110E2AC Offset: 0x110E2AC VA: 0x110E2AC
	public void ForceEndMidGameLeaderboardCycleNow() { }

	// RVA: 0x110E33C Offset: 0x110E33C VA: 0x110E33C
	public void SetDailyDeliveryLastVisitDateToPreviousDay() { }

	// RVA: 0x110E418 Offset: 0x110E418 VA: 0x110E418
	public void SetDailyDeliveryLastVisitDateToPreviousWeek() { }

	// RVA: 0x110E4F4 Offset: 0x110E4F4 VA: 0x110E4F4
	public void ChangeChainOfferMode() { }

	// RVA: 0x110CDF4 Offset: 0x110CDF4 VA: 0x110CDF4
	private void SetChainOfferModeText() { }

	// RVA: 0x110E640 Offset: 0x110E640 VA: 0x110E640
	public void ChangeCrownTournamentTheme() { }

	// RVA: 0x110CF50 Offset: 0x110CF50 VA: 0x110CF50
	private void SetCrownTournamentThemeText() { }

	// RVA: 0x110E6AC Offset: 0x110E6AC VA: 0x110E6AC
	public void ResetCloudRush() { }

	// RVA: 0x110E774 Offset: 0x110E774 VA: 0x110E774
	public void SetCloudRushTo10SecondsBeforeReset() { }

	// RVA: 0x110E830 Offset: 0x110E830 VA: 0x110E830
	public void MaxDebugger() { }

	// RVA: 0x110E8D8 Offset: 0x110E8D8 VA: 0x110E8D8
	public void LogMessage(string log) { }

	// RVA: 0x110EA80 Offset: 0x110EA80 VA: 0x110EA80
	public void .ctor() { }

	// RVA: 0x110EB24 Offset: 0x110EB24 VA: 0x110EB24
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x110EBCC Offset: 0x110EBCC VA: 0x110EBCC
	private void <Awake>b__73_0(float v) { }

	[CompilerGenerated]
	// RVA: 0x110EC78 Offset: 0x110EC78 VA: 0x110EC78
	private void <Start>b__74_0() { }
}

// Namespace: 
[CompilerGenerated]