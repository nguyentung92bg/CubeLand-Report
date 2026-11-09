public class CannonRig : MonoBehaviour // TypeDefIndex: 3814
{
	// Fields
	[SerializeField]
	private Transform cannonRoot; // 0x10
	[SerializeField]
	private Transform muzzlePoint; // 0x14
	[SerializeField]
	private Animator animator; // 0x18
	[SerializeField]
	private ParticleSystem muzzleSmokeParticle; // 0x1C
	[SerializeField]
	private CannonProjectileController projectilePrefab; // 0x20
	[SerializeField]
	private Renderer[] darkenableRenderers; // 0x24
	[SerializeField]
	private TMP_Text ammoText; // 0x28
	[SerializeField]
	private Vector3 hiddenLocalPosition; // 0x2C
	[SerializeField]
	private Vector3 visibleLocalPosition; // 0x38
	[SerializeField]
	private float slideDuration; // 0x44
	[SerializeField]
	[Tooltip("Aim rotation tween duration — longer reads as the cannon settling its sight on the target.")]
	private float aimDuration; // 0x48
	[SerializeField]
	private string shootTrigger; // 0x4C
	private Tween _slideTween; // 0x50
	private Tween _aimTween; // 0x60
	private Sequence _slideOutSequence; // 0x70
	private CannonProjectileController _projectileInstance; // 0x80
	private Vector3 _pendingImpactPoint; // 0x84
	private Action _pendingOnImpact; // 0x90
	private Quaternion _initialCannonRootLocalRotation; // 0x94
	private static readonly int BaseColorProp; // 0x0
	private static readonly Color GatedTint; // 0x4
	private MaterialPropertyBlock _offVisualMpb; // 0xA4

	// Properties
	public Vector3 MuzzlePosition { get; }

	// Methods

	// RVA: 0x1133EF4 Offset: 0x1133EF4 VA: 0x1133EF4
	public Vector3 get_MuzzlePosition() { }

	// RVA: 0x1133FC4 Offset: 0x1133FC4 VA: 0x1133FC4
	protected void Awake() { }

	// RVA: 0x1134074 Offset: 0x1134074 VA: 0x1134074
	public void SlideIn(Action onComplete) { }

	// RVA: 0x1134210 Offset: 0x1134210 VA: 0x1134210
	public void SlideOut(Action onComplete) { }

	// RVA: 0x11344D0 Offset: 0x11344D0 VA: 0x11344D0
	public void AimAt(Vector3 worldPoint) { }

	// RVA: 0x11348AC Offset: 0x11348AC VA: 0x11348AC
	public void Fire(Vector3 impactPoint, Action onImpact) { }

	// RVA: 0x1134988 Offset: 0x1134988 VA: 0x1134988
	public void OnShootFrame() { }

	// RVA: 0x1134B40 Offset: 0x1134B40 VA: 0x1134B40
	public void SetAmmoCount(int count) { }

	// RVA: 0x1134B8C Offset: 0x1134B8C VA: 0x1134B8C
	public void SetOffVisual(bool isOff) { }

	// RVA: 0x1134D78 Offset: 0x1134D78 VA: 0x1134D78
	public void .ctor() { }

	// RVA: 0x1134E58 Offset: 0x1134E58 VA: 0x1134E58
	private static void .cctor() { }
}

// Namespace: Rotatelab.Boosters