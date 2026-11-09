public class SeasonPassIAPController : SingletonBehaviour<SeasonPassIAPController> // TypeDefIndex: 3197
{
	// Fields
	[SerializeField]
	private BundlePurchaseButton seasonPassPurchaseButton; // 0x10
	[SerializeField]
	private CanvasGroup popup; // 0x14
	[SerializeField]
	private TMP_Text title; // 0x18
	[SerializeField]
	private ShopBundleSO seasonPassBundleSo; // 0x1C
	private bool isActive; // 0x20

	// Methods

	// RVA: 0xFC513C Offset: 0xFC513C VA: 0xFC513C
	private void OnEnable() { }

	// RVA: 0xFC52C0 Offset: 0xFC52C0 VA: 0xFC52C0
	private void OnDisable() { }

	// RVA: 0xFC5444 Offset: 0xFC5444 VA: 0xFC5444
	public void ShowPopup() { }

	// RVA: 0xFC55C4 Offset: 0xFC55C4 VA: 0xFC55C4
	public void HidePopup() { }

	// RVA: 0xFC5694 Offset: 0xFC5694 VA: 0xFC5694
	private void OnInitOtherShopItemsOutsideOfShopHandler() { }

	// RVA: 0xFC56C4 Offset: 0xFC56C4 VA: 0xFC56C4
	public bool IsSeasonPassProduct(IapObject iapObject) { }

	// RVA: 0xFC5704 Offset: 0xFC5704 VA: 0xFC5704
	private void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0xFC57A0 Offset: 0xFC57A0 VA: 0xFC57A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFC57F4 Offset: 0xFC57F4 VA: 0xFC57F4
	private void <HidePopup>b__8_0() { }
}

// Namespace: 
[CompilerGenerated]