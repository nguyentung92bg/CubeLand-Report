public class PreBooster : MonoBehaviour // TypeDefIndex: 3607
{
	// Fields
	[CompilerGenerated]
	private BoosterBaseData <Data>k__BackingField; // 0x10
	[SerializeField]
	private Button button; // 0x14
	[SerializeField]
	private Image background; // 0x18
	[SerializeField]
	private Image icon; // 0x1C
	[SerializeField]
	private GameObject contentsWhenPaymentNeeded; // 0x20
	[SerializeField]
	private GameObject contentsWhenPaymentNotNeeded; // 0x24
	[SerializeField]
	private GameObject contentsWhenLocked; // 0x28
	[SerializeField]
	private TextMeshProUGUI remainingUsagesText; // 0x2C
	[SerializeField]
	private TextMeshProUGUI unlockLevelText; // 0x30
	[SerializeField]
	private Animator unlockAnimator; // 0x34
	[SerializeField]
	private Sprite passiveSprite; // 0x38
	[SerializeField]
	private Sprite activeSprite; // 0x3C
	[SerializeField]
	private Image[] grayscaleMatImages; // 0x40
	[SerializeField]
	private Material grayscaleMat; // 0x44
	public bool isBoosterActive; // 0x48
	private bool isInTutorialState; // 0x49

	// Properties
	public BoosterBaseData Data { get; set; }
	private long RemainingUsages { get; }
	private bool IsUnlocked { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EBF58 Offset: 0x10EBF58 VA: 0x10EBF58
	public BoosterBaseData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x10EBF60 Offset: 0x10EBF60 VA: 0x10EBF60
	private void set_Data(BoosterBaseData value) { }

	// RVA: 0x10EBF68 Offset: 0x10EBF68 VA: 0x10EBF68
	private long get_RemainingUsages() { }

	// RVA: 0x10EBFF4 Offset: 0x10EBFF4 VA: 0x10EBFF4
	private bool get_IsUnlocked() { }

	// RVA: 0x10EC088 Offset: 0x10EC088 VA: 0x10EC088
	protected void OnEnable() { }

	// RVA: 0x10EC210 Offset: 0x10EC210 VA: 0x10EC210
	protected void OnDisable() { }

	// RVA: 0x10EC398 Offset: 0x10EC398 VA: 0x10EC398
	public void Initialize(BoosterBaseData data) { }

	// RVA: 0x10EC5CC Offset: 0x10EC5CC VA: 0x10EC5CC
	private void UnlockAnimationRequested() { }

	// RVA: 0x10ECAE8 Offset: 0x10ECAE8 VA: 0x10ECAE8
	private void OnPreBoosterUnlockAnimationRequestedHandler() { }

	// RVA: 0x10ECAEC Offset: 0x10ECAEC VA: 0x10ECAEC
	private void ActivateBooster() { }

	// RVA: 0x10ECE90 Offset: 0x10ECE90 VA: 0x10ECE90
	public void ResetUsage() { }

	// RVA: 0x10ED17C Offset: 0x10ED17C VA: 0x10ED17C
	private void OnBoosterPurchasedHandler(CurrencyType type) { }

	// RVA: 0x10ED1B8 Offset: 0x10ED1B8 VA: 0x10ED1B8
	private void OnBoosterAmountChanged(long amount) { }

	// RVA: 0x10ECF04 Offset: 0x10ECF04 VA: 0x10ECF04
	public void OnBoosterStateChanged() { }

	// RVA: 0x10ED1BC Offset: 0x10ED1BC VA: 0x10ED1BC
	private void RefreshButtonInteractability() { }

	// RVA: 0x10ED318 Offset: 0x10ED318 VA: 0x10ED318
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]