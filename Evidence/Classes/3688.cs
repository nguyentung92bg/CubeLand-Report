public class LargeVoxelBreakParticlePool : MonoBehaviour, IObjectPool<ParticleSystem> // TypeDefIndex: 3688
{
	// Fields
	[SerializeField]
	private GameObject particlePrefab; // 0x10
	[SerializeField]
	private int poolSize; // 0x14
	[SerializeField]
	private List<ParticleSystem> active; // 0x18
	[SerializeField]
	private List<ParticleSystem> inactive; // 0x1C
	private readonly Dictionary<ParticleSystem, ValueTuple<ParticleSystem, ParticleSystem.MinMaxCurve>[]> _startSizeBaselines; // 0x20

	// Properties
	public int CountActive { get; }
	public int CountInactive { get; }
	public int CountAll { get; }

	// Methods

	// RVA: 0x1100F50 Offset: 0x1100F50 VA: 0x1100F50
	public int get_CountActive() { }

	// RVA: 0x1100FA0 Offset: 0x1100FA0 VA: 0x1100FA0 Slot: 5
	public int get_CountInactive() { }

	// RVA: 0x1100FF0 Offset: 0x1100FF0 VA: 0x1100FF0
	public int get_CountAll() { }

	// RVA: 0x1101058 Offset: 0x1101058 VA: 0x1101058
	private void Awake() { }

	// RVA: 0x11016E8 Offset: 0x11016E8 VA: 0x11016E8
	private void OnEnable() { }

	// RVA: 0x11017E8 Offset: 0x11017E8 VA: 0x11017E8
	private void OnDisable() { }

	// RVA: 0x11018E8 Offset: 0x11018E8 VA: 0x11018E8
	private void OnRequested(ColorType colorType, Vector3 position, int emission, float radius, float sizeMultiplier) { }

	// RVA: 0x1101E38 Offset: 0x1101E38 VA: 0x1101E38 Slot: 6
	public ParticleSystem Get() { }

	// RVA: 0x110205C Offset: 0x110205C VA: 0x110205C Slot: 7
	public PooledObject<ParticleSystem> Get(out ParticleSystem v) { }

	// RVA: 0x11020E4 Offset: 0x11020E4 VA: 0x11020E4 Slot: 4
	public void Release(ParticleSystem element) { }

	// RVA: 0x11022AC Offset: 0x11022AC VA: 0x11022AC Slot: 8
	public void Clear() { }

	// RVA: 0x1101174 Offset: 0x1101174 VA: 0x1101174
	private ParticleSystem CreateInstance() { }

	// RVA: 0x1102554 Offset: 0x1102554 VA: 0x1102554
	public void .ctor() { }
}

// Namespace: Rotatelab.Pool