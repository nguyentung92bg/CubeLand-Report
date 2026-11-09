public class CannonBoosterController : BaseBoosterController // TypeDefIndex: 3823
{
	// Fields
	[SerializeField]
	private CannonRig cannonRig; // 0x10
	[SerializeField]
	private float validTargetScanInterval; // 0x14
	[SerializeField]
	[Tooltip("Delay between aim tween end and fire trigger — adds a beat that reads as 'sighted, firing now'.")]
	private float aimToFireDelay; // 0x18
	[SerializeField]
	[Tooltip("Per-target delay between AoE voxel destructions — staggers visual + sfx so each impact reads as a distinct hit, and prevents AudioManager dedup on the same frame from swallowing voxel destruction sounds.")]
	private float destroyStaggerDelay; // 0x1C
	[SerializeField]
	[Tooltip("Delay before opening the purchase popup when ammo hits 0 — gives the AoE destruction stagger + tween (~0.5s) time to finish so the popup doesn't open over still-animating voxels.")]
	private float ammoEmptyPopupDelay; // 0x20
	[SerializeField]
	[Tooltip("Idle rotation delta per frame while cannon is active and the player isn't manually rotating. Driven through ObjectManager.RotateObjectManually (×manualRotationSpeed), so tune in Inspector until it reads close to the normal idle spin.")]
	private float cannonIdleRotationSpeed; // 0x24
	[SerializeField]
	[Tooltip("Seconds of no manual rotation before idle rotation resumes after the player drags the cube.")]
	private float cannonManualResumeDelay; // 0x28
	private readonly List<BaseTargetableController> _aoeBuffer; // 0x2C
	private readonly Dictionary<ColorType, int> _destroyedVoxelsByColor; // 0x30
	private Coroutine _validTargetScan; // 0x34
	private Coroutine _cameraRotationCoroutine; // 0x38
	private bool _isResolvingShot; // 0x3C
	private bool _hasValidTargets; // 0x3D

	// Properties
	protected override CurrencyType BoosterType { get; }
	public static bool IsActive { get; }

	// Methods

	// RVA: 0x1135038 Offset: 0x1135038 VA: 0x1135038 Slot: 4
	protected override CurrencyType get_BoosterType() { }

	// RVA: 0x1135040 Offset: 0x1135040 VA: 0x1135040
	public static bool get_IsActive() { }

	// RVA: 0x11350A0 Offset: 0x11350A0 VA: 0x11350A0
	public static bool HasValidTargets() { }

	// RVA: 0x11352F0 Offset: 0x11352F0 VA: 0x11352F0 Slot: 7
	protected override void OnActivated() { }

	// RVA: 0x1135614 Offset: 0x1135614 VA: 0x1135614 Slot: 8
	protected override void OnDeactivated() { }

	// RVA: 0x113562C Offset: 0x113562C VA: 0x113562C
	private void ExitCannonMode() { }

	// RVA: 0x1135790 Offset: 0x1135790 VA: 0x1135790
	private void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x1135C60 Offset: 0x1135C60 VA: 0x1135C60
	private void ResolveImpact(List<BaseTargetableController> targets, Vector3 impactPoint) { }

	// RVA: 0x1135524 Offset: 0x1135524 VA: 0x1135524
	private IEnumerator ValidTargetScanCoroutine() { }

	// RVA: 0x113559C Offset: 0x113559C VA: 0x113559C
	private IEnumerator CameraRotationCoroutine() { }

	// RVA: 0x11364EC Offset: 0x11364EC VA: 0x11364EC
	private void UpdateValidTargetState() { }

	// RVA: 0x1136758 Offset: 0x1136758 VA: 0x1136758
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters