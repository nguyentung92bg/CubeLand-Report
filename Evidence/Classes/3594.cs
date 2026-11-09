public interface ILinkedOfferButton // TypeDefIndex: 3594
{
	// Properties
	public abstract GridLayoutGroup RewardEntriesGridLayout { get; }
	public abstract ShopBundleSO.BundleOfferDetails[] Rewards { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract GridLayoutGroup get_RewardEntriesGridLayout();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract ShopBundleSO.BundleOfferDetails[] get_Rewards();

	// RVA: 0x10EB9C0 Offset: 0x10EB9C0 VA: 0x10EB9C0 Slot: 2
	public virtual void Initialize() { }
}

// Namespace: Rotatelab.ChainOffer