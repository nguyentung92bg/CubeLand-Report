public class Booster : MonoBehaviour // TypeDefIndex: 3834
{
	// Fields
	[CompilerGenerated]
	private BoosterBaseData <Data>k__BackingField; // 0x10
	[SerializeField]
	private Button button; // 0x14
	[SerializeField]
	private Image icon; // 0x18
	[SerializeField]
	private GameObject contentsWhenPaymentNeeded; // 0x1C
	[SerializeField]
	private GameObject contentsWhenPaymentNotNeeded; // 0x20
	[SerializeField]
	private GameObject contentsWhenLocked; // 0x24
	[SerializeField]
	private TextMeshProUGUI remainingUsagesText; // 0x28
	[SerializeField]
	private TextMeshProUGUI unlockLevelText; // 0x2C
	[SerializeField]
	private Animator unlockAnimator; // 0x30
	[SerializeField]
	private Image[] grayscaleMatImages; // 0x34
	[SerializeField]
	private Material grayscaleMat; // 0x38
	private bool shouldDisableButton; // 0x3C

	// Properties
	public BoosterBaseData Data { get; set; }
	private long RemainingUsages { get; }
	private bool IsUnlocked { get; }
	public Vector2 IconScreenPosition { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x113A090 Offset: 0x113A090 VA: 0x113A090
	public BoosterBaseData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x113A098 Offset: 0x113A098 VA: 0x113A098
	private void set_Data(BoosterBaseData value) { }

	// RVA: 0x113A0A0 Offset: 0x113A0A0 VA: 0x113A0A0
	private long get_RemainingUsages() { }

	// RVA: 0x113A12C Offset: 0x113A12C VA: 0x113A12C
	private bool get_IsUnlocked() { }

	// RVA: 0x113A1C0 Offset: 0x113A1C0 VA: 0x113A1C0
	public Vector2 get_IconScreenPosition() { }

	// RVA: 0x113A2D0 Offset: 0x113A2D0 VA: 0x113A2D0
	protected void OnEnable() { }

	// RVA: 0x113A894 Offset: 0x113A894 VA: 0x113A894
	protected void OnDisable() { }

	// RVA: 0x113AE58 Offset: 0x113AE58 VA: 0x113AE58
	public void Initialize(BoosterBaseData baseData) { }

	// RVA: 0x113B414 Offset: 0x113B414 VA: 0x113B414
	private void OnUnlockAnimationRequested() { }

	// RVA: 0x113B8F8 Offset: 0x113B8F8 VA: 0x113B8F8
	private void ActivateBooster() { }

	// RVA: 0x113BD48 Offset: 0x113BD48 VA: 0x113BD48
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x113BE78 Offset: 0x113BE78 VA: 0x113BE78
	private void OnBoosterPurchased(CurrencyType boosterType) { }

	// RVA: 0x113BEB4 Offset: 0x113BEB4 VA: 0x113BEB4
	private void OnBoosterAmountChanged(long value) { }

	// RVA: 0x113BEB8 Offset: 0x113BEB8 VA: 0x113BEB8
	private void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0x113BED0 Offset: 0x113BED0 VA: 0x113BED0
	private void OnLevelStartSpinEndedHandler() { }

	// RVA: 0x113BEDC Offset: 0x113BEDC VA: 0x113BEDC
	private void OnLevelSucceededHandler() { }

	// RVA: 0x113C060 Offset: 0x113C060 VA: 0x113C060
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0x113C2FC Offset: 0x113C2FC VA: 0x113C2FC
	private void OnDockFilledStateChanged(BaseDockController dock) { }

	// RVA: 0x113C334 Offset: 0x113C334 VA: 0x113C334
	private void OnPlayOnCompleteHandler() { }

	// RVA: 0x113B1F4 Offset: 0x113B1F4 VA: 0x113B1F4
	private void OnBoosterStateChanged() { }

	// RVA: 0x113C364 Offset: 0x113C364 VA: 0x113C364
	private void OnSpecialBoosterTutorialCompletedHandler() { }

	// RVA: 0x113BEC4 Offset: 0x113BEC4 VA: 0x113BEC4
	private void ChangeButtonInteractibility(bool isInteractable) { }

	// RVA: 0x113C064 Offset: 0x113C064 VA: 0x113C064
	private void RefreshButtonInteractibility() { }

	// RVA: 0x113C368 Offset: 0x113C368 VA: 0x113C368
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters