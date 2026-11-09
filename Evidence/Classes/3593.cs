public abstract class FreeOfferButton : OfferButton // TypeDefIndex: 3593
{
	// Fields
	[SerializeField]
	private RectTransform rewardEntriesParent; // 0x28
	[SerializeField]
	private BundleOffer rewardEntryPrefab; // 0x2C
	private BundleOffer[] rewardEntries; // 0x30

	// Properties
	public override ShopBundleSO.BundleOfferDetails[] Rewards { get; }
	public override IList<BundleOffer> RewardEntries { get; }

	// Methods

	// RVA: 0x10EB5B0 Offset: 0x10EB5B0 VA: 0x10EB5B0 Slot: 4
	public override ShopBundleSO.BundleOfferDetails[] get_Rewards() { }

	// RVA: 0x10EB5CC Offset: 0x10EB5CC VA: 0x10EB5CC Slot: 5
	public override IList<BundleOffer> get_RewardEntries() { }

	// RVA: 0x10EB5D4 Offset: 0x10EB5D4 VA: 0x10EB5D4 Slot: 6
	public override void Initialize(ChainOfferSo.ChainOfferData data, BaseChainOfferController controller) { }

	// RVA: 0x10EB89C Offset: 0x10EB89C VA: 0x10EB89C
	private void OnClaimButtonClicked() { }

	// RVA: 0x10EB9B0 Offset: 0x10EB9B0 VA: 0x10EB9B0
	protected void .ctor() { }
}

// Namespace: Rotatelab.ChainOffer