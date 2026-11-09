public class ShopPanelController : SingletonBehaviour<ShopPanelController> // TypeDefIndex: 3495
{
	// Fields
	private const float ActiveCarouselItemScale = 1.1;
	private const float InactiveCarouselItemScale = 0.9;
	[SerializeField]
	private ShopBundleSO[] carouselBundleSos; // 0x10
	[SerializeField]
	private ShopBundleSO[] postNoAdsBundleSos; // 0x14
	[SerializeField]
	private ShopBundleSO seasonPassBundleSos; // 0x18
	[SerializeField]
	private ShopNoAdsSO noAdsSo; // 0x1C
	[SerializeField]
	private ShopPackSO gemPackSo; // 0x20
	[SerializeField]
	private RectTransform shopPopup; // 0x24
	[SerializeField]
	private Button closeButton; // 0x28
	[SerializeField]
	private ScrollRect scrollRect; // 0x2C
	[SerializeField]
	private ScrollRect carouselScrollRect; // 0x30
	[SerializeField]
	private Image[] carouselPoints; // 0x34
	[SerializeField]
	private Color carouselPointActiveColor; // 0x38
	[SerializeField]
	private Color carouselPointInactiveColor; // 0x48
	private float carouselBeginDragPos; // 0x58
	private float carouselEndDragPos; // 0x5C
	private bool isCarouselBeingDragged; // 0x60
	private int activeCarouselItemIndex; // 0x64
	private readonly List<ShopPanelItemBase> allItems; // 0x68
	private readonly List<ShopPanelItemBase> allCarouselItems; // 0x6C
	private readonly List<ShopPanelItemBase> carouselItems; // 0x70
	private ShopPanelBundleItem starterBundleItem; // 0x74
	private ShopPanelBundleItem seasonPassBundleItem; // 0x78
	private ShopPanelNoAdsItem noAdsItem; // 0x7C
	private ShopPanelBundleItem postNoAdsNoAdsBundleItem; // 0x80
	private bool isVisible; // 0x84
	private bool autoHideOnAnyPurchase; // 0x85
	private bool hasPurchasedSinceShown; // 0x86
	private Action onClose; // 0x88

	// Methods

	// RVA: 0x10C0E70 Offset: 0x10C0E70 VA: 0x10C0E70 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10C12F8 Offset: 0x10C12F8 VA: 0x10C12F8
	private void Start() { }

	// RVA: 0x10C19F8 Offset: 0x10C19F8 VA: 0x10C19F8
	private void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10C1D98 Offset: 0x10C1D98 VA: 0x10C1D98
	private void OnSatoriFlagsRefreshedHandler() { }

	// RVA: 0x10C1D9C Offset: 0x10C1D9C VA: 0x10C1D9C
	public void Show(bool autoHideOnAnyPurchase, Action onClose) { }

	// RVA: 0x10C1AD4 Offset: 0x10C1AD4 VA: 0x10C1AD4
	private void Hide() { }

	// RVA: 0x10C23B0 Offset: 0x10C23B0 VA: 0x10C23B0
	private void OnPageOpened(PageButtonType type) { }

	// RVA: 0x10C1450 Offset: 0x10C1450 VA: 0x10C1450
	private void SpawnAllShopItems() { }

	// RVA: 0x10C1480 Offset: 0x10C1480 VA: 0x10C1480
	public void RefreshShopVisibility() { }

	// RVA: 0x10C23FC Offset: 0x10C23FC VA: 0x10C23FC
	private void SpawnCarouselBundles() { }

	// RVA: 0x10C265C Offset: 0x10C265C VA: 0x10C265C
	private void SpawnSeasonPassBundleItem() { }

	// RVA: 0x10C27E4 Offset: 0x10C27E4 VA: 0x10C27E4
	private void SpawnNoAdsItem() { }

	// RVA: 0x10C296C Offset: 0x10C296C VA: 0x10C296C
	private void SpawnPostNoAdsBundles() { }

	// RVA: 0x10C2BE8 Offset: 0x10C2BE8 VA: 0x10C2BE8
	private void SpawnGemsPack() { }

	// RVA: 0x10C2D58 Offset: 0x10C2D58 VA: 0x10C2D58
	protected void Update() { }

	// RVA: 0x10C32B8 Offset: 0x10C32B8 VA: 0x10C32B8
	private void OnCarouselScrolled(Vector2 scrollPos) { }

	// RVA: 0x10C222C Offset: 0x10C222C VA: 0x10C222C
	private void ResetCarouselScrollPosition() { }

	// RVA: 0x10C2F08 Offset: 0x10C2F08 VA: 0x10C2F08
	private void FocusOnActiveCarouselItem(bool immediately) { }

	// RVA: 0x10C335C Offset: 0x10C335C VA: 0x10C335C
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10C3368 Offset: 0x10C3368 VA: 0x10C3368
	public void .ctor() { }
}

// Namespace: Rotatelab.Shop