public class NoAdsPurchaseButton : PurchaseButtonBase // TypeDefIndex: 3096
{
	// Fields
	[HideInInspector]
	public ShopNoAdsSO noAdsSo; // 0x20

	// Properties
	public override string RewardKey { get; }

	// Methods

	// RVA: 0xFA6DAC Offset: 0xFA6DAC VA: 0xFA6DAC Slot: 4
	public override string get_RewardKey() { }

	// RVA: 0xFA6DD0 Offset: 0xFA6DD0 VA: 0xFA6DD0
	public void Initialize(ShopNoAdsSO noAdsSo, bool isDiscountAvailable = False) { }

	// RVA: 0xFA6F4C Offset: 0xFA6F4C VA: 0xFA6F4C Slot: 5
	public override void OnPurchaseSuccess(bool isReapplyingRewards) { }

	// RVA: 0xFA700C Offset: 0xFA700C VA: 0xFA700C
	public void .ctor() { }
}

// Namespace: 