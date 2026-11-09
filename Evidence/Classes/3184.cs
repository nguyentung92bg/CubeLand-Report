public class MetaProgressionStageReward : MetaProgressionBaseStage // TypeDefIndex: 3184
{
	// Fields
	[SerializeField]
	private Image label; // 0x18
	[SerializeField]
	private Image rewardBgImage; // 0x1C
	[SerializeField]
	private GameObject collectCheck; // 0x20
	[SerializeField]
	private Sprite selectedSprite; // 0x24
	[SerializeField]
	private Sprite deSelectedSprite; // 0x28
	[SerializeField]
	private TMP_Text levelText; // 0x2C
	[SerializeField]
	private RectTransform rewardsBg; // 0x30
	[SerializeField]
	private RectTransform rewardLayout; // 0x34
	[SerializeField]
	private MetaProgressionSingleReward singleRewardPrefab; // 0x38
	[SerializeField]
	private CanvasGroup rewardsCanvasGroup; // 0x3C
	public List<MetaProgressionSingleReward> generatedRewards; // 0x40
	private MetaProgressionSo.MetaProgressData data; // 0x44
	private int stageIndex; // 0x48

	// Methods

	// RVA: 0xFC0C54 Offset: 0xFC0C54 VA: 0xFC0C54
	private void OnEnable() { }

	// RVA: 0xFC0D34 Offset: 0xFC0D34 VA: 0xFC0D34
	private void OnDisable() { }

	// RVA: 0xFC0E14 Offset: 0xFC0E14 VA: 0xFC0E14 Slot: 4
	public override void Init(MetaProgressionSo.MetaProgressData data, int dividerCount, int stageIndex) { }

	// RVA: 0xFC112C Offset: 0xFC112C VA: 0xFC112C
	private void CheckState() { }

	// RVA: 0xFC0EAC Offset: 0xFC0EAC VA: 0xFC0EAC
	private void SetRewards() { }

	// RVA: 0xFC1308 Offset: 0xFC1308 VA: 0xFC1308 Slot: 5
	public override void Collect() { }

	// RVA: 0xFC1554 Offset: 0xFC1554 VA: 0xFC1554
	private void OnCheckStageRewardedStateHandler() { }

	// RVA: 0xFC1558 Offset: 0xFC1558 VA: 0xFC1558
	public void .ctor() { }
}

// Namespace: 