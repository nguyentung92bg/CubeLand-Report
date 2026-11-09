public class BulletController : MonoBehaviour // TypeDefIndex: 3994
{
	// Fields
	[SerializeField]
	private Renderer bulletRenderer; // 0x10
	[SerializeField]
	private TrailRenderer trailRenderer; // 0x14
	[SerializeField]
	private float bulletMoveSpeed; // 0x18
	[SerializeField]
	private float bulletWinSequenceMoveSpeed; // 0x1C
	[SerializeField]
	private float bulletScaleSpeed; // 0x20
	[SerializeField]
	private float bulletWinSequenceScaleSpeed; // 0x24
	[SerializeField]
	private float destroyDistance; // 0x28
	[SerializeField]
	private float minScale; // 0x2C
	[SerializeField]
	private BulletMovementSettingsSO movementSettings; // 0x30
	private float _trailWidthBaseline; // 0x34
	private BaseTargetableController _target; // 0x38
	private LargeVoxelController _largeVoxelTarget; // 0x3C
	private bool _surfaceHitEmitted; // 0x40
	private Vector3 _prevLocalPosition; // 0x44
	private Transform _trackingSpace; // 0x50
	private Vector3 targetLocalPoint; // 0x54
	private Vector3 _prevTargetWorldPoint; // 0x60
	private BulletPool _bulletPool; // 0x6C
	private float _distance; // 0x70
	private float _currentMoveSpeed; // 0x74
	private float _currentScaleSpeed; // 0x78
	private float _elapsed; // 0x7C
	private float _currentCurveDuration; // 0x80
	private AnimationCurve _currentMoveSpeedCurve; // 0x84
	private AnimationCurve _currentScaleSpeedCurve; // 0x88

	// Methods

	// RVA: 0xFF8210 Offset: 0xFF8210 VA: 0xFF8210
	protected void Awake() { }

	// RVA: 0xFF82C8 Offset: 0xFF82C8 VA: 0xFF82C8
	public void Initialize(BaseTargetableController target, Vector3 targetWorldPoint, ColorType colorType) { }

	// RVA: 0xFF87D8 Offset: 0xFF87D8 VA: 0xFF87D8
	public void SetPool(BulletPool pool) { }

	// RVA: 0xFF86E8 Offset: 0xFF86E8 VA: 0xFF86E8
	public void SetWinSequenceActive(bool isActive) { }

	// RVA: 0xFF87E0 Offset: 0xFF87E0 VA: 0xFF87E0
	private void Update() { }

	// RVA: 0xFF8DA8 Offset: 0xFF8DA8 VA: 0xFF8DA8
	private void TryEmitLargeVoxelSurfaceHit() { }

	// RVA: 0xFF9470 Offset: 0xFF9470 VA: 0xFF9470
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts