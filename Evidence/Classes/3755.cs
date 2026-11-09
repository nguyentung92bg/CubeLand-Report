public class FailPanelController : MonoBehaviour // TypeDefIndex: 3755
{
	// Fields
	private const float ActiveCarouselItemScale = 1.1;
	private const float InactiveCarouselItemScale = 0.9;
	[SerializeField]
	private PopupController failPopupController; // 0x10
	[SerializeField]
	private CanvasGroup failPopupCanvasGroup; // 0x14
	[SerializeField]
	private PreBoosterGenerator preBoosterGenerator; // 0x18
	public RectTransform failPanel; // 0x1C
	public GameObject infiniteLives; // 0x20
	public TextAnimatorPlayer header; // 0x24
	public TextMeshProUGUI levelText; // 0x28
	public TextMeshProUGUI playOnLevelText; // 0x2C
	public TextMeshProUGUI costText; // 0x30
	public TextMeshProUGUI rewardedMoveAmountText; // 0x34
	public TextMeshProUGUI rewardedCapText; // 0x38
	public RectTransform failContentPanel; // 0x3C
	public RectTransform continueContentPanel; // 0x40
	public List<EndGlow> finalGlows; // 0x44
	public Button failPopupCloseButton; // 0x48
	public GameObject failIcon; // 0x4C
	public GameObject heartSlotsParent; // 0x50
	public RectTransform holdToSeeBoard; // 0x54
	public List<GameObject> heartSlots; // 0x58
	public GameObject rewardArea; // 0x5C
	public ShopBundleSO failProofOfferSO; // 0x60
	public ShopBundleSO seasonPassFailOfferSO; // 0x64
	[SerializeField]
	private ScrollRect carouselScrollRect; // 0x68
	[SerializeField]
	private RectTransform carouselScrollRectTransform; // 0x6C
	[SerializeField]
	private RectTransform carouselContent; // 0x70
	[SerializeField]
	private Image[] carouselPoints; // 0x74
	[SerializeField]
	private Color carouselPointActiveColor; // 0x78
	[SerializeField]
	private Color carouselPointInactiveColor; // 0x88
	[SerializeField]
	private GameObject rewardedCapArea; // 0x98
	[SerializeField]
	private Button buyWithRewardedAdButton; // 0x9C
	[SerializeField]
	private TMP_Text bounceAmountText; // 0xA0
	[SerializeField]
	private GameObject bounceAmountIcon; // 0xA4
	[SerializeField]
	private GameObject extraSlotRewardIcon; // 0xA8
	[SerializeField]
	private FailProgressLossPage progressLossPage; // 0xAC
	[SerializeField]
	private Image rewardedLeftIconBg; // 0xB0
	private readonly List<ShopPanelBundleItem> allCarouselItems; // 0xB4
	private readonly List<ShopPanelBundleItem> carouselItems; // 0xB8
	private ShopPanelBundleItem failProofItem; // 0xBC
	private int activeCarouselItemIndex; // 0xC0
	private bool isCarouselBeingDragged; // 0xC4
	private float carouselBeginDragPos; // 0xC8
	private float carouselEndDragPos; // 0xCC
	public Button invisibleTapToSkip; // 0xD0
	private Tween _failPanelTween; // 0xD4
	private bool _isRewardAreaActive; // 0xD8
	private bool _isPlayOnOfferOnScreen; // 0xD9
	private bool _willShowCarousel; // 0xDA
	public VideoPlayer videoPlayer; // 0xDC
	private const int DefaultPlayOnBlasterCount = 3;
	private static readonly PlayOnOffer[] ConsecutiveCoinOffers; // 0x0
	private PlayOnOffer currentCoinOffer; // 0xE0

	// Properties
	public static int levelBasePlayOnUseCount { get; set; }

	// Methods

	// RVA: 0x1118DBC Offset: 0x1118DBC VA: 0x1118DBC
	public static int get_levelBasePlayOnUseCount() { }

	// RVA: 0x1118E10 Offset: 0x1118E10 VA: 0x1118E10
	public static void set_levelBasePlayOnUseCount(int value) { }

	// RVA: 0x1118E68 Offset: 0x1118E68 VA: 0x1118E68
	protected void Awake() { }

	// RVA: 0x1119100 Offset: 0x1119100 VA: 0x1119100
	private PlayOnOffer GetCoinOffer() { }

	// RVA: 0x111926C Offset: 0x111926C VA: 0x111926C
	private void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x11194D8 Offset: 0x11194D8 VA: 0x11194D8
	private void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0x11197A4 Offset: 0x11197A4 VA: 0x11197A4
	private void OnLevelFailedHandler() { }

	// RVA: 0x111ABE0 Offset: 0x111ABE0 VA: 0x111ABE0
	public void RetryLevel() { }

	// RVA: 0x111AE44 Offset: 0x111AE44 VA: 0x111AE44
	public void ReturnPreGame() { }

	// RVA: 0x111AD00 Offset: 0x111AD00 VA: 0x111AD00
	private static bool TryFailCloudRushRun(FailPanelController.GameExitOptions exitOption) { }

	// RVA: 0x111AF64 Offset: 0x111AF64 VA: 0x111AF64
	public void InvisibleTapToSkipClick() { }

	// RVA: 0x111B5F8 Offset: 0x111B5F8 VA: 0x111B5F8
	public void PressContinue() { }

	// RVA: 0x111BD14 Offset: 0x111BD14 VA: 0x111BD14
	public void PressContinueRw() { }

	// RVA: 0x111B958 Offset: 0x111B958 VA: 0x111B958
	private void TriggerPlayOn(string source, PlayOnOffer offer) { }

	// RVA: 0x111BE68 Offset: 0x111BE68 VA: 0x111BE68
	public void OnPlayOnCloseClicked() { }

	// RVA: 0x111C314 Offset: 0x111C314 VA: 0x111C314
	public void HoldToSeeBoardPointerUp() { }

	// RVA: 0x111C32C Offset: 0x111C32C VA: 0x111C32C
	public void HoldToSeeBoardPointerDown() { }

	// RVA: 0x111C344 Offset: 0x111C344 VA: 0x111C344
	protected void Update() { }

	// RVA: 0x111A7E0 Offset: 0x111A7E0 VA: 0x111A7E0
	private void RebuildCarouselItems() { }

	// RVA: 0x111C87C Offset: 0x111C87C VA: 0x111C87C
	private void OnCarouselScrolled(Vector2 scrollPos) { }

	// RVA: 0x111AA5C Offset: 0x111AA5C VA: 0x111AA5C
	private void ResetCarouselScrollPosition() { }

	// RVA: 0x111C4F4 Offset: 0x111C4F4 VA: 0x111C4F4
	private void FocusOnActiveCarouselItem(bool immediately) { }

	// RVA: 0x111C910 Offset: 0x111C910 VA: 0x111C910
	public void .ctor() { }

	// RVA: 0x111C9D0 Offset: 0x111C9D0 VA: 0x111C9D0
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x111CAD8 Offset: 0x111CAD8 VA: 0x111CAD8
	private void <InvisibleTapToSkipClick>b__65_1() { }

	[CompilerGenerated]
	// RVA: 0x111CB90 Offset: 0x111CB90 VA: 0x111CB90
	private void <InvisibleTapToSkipClick>b__65_3() { }

	[CompilerGenerated]
	// RVA: 0x111CC48 Offset: 0x111CC48 VA: 0x111CC48
	private void <PressContinue>b__66_0() { }

	[CompilerGenerated]
	// RVA: 0x111CC70 Offset: 0x111CC70 VA: 0x111CC70
	private void <PressContinueRw>g__RwSuccess|67_0() { }
}

// Namespace: Rotatelab.UI