public abstract class BaseChainOfferController : PopupController // TypeDefIndex: 3590
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private ChainOfferSo <Data>k__BackingField; // 0x1C
	[SerializeField]
	private RectTransform offerButtonsParent; // 0x20
	[SerializeField]
	private RectTransform[] offerButtonPositions; // 0x24
	[SerializeField]
	private FreeOfferButton freeOfferButtonPrefab; // 0x28
	[SerializeField]
	private PaidOfferButton paidOfferButtonPrefab; // 0x2C
	protected readonly List<OfferButton> offerButtons; // 0x30
	[SerializeField]
	private Button closeButton; // 0x34
	[SerializeField]
	private RectTransform rewardParticlesParent; // 0x38
	[SerializeField]
	private RewardParticle rewardParticlePrefab; // 0x3C
	private readonly List<RewardParticle> rewardParticles; // 0x40
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x44
	private int currentStep; // 0x48
	private Action<bool> onTriggeredPopupClosed; // 0x4C
	private bool isPurchasedWhileTriggered; // 0x50

	// Properties
	public ChainOfferSo Data { get; set; }
	public bool IsActive { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10E8EF4 Offset: 0x10E8EF4 VA: 0x10E8EF4
	public ChainOfferSo get_Data() { }

	[CompilerGenerated]
	// RVA: 0x10E8EFC Offset: 0x10E8EFC VA: 0x10E8EFC
	private void set_Data(ChainOfferSo value) { }

	[CompilerGenerated]
	// RVA: 0x10E8F04 Offset: 0x10E8F04 VA: 0x10E8F04
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x10E8F0C Offset: 0x10E8F0C VA: 0x10E8F0C
	private void set_IsActive(bool value) { }

	// RVA: 0x10E8F14 Offset: 0x10E8F14 VA: 0x10E8F14 Slot: 6
	protected override void Start() { }

	// RVA: 0x10E90A8 Offset: 0x10E90A8 VA: 0x10E90A8
	protected void OnDestroy() { }

	// RVA: 0x10E8010 Offset: 0x10E8010 VA: 0x10E8010
	public void ShowForTrigger(OfferTrigger trigger, Action<bool> onClosed) { }

	// RVA: 0x10E91A8 Offset: 0x10E91A8 VA: 0x10E91A8
	private void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10E8620 Offset: 0x10E8620 VA: 0x10E8620
	public void SetActive(bool isActive) { }

	// RVA: 0x10E93E8 Offset: 0x10E93E8 VA: 0x10E93E8 Slot: 7
	protected override void OnPopupShown() { }

	// RVA: 0x10E9494 Offset: 0x10E9494 VA: 0x10E9494 Slot: 8
	protected override void OnPopupHidden() { }

	// RVA: 0x10E91BC Offset: 0x10E91BC VA: 0x10E91BC
	private void InstantiateInitialOfferButtons() { }

	// RVA: 0x10E95BC Offset: 0x10E95BC VA: 0x10E95BC Slot: 9
	protected virtual OfferButton InstantiateOfferButton(int order, int offerIndex) { }

	// RVA: 0x10E98C8 Offset: 0x10E98C8 VA: 0x10E98C8
	public void OnOfferClaimed(OfferButton offerButton) { }

	// RVA: 0x10EA1B4 Offset: 0x10EA1B4 VA: 0x10EA1B4
	private void PlayRewardParticles(OfferButton offerButton) { }

	// RVA: 0x10EAF54 Offset: 0x10EAF54 VA: 0x10EAF54
	protected void .ctor() { }
}

// Namespace: Rotatelab.ChainOffer