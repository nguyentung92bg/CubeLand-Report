public class StarterBundleOfferButton : IapOfferButton // TypeDefIndex: 3530
{
	// Fields
	[SerializeField]
	private ShopBundleSO bundleSo; // 0x4C
	[SerializeField]
	private Transform contentArea; // 0x50
	[SerializeField]
	private MainScreenBundleOfferItem mainScreenBundleOfferItem; // 0x54
	private MainScreenBundleOfferItem spawnedMainScreenItem; // 0x58
	private readonly ForcedOfferPopupTracker forcedPopupTracker; // 0x5C

	// Properties
	protected override int DiscountAmount { get; }
	protected override bool IsOfferVisible { get; }
	public override MetaScreenType TriggeredOfferOrder { get; }

	// Methods

	// RVA: 0x10D1A30 Offset: 0x10D1A30 VA: 0x10D1A30 Slot: 19
	protected override int get_DiscountAmount() { }

	// RVA: 0x10D1A4C Offset: 0x10D1A4C VA: 0x10D1A4C Slot: 20
	protected override bool get_IsOfferVisible() { }

	// RVA: 0x10D1AF4 Offset: 0x10D1AF4 VA: 0x10D1AF4 Slot: 7
	public override bool IsTriggeredOfferEligible(OfferTrigger trigger) { }

	// RVA: 0x10D1BAC Offset: 0x10D1BAC VA: 0x10D1BAC Slot: 8
	public override MetaScreenType get_TriggeredOfferOrder() { }

	// RVA: 0x10D1BB4 Offset: 0x10D1BB4 VA: 0x10D1BB4 Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10D1CBC Offset: 0x10D1CBC VA: 0x10D1CBC Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10D1DC4 Offset: 0x10D1DC4 VA: 0x10D1DC4 Slot: 12
	protected override void Start() { }

	// RVA: 0x10D1FFC Offset: 0x10D1FFC VA: 0x10D1FFC Slot: 21
	protected override void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10D210C Offset: 0x10D210C VA: 0x10D210C
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10D1E98 Offset: 0x10D1E98 VA: 0x10D1E98
	private void TryRequestForcedPopup(bool isSessionStart) { }

	// RVA: 0x10D211C Offset: 0x10D211C VA: 0x10D211C Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10D224C Offset: 0x10D224C VA: 0x10D224C Slot: 18
	public override void HidePopup() { }

	// RVA: 0x10D22B8 Offset: 0x10D22B8 VA: 0x10D22B8 Slot: 14
	protected override void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10D2390 Offset: 0x10D2390 VA: 0x10D2390
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10D242C Offset: 0x10D242C VA: 0x10D242C
	private void <TryRequestForcedPopup>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x10D2510 Offset: 0x10D2510 VA: 0x10D2510
	private void <OnPurchaseSucceededHandler>b__20_0() { }
}

// Namespace: Rotatelab.Shop