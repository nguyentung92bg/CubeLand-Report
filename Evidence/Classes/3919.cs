public abstract class SatoriBundleConfigFlag : SatoriObjectFlag // TypeDefIndex: 3919
{
	// Fields
	public SatoriBundleConfigFlag.BundleConfig defaults; // 0xC
	[SerializeField]
	private List<SatoriBundleConfigFlag.CurrencyIcon> icons; // 0x10
	protected ShopBundleSO bundle; // 0x14
	[CompilerGenerated]
	private SatoriBundleConfigFlag.BundleConfig <AppliedConfig>k__BackingField; // 0x18

	// Properties
	protected SatoriBundleConfigFlag.BundleConfig AppliedConfig { get; set; }
	protected abstract CurrencyType RequiredElementType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFE7440 Offset: 0xFE7440 VA: 0xFE7440
	protected SatoriBundleConfigFlag.BundleConfig get_AppliedConfig() { }

	[CompilerGenerated]
	// RVA: 0xFE7448 Offset: 0xFE7448 VA: 0xFE7448
	private void set_AppliedConfig(SatoriBundleConfigFlag.BundleConfig value) { }

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract CurrencyType get_RequiredElementType();

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract SatoriBundleConfigFlag.BundleConfig SelectConfig();

	// RVA: 0xFE7450 Offset: 0xFE7450 VA: 0xFE7450
	public ShopBundleSO GetBundle(ShopBundleSO template) { }

	// RVA: 0xFE7570 Offset: 0xFE7570 VA: 0xFE7570 Slot: 7
	protected virtual void Apply() { }

	// RVA: 0xFE7620 Offset: 0xFE7620 VA: 0xFE7620
	private bool TryApply(SatoriBundleConfigFlag.BundleConfig config) { }

	// RVA: 0xFE805C Offset: 0xFE805C VA: 0xFE805C
	protected void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFE8060 Offset: 0xFE8060 VA: 0xFE8060
	private bool <TryApply>b__12_0(ShopBundleSO.BundleOfferDetails e) { }
}

// Namespace: 
[Serializable]