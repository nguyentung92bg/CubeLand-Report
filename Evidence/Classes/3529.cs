public class SeasonalOfferButton : IapOfferButton // TypeDefIndex: 3529
{
	// Fields
	[SerializeField]
	private ShopSeasonalOfferSO seasonalOfferSo; // 0x4C
	[SerializeField]
	private Transform contentArea; // 0x50
	[SerializeField]
	private MainScreenBundleOfferItem mainScreenBundleOfferItem; // 0x54
	[SerializeField]
	private Image headerImage; // 0x58
	[SerializeField]
	private Image bgImage; // 0x5C
	[SerializeField]
	private Image buttonImage; // 0x60
	[SerializeField]
	private GameObject[] offerDurationObjects; // 0x64
	[SerializeField]
	private TMP_Text[] offerDurationTexts; // 0x68
	private MainScreenBundleOfferItem spawnedMainScreenItem; // 0x6C
	private Coroutine _tickRoutine; // 0x70
	private const long MaxUnixTimeSeconds = 253402300799;

	// Properties
	private static SatoriSeasonalOfferFlag Flag { get; }
	private bool IsOfferIndexValid { get; }
	private ShopSeasonalOfferSO.SeasonalOfferData CurrentOffer { get; }
	protected override int DiscountAmount { get; }
	protected override bool IsOfferVisible { get; }
	private bool IsWithinOfferWindow { get; }
	private DateTimeOffset OfferStartTime { get; }
	private DateTimeOffset OfferEndTime { get; }
	private int OfferPurchasedYear { get; set; }
	private int OfferYear { get; }
	private bool OfferPurchased { get; }
	private static int ForcedSeasonalOfferVersion { get; set; }

	// Methods

	// RVA: 0x10D01EC Offset: 0x10D01EC VA: 0x10D01EC
	private static SatoriSeasonalOfferFlag get_Flag() { }

	// RVA: 0x10D024C Offset: 0x10D024C VA: 0x10D024C
	private bool get_IsOfferIndexValid() { }

	// RVA: 0x10D02D0 Offset: 0x10D02D0 VA: 0x10D02D0
	private ShopSeasonalOfferSO.SeasonalOfferData get_CurrentOffer() { }

	// RVA: 0x10D0360 Offset: 0x10D0360 VA: 0x10D0360 Slot: 19
	protected override int get_DiscountAmount() { }

	// RVA: 0x10D0380 Offset: 0x10D0380 VA: 0x10D0380 Slot: 20
	protected override bool get_IsOfferVisible() { }

	// RVA: 0x10D0488 Offset: 0x10D0488 VA: 0x10D0488
	private bool get_IsWithinOfferWindow() { }

	// RVA: 0x10D07D8 Offset: 0x10D07D8 VA: 0x10D07D8
	private static bool IsValidUnixTime(long seconds) { }

	// RVA: 0x10D0580 Offset: 0x10D0580 VA: 0x10D0580
	private DateTimeOffset get_OfferStartTime() { }

	// RVA: 0x10D06D4 Offset: 0x10D06D4 VA: 0x10D06D4
	private DateTimeOffset get_OfferEndTime() { }

	// RVA: 0x10D07FC Offset: 0x10D07FC VA: 0x10D07FC
	private int get_OfferPurchasedYear() { }

	// RVA: 0x10D087C Offset: 0x10D087C VA: 0x10D087C
	private void set_OfferPurchasedYear(int value) { }

	// RVA: 0x10D0900 Offset: 0x10D0900 VA: 0x10D0900
	private int get_OfferYear() { }

	// RVA: 0x10D0468 Offset: 0x10D0468 VA: 0x10D0468
	private bool get_OfferPurchased() { }

	// RVA: 0x10D09E0 Offset: 0x10D09E0 VA: 0x10D09E0
	private static int get_ForcedSeasonalOfferVersion() { }

	// RVA: 0x10D0A34 Offset: 0x10D0A34 VA: 0x10D0A34
	private static void set_ForcedSeasonalOfferVersion(int value) { }

	// RVA: 0x10D0A8C Offset: 0x10D0A8C VA: 0x10D0A8C Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10D0C30 Offset: 0x10D0C30 VA: 0x10D0C30 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10D0DD4 Offset: 0x10D0DD4 VA: 0x10D0DD4 Slot: 12
	protected override void Start() { }

	// RVA: 0x10D0E9C Offset: 0x10D0E9C VA: 0x10D0E9C
	private void OnSatoriFlagsRefreshedHandler() { }

	// RVA: 0x10D0EA0 Offset: 0x10D0EA0 VA: 0x10D0EA0 Slot: 21
	protected override void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x10D1098 Offset: 0x10D1098 VA: 0x10D1098 Slot: 22
	protected override void UpdateDiscountState() { }

	// RVA: 0x10D1168 Offset: 0x10D1168 VA: 0x10D1168
	private IEnumerator TickRoutine() { }

	// RVA: 0x10D11FC Offset: 0x10D11FC VA: 0x10D11FC
	private bool UpdateOfferDuration() { }

	// RVA: 0x10D146C Offset: 0x10D146C VA: 0x10D146C
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10D15A8 Offset: 0x10D15A8 VA: 0x10D15A8 Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10D16D8 Offset: 0x10D16D8 VA: 0x10D16D8 Slot: 18
	public override void HidePopup() { }

	// RVA: 0x10D1744 Offset: 0x10D1744 VA: 0x10D1744 Slot: 14
	protected override void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10D1810 Offset: 0x10D1810 VA: 0x10D1810
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10D1818 Offset: 0x10D1818 VA: 0x10D1818
	private void <OnMainCanvasChangeEndedHandler>b__46_0() { }
}

// Namespace: Rotatelab.Shop