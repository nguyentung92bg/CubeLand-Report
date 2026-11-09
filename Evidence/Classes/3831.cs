public class VacuumBoosterController : BaseBoosterController // TypeDefIndex: 3831
{
	// Fields
	[SerializeField]
	private Transform vacuum; // 0x10
	[SerializeField]
	private Transform hoseTip; // 0x14
	[SerializeField]
	private Animator animator; // 0x18
	private readonly int animatorVacuumProp; // 0x1C
	private bool hasVacuumStarted; // 0x20
	[SerializeField]
	private SkinnedMeshRenderer skinnedMeshRenderer; // 0x24
	private Material hoseMaterial; // 0x28
	private float nextHoseBulgeTime; // 0x2C
	private int nextHoseBulgeIndex; // 0x30
	private readonly int[] shaderHoseBulgeProps; // 0x34
	[SerializeField]
	private ChainIKConstraint hoseIK; // 0x38
	private readonly List<ValueTuple<Transform, Quaternion>> hoseIKData; // 0x3C
	[SerializeField]
	private ParticleSystem[] vacuumParticles; // 0x40
	[SerializeField]
	private Transform vacuumSmokeParticlesStartPos; // 0x44
	private Vector3 vacuumSmokeParticlesEndPos; // 0x48
	[SerializeField]
	private float idleRotationSpeed; // 0x54
	[SerializeField]
	private float vacuumingRotationSpeed; // 0x58
	private Vector3 defaultPosition; // 0x5C
	private Vector3 outsidePosition; // 0x68
	private Tween slideTween; // 0x78
	private Coroutine cameraRotationCoroutine; // 0x88

	// Properties
	protected override CurrencyType BoosterType { get; }
	public static bool IsActive { get; }

	// Methods

	// RVA: 0x1137AA8 Offset: 0x1137AA8 VA: 0x1137AA8 Slot: 4
	protected override CurrencyType get_BoosterType() { }

	// RVA: 0x1137AB0 Offset: 0x1137AB0 VA: 0x1137AB0
	public static bool get_IsActive() { }

	// RVA: 0x1137B10 Offset: 0x1137B10 VA: 0x1137B10
	protected void Awake() { }

	// RVA: 0x1137E70 Offset: 0x1137E70 VA: 0x1137E70 Slot: 7
	protected override void OnActivated() { }

	// RVA: 0x1138338 Offset: 0x1138338 VA: 0x1138338 Slot: 8
	protected override void OnDeactivated() { }

	// RVA: 0x1138660 Offset: 0x1138660 VA: 0x1138660 Slot: 9
	protected override void OnUsed() { }

	// RVA: 0x1138350 Offset: 0x1138350 VA: 0x1138350
	private void OnStopped() { }

	// RVA: 0x1138678 Offset: 0x1138678 VA: 0x1138678
	private void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x113888C Offset: 0x113888C VA: 0x113888C
	private IEnumerator VacuumVoxelsCoroutine(ColorType colorType) { }

	// RVA: 0x1138928 Offset: 0x1138928 VA: 0x1138928
	private void VacuumVoxel(VoxelController voxel) { }

	// RVA: 0x11382C0 Offset: 0x11382C0 VA: 0x11382C0
	private IEnumerator CameraRotationCoroutine() { }

	// RVA: 0x1138AD0 Offset: 0x1138AD0 VA: 0x1138AD0
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters
[Serializable]