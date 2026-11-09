public class LevelManager : SingletonBehaviour<LevelManager> // TypeDefIndex: 4207
{
	// Fields
	private const int LevelRangeToKeepInMemory = 3;
	private bool wasInRoundMode; // 0x10
	public static readonly SavedBool IsLevelSuccessFromPreviousSession; // 0x0
	[CompilerGenerated]
	private SoLevelsData <LevelsData>k__BackingField; // 0x14
	[CompilerGenerated]
	private SoLevelData <CurrentLevel>k__BackingField; // 0x18
	private readonly List<int> loopableLevelIndices; // 0x1C
	private readonly List<SoLevelDataAssetReference> loadedLevelAssetReferences; // 0x20
	[SerializeField]
	private AdvancedAssetReference<SoLevelOverridesData> levelOverridesData; // 0x24
	private readonly LevelManager.RemoteLevelCatalog levelOverridesCatalog; // 0x28
	[SerializeField]
	private AdvancedAssetReference<SoLevelABTestsData> levelABTestsData; // 0x2C
	private readonly LevelManager.RemoteLevelCatalog levelABTestsCatalog; // 0x30
	private Nullable<LevelAttemptInfo> currentAttempt; // 0x38

	// Properties
	public static ObservableLong LevelNumber { get; }
	public static ObservableLong RoundNumber { get; }
	public static bool IsInRoundMode { get; set; }
	public SoLevelsData LevelsData { get; set; }
	public SoLevelData CurrentLevel { get; set; }
	public int CurrentLevelIndex { get; }
	public string CurrentLevelLabel { get; }

	// Methods

	// RVA: 0x1065D14 Offset: 0x1065D14 VA: 0x1065D14
	public static ObservableLong get_LevelNumber() { }

	// RVA: 0x1067E18 Offset: 0x1067E18 VA: 0x1067E18
	public static ObservableLong get_RoundNumber() { }

	// RVA: 0x105FC68 Offset: 0x105FC68 VA: 0x105FC68
	public static bool get_IsInRoundMode() { }

	// RVA: 0x1067E3C Offset: 0x1067E3C VA: 0x1067E3C
	public static void set_IsInRoundMode(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1067E70 Offset: 0x1067E70 VA: 0x1067E70
	public SoLevelsData get_LevelsData() { }

	[CompilerGenerated]
	// RVA: 0x1067E78 Offset: 0x1067E78 VA: 0x1067E78
	private void set_LevelsData(SoLevelsData value) { }

	[CompilerGenerated]
	// RVA: 0x1067E80 Offset: 0x1067E80 VA: 0x1067E80
	public SoLevelData get_CurrentLevel() { }

	[CompilerGenerated]
	// RVA: 0x1067E88 Offset: 0x1067E88 VA: 0x1067E88
	private void set_CurrentLevel(SoLevelData value) { }

	// RVA: 0x106645C Offset: 0x106645C VA: 0x106645C
	public int get_CurrentLevelIndex() { }

	// RVA: 0x1067E90 Offset: 0x1067E90 VA: 0x1067E90
	public string get_CurrentLevelLabel() { }

	// RVA: 0x1067F9C Offset: 0x1067F9C VA: 0x1067F9C Slot: 4
	protected override void Awake() { }

	[AsyncStateMachine(typeof(LevelManager.<InitializeAsync>d__31))]
	// RVA: 0x1068218 Offset: 0x1068218 VA: 0x1068218
	public UniTask InitializeAsync() { }

	// RVA: 0x10682DC Offset: 0x10682DC VA: 0x10682DC
	private void OnSatoriFlagsRefreshed() { }

	// RVA: 0x1067FF8 Offset: 0x1067FF8 VA: 0x1067FF8
	private void RefreshLevelsData() { }

	// RVA: 0x1066138 Offset: 0x1066138 VA: 0x1066138
	public void RefreshCurrentLevel() { }

	// RVA: 0x1067228 Offset: 0x1067228 VA: 0x1067228
	public void OnLevelCompleted(bool isLevelProgressChangedExternally) { }

	// RVA: 0x10688E8 Offset: 0x10688E8 VA: 0x10688E8
	public void LevelRetried() { }

	// RVA: 0x1068A38 Offset: 0x1068A38 VA: 0x1068A38
	public void QuitLevel() { }

	// RVA: 0x1066238 Offset: 0x1066238 VA: 0x1066238
	public void LoadCurrentLevel() { }

	// RVA: 0x1069178 Offset: 0x1069178 VA: 0x1069178
	public void LoadLevelExternally(SoLevelData levelData) { }

	// RVA: 0x1068CC4 Offset: 0x1068CC4 VA: 0x1068CC4
	private void LoadLevel(SoLevelData levelData) { }

	// RVA: 0x1068B7C Offset: 0x1068B7C VA: 0x1068B7C
	private void ClearCurrentLevel() { }

	[AsyncStateMachine(typeof(LevelManager.<LoadLevelDataAsync>d__42))]
	// RVA: 0x1066564 Offset: 0x1066564 VA: 0x1066564
	public UniTask<SoLevelData> LoadLevelDataAsync(int levelIndex, bool includeRemoteLevels = True) { }

	// RVA: 0x106844C Offset: 0x106844C VA: 0x106844C
	public SoLevelData GetLevelData(int levelIndex, bool includeRemoteLevels = True) { }

	// RVA: 0x10695F0 Offset: 0x10695F0 VA: 0x10695F0
	private SoLevelDataAssetReference GetLevelDataAssetReference(int levelIndex, bool includeRemoteLevels) { }

	// RVA: 0x106986C Offset: 0x106986C VA: 0x106986C
	public int GetLoopedLevelIndex(int index) { }

	// RVA: 0x106995C Offset: 0x106995C VA: 0x106995C
	private void UnloadUnusedLevelData() { }

	// RVA: 0x106832C Offset: 0x106832C VA: 0x106832C
	private UniTaskVoid LoadLevelOverridesAsync() { }

	// RVA: 0x10683BC Offset: 0x10683BC VA: 0x10683BC
	private UniTaskVoid LoadLevelABTestsAsync() { }

	[AsyncStateMachine(typeof(LevelManager.<LoadRemoteLevelsAsync>d__49<T>))]
	// RVA: -1 Offset: -1
	private UniTaskVoid LoadRemoteLevelsAsync<T>(AdvancedAssetReference<T> assetReference, LevelManager.RemoteLevelCatalog catalog, string groupName, string catalogURLFlag) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x14AEABC Offset: 0x14AEABC VA: 0x14AEABC
	|-LevelManager.LoadRemoteLevelsAsync<object>
	*/

	// RVA: 0x1069D5C Offset: 0x1069D5C VA: 0x1069D5C
	public void ChangeLevelABTestVariant(int levelIndex, int variantIndex) { }

	// RVA: 0x106A0BC Offset: 0x106A0BC VA: 0x106A0BC
	public void GetLevelABTestVariantInfo(int levelIndex, out int numberOfVariants, out int variantIndex) { }

	// RVA: 0x10685A0 Offset: 0x10685A0 VA: 0x10685A0
	private void RefreshRoundMode() { }

	// RVA: 0x106A51C Offset: 0x106A51C VA: 0x106A51C
	public LevelAttemptInfo GetAttemptInfo() { }

	// RVA: 0x1069364 Offset: 0x1069364 VA: 0x1069364
	private LevelAttemptInfo GetAttemptInfo(SoLevelData level) { }

	// RVA: 0x106A65C Offset: 0x106A65C VA: 0x106A65C
	public void .ctor() { }

	// RVA: 0x106A7E4 Offset: 0x106A7E4 VA: 0x106A7E4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x106A89C Offset: 0x106A89C VA: 0x106A89C
	private void <InitializeAsync>b__31_0(MainCanvasType _, bool _) { }
}

// Namespace: Rotatelab.Scripts