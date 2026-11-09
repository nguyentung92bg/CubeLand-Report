public class ShopBundleSO : ScriptableObject // TypeDefIndex: 3100
{
	// Fields
	public IAPData iapData; // 0xC
	public BaseOfferButton.BundleOfferType offerType; // 0x14
	public string title; // 0x18
	public ShopBundleSO.BundleOfferDetails[] bundleOfferElements; // 0x1C
	public ShopPanelBundleItem shopPanelBundleItem; // 0x20
	public int discountAmount; // 0x24

	// Methods

	// RVA: 0xFA7470 Offset: 0xFA7470 VA: 0xFA7470
	public void .ctor() { }
}

// Namespace: 
[Serializable]