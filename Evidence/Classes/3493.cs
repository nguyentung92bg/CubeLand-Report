public class ShopBundleOfferController : MonoBehaviour // TypeDefIndex: 3493
{
	// Fields
	[SerializeField]
	private BundlePurchaseButton purchaseButton; // 0x10
	[SerializeField]
	private TextMeshProUGUI coinOfferText; // 0x14
	[SerializeField]
	private bool hideNoAdsOffer; // 0x18
	[SerializeField]
	private RectTransform offersParent; // 0x1C
	[SerializeField]
	private BundleOffer offerPrefab; // 0x20
	[SerializeField]
	private GridLayoutGroup offersGrid; // 0x24
	[SerializeField]
	private float[] spacingByOfferCount; // 0x28
	private readonly List<BundleOffer> offers; // 0x2C
	private Sequence offersSequence; // 0x30
	private ShopBundleSO.BundleOfferDetails[] shownElements; // 0x34

	// Properties
	public List<BundleOffer> Offers { get; }

	// Methods

	// RVA: 0x10C07AC Offset: 0x10C07AC VA: 0x10C07AC
	public List<BundleOffer> get_Offers() { }

	// RVA: 0x10C0094 Offset: 0x10C0094 VA: 0x10C0094
	public void Initialize(ShopBundleSO bundle, bool isDiscountAvailable) { }

	// RVA: 0x10C0134 Offset: 0x10C0134 VA: 0x10C0134
	public void RefreshIfBundleChanged() { }

	// RVA: 0x10C07B4 Offset: 0x10C07B4 VA: 0x10C07B4
	private void SpawnOffers(ShopBundleSO bundle) { }

	// RVA: 0x10C0CB4 Offset: 0x10C0CB4 VA: 0x10C0CB4
	private void ApplyOffersGridSpacing() { }

	// RVA: 0x10C0D70 Offset: 0x10C0D70 VA: 0x10C0D70
	protected void OnEnable() { }

	// RVA: 0x10C0ABC Offset: 0x10C0ABC VA: 0x10C0ABC
	private void PlayOffersAnimationSequence() { }

	// RVA: 0x10C0D74 Offset: 0x10C0D74 VA: 0x10C0D74
	public void .ctor() { }
}

// Namespace: Rotatelab.Shop