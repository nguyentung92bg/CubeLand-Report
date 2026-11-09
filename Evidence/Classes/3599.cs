public abstract class PaidOfferButton : OfferButton // TypeDefIndex: 3599
{
	// Properties
	public override ShopBundleSO.BundleOfferDetails[] Rewards { get; }
	public override IList<BundleOffer> RewardEntries { get; }

	// Methods

	// RVA: 0x10EBCC0 Offset: 0x10EBCC0 VA: 0x10EBCC0 Slot: 4
	public override ShopBundleSO.BundleOfferDetails[] get_Rewards() { }

	// RVA: 0x10EBCEC Offset: 0x10EBCEC VA: 0x10EBCEC Slot: 5
	public override IList<BundleOffer> get_RewardEntries() { }

	// RVA: 0x10EBD54 Offset: 0x10EBD54 VA: 0x10EBD54 Slot: 6
	public override void Initialize(ChainOfferSo.ChainOfferData data, BaseChainOfferController controller) { }

	// RVA: 0x10EBB6C Offset: 0x10EBB6C VA: 0x10EBB6C
	protected void .ctor() { }
}

// Namespace: Rotatelab.ChainOffer