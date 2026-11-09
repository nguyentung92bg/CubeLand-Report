public abstract class PurchaseButtonBase : MonoBehaviour // TypeDefIndex: 3098
{
	// Fields
	public Button purchaseButton; // 0x10
	public TextMeshProUGUI priceText; // 0x14
	public string productId; // 0x18
	public string productName; // 0x1C

	// Properties
	public abstract string RewardKey { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string get_RewardKey();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void OnPurchaseSuccess(bool isReapplyingRewards);

	// RVA: 0xFA73C4 Offset: 0xFA73C4 VA: 0xFA73C4
	public void OnPayButtonTapped() { }

	// RVA: 0xFA6DA4 Offset: 0xFA6DA4 VA: 0xFA6DA4
	protected void .ctor() { }
}

// Namespace: 
[Serializable]