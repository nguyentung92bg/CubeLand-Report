public class VoxelDestructionParticleController : MonoBehaviour // TypeDefIndex: 3669
{
	// Fields
	[SerializeField]
	private ParticleSystem voxelPS; // 0x10
	[SerializeField]
	private ParticleSystem glowPS; // 0x14
	[SerializeField]
	private ParticleSystemRenderer voxelPSRenderer; // 0x18
	[SerializeField]
	private ParticleSystemRenderer glowPSRenderer; // 0x1C
	private ParticleSystem.ColorOverLifetimeModule glowPSColorOverLifetime; // 0x20
	private ParticleSystem.MinMaxCurve _voxelStartSizeBaseline; // 0x24
	private ParticleSystem.MinMaxCurve _glowStartSizeBaseline; // 0x3C
	private ParticleSystem.MinMaxCurve _voxelTrailWidthBaseline; // 0x54
	private bool _hasVoxelTrail; // 0x6C
	private VoxelDestructionParticlePool pool; // 0x70

	// Properties
	public ParticleSystem.MinMaxCurve VoxelStartSizeBaseline { get; }
	public ParticleSystem.MinMaxCurve GlowStartSizeBaseline { get; }

	// Methods

	// RVA: 0x10FAF28 Offset: 0x10FAF28 VA: 0x10FAF28
	public ParticleSystem.MinMaxCurve get_VoxelStartSizeBaseline() { }

	// RVA: 0x10FAF40 Offset: 0x10FAF40 VA: 0x10FAF40
	public ParticleSystem.MinMaxCurve get_GlowStartSizeBaseline() { }

	// RVA: 0x10FAF58 Offset: 0x10FAF58 VA: 0x10FAF58
	public void Initialize(VoxelDestructionParticlePool pool) { }

	// RVA: 0x10FB0CC Offset: 0x10FB0CC VA: 0x10FB0CC
	public void Play(Vector3 position, ColorType colorType, float sizeMultiplier) { }

	// RVA: 0x10FB608 Offset: 0x10FB608 VA: 0x10FB608
	protected void OnParticleSystemStopped() { }

	// RVA: 0x10FB4E8 Offset: 0x10FB4E8 VA: 0x10FB4E8
	private static void ApplyStartSize(ParticleSystem ps, ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FB578 Offset: 0x10FB578 VA: 0x10FB578
	private static void ApplyTrailWidth(ParticleSystem ps, ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FB670 Offset: 0x10FB670 VA: 0x10FB670
	private static ParticleSystem.MinMaxCurve ScaleCurve(ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FB7A4 Offset: 0x10FB7A4 VA: 0x10FB7A4
	public void .ctor() { }
}

// Namespace: Rotatelab.FX