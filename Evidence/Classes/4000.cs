public class ColorBoxController : MonoBehaviour // TypeDefIndex: 4000
{
	// Fields
	private const float Scale = 1.02;
	private const float BodyScale = 1.05;
	private static readonly int HitAnimationStateHash; // 0x0
	[CompilerGenerated]
	private ColorBoxData <Data>k__BackingField; // 0x10
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0x14
	[SerializeField]
	[Tooltip("Body mesh generator (rounded box / marching cubes). Sits under the plank tiles, gets tinted with the cover's color, hosts the crack overlay shader and HP TMP labels.")]
	private MergedBlockController body; // 0x18
	[SerializeField]
	private Animator animator; // 0x1C
	[SerializeField]
	private ColorBoxPlankLayer plankLayer; // 0x20
	[SerializeField]
	[Tooltip("One-shot HP=0 destroy burst. Mirrors IceWrapper.AnimateBreakParticle: shape.radius and burst.count scale with bounds size.")]
	private ParticleSystem breakParticlePrefab; // 0x24
	private TextMeshPro[] healthTexts; // 0x28
	private Renderer bodyRenderer; // 0x2C
	private int currentHp; // 0x30
	private float currentCrackAmount; // 0x34
	private MaterialPropertyBlock materialPropertyBlock; // 0x38
	private Tween crackTween; // 0x40
	private Sequence destroySequence; // 0x50

	// Properties
	public ColorBoxData Data { get; set; }
	public ColorType ColorType { get; set; }
	public Vector3Int[] OccupiedCells { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFFBF94 Offset: 0xFFBF94 VA: 0xFFBF94
	public ColorBoxData get_Data() { }

	[CompilerGenerated]
	// RVA: 0xFFBF9C Offset: 0xFFBF9C VA: 0xFFBF9C
	private void set_Data(ColorBoxData value) { }

	[CompilerGenerated]
	// RVA: 0xFFBFA4 Offset: 0xFFBFA4 VA: 0xFFBFA4
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0xFFBFAC Offset: 0xFFBFAC VA: 0xFFBFAC
	private void set_ColorType(ColorType value) { }

	// RVA: 0xFFBFB4 Offset: 0xFFBFB4 VA: 0xFFBFB4
	public Vector3Int[] get_OccupiedCells() { }

	// RVA: 0xFFBFD0 Offset: 0xFFBFD0 VA: 0xFFBFD0
	public void Initialize(ColorBoxData data) { }

	// RVA: 0xFFD194 Offset: 0xFFD194 VA: 0xFFD194
	private void OnBulletsConsumedHandler(ColorType color, int amount) { }

	// RVA: 0xFFD1D4 Offset: 0xFFD1D4 VA: 0xFFD1D4
	private void DecreaseHp() { }

	// RVA: 0xFFD6D0 Offset: 0xFFD6D0 VA: 0xFFD6D0
	private void Destroy() { }

	// RVA: 0xFFDFF0 Offset: 0xFFDFF0 VA: 0xFFDFF0
	private void AnimateBreakParticle() { }

	// RVA: 0xFFC770 Offset: 0xFFC770 VA: 0xFFC770
	private void UpdateHealthTexts() { }

	// RVA: 0xFFD340 Offset: 0xFFD340 VA: 0xFFD340
	private void AnimateCrack() { }

	// RVA: 0xFFE914 Offset: 0xFFE914 VA: 0xFFE914
	protected void OnDisable() { }

	// RVA: 0xFFEA1C Offset: 0xFFEA1C VA: 0xFFEA1C
	protected void OnDestroy() { }

	// RVA: 0xFFEA90 Offset: 0xFFEA90 VA: 0xFFEA90
	public void .ctor() { }

	// RVA: 0xFFEA98 Offset: 0xFFEA98 VA: 0xFFEA98
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]