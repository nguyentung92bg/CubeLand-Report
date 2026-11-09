public class ParticleImageController : MonoBehaviour // TypeDefIndex: 3683
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private ParticleImage <ParticleImage>k__BackingField; // 0x10
	private ParticleImagePool pool; // 0x14
	private ParticleImageType type; // 0x18
	private bool soundEnabled; // 0x1C

	// Properties
	public ParticleImage ParticleImage { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x110026C Offset: 0x110026C VA: 0x110026C
	public ParticleImage get_ParticleImage() { }

	[CompilerGenerated]
	// RVA: 0x1100274 Offset: 0x1100274 VA: 0x1100274
	private void set_ParticleImage(ParticleImage value) { }

	// RVA: 0x110027C Offset: 0x110027C VA: 0x110027C
	protected void Awake() { }

	// RVA: 0x1100414 Offset: 0x1100414 VA: 0x1100414
	public void SetPool(ParticleImagePool pool) { }

	// RVA: 0x110041C Offset: 0x110041C VA: 0x110041C
	public void Initialize(ParticleImageType type) { }

	// RVA: 0x1100424 Offset: 0x1100424 VA: 0x1100424
	public void SetSpriteAndPreserveAspect(Sprite sprite) { }

	// RVA: 0x1100668 Offset: 0x1100668 VA: 0x1100668
	public void SetSoundEnabled(bool isEnabled) { }

	// RVA: 0x1100670 Offset: 0x1100670 VA: 0x1100670
	private void OnParticleStarted() { }

	// RVA: 0x11006FC Offset: 0x11006FC VA: 0x11006FC
	private void OnAnyParticleFinished() { }

	// RVA: 0x11007C0 Offset: 0x11007C0 VA: 0x11007C0
	private void OnLastParticleFinished() { }

	// RVA: 0x1100874 Offset: 0x1100874 VA: 0x1100874
	public void .ctor() { }
}

// Namespace: 
[Serializable]