public class NoAdsOfferButton : IapOfferButton // TypeDefIndex: 3527
{
	// Fields
	[SerializeField]
	private ShopNoAdsSO noAdsSo; // 0x4C
	[SerializeField]
	private NoAdsPurchaseButton noAdsPurchaseButton; // 0x50
	private readonly ForcedOfferPopupTracker forcedPopupTracker; // 0x54

	// Properties
	protected override int DiscountAmount { get; }
	protected override bool IsOfferVisible { get; }
	public override MetaScreenType TriggeredOfferOrder { get; }

	// Methods

	// RVA: 0x10CF6C4 Offset: 0x10CF6C4 VA: 0x10CF6C4 Slot: 19
	protected override int get_DiscountAmount() { }

	// RVA: 0x10CF6E0 Offset: 0x10CF6E0 VA: 0x10CF6E0 Slot: 20
	protected override bool get_IsOfferVisible() { }

	// RVA: 0x10CF7A4 Offset: 0x10CF7A4 VA: 0x10CF7A4 Slot: 7
	public override bool IsTriggeredOfferEligible(OfferTrigger trigger) { }

	// RVA: 0x10CF85C Offset: 0x10CF85C VA: 0x10CF85C Slot: 8
	public override MetaScreenType get_TriggeredOfferOrder() { }

	// RVA: 0x10CF864 Offset: 0x10CF864 VA: 0x10CF864 Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10CFA08 Offset: 0x10CFA08 VA: 0x10CFA08 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10CFBAC Offset: 0x10CFBAC VA: 0x10CFBAC
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10CFBBC Offset: 0x10CFBBC VA: 0x10CFBBC
	private void TryRequestForcedPopup(bool isSessionStart) { }

	// RVA: 0x10CFD20 Offset: 0x10CFD20 VA: 0x10CFD20 Slot: 12
	protected override void Start() { }

	// RVA: 0x10CFDF4 Offset: 0x10CFDF4 VA: 0x10CFDF4 Slot: 21
	protected override void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10CFEA4 Offset: 0x10CFEA4 VA: 0x10CFEA4 Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10CFFD4 Offset: 0x10CFFD4 VA: 0x10CFFD4 Slot: 18
	public override void HidePopup() { }

	// RVA: 0x10D0040 Offset: 0x10D0040 VA: 0x10D0040 Slot: 14
	protected override void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10D0068 Offset: 0x10D0068 VA: 0x10D0068
	private void OnSatoriFlagsRefreshedHandler() { }

	// RVA: 0x10D006C Offset: 0x10D006C VA: 0x10D006C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10D0108 Offset: 0x10D0108 VA: 0x10D0108
	private void <TryRequestForcedPopup>b__13_0() { }
}

// Namespace: 
[CompilerGenerated]