public class BundlePurchaseButton : PurchaseButtonBase // TypeDefIndex: 3095
{
	// Fields
	[HideInInspector]
	public ShopBundleSO bundleSo; // 0x20

	// Properties
	public override string RewardKey { get; }

	// Methods

	// RVA: 0xFA6844 Offset: 0xFA6844 VA: 0xFA6844 Slot: 4
	public override string get_RewardKey() { }

	// RVA: 0xFA6868 Offset: 0xFA6868 VA: 0xFA6868
	public void Initialize(ShopBundleSO bundleSo, bool isDiscountAvailable = False) { }

	// RVA: 0xFA69E4 Offset: 0xFA69E4 VA: 0xFA69E4
	public void RefreshProduct() { }

	// RVA: 0xFA6AA0 Offset: 0xFA6AA0 VA: 0xFA6AA0 Slot: 5
	public override void OnPurchaseSuccess(bool isReapplyingRewards) { }

	// RVA: 0xFA6D9C Offset: 0xFA6D9C VA: 0xFA6D9C
	public void .ctor() { }
}

// Namespace: 