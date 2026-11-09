public abstract class OfferButton : MonoBehaviour // TypeDefIndex: 3598
{
	// Fields
	[SerializeField]
	protected Button claimButton; // 0x10
	[SerializeField]
	private Image claimedIcon; // 0x14
	[SerializeField]
	private ParticleImage claimParticle; // 0x18
	[SerializeField]
	private Animator lockAnimator; // 0x1C
	[CompilerGenerated]
	private BaseChainOfferController <Controller>k__BackingField; // 0x20
	[CompilerGenerated]
	private ChainOfferSo.ChainOfferData <Data>k__BackingField; // 0x24

	// Properties
	protected BaseChainOfferController Controller { get; set; }
	public ChainOfferSo.ChainOfferData Data { get; set; }
	public int OfferIndex { get; }
	public abstract ShopBundleSO.BundleOfferDetails[] Rewards { get; }
	public abstract IList<BundleOffer> RewardEntries { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EBB74 Offset: 0x10EBB74 VA: 0x10EBB74
	protected BaseChainOfferController get_Controller() { }

	[CompilerGenerated]
	// RVA: 0x10EBB7C Offset: 0x10EBB7C VA: 0x10EBB7C
	private void set_Controller(BaseChainOfferController value) { }

	[CompilerGenerated]
	// RVA: 0x10EBB84 Offset: 0x10EBB84 VA: 0x10EBB84
	public ChainOfferSo.ChainOfferData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x10EBB8C Offset: 0x10EBB8C VA: 0x10EBB8C
	private void set_Data(ChainOfferSo.ChainOfferData value) { }

	// RVA: 0x10EAA68 Offset: 0x10EAA68 VA: 0x10EAA68
	public int get_OfferIndex() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract ShopBundleSO.BundleOfferDetails[] get_Rewards();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract IList<BundleOffer> get_RewardEntries();

	// RVA: 0x10EB874 Offset: 0x10EB874 VA: 0x10EB874 Slot: 6
	public virtual void Initialize(ChainOfferSo.ChainOfferData data, BaseChainOfferController controller) { }

	// RVA: 0x10E985C Offset: 0x10E985C VA: 0x10E985C
	public void SetLockedState(bool isLocked) { }

	// RVA: 0x10EA5B4 Offset: 0x10EA5B4 VA: 0x10EA5B4
	public Sequence Claim() { }

	// RVA: 0x10EB188 Offset: 0x10EB188 VA: 0x10EB188
	public Tween Unlock() { }

	// RVA: 0x10EB9B8 Offset: 0x10EB9B8 VA: 0x10EB9B8
	protected void .ctor() { }
}

// Namespace: Rotatelab.ChainOffer
[RequireComponent(typeof(ShopBundleOfferController))]
[RequireComponent(typeof(ShopPanelBundleItem))]