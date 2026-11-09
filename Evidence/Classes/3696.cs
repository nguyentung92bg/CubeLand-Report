public class WoodPlankShatterPool : MonoBehaviour, IObjectPool<ParticleSystem> // TypeDefIndex: 3696
{
	// Fields
	[SerializeField]
	private GameObject particlePrefab; // 0x10
	[SerializeField]
	private int poolSize; // 0x14
	[SerializeField]
	[Tooltip("Multiplier applied to the root particle's authored shape.radius. Per-emit plank lossy scale is multiplied on top.")]
	[FormerlySerializedAs("childRadiusMultiplier")]
	private float radiusMultiplier; // 0x18
	[SerializeField]
	[Tooltip("Material slot on the root ParticleSystemRenderer that gets recolored per emit. Other slots (trail, etc.) are left as authored.")]
	private int coloredMaterialIndex; // 0x1C
	[SerializeField]
	private List<ParticleSystem> active; // 0x20
	[SerializeField]
	private List<ParticleSystem> inactive; // 0x24
	private readonly Dictionary<ParticleSystem, float> _baseRadius; // 0x28
	private readonly Dictionary<ParticleSystem, ParticleSystemRenderer> _rendererByPs; // 0x2C

	// Properties
	public int CountActive { get; }
	public int CountInactive { get; }
	public int CountAll { get; }

	// Methods

	// RVA: 0x1103F88 Offset: 0x1103F88 VA: 0x1103F88
	public int get_CountActive() { }

	// RVA: 0x1103FD8 Offset: 0x1103FD8 VA: 0x1103FD8 Slot: 5
	public int get_CountInactive() { }

	// RVA: 0x1104028 Offset: 0x1104028 VA: 0x1104028
	public int get_CountAll() { }

	// RVA: 0x1104090 Offset: 0x1104090 VA: 0x1104090
	protected void Awake() { }

	// RVA: 0x1104664 Offset: 0x1104664 VA: 0x1104664
	protected void OnEnable() { }

	// RVA: 0x1104764 Offset: 0x1104764 VA: 0x1104764
	protected void OnDisable() { }

	// RVA: 0x1104864 Offset: 0x1104864 VA: 0x1104864
	private void OnRequested(ColorType colorType, Vector3 position, Quaternion rotation, float scale) { }

	// RVA: 0x1104B24 Offset: 0x1104B24 VA: 0x1104B24 Slot: 6
	public ParticleSystem Get() { }

	// RVA: 0x1104CF8 Offset: 0x1104CF8 VA: 0x1104CF8 Slot: 7
	public PooledObject<ParticleSystem> Get(out ParticleSystem v) { }

	// RVA: 0x1104D80 Offset: 0x1104D80 VA: 0x1104D80 Slot: 4
	public void Release(ParticleSystem element) { }

	// RVA: 0x1104F48 Offset: 0x1104F48 VA: 0x1104F48 Slot: 8
	public void Clear() { }

	// RVA: 0x11041AC Offset: 0x11041AC VA: 0x11041AC
	private ParticleSystem CreateInstance() { }

	// RVA: 0x11051F0 Offset: 0x11051F0 VA: 0x11051F0
	public void .ctor() { }
}

// Namespace: Rotatelab.Pool