public class DailyDeliverySO.RewardSlot // TypeDefIndex: 3560
{
	// Fields
	public DailyDeliverySO.RewardSlotType slotType; // 0x8
	public DailyDeliverySO.SingleReward singleReward; // 0xC
	public Sprite chestClosedIcon; // 0x10
	public Sprite chestOpenIcon; // 0x14
	[Tooltip("Rewards granted when this chest is claimed.")]
	public List<DailyDeliverySO.SingleReward> chestRewards; // 0x18

	// Properties
	public bool IsChest { get; }
	public IEnumerable<DailyDeliverySO.SingleReward> GrantedRewards { get; }
	public IEnumerable<DailyDeliverySO.SingleReward> AuthoredRewards { get; }

	// Methods

	// RVA: 0x10D9270 Offset: 0x10D9270 VA: 0x10D9270
	public bool get_IsChest() { }

	// RVA: 0x10D8064 Offset: 0x10D8064 VA: 0x10D8064
	public IEnumerable<DailyDeliverySO.SingleReward> get_GrantedRewards() { }

	// RVA: 0x10DA4E8 Offset: 0x10DA4E8 VA: 0x10DA4E8
	public IEnumerable<DailyDeliverySO.SingleReward> get_AuthoredRewards() { }

	// RVA: 0x10DA684 Offset: 0x10DA684 VA: 0x10DA684
	public void SetOwner(DailyDeliverySO so) { }

	// RVA: 0x10DA8FC Offset: 0x10DA8FC VA: 0x10DA8FC
	public void .ctor() { }
}

// Namespace: 
[Serializable]