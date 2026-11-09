public class DailyDeliveryChestViewer : MonoBehaviour // TypeDefIndex: 3542
{
	// Fields
	[SerializeField]
	private RectTransform panel; // 0x10
	[SerializeField]
	private DailyDeliverySingleReward singleRewardPrefab; // 0x14
	[SerializeField]
	private float visibleDuration; // 0x18
	[SerializeField]
	private float anchorOffsetY; // 0x1C
	private readonly List<DailyDeliverySingleReward> spawnedCells; // 0x20
	private Sequence viewSequence; // 0x28

	// Methods

	// RVA: 0x10D5094 Offset: 0x10D5094 VA: 0x10D5094
	protected void OnEnable() { }

	// RVA: 0x10D519C Offset: 0x10D519C VA: 0x10D519C
	protected void OnDisable() { }

	// RVA: 0x10D532C Offset: 0x10D532C VA: 0x10D532C
	private void OnChestViewRequestedHandler(DailyDeliverySO.RewardSlot slot, Transform chest) { }

	// RVA: 0x10D5760 Offset: 0x10D5760 VA: 0x10D5760
	private void BuildCells(DailyDeliverySO.RewardSlot slot) { }

	// RVA: 0x10D5C08 Offset: 0x10D5C08 VA: 0x10D5C08
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]