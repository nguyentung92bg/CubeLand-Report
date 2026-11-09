public class MovementActivatedParticleTrail : MonoBehaviour // TypeDefIndex: 4070
{
	// Fields
	[SerializeField]
	private float movementThreshold; // 0x10
	[SerializeField]
	private float stopDelay; // 0x14
	[SerializeField]
	private bool forceWorldSimulation; // 0x18
	[SerializeField]
	private bool setRootObjectsActive; // 0x19
	[SerializeField]
	private Transform[] particleRoots; // 0x1C
	private ParticleSystem[] _particleSystems; // 0x20
	private GameObject[] _rootObjects; // 0x24
	private Vector3 _lastPosition; // 0x28
	private bool _hasLastPosition; // 0x34
	private bool _emitting; // 0x35
	private float _lastMoveTime; // 0x38

	// Methods

	// RVA: 0x10295E0 Offset: 0x10295E0 VA: 0x10295E0
	private void Awake() { }

	// RVA: 0x1029BA0 Offset: 0x1029BA0 VA: 0x1029BA0
	private void OnEnable() { }

	// RVA: 0x1029DD4 Offset: 0x1029DD4 VA: 0x1029DD4
	private void Start() { }

	// RVA: 0x1029DE0 Offset: 0x1029DE0 VA: 0x1029DE0
	private void LateUpdate() { }

	// RVA: 0x1029F2C Offset: 0x1029F2C VA: 0x1029F2C
	private void OnDisable() { }

	// RVA: 0x1029C10 Offset: 0x1029C10 VA: 0x1029C10
	private void SetEmitting(bool shouldEmit, bool clearParticles) { }

	// RVA: 0x1029F4C Offset: 0x1029F4C VA: 0x1029F4C
	private void SetRootObjectsActive(bool active) { }

	// RVA: 0x10297D0 Offset: 0x10297D0 VA: 0x10297D0
	private static ParticleSystem[] GetParticleSystemsFromRoots(Transform[] roots) { }

	// RVA: 0x1029A48 Offset: 0x1029A48 VA: 0x1029A48
	private static GameObject[] GetRootObjects(Transform[] roots) { }

	// RVA: 0x102A02C Offset: 0x102A02C VA: 0x102A02C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]