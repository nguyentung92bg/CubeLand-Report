public class PackPurchaseButton : PurchaseButtonBase // TypeDefIndex: 3097
{
	// Fields
	private int _offerIndex; // 0x20
	[HideInInspector]
	public ShopPackSO packSo; // 0x24

	// Properties
	public override string RewardKey { get; }

	// Methods

	// RVA: 0xFA7014 Offset: 0xFA7014 VA: 0xFA7014 Slot: 4
	public override string get_RewardKey() { }

	// RVA: 0xFA70B8 Offset: 0xFA70B8 VA: 0xFA70B8
	public void Initialize(ShopPackSO packSo, int index) { }

	// RVA: 0xFA72C4 Offset: 0xFA72C4 VA: 0xFA72C4 Slot: 5
	public override void OnPurchaseSuccess(bool isReapplyingRewards) { }

	// RVA: 0xFA73BC Offset: 0xFA73BC VA: 0xFA73BC
	public void .ctor() { }
}

// Namespace: 