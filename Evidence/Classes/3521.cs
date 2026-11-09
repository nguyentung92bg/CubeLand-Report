public abstract class BaseOfferButton : MonoBehaviour, ITriggeredOffer // TypeDefIndex: 3521
{
	// Fields
	[SerializeField]
	protected Button offerButton; // 0x10
	[SerializeField]
	protected RectTransform offerButtonRect; // 0x14
	[SerializeField]
	protected CanvasGroup canvasGroup; // 0x18
	[SerializeField]
	private bool deactivateCanvasGroupOnHide; // 0x1C
	[CompilerGenerated]
	private bool <IsVisible>k__BackingField; // 0x1D
	private bool isAnyPopupVisible; // 0x1E
	private Sequence canvasFadeTween; // 0x20
	private Action<bool> onTriggeredPopupClosed; // 0x30
	private bool isPurchasedWhileTriggered; // 0x34
	private Transform triggeredPopupParent; // 0x38

	// Properties
	public bool IsVisible { get; set; }
	public virtual MetaScreenType TriggeredOfferOrder { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10CC0CC Offset: 0x10CC0CC VA: 0x10CC0CC
	public bool get_IsVisible() { }

	[CompilerGenerated]
	// RVA: 0x10CC0D4 Offset: 0x10CC0D4 VA: 0x10CC0D4
	private void set_IsVisible(bool value) { }

	// RVA: 0x10CC0DC Offset: 0x10CC0DC VA: 0x10CC0DC Slot: 7
	public virtual bool IsTriggeredOfferEligible(OfferTrigger trigger) { }

	// RVA: 0x10CC0E4 Offset: 0x10CC0E4 VA: 0x10CC0E4 Slot: 8
	public virtual MetaScreenType get_TriggeredOfferOrder() { }

	// RVA: 0x10CC0EC Offset: 0x10CC0EC VA: 0x10CC0EC Slot: 9
	protected virtual void Awake() { }

	// RVA: 0x10CC0F0 Offset: 0x10CC0F0 VA: 0x10CC0F0 Slot: 10
	protected virtual void OnEnable() { }

	// RVA: 0x10CC330 Offset: 0x10CC330 VA: 0x10CC330 Slot: 11
	protected virtual void OnDisable() { }

	// RVA: 0x10CC570 Offset: 0x10CC570 VA: 0x10CC570 Slot: 12
	protected virtual void Start() { }

	// RVA: 0x10CC5BC Offset: 0x10CC5BC VA: 0x10CC5BC Slot: 13
	protected virtual void OnDestroy() { }

	// RVA: 0x10CC5C0 Offset: 0x10CC5C0 VA: 0x10CC5C0
	private void OnAnyPopupUpdateHandler(bool isActive) { }

	// RVA: 0x10CC5C8 Offset: 0x10CC5C8 VA: 0x10CC5C8 Slot: 14
	protected virtual void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10CC5D8 Offset: 0x10CC5D8 VA: 0x10CC5D8
	private void OnPurchaseSucceededWhileTriggeredHandler(IapObject iapObject) { }

	// RVA: 0x10CC5EC Offset: 0x10CC5EC VA: 0x10CC5EC
	public void OpenPopup(bool forceToOpen = False) { }

	// RVA: 0x10CC610 Offset: 0x10CC610 VA: 0x10CC610 Slot: 6
	public void ShowForTrigger(OfferTrigger trigger, Action<bool> onClosed) { }

	// RVA: 0x10CC820 Offset: 0x10CC820 VA: 0x10CC820 Slot: 15
	public virtual void ShowPopup() { }

	// RVA: 0x10CCC08 Offset: 0x10CCC08 VA: 0x10CCC08 Slot: 16
	public virtual void ClosePopup() { }

	// RVA: 0x10CCFE8 Offset: 0x10CCFE8 VA: 0x10CCFE8 Slot: 17
	protected virtual void OnPopupOpenedAction() { }

	// RVA: 0x10CCFEC Offset: 0x10CCFEC VA: 0x10CCFEC Slot: 18
	public virtual void HidePopup() { }

	// RVA: 0x10CCFF0 Offset: 0x10CCFF0 VA: 0x10CCFF0
	protected void .ctor() { }
}

// Namespace: 
[Serializable]