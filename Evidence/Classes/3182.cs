public class MetaProgressionStageCity : MetaProgressionBaseStage // TypeDefIndex: 3182
{
	// Fields
	[SerializeField]
	private Image cityPanelImage; // 0x18
	[SerializeField]
	private Image cityImage; // 0x1C
	[SerializeField]
	private TMP_Text cityName; // 0x20
	[SerializeField]
	private TMP_Text cityLevelInfo; // 0x24
	[SerializeField]
	private GameObject lockIcon; // 0x28
	[SerializeField]
	private Sprite selectedSprite; // 0x2C
	[SerializeField]
	private Sprite deSelectedSprite; // 0x30
	[SerializeField]
	private GameObject visitButton; // 0x34
	[SerializeField]
	private Color selectedColor; // 0x38
	[SerializeField]
	private Color deselectColor; // 0x48
	private MetaProgressionSo.MetaProgressData data; // 0x58
	private int stageIndex; // 0x5C
	private AsyncOperationHandle<Sprite> _iconHandle; // 0x60

	// Methods

	// RVA: 0xFBFDF8 Offset: 0xFBFDF8 VA: 0xFBFDF8
	private void OnEnable() { }

	// RVA: 0xFBFFB8 Offset: 0xFBFFB8 VA: 0xFBFFB8
	private void OnDisable() { }

	// RVA: 0xFC0178 Offset: 0xFC0178 VA: 0xFC0178 Slot: 4
	public override void Init(MetaProgressionSo.MetaProgressData data, int dividerCount, int stageIndex) { }

	// RVA: 0xFC0338 Offset: 0xFC0338 VA: 0xFC0338
	private void CheckState() { }

	// RVA: 0xFC063C Offset: 0xFC063C VA: 0xFC063C Slot: 5
	public override void Collect() { }

	// RVA: 0xFC0658 Offset: 0xFC0658 VA: 0xFC0658
	public void Visit() { }

	// RVA: 0xFC08D4 Offset: 0xFC08D4 VA: 0xFC08D4
	private void OnCheckStageCityStateHandler() { }

	// RVA: 0xFC08D8 Offset: 0xFC08D8 VA: 0xFC08D8
	public void LoadIcon() { }

	// RVA: 0xFC0A88 Offset: 0xFC0A88 VA: 0xFC0A88
	public void ReleaseIcon() { }

	// RVA: 0xFC0B84 Offset: 0xFC0B84 VA: 0xFC0B84
	private void OnDestroy() { }

	// RVA: 0xFC0C4C Offset: 0xFC0C4C VA: 0xFC0C4C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]