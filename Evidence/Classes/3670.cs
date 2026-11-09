public class WallDestructionParticleController : MonoBehaviour // TypeDefIndex: 3670
{
	// Fields
	[SerializeField]
	private ParticleSystem voxelPS; // 0x10
	[SerializeField]
	private ParticleSystem glowPS; // 0x14
	[SerializeField]
	private ParticleSystem explosionPS; // 0x18
	private ParticleSystem.MinMaxCurve _voxelStartSizeBaseline; // 0x1C
	private ParticleSystem.MinMaxCurve _glowStartSizeBaseline; // 0x34
	private ParticleSystem.MinMaxCurve _explosionStartSizeBaseline; // 0x4C
	private ParticleSystem.MinMaxCurve _voxelTrailWidthBaseline; // 0x64
	private bool _hasVoxelTrail; // 0x7C
	private WallDestructionParticlePool pool; // 0x80

	// Properties
	public ParticleSystem.MinMaxCurve VoxelStartSizeBaseline { get; }
	public ParticleSystem.MinMaxCurve GlowStartSizeBaseline { get; }
	public ParticleSystem.MinMaxCurve ExplosionStartSizeBaseline { get; }

	// Methods

	// RVA: 0x10FB7AC Offset: 0x10FB7AC VA: 0x10FB7AC
	public ParticleSystem.MinMaxCurve get_VoxelStartSizeBaseline() { }

	// RVA: 0x10FB7C4 Offset: 0x10FB7C4 VA: 0x10FB7C4
	public ParticleSystem.MinMaxCurve get_GlowStartSizeBaseline() { }

	// RVA: 0x10FB7DC Offset: 0x10FB7DC VA: 0x10FB7DC
	public ParticleSystem.MinMaxCurve get_ExplosionStartSizeBaseline() { }

	// RVA: 0x10FB7F4 Offset: 0x10FB7F4 VA: 0x10FB7F4
	public void Initialize(WallDestructionParticlePool pool) { }

	// RVA: 0x10FB938 Offset: 0x10FB938 VA: 0x10FB938
	public void Play(Vector3 position, float sizeMultiplier) { }

	// RVA: 0x10FBBC4 Offset: 0x10FBBC4 VA: 0x10FBBC4
	protected void OnParticleSystemStopped() { }

	// RVA: 0x10FBAA4 Offset: 0x10FBAA4 VA: 0x10FBAA4
	private static void ApplyStartSize(ParticleSystem ps, ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FBB34 Offset: 0x10FBB34 VA: 0x10FBB34
	private static void ApplyTrailWidth(ParticleSystem ps, ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FBC2C Offset: 0x10FBC2C VA: 0x10FBC2C
	private static ParticleSystem.MinMaxCurve ScaleCurve(ParticleSystem.MinMaxCurve baseline, float multiplier) { }

	// RVA: 0x10FBD60 Offset: 0x10FBD60 VA: 0x10FBD60
	public void .ctor() { }
}

// Namespace: Rotatelab.FX