public class ChainOfferManager : SingletonBehaviour<ChainOfferManager>, ITriggeredOffer // TypeDefIndex: 3588
{
	// Fields
	[SerializeField]
	private BaseChainOfferController[] controllers; // 0x10
	[SerializeField]
	private Button showButton; // 0x14
	[SerializeField]
	private TextMeshProUGUI[] timeTexts; // 0x18
	public static readonly SavedInt ChainOfferModeOverride; // 0x0
	private readonly ForcedOfferPopupTracker forcedPopupTracker; // 0x1C
	[CompilerGenerated]
	private BaseChainOfferController <ActiveController>k__BackingField; // 0x20

	// Properties
	public bool IsActive { get; }
	public BaseChainOfferController ActiveController { get; set; }
	public MetaScreenType TriggeredOfferOrder { get; }

	// Methods

	// RVA: 0x10E78DC Offset: 0x10E78DC VA: 0x10E78DC
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x10E7954 Offset: 0x10E7954 VA: 0x10E7954
	public BaseChainOfferController get_ActiveController() { }

	[CompilerGenerated]
	// RVA: 0x10E795C Offset: 0x10E795C VA: 0x10E795C
	private void set_ActiveController(BaseChainOfferController value) { }

	// RVA: 0x10E7964 Offset: 0x10E7964 VA: 0x10E7964 Slot: 5
	public bool IsTriggeredOfferEligible(OfferTrigger trigger) { }

	// RVA: 0x10E7A08 Offset: 0x10E7A08 VA: 0x10E7A08 Slot: 6
	public MetaScreenType get_TriggeredOfferOrder() { }

	// RVA: 0x10E7A10 Offset: 0x10E7A10 VA: 0x10E7A10
	private void Start() { }

	// RVA: 0x10E7F78 Offset: 0x10E7F78 VA: 0x10E7F78
	protected void OnDestroy() { }

	// RVA: 0x10E7FE0 Offset: 0x10E7FE0 VA: 0x10E7FE0 Slot: 7
	public void ShowForTrigger(OfferTrigger trigger, Action<bool> onClosed) { }

	// RVA: 0x10E80F8 Offset: 0x10E80F8 VA: 0x10E80F8
	public void Show() { }

	// RVA: 0x10E81A0 Offset: 0x10E81A0 VA: 0x10E81A0
	private void OnMainCanvasChangeEndedHandler(MainCanvasType type, bool isAnimationPlayed) { }

	// RVA: 0x10E7DA4 Offset: 0x10E7DA4 VA: 0x10E7DA4
	private void OnMainMenuArrival(bool isSessionStart) { }

	// RVA: 0x10E81B0 Offset: 0x10E81B0 VA: 0x10E81B0
	public void Refresh() { }

	// RVA: 0x10E7F00 Offset: 0x10E7F00 VA: 0x10E7F00
	private IEnumerator RefreshRemainingTimeRegularlyCoroutine() { }

	// RVA: 0x10E8714 Offset: 0x10E8714 VA: 0x10E8714
	private DateTime GetCycleEndTime() { }

	// RVA: 0x10E8808 Offset: 0x10E8808 VA: 0x10E8808
	public void .ctor() { }

	// RVA: 0x10E88C0 Offset: 0x10E88C0 VA: 0x10E88C0
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x10E8978 Offset: 0x10E8978 VA: 0x10E8978
	private void <OnMainMenuArrival>b__19_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]