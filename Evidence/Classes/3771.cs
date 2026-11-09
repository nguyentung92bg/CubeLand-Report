public class PreLevelStartController : SingletonBehaviour<PreLevelStartController> // TypeDefIndex: 3771
{
	// Fields
	public Button mainMenuPlayButton; // 0x10
	public CanvasGroup preLevelMenu; // 0x14
	public RectTransform popup; // 0x18
	public PreBoosterGenerator preBoosterGenerator; // 0x1C
	[SerializeField]
	private SuperHardOffer superHardOffer; // 0x20
	public TMP_Text levelText; // 0x24
	public Image headerBg; // 0x28
	public Image containerBg; // 0x2C
	public Image menuDifficultyBg; // 0x30
	public GameObject menuMultiplierTag; // 0x34
	public TMP_Text menuDifficultyText; // 0x38
	public TMP_Text menuMultiplierText; // 0x3C
	public Image buttonDifficultyBg; // 0x40
	public GameObject buttonMultiplierTag; // 0x44
	public TMP_Text buttonDifficultyText; // 0x48
	public TMP_Text buttonMultiplierText; // 0x4C
	private EnvironmentManager environmentManager; // 0x50
	public bool IsExtraDockBoosterActive; // 0x54
	public bool IsMeteorShowerBoosterActive; // 0x55
	public bool isPopupActive; // 0x56
	private static readonly bool SkipPopup; // 0x0

	// Methods

	// RVA: 0x1125210 Offset: 0x1125210 VA: 0x1125210
	protected void OnEnable() { }

	// RVA: 0x1125404 Offset: 0x1125404 VA: 0x1125404
	protected void OnDisable() { }

	// RVA: 0x11255F8 Offset: 0x11255F8 VA: 0x11255F8
	private void OnAnyPreBoosterUsedHandler() { }

	// RVA: 0x112584C Offset: 0x112584C VA: 0x112584C
	private void Start() { }

	// RVA: 0x1125AD4 Offset: 0x1125AD4 VA: 0x1125AD4
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x1125B30 Offset: 0x1125B30 VA: 0x1125B30
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x112593C Offset: 0x112593C VA: 0x112593C
	public void RefreshLevelProperties() { }

	// RVA: 0x1125B3C Offset: 0x1125B3C VA: 0x1125B3C
	private void ApplyEnvironmentVisuals(EnvironmentData environmentData) { }

	// RVA: 0x1125C1C Offset: 0x1125C1C VA: 0x1125C1C
	private void SetDifficultyTexts(int difficultyIndex, float multiplier) { }

	// RVA: 0x1125D74 Offset: 0x1125D74 VA: 0x1125D74
	private void SetDifficultyVisibility(bool isVisible) { }

	// RVA: 0x1125E38 Offset: 0x1125E38 VA: 0x1125E38
	private void UpdatePopupLayout(bool isEasy) { }

	// RVA: 0x1125EE0 Offset: 0x1125EE0 VA: 0x1125EE0
	private void UpdateDifficultyBackgroundSize(LevelDifficulty difficulty) { }

	// RVA: 0x1125F88 Offset: 0x1125F88 VA: 0x1125F88
	private static string GetDifficultyText(int difficultyIndex) { }

	// RVA: 0x112601C Offset: 0x112601C VA: 0x112601C
	public void MainMenuPlayButtonClicked() { }

	// RVA: 0x1126200 Offset: 0x1126200 VA: 0x1126200
	private void ShowPreLevelMenuPopup() { }

	// RVA: 0x11268A0 Offset: 0x11268A0 VA: 0x11268A0
	public void HidePreLevelMenuPopup() { }

	// RVA: 0x1126B5C Offset: 0x1126B5C VA: 0x1126B5C
	public void PreLevelMenuPlayButtonClicked() { }

	// RVA: 0x1126764 Offset: 0x1126764 VA: 0x1126764
	public void StartToGame() { }

	// RVA: 0x1125B04 Offset: 0x1125B04 VA: 0x1125B04
	public void SetInteractable(bool enable) { }

	// RVA: 0x1126D6C Offset: 0x1126D6C VA: 0x1126D6C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1125760 Offset: 0x1125760 VA: 0x1125760
	internal static void <OnAnyPreBoosterUsedHandler>g__IncrementBoosterUsage|22_0(bool isPreBooster, int boosterId) { }

	[CompilerGenerated]
	// RVA: 0x1126DC0 Offset: 0x1126DC0 VA: 0x1126DC0
	private void <MainMenuPlayButtonClicked>b__33_0(bool success) { }

	[CompilerGenerated]
	// RVA: 0x1126DCC Offset: 0x1126DCC VA: 0x1126DCC
	private void <HidePreLevelMenuPopup>b__35_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]