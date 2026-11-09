public class FlyingPiggyController : BaseTargetableController // TypeDefIndex: 4029
{
	// Fields
	[CompilerGenerated]
	private FlyingPiggyData <Data>k__BackingField; // 0x38
	[SerializeField]
	private SkinnedMeshRenderer piggyRenderer; // 0x3C
	[SerializeField]
	private ParticleSystem explosionParticle; // 0x40
	[SerializeField]
	private float hitAnimationDuration; // 0x44
	[SerializeField]
	private float angularSpeed; // 0x48
	[SerializeField]
	private float radiusPadding; // 0x4C
	[SerializeField]
	private float startAngle; // 0x50
	private Vector3 orbitCenter; // 0x54
	private float orbitRadius; // 0x60
	private Transform cameraTransform; // 0x64
	private float angle; // 0x68
	private float currentAngularSpeed; // 0x6C
	private int currentHealth; // 0x70
	private int displayedHealth; // 0x74
	private int coinValue; // 0x78
	private float targetHitProgress; // 0x7C
	private float currentHitProgress; // 0x80
	private float progressPerHit; // 0x84
	private bool isVisualDepletionPending; // 0x88
	private Tween hitProgressTween; // 0x8C

	// Properties
	public FlyingPiggyData Data { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x100DC40 Offset: 0x100DC40 VA: 0x100DC40
	public FlyingPiggyData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x100DC48 Offset: 0x100DC48 VA: 0x100DC48
	private void set_Data(FlyingPiggyData value) { }

	// RVA: 0x100DC50 Offset: 0x100DC50 VA: 0x100DC50
	public void Initialize(FlyingPiggyData data, Vector3 center, float radius, Transform cameraTransform) { }

	// RVA: 0x100DEC8 Offset: 0x100DEC8 VA: 0x100DEC8 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x100DEE4 Offset: 0x100DEE4 VA: 0x100DEE4 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x100DF98 Offset: 0x100DF98 VA: 0x100DF98
	private void AnimateHit() { }

	// RVA: 0x100E0C0 Offset: 0x100E0C0 VA: 0x100E0C0
	public void OnVisualHealthDepleted() { }

	// RVA: 0x100E298 Offset: 0x100E298 VA: 0x100E298 Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x100E2A0 Offset: 0x100E2A0 VA: 0x100E2A0 Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x100E2D0 Offset: 0x100E2D0 VA: 0x100E2D0
	protected void Update() { }

	// RVA: 0x100DD0C Offset: 0x100DD0C VA: 0x100DD0C
	private void UpdateOrbitPosition() { }

	// RVA: 0x100E440 Offset: 0x100E440 VA: 0x100E440 Slot: 15
	protected override void Destroy() { }

	// RVA: 0x100E84C Offset: 0x100E84C VA: 0x100E84C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x100E884 Offset: 0x100E884 VA: 0x100E884
	private void <AnimateHit>b__26_0(float value) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]