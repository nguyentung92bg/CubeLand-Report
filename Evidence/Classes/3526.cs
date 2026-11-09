public class NoAdsBundleOfferButton : IapOfferButton // TypeDefIndex: 3526
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

	// RVA: 0x10CEAF8 Offset: 0x10CEAF8 VA: 0x10CEAF8 Slot: 19
	protected override int get_DiscountAmount() { }

	// RVA: 0x10CEB14 Offset: 0x10CEB14 VA: 0x10CEB14 Slot: 20
	protected override bool get_IsOfferVisible() { }

	// RVA: 0x10CEBD8 Offset: 0x10CEBD8 VA: 0x10CEBD8 Slot: 7
	public override bool IsTriggeredOfferEligible(OfferTrigger trigger) { }

	// RVA: 0x10CEC90 Offset: 0x10CEC90 VA: 0x10CEC90 Slot: 8
	public override MetaScreenType get_TriggeredOfferOrder() { }

	// RVA: 0x10CEC98 Offset: 0x10CEC98 VA: 0x10CEC98 Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10CEDA0 Offset: 0x10CEDA0 VA: 0x10CEDA0 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10CEEA8 Offset: 0x10CEEA8 VA: 0x10CEEA8 Slot: 12
	protected override void Start() { }

	// RVA: 0x10CF0E0 Offset: 0x10CF0E0 VA: 0x10CF0E0 Slot: 21
	protected override void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10CF248 Offset: 0x10CF248 VA: 0x10CF248
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10CEF7C Offset: 0x10CEF7C VA: 0x10CEF7C
	private void TryRequestForcedPopup(bool isSessionStart) { }

	// RVA: 0x10CF258 Offset: 0x10CF258 VA: 0x10CF258 Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10CF3A0 Offset: 0x10CF3A0 VA: 0x10CF3A0 Slot: 18
	public override void HidePopup() { }

	// RVA: 0x10CF40C Offset: 0x10CF40C VA: 0x10CF40C Slot: 14
	protected override void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10CF500 Offset: 0x10CF500 VA: 0x10CF500
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10CF59C Offset: 0x10CF59C VA: 0x10CF59C
	private void <TryRequestForcedPopup>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x10CF680 Offset: 0x10CF680 VA: 0x10CF680
	private void <OnPurchaseSucceededHandler>b__20_0() { }
}

// Namespace: Rotatelab.Shop