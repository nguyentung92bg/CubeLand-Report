public class SuperHardOffer : MonoBehaviour // TypeDefIndex: 3531
{
	// Fields
	[SerializeField]
	private ShopBundleSO bundleSo; // 0x10
	[SerializeField]
	private ShopBundleOfferController offerController; // 0x14
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x18
	private bool isOfferInit; // 0x1C
	private bool isPopupActive; // 0x1D
	private Action onClosed; // 0x20
	private int trackedLevel; // 0x24
	private int opportunityCount; // 0x28
	private int shownCount; // 0x2C
	private bool isPurchasedOnTrackedLevel; // 0x30

	// Properties
	private static SatoriSuperHardOfferConfigFlag Config { get; }

	// Methods

	// RVA: 0x10D2554 Offset: 0x10D2554 VA: 0x10D2554
	private static SatoriSuperHardOfferConfigFlag get_Config() { }

	// RVA: 0x10D25B4 Offset: 0x10D25B4 VA: 0x10D25B4
	protected void OnEnable() { }

	// RVA: 0x10D27E0 Offset: 0x10D27E0 VA: 0x10D27E0
	protected void OnDisable() { }

	// RVA: 0x10D2A0C Offset: 0x10D2A0C VA: 0x10D2A0C
	private void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10D2BCC Offset: 0x10D2BCC VA: 0x10D2BCC
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10D2ACC Offset: 0x10D2ACC VA: 0x10D2ACC
	private void TryRequestOnMainMenuArrival() { }

	// RVA: 0x10D2DE8 Offset: 0x10D2DE8 VA: 0x10D2DE8
	public void ShowOnPlayButton(Action onClosed) { }

	// RVA: 0x10D2BD8 Offset: 0x10D2BD8 VA: 0x10D2BD8
	private bool IsDue() { }

	// RVA: 0x10D2FB4 Offset: 0x10D2FB4 VA: 0x10D2FB4
	private void OnPurchaseSucceededHandler(IapObject obj) { }

	// RVA: 0x10D2E54 Offset: 0x10D2E54 VA: 0x10D2E54
	private void Show(Action onClosed) { }

	// RVA: 0x10D2FCC Offset: 0x10D2FCC VA: 0x10D2FCC
	public void Hide() { }

	// RVA: 0x10D3184 Offset: 0x10D3184 VA: 0x10D3184
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10D318C Offset: 0x10D318C VA: 0x10D318C
	private void <TryRequestOnMainMenuArrival>b__16_0() { }
}

// Namespace: Rotatelab.Shop