public class Stage : MonoBehaviour // TypeDefIndex: 3354
{
	// Fields
	[SerializeField]
	private Slider slider; // 0x10
	[SerializeField]
	private RectTransform levelDividersUnderSliderParent; // 0x14
	[SerializeField]
	private RectTransform levelDividersOverSliderParent; // 0x18
	[SerializeField]
	private GameObject levelDividerUnderSliderPrefab; // 0x1C
	[SerializeField]
	private GameObject levelDividerOverSliderPrefab; // 0x20
	[SerializeField]
	private Image handle; // 0x24
	[SerializeField]
	private Sprite handleBgIncomplete; // 0x28
	[SerializeField]
	private Sprite handleBgComplete; // 0x2C
	[SerializeField]
	private TextMeshProUGUI handleLevelText; // 0x30
	[SerializeField]
	private Chest chest; // 0x34
	[SerializeField]
	private GameObject checkpointFlag; // 0x38
	[SerializeField]
	private Image checkpointFlagFill; // 0x3C
	[CompilerGenerated]
	private WinStreakSo.StageData <Data>k__BackingField; // 0x40

	// Properties
	public WinStreakSo WinStreakData { get; }
	public WinStreakSo.StageData Data { get; set; }
	public int Index { get; }
	public int FirstLevel { get; }
	public int LastLevel { get; }

	// Methods

	// RVA: 0x1090E4C Offset: 0x1090E4C VA: 0x1090E4C
	public WinStreakSo get_WinStreakData() { }

	[CompilerGenerated]
	// RVA: 0x1090EAC Offset: 0x1090EAC VA: 0x1090EAC
	public WinStreakSo.StageData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x1090EB4 Offset: 0x1090EB4 VA: 0x1090EB4
	private void set_Data(WinStreakSo.StageData value) { }

	// RVA: 0x1090EBC Offset: 0x1090EBC VA: 0x1090EBC
	public int get_Index() { }

	// RVA: 0x1090F60 Offset: 0x1090F60 VA: 0x1090F60
	public int get_FirstLevel() { }

	// RVA: 0x1090FDC Offset: 0x1090FDC VA: 0x1090FDC
	public int get_LastLevel() { }

	// RVA: 0x1090FF8 Offset: 0x1090FF8 VA: 0x1090FF8
	public void Initialize(WinStreakSo.StageData data) { }

	// RVA: 0x1091208 Offset: 0x1091208 VA: 0x1091208
	public void InitializeLevel(int level) { }

	// RVA: 0x1091338 Offset: 0x1091338 VA: 0x1091338
	public void SetProgress(float progress) { }

	// RVA: 0x1091478 Offset: 0x1091478 VA: 0x1091478
	public Sequence CollectReward() { }

	// RVA: 0x10916DC Offset: 0x10916DC VA: 0x10916DC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10916E4 Offset: 0x10916E4 VA: 0x10916E4
	private void <CollectReward>b__27_0(Chest chest) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]