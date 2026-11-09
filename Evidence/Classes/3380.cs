public class SeasonPassCheckpoint : SeasonPassCheckpointBase // TypeDefIndex: 3380
{
	// Fields
	[SerializeField]
	private SeasonPassFreeReward freeReward; // 0x14
	[SerializeField]
	private SeasonPassPaidReward paidReward; // 0x18
	[SerializeField]
	private Image indexBg; // 0x1C
	[SerializeField]
	private TMP_Text indexText; // 0x20
	[SerializeField]
	private Sprite freeSprite; // 0x24
	[SerializeField]
	private Sprite collectedSprite; // 0x28
	[SerializeField]
	private Sprite uncollectedSprite; // 0x2C
	[SerializeField]
	private GameObject currentCheckpointHighlighter; // 0x30
	private SeasonPassSo.SeasonPassCheckpointData checkpointData; // 0x34
	private int checkpointIndex; // 0x38
	private bool isGift; // 0x3C

	// Methods

	// RVA: 0x10A053C Offset: 0x10A053C VA: 0x10A053C Slot: 5
	public override void Init(SeasonPassSo.SeasonPassCheckpointData data, int index) { }

	// RVA: 0x10A08A0 Offset: 0x10A08A0 VA: 0x10A08A0
	public void SetHighlight(bool active) { }

	// RVA: 0x10A08CC Offset: 0x10A08CC VA: 0x10A08CC
	public void HideClaimButtons() { }

	// RVA: 0x10A0970 Offset: 0x10A0970 VA: 0x10A0970
	public void UpdateCheckPoint() { }

	// RVA: 0x10A0998 Offset: 0x10A0998 VA: 0x10A0998
	public void .ctor() { }
}

// Namespace: Rotatelab.SeasonPass