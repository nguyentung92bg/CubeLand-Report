public class ChainConnectionController : MonoBehaviour // TypeDefIndex: 4092
{
	// Fields
	[SerializeField]
	private ChainController chainPrefab; // 0x10
	[SerializeField]
	private Renderer chainBaseRenderer; // 0x14
	[SerializeField]
	private ParticleSystem breakParticle; // 0x18
	[SerializeField]
	private Transform connectionTransform; // 0x1C
	[Tooltip("Distance between successive chain links along the connection axis. Smaller = denser chain.")]
	[SerializeField]
	private float chainSpacing; // 0x20
	[Tooltip("Offset applied to every chain link along connectionTransform's local Z (connection) axis.")]
	[SerializeField]
	private float chainZOffset; // 0x24
	[Tooltip("Total swing duration in seconds.")]
	[SerializeField]
	private float swingDuration; // 0x28
	[Tooltip("Peak Y offset (local) at swing start; decays linearly to 0 by swingDuration.")]
	[SerializeField]
	private float swingAmplitude; // 0x2C
	[Tooltip("Number of full up/down oscillations across swingDuration. Integer so the swing ends exactly at 0 offset.")]
	[SerializeField]
	private int swingOscillations; // 0x30
	[Tooltip("Multiplier on the per-chain tilt angle. 1 = mathematically correct tangent, <1 softens, >1 exaggerates.")]
	[SerializeField]
	private float tiltStrength; // 0x34
	[CompilerGenerated]
	private BlasterController <ConnectedBlaster>k__BackingField; // 0x38
	private Transform lookAt; // 0x3C
	private bool shouldSpawnChains; // 0x40
	private bool isBreaking; // 0x41
	private bool isUpdatingChains; // 0x42
	private readonly List<ChainController> spawnedChains; // 0x44
	private float swingStartTime; // 0x48

	// Properties
	public BlasterController ConnectedBlaster { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x103BA6C Offset: 0x103BA6C VA: 0x103BA6C
	public BlasterController get_ConnectedBlaster() { }

	[CompilerGenerated]
	// RVA: 0x103BA74 Offset: 0x103BA74 VA: 0x103BA74
	private void set_ConnectedBlaster(BlasterController value) { }

	// RVA: 0x10324FC Offset: 0x10324FC VA: 0x10324FC
	public void Init(BlasterController connectedBlaster, Transform lookAt, bool spawnChains) { }

	// RVA: 0x103BA7C Offset: 0x103BA7C VA: 0x103BA7C
	protected void LateUpdate() { }

	// RVA: 0x103BAC8 Offset: 0x103BAC8 VA: 0x103BAC8
	private void UpdateChains() { }

	// RVA: 0x10394C4 Offset: 0x10394C4 VA: 0x10394C4
	public void Swing() { }

	// RVA: 0x103C1E8 Offset: 0x103C1E8 VA: 0x103C1E8
	private float ComputeSwingOffsetY() { }

	// RVA: 0x1039DD0 Offset: 0x1039DD0 VA: 0x1039DD0
	public void Break(bool playSfx = True) { }

	// RVA: 0x103C28C Offset: 0x103C28C VA: 0x103C28C
	private void Destroy() { }

	// RVA: 0x103C304 Offset: 0x103C304 VA: 0x103C304
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]