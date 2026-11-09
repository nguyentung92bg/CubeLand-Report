public class BoosterPreventController : SingletonBehaviour<BoosterPreventController> // TypeDefIndex: 3084
{
	// Fields
	[SerializeField]
	private RectTransform preventTransform; // 0x10
	[SerializeField]
	private RectTransform popup; // 0x14
	[SerializeField]
	private TextMeshProUGUI text; // 0x18
	[SerializeField]
	private Button cancelButton; // 0x1C
	[SerializeField]
	private Button shuffleButton; // 0x20
	[SerializeField]
	private Image backgroundDim; // 0x24
	[SerializeField]
	[Tooltip("When the popup's Y-position is set to this value, it'll be displayed above the current level.")]
	private Vector2 popupTopAlignedPosition; // 0x28
	private Vector2 popupDefaultPosition; // 0x30
	private bool inputAllowed; // 0x38
	private CurrencyType activatedBoosterType; // 0x3C
	private Vector3 firstTapPosition; // 0x40
	[CompilerGenerated]
	private bool <IsOpenedByComplementaryBoosterTutorial>k__BackingField; // 0x4C

	// Properties
	public bool IsOpenedByComplementaryBoosterTutorial { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFA2720 Offset: 0xFA2720 VA: 0xFA2720
	public bool get_IsOpenedByComplementaryBoosterTutorial() { }

	[CompilerGenerated]
	// RVA: 0xFA2728 Offset: 0xFA2728 VA: 0xFA2728
	public void set_IsOpenedByComplementaryBoosterTutorial(bool value) { }

	// RVA: 0xFA2730 Offset: 0xFA2730 VA: 0xFA2730 Slot: 4
	protected override void Awake() { }

	// RVA: 0xFA2C04 Offset: 0xFA2C04 VA: 0xFA2C04
	protected void OnDestroy() { }

	// RVA: 0xFA2E9C Offset: 0xFA2E9C VA: 0xFA2E9C
	private void Update() { }

	// RVA: 0xFA2FC0 Offset: 0xFA2FC0 VA: 0xFA2FC0
	private void HandleTap() { }

	// RVA: 0xFA3344 Offset: 0xFA3344 VA: 0xFA3344
	private void Show() { }

	// RVA: 0xFA2B1C Offset: 0xFA2B1C VA: 0xFA2B1C
	public void Hide() { }

	// RVA: 0xFA3504 Offset: 0xFA3504 VA: 0xFA3504
	public void SetPopupVisibility(bool isVisible) { }

	// RVA: 0xFA3254 Offset: 0xFA3254 VA: 0xFA3254
	private void OnCancelButtonClicked() { }

	// RVA: 0xFA3594 Offset: 0xFA3594 VA: 0xFA3594
	private void OnShuffleButtonClicked() { }

	// RVA: 0xFA3620 Offset: 0xFA3620 VA: 0xFA3620
	private void OnBoosterStarted(CurrencyType boosterType) { }

	// RVA: 0xFA39B8 Offset: 0xFA39B8 VA: 0xFA39B8
	private void OnMagnetAnimationStarted(BlasterController pulledBlaster) { }

	// RVA: 0xFA39C0 Offset: 0xFA39C0 VA: 0xFA39C0
	private void OnBounceAnimationStarted() { }

	// RVA: 0xFA39C8 Offset: 0xFA39C8 VA: 0xFA39C8
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0xFA34D4 Offset: 0xFA34D4 VA: 0xFA34D4
	private void SetInput(bool value) { }

	// RVA: 0xFA39D4 Offset: 0xFA39D4 VA: 0xFA39D4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]