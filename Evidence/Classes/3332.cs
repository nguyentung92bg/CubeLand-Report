public class HeartPurchasePopup : PopupController // TypeDefIndex: 3332
{
	// Fields
	[SerializeField]
	private RectTransform popup; // 0x1C
	[SerializeField]
	private TextMeshProUGUI headerText; // 0x20
	[SerializeField]
	private Button closeButton; // 0x24
	[SerializeField]
	private RectTransform[] heartSlots; // 0x28
	[SerializeField]
	private GameObject heartSlotGo; // 0x2C
	[SerializeField]
	private GameObject timerGo; // 0x30
	[SerializeField]
	private GameObject coinButtonGo; // 0x34
	[SerializeField]
	private GameObject rewardedButtonGo; // 0x38
	[SerializeField]
	private GameObject fullHeartGo; // 0x3C
	[SerializeField]
	private GameObject infiniteHeartGo; // 0x40
	[SerializeField]
	private TextAnimatorPlayer heartFullText; // 0x44
	[SerializeField]
	private Button buyWithCoinButton; // 0x48
	[SerializeField]
	private Button buyWithRewardedAdButton; // 0x4C
	[SerializeField]
	private TextMeshProUGUI heartRefillTimeText; // 0x50
	[SerializeField]
	private TextMeshProUGUI coinCostText; // 0x54
	[SerializeField]
	private TextMeshProUGUI coinPurchaseHeartAmountText; // 0x58
	[SerializeField]
	private GameObject purchaseButtonsArea; // 0x5C
	private Action<bool> onClose; // 0x60
	private Coroutine updateTimerCoroutine; // 0x64

	// Methods

	// RVA: 0x10860F0 Offset: 0x10860F0 VA: 0x10860F0 Slot: 6
	protected override void Start() { }

	// RVA: 0x1086308 Offset: 0x1086308 VA: 0x1086308
	public void Show(Action<bool> onClose) { }

	// RVA: 0x1085D70 Offset: 0x1085D70 VA: 0x1085D70
	public void ShowWithOffers(Action<bool> onClose) { }

	// RVA: 0x1086334 Offset: 0x1086334 VA: 0x1086334 Slot: 7
	protected override void OnPopupShown() { }

	// RVA: 0x1086D6C Offset: 0x1086D6C VA: 0x1086D6C Slot: 8
	protected override void OnPopupHidden() { }

	// RVA: 0x1086E3C Offset: 0x1086E3C VA: 0x1086E3C
	private void Hide() { }

	// RVA: 0x108708C Offset: 0x108708C VA: 0x108708C
	private void OnCloseButtonClicked() { }

	// RVA: 0x10866A0 Offset: 0x10866A0 VA: 0x10866A0
	private void RefreshContent() { }

	// RVA: 0x1087090 Offset: 0x1087090 VA: 0x1087090
	private void OnBuyWithCoinButtonClicked() { }

	// RVA: 0x1087CE0 Offset: 0x1087CE0 VA: 0x1087CE0
	private void OnBuyWithRewardedAdButtonClicked() { }

	// RVA: 0x10874E8 Offset: 0x10874E8 VA: 0x10874E8
	private void OnHeartsBought(int amount, string source) { }

	// RVA: 0x1086CF4 Offset: 0x1086CF4 VA: 0x1086CF4
	private IEnumerator UpdateTimerCoroutine() { }

	// RVA: 0x1087E14 Offset: 0x1087E14 VA: 0x1087E14
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1087E1C Offset: 0x1087E1C VA: 0x1087E1C
	private void <OnBuyWithRewardedAdButtonClicked>b__28_0() { }
}

// Namespace: 
[CompilerGenerated]