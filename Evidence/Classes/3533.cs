public abstract class RewardBase : ScriptableObject // TypeDefIndex: 3533
{
	// Fields
	public int amount; // 0xC
	public Sprite rewardImage; // 0x10

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void GiveReward();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void GiveReward(RectTransform uIParticleInsPos);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract string GetAmountString();

	// RVA: 0x10D33CC Offset: 0x10D33CC VA: 0x10D33CC
	protected void .ctor() { }
}

// Namespace: Rotatelab.Shop