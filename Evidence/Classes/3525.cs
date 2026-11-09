public abstract class IapOfferButton : BaseOfferButton // TypeDefIndex: 3525
{
	// Fields
	public BaseOfferButton.BundleOfferType offerType; // 0x3C
	[SerializeField]
	private GameObject[] discountBadges; // 0x40
	[SerializeField]
	protected TMP_Text[] discountAmountTexts; // 0x44
	[CompilerGenerated]
	private bool <IsDiscountAvailable>k__BackingField; // 0x48

	// Properties
	protected abstract int DiscountAmount { get; }
	protected abstract bool IsOfferVisible { get; }
	protected bool IsDiscountAvailable { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 19
	protected abstract int get_DiscountAmount();

	// RVA: -1 Offset: -1 Slot: 20
	protected abstract bool get_IsOfferVisible();

	[CompilerGenerated]
	// RVA: 0x10CE3F0 Offset: 0x10CE3F0 VA: 0x10CE3F0
	protected bool get_IsDiscountAvailable() { }

	[CompilerGenerated]
	// RVA: 0x10CE3F8 Offset: 0x10CE3F8 VA: 0x10CE3F8
	private void set_IsDiscountAvailable(bool value) { }

	// RVA: 0x10CE400 Offset: 0x10CE400 VA: 0x10CE400 Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10CE584 Offset: 0x10CE584 VA: 0x10CE584 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10CE708 Offset: 0x10CE708 VA: 0x10CE708 Slot: 21
	protected virtual void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10CE70C Offset: 0x10CE70C VA: 0x10CE70C Slot: 12
	protected override void Start() { }

	// RVA: 0x10CE724 Offset: 0x10CE724 VA: 0x10CE724
	protected void RefreshOfferState() { }

	// RVA: 0x10CE864 Offset: 0x10CE864 VA: 0x10CE864 Slot: 22
	protected virtual void UpdateDiscountState() { }

	// RVA: 0x10CE900 Offset: 0x10CE900 VA: 0x10CE900
	private void UpdateDiscountAmountText() { }

	// RVA: 0x10CEA10 Offset: 0x10CEA10 VA: 0x10CEA10
	private void OnBundleOfferNotificationRequestedHandler(BaseOfferButton.BundleOfferType bundleOfferType, float popupOpenDelay) { }

	// RVA: 0x10CEAE0 Offset: 0x10CEAE0 VA: 0x10CEAE0
	protected void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10CEAE8 Offset: 0x10CEAE8 VA: 0x10CEAE8
	private void <OnBundleOfferNotificationRequestedHandler>b__18_0() { }
}

// Namespace: Rotatelab.Shop