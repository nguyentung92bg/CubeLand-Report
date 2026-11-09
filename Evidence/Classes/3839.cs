public class BoosterPurchasePopup : PopupController // TypeDefIndex: 3839
{
	// Fields
	private int purchaseAmountWithCurrency; // 0x1C
	[SerializeField]
	private RectTransform popup; // 0x20
	[SerializeField]
	private List<Image> boosterIcons; // 0x24
	[SerializeField]
	private TextMeshProUGUI boosterNameText; // 0x28
	[SerializeField]
	private TextMeshProUGUI boosterInfoText; // 0x2C
	[SerializeField]
	private TextMeshProUGUI currencyCostText; // 0x30
	[SerializeField]
	private TextMeshProUGUI purchaseAmountWithCurrencyText; // 0x34
	[SerializeField]
	private TextMeshProUGUI rewardedCapText; // 0x38
	[SerializeField]
	private Button buyWithCurrencyButton; // 0x3C
	[SerializeField]
	private Button buyWithRewardedAdButton; // 0x40
	[SerializeField]
	private Button cancelButton; // 0x44
	[SerializeField]
	private GameObject rewardedArea; // 0x48
	[SerializeField]
	private GameObject rewardedCapArea; // 0x4C
	[SerializeField]
	private Image rewardedLeftIconBg; // 0x50
	private BoosterBaseData data; // 0x54
	private int currencyCost; // 0x58

	// Methods

	// RVA: 0x113E36C Offset: 0x113E36C VA: 0x113E36C Slot: 6
	protected override void Start() { }

	// RVA: 0x1136A60 Offset: 0x1136A60 VA: 0x1136A60
	public void Show(BoosterBaseData data) { }

	// RVA: 0x113E500 Offset: 0x113E500 VA: 0x113E500 Slot: 7
	protected override void OnPopupShown() { }

	// RVA: 0x113ED2C Offset: 0x113ED2C VA: 0x113ED2C
	private void Hide() { }

	// RVA: 0x113EF24 Offset: 0x113EF24 VA: 0x113EF24
	private void OnCancelButtonClicked() { }

	// RVA: 0x113EF28 Offset: 0x113EF28 VA: 0x113EF28
	private void OnBuyButtonClicked(bool withRewardedAd) { }

	// RVA: 0x113F3EC Offset: 0x113F3EC VA: 0x113F3EC
	private void OnPurchaseCompleted(int amount, string source) { }

	// RVA: 0x113F634 Offset: 0x113F634 VA: 0x113F634
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x113F63C Offset: 0x113F63C VA: 0x113F63C
	private void <Start>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x113F644 Offset: 0x113F644 VA: 0x113F644
	private void <Start>b__16_1() { }

	[CompilerGenerated]
	// RVA: 0x113F64C Offset: 0x113F64C VA: 0x113F64C
	private void <OnBuyButtonClicked>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x113F798 Offset: 0x113F798 VA: 0x113F798
	private void <OnBuyButtonClicked>b__21_1() { }

	[CompilerGenerated]
	// RVA: 0x113F7C0 Offset: 0x113F7C0 VA: 0x113F7C0
	private void <OnBuyButtonClicked>b__21_2() { }
}

// Namespace: Rotatelab.Boosters.UI