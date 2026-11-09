public class BulletParticleManager : SingletonBehaviour<BulletParticleManager> // TypeDefIndex: 3996
{
	// Fields
	[SerializeField]
	private ParticleSystem shootingParticle; // 0x10
	[SerializeField]
	private ParticleSystem hiddenRevealParticle; // 0x14
	[SerializeField]
	private int hiddenRevealPoolSize; // 0x18
	[SerializeField]
	private ParticleSystem iceBreakParticle; // 0x1C
	[SerializeField]
	private int iceBreakPoolSize; // 0x20
	[SerializeField]
	private ParticleSystem iceHitParticle; // 0x24
	[SerializeField]
	private int iceHitPoolSize; // 0x28
	[SerializeField]
	private ParticleSystem doubleColorRevealParticle; // 0x2C
	[SerializeField]
	private int doubleColorRevealPoolSize; // 0x30
	[SerializeField]
	private ParticleSystem dieParticle; // 0x34
	[SerializeField]
	private int diePoolSize; // 0x38
	[SerializeField]
	private BlasterParticleOffsets offsets; // 0x3C
	private ParticleSystem[] _shootingPool; // 0x40
	private int _shootingIdx; // 0x44
	private ParticleSystem[] _hiddenRevealPool; // 0x48
	private int _hiddenRevealIdx; // 0x4C
	private ParticleSystem[] _iceBreakPool; // 0x50
	private int _iceBreakIdx; // 0x54
	private ParticleSystem[] _iceHitPool; // 0x58
	private int _iceHitIdx; // 0x5C
	private ParticleSystem[] _doubleColorRevealPool; // 0x60
	private int _doubleColorRevealIdx; // 0x64
	private ParticleSystem[] _diePool; // 0x68
	private int _dieIdx; // 0x6C

	// Methods

	// RVA: 0xFF9E64 Offset: 0xFF9E64 VA: 0xFF9E64 Slot: 4
	protected override void Awake() { }

	// RVA: 0xFF9F30 Offset: 0xFF9F30 VA: 0xFF9F30
	private static ParticleSystem[] BuildPool(ParticleSystem template, int size) { }

	// RVA: 0xFFA19C Offset: 0xFFA19C VA: 0xFFA19C
	private static void ForceOneShot(ParticleSystem ps) { }

	// RVA: 0xFFA2E4 Offset: 0xFFA2E4 VA: 0xFFA2E4
	private static ParticleSystem NextInPool(ParticleSystem[] pool, ref int index) { }

	// RVA: 0xFFA340 Offset: 0xFFA340 VA: 0xFFA340
	public void EmitShooting(Vector3 worldPosition, Quaternion rotation, int count = 3) { }

	// RVA: 0xFFA62C Offset: 0xFFA62C VA: 0xFFA62C
	public void EmitHiddenReveal(Vector3 worldPosition) { }

	// RVA: 0xFFA9DC Offset: 0xFFA9DC VA: 0xFFA9DC
	public void EmitIceBreak(Vector3 worldPosition) { }

	// RVA: 0xFFAB28 Offset: 0xFFAB28 VA: 0xFFAB28
	public void EmitIceHit(Vector3 worldPosition) { }

	// RVA: 0xFFAC74 Offset: 0xFFAC74 VA: 0xFFAC74
	public void EmitDoubleColorReveal(Vector3 worldPosition) { }

	// RVA: 0xFFADC0 Offset: 0xFFADC0 VA: 0xFFADC0
	public void EmitDie(Vector3 worldPosition, Quaternion rotation, ColorType colorType) { }

	// RVA: 0xFFA778 Offset: 0xFFA778 VA: 0xFFA778
	private static void EmitTargeted(ParticleSystem ps, Vector3 worldPosition, Quaternion rotation, BlasterParticleOffsets.Offset offset) { }

	// RVA: 0xFFB4D8 Offset: 0xFFB4D8 VA: 0xFFB4D8
	public void .ctor() { }
}

// Namespace: 