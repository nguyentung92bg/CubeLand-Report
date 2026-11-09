public class BombController : BaseTargetableController // TypeDefIndex: 3993
{
	// Fields
	[CompilerGenerated]
	private BombData <Data>k__BackingField; // 0x38
	[SerializeField]
	private ParticleSystem explosionParticle; // 0x3C
	private int currentHealth; // 0x40
	private int displayedHealth; // 0x44
	private Material[] materials; // 0x48
	private List<Vector3Int> _destructibleGridPositions; // 0x4C
	private Dictionary<ColorType, int> _destroyedVoxelsByColor; // 0x50
	private const int DestructionAreaSize = 2;
	private float _targetProgress; // 0x54
	private float _currentProgress; // 0x58
	private Tween _hitTween; // 0x60
	private Tween _explosionLoopTween; // 0x70

	// Properties
	public BombData Data { get; set; }
	public override bool IsTargetable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF64EC Offset: 0xFF64EC VA: 0xFF64EC
	public BombData get_Data() { }

	[CompilerGenerated]
	// RVA: 0xFF64F4 Offset: 0xFF64F4 VA: 0xFF64F4
	private void set_Data(BombData value) { }

	// RVA: 0xFF64FC Offset: 0xFF64FC VA: 0xFF64FC Slot: 6
	public override bool get_IsTargetable() { }

	// RVA: 0xFF652C Offset: 0xFF652C VA: 0xFF652C
	public void Initialize(BombData data) { }

	// RVA: 0xFF66AC Offset: 0xFF66AC VA: 0xFF66AC Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0xFF6B88 Offset: 0xFF6B88 VA: 0xFF6B88
	public void FindDestructibleGridPositions() { }

	// RVA: 0xFF70AC Offset: 0xFF70AC VA: 0xFF70AC Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0xFF70C8 Offset: 0xFF70C8 VA: 0xFF70C8 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0xFF70E4 Offset: 0xFF70E4 VA: 0xFF70E4 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0xFF742C Offset: 0xFF742C VA: 0xFF742C
	private void AnimatePunch() { }

	// RVA: 0xFF7198 Offset: 0xFF7198 VA: 0xFF7198
	private void AnimateHit() { }

	// RVA: 0xFF7578 Offset: 0xFF7578 VA: 0xFF7578
	private IEnumerator AnimateExplosionCoroutine() { }

	// RVA: 0xFF760C Offset: 0xFF760C VA: 0xFF760C Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0xFF763C Offset: 0xFF763C VA: 0xFF763C
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts