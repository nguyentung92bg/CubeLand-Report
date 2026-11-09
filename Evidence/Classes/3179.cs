public class MetaProgressionController : SingletonBehaviour<MetaProgressionController> // TypeDefIndex: 3179
{
	// Fields
	private bool _isInitialized; // 0x10
	private bool _isJourneyOpen; // 0x11
	public MetaProgressionSo metaProgressionSo; // 0x14
	[SerializeField]
	private MetaProgressionBaseStage metaProgressionStageCityPrefab; // 0x18
	[SerializeField]
	private MetaProgressionBaseStage metaProgressionStageRewardPrefab; // 0x1C
	[SerializeField]
	private RectTransform stageEndPrefab; // 0x20
	[SerializeField]
	private ScrollRect backgroundScrollRect; // 0x24
	[SerializeField]
	private RectTransform contentRectTransform; // 0x28
	[SerializeField]
	private VerticalLayoutGroup contentVerticalLayoutGroup; // 0x2C
	[SerializeField]
	private PointerPressEventListener backgroundTapListener; // 0x30
	[SerializeField]
	private PointerPressEventListener artworkTapListener; // 0x34
	public List<MetaProgressionRewardParticle> rewardParticles; // 0x38
	public ParticleImage confetti; // 0x3C
	public List<MetaProgressionBaseStage> generatedStages; // 0x40
	[CompilerGenerated]
	private int <CurrentMetaProgressLevel>k__BackingField; // 0x44
	private static readonly bool SkipAutomaticMetaProgression; // 0x0

	// Properties
	public ObservableLong CurrentCityIndex { get; }
	public ObservableLong LatestMetaProgressLevel { get; }
	public int CurrentMetaProgressLevel { get; set; }
	public static bool IsCubeLeagueArtworkActivated { get; set; }

	// Methods

	// RVA: 0xFBBE34 Offset: 0xFBBE34 VA: 0xFBBE34
	public ObservableLong get_CurrentCityIndex() { }

	// RVA: 0xFBBE58 Offset: 0xFBBE58 VA: 0xFBBE58
	public ObservableLong get_LatestMetaProgressLevel() { }

	[CompilerGenerated]
	// RVA: 0xFBBE7C Offset: 0xFBBE7C VA: 0xFBBE7C
	public int get_CurrentMetaProgressLevel() { }

	[CompilerGenerated]
	// RVA: 0xFBBE84 Offset: 0xFBBE84 VA: 0xFBBE84
	public void set_CurrentMetaProgressLevel(int value) { }

	// RVA: 0xFBBE8C Offset: 0xFBBE8C VA: 0xFBBE8C
	public static bool get_IsCubeLeagueArtworkActivated() { }

	// RVA: 0xFBBEE0 Offset: 0xFBBEE0 VA: 0xFBBEE0
	public static void set_IsCubeLeagueArtworkActivated(bool value) { }

	// RVA: 0xFBBF38 Offset: 0xFBBF38 VA: 0xFBBF38
	private void OnEnable() { }

	// RVA: 0xFBC230 Offset: 0xFBC230 VA: 0xFBC230
	private void OnDisable() { }

	// RVA: 0xFBC528 Offset: 0xFBC528 VA: 0xFBC528
	private void Start() { }

	// RVA: 0xFBC6F0 Offset: 0xFBC6F0 VA: 0xFBC6F0
	private void CheckInitialize() { }

	// RVA: 0xFBCE98 Offset: 0xFBCE98 VA: 0xFBCE98
	private void SetArtwork() { }

	// RVA: 0xFBCFE8 Offset: 0xFBCFE8 VA: 0xFBCFE8
	private void GenerateStages() { }

	// RVA: 0xFBCAD4 Offset: 0xFBCAD4 VA: 0xFBCAD4
	private void CheckCurrentCity() { }

	// RVA: 0xFBD59C Offset: 0xFBD59C VA: 0xFBD59C
	private void OnBackgroundTapped(PointerEventData eventData) { }

	// RVA: 0xFBD624 Offset: 0xFBD624 VA: 0xFBD624
	private void OnArtworkTapped(PointerEventData eventData) { }

	// RVA: 0xFBD6AC Offset: 0xFBD6AC VA: 0xFBD6AC
	private void ShowJourney() { }

	// RVA: 0xFBDCF0 Offset: 0xFBDCF0 VA: 0xFBDCF0
	private int GetStageIndex(int level) { }

	// RVA: 0xFBDDDC Offset: 0xFBDDDC VA: 0xFBDDDC
	public void OnScrollRectValueChanged(Vector2 pos) { }

	// RVA: 0xFBDE18 Offset: 0xFBDE18 VA: 0xFBDE18
	private void OnLevelSucceededHandler() { }

	// RVA: 0xFBDF0C Offset: 0xFBDF0C VA: 0xFBDF0C
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0xFBC7E8 Offset: 0xFBC7E8 VA: 0xFBC7E8
	private void CompareLatestAndCurrentProgressToShowJourney() { }

	// RVA: 0xFBDF10 Offset: 0xFBDF10 VA: 0xFBDF10
	private void ShowJourneyAfterDelay() { }

	// RVA: 0xFBE034 Offset: 0xFBE034 VA: 0xFBE034
	private void OnPageOpened(PageButtonType type) { }

	// RVA: 0xFBE1C4 Offset: 0xFBE1C4 VA: 0xFBE1C4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFBE218 Offset: 0xFBE218 VA: 0xFBE218
	private void <Start>b__27_0(long value) { }

	[CompilerGenerated]
	// RVA: 0xFBD70C Offset: 0xFBD70C VA: 0xFBD70C
	private void <ShowJourney>g__SetLatestLevelCredentials|34_0() { }

	[CompilerGenerated]
	// RVA: 0xFBD958 Offset: 0xFBD958 VA: 0xFBD958
	private void <ShowJourney>g__SetLatestToCurrentLevelCredentials|34_1() { }

	[CompilerGenerated]
	// RVA: 0xFBE234 Offset: 0xFBE234 VA: 0xFBE234
	private void <ShowJourney>g__SetContentHeight|34_2(int progressLevel, bool isAnimated = False, float moveDuration = 1, float moveDelay = 0.25) { }

	[CompilerGenerated]
	// RVA: 0xFBE6D8 Offset: 0xFBE6D8 VA: 0xFBE6D8
	private void <ShowJourneyAfterDelay>b__40_0() { }
}

// Namespace: Rotatelab