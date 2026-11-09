public class IceWrapperController : MonoBehaviour // TypeDefIndex: 4039
{
	// Fields
	private const float Scale = 1.05;
	[CompilerGenerated]
	private IceWrapperData <Data>k__BackingField; // 0x10
	[SerializeField]
	private MergedBlockController mergedBlockController; // 0x14
	[SerializeField]
	private Renderer iceRenderer; // 0x18
	[SerializeField]
	private ParticleSystem breakParticlePrefab; // 0x1C
	[SerializeField]
	private ParticleSystem hitParticlePrefab; // 0x20
	private TextMeshPro[] healthTexts; // 0x24
	private ParticleSystem hitParticle; // 0x28
	private int currentHealth; // 0x2C
	private float currentCrackAmount; // 0x30
	private MaterialPropertyBlock materialPropertyBlock; // 0x34
	private Tween scaleTween; // 0x38
	private Tween crackTween; // 0x48

	// Properties
	public IceWrapperData Data { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1010544 Offset: 0x1010544 VA: 0x1010544
	public IceWrapperData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x101054C Offset: 0x101054C VA: 0x101054C
	private void set_Data(IceWrapperData value) { }

	// RVA: 0x1010554 Offset: 0x1010554 VA: 0x1010554
	private void OnEnable() { }

	// RVA: 0x101061C Offset: 0x101061C VA: 0x101061C
	private void OnDisable() { }

	// RVA: 0x10106E4 Offset: 0x10106E4 VA: 0x10106E4
	public void Initialize(IceWrapperData data) { }

	// RVA: 0x1011274 Offset: 0x1011274 VA: 0x1011274
	private void DecreaseCurrentHp() { }

	// RVA: 0x101133C Offset: 0x101133C VA: 0x101133C
	private void AnimatePunch() { }

	// RVA: 0x1011440 Offset: 0x1011440 VA: 0x1011440
	private void AnimateCrack() { }

	// RVA: 0x1010B50 Offset: 0x1010B50 VA: 0x1010B50
	private void CreateHitParticle() { }

	// RVA: 0x1011DA4 Offset: 0x1011DA4 VA: 0x1011DA4
	private void EmitHitParticle() { }

	// RVA: 0x10116C4 Offset: 0x10116C4 VA: 0x10116C4
	private void AnimateBreakParticle() { }

	// RVA: 0x10111C4 Offset: 0x10111C4 VA: 0x10111C4
	private void UpdateHealthTexts() { }

	// RVA: 0x1011AB0 Offset: 0x1011AB0 VA: 0x1011AB0
	private void Destroy() { }

	// RVA: 0x1011DF4 Offset: 0x1011DF4 VA: 0x1011DF4
	private void OnPlaceableLeftQueueHandler(BasePlaceableController placeable) { }

	// RVA: 0x1011E80 Offset: 0x1011E80 VA: 0x1011E80
	private void OnDestroy() { }

	// RVA: 0x1011EF4 Offset: 0x1011EF4 VA: 0x1011EF4
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts