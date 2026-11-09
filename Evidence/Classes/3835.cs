public class BoosterGenerator : SingletonBehaviour<BoosterGenerator> // TypeDefIndex: 3835
{
	// Fields
	public SpecialBooster specialBoosterPrefab; // 0x10
	public Booster boosterPrefab; // 0x14
	public HorizontalLayoutGroup horizontalLayoutGroup; // 0x18
	public UiElementHider uiElementHider; // 0x1C
	public List<Booster> generatedBoosters; // 0x20
	[CompilerGenerated]
	private SpecialBooster <SpecialBooster>k__BackingField; // 0x24
	private bool _removeSpecialBoosterOnLevelLoad; // 0x28

	// Properties
	public SpecialBooster SpecialBooster { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x113C5D0 Offset: 0x113C5D0 VA: 0x113C5D0
	public SpecialBooster get_SpecialBooster() { }

	[CompilerGenerated]
	// RVA: 0x113C5D8 Offset: 0x113C5D8 VA: 0x113C5D8
	private void set_SpecialBooster(SpecialBooster value) { }

	// RVA: 0x113C5E0 Offset: 0x113C5E0 VA: 0x113C5E0
	private void OnEnable() { }

	// RVA: 0x113C8B8 Offset: 0x113C8B8 VA: 0x113C8B8
	private void OnDisable() { }

	// RVA: 0x113CB2C Offset: 0x113CB2C VA: 0x113CB2C
	private void Start() { }

	// RVA: 0x113CE08 Offset: 0x113CE08 VA: 0x113CE08
	private void TryGenerateSpecialBooster() { }

	// RVA: 0x113D094 Offset: 0x113D094 VA: 0x113D094
	private void RemoveSpecialBooster() { }

	// RVA: 0x113D164 Offset: 0x113D164 VA: 0x113D164
	public void RefreshAllBoosters() { }

	// RVA: 0x113D28C Offset: 0x113D28C VA: 0x113D28C
	private void OnSatoriFlagsRefreshedHandler() { }

	// RVA: 0x113D290 Offset: 0x113D290 VA: 0x113D290
	private void OnObjectiveAnimationFinishedHandler() { }

	// RVA: 0x113D294 Offset: 0x113D294 VA: 0x113D294
	private void CheckBoosterVisibility() { }

	// RVA: 0x113D3F8 Offset: 0x113D3F8 VA: 0x113D3F8
	private void OnLevelLoadedHandler(SoLevelData levelData) { }

	// RVA: 0x113D40C Offset: 0x113D40C VA: 0x113D40C
	private void OnRainbowShooterResetHandler() { }

	// RVA: 0x113D418 Offset: 0x113D418 VA: 0x113D418
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters