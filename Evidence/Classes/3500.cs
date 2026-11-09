public class StarChallengeSO.RewardSlot // TypeDefIndex: 3500
{
	// Fields
	public StarChallengeSO.RewardSlotType slotType; // 0x8
	public StarChallengeSO.SingleReward singleReward; // 0xC
	public Sprite chestClosedIcon; // 0x10
	public Sprite chestOpenIcon; // 0x14
	[Tooltip("Rewards granted when this challenge is claimed.")]
	public List<StarChallengeSO.SingleReward> chestRewards; // 0x18

	// Properties
	public bool IsChest { get; }
	public IEnumerable<StarChallengeSO.SingleReward> GrantedRewards { get; }
	public IEnumerable<StarChallengeSO.SingleReward> AuthoredRewards { get; }

	// Methods

	// RVA: 0x10C476C Offset: 0x10C476C VA: 0x10C476C
	public bool get_IsChest() { }

	// RVA: 0x10C4780 Offset: 0x10C4780 VA: 0x10C4780
	public IEnumerable<StarChallengeSO.SingleReward> get_GrantedRewards() { }

	// RVA: 0x10C432C Offset: 0x10C432C VA: 0x10C432C
	public IEnumerable<StarChallengeSO.SingleReward> get_AuthoredRewards() { }

	// RVA: 0x10C3C4C Offset: 0x10C3C4C VA: 0x10C3C4C
	public void SetOwner(StarChallengeSO so) { }

	// RVA: 0x10C4694 Offset: 0x10C4694 VA: 0x10C4694
	public void .ctor() { }
}

// Namespace: 
[Serializable]