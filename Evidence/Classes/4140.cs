public class ScrewController : BaseTargetableController // TypeDefIndex: 4140
{
	// Fields
	[SerializeField]
	private Renderer screwRenderer; // 0x38
	[SerializeField]
	private Renderer gridCellBounds; // 0x3C
	[SerializeField]
	private Transform hitPoint; // 0x40
	[SerializeField]
	private float targetLocalPositionY; // 0x44
	[SerializeField]
	private ParticleSystem destructionParticle; // 0x48
	private PlaypenController owner; // 0x4C
	private Vector3Int[] gridPositions; // 0x50
	private int _currentHp; // 0x54
	private int _displayedHp; // 0x58
	private float _localPositionYChangePerHit; // 0x5C
	private float _animatedTargetY; // 0x60
	private Sequence hitSequence; // 0x68
	private bool isFirstHit; // 0x78

	// Properties
	public override bool IsTargetable { get; }
	public override Transform ShootingPointSpace { get; }

	// Methods

	// RVA: 0x104FEE0 Offset: 0x104FEE0 VA: 0x104FEE0 Slot: 6
	public override bool get_IsTargetable() { }

	// RVA: 0x104F9BC Offset: 0x104F9BC VA: 0x104F9BC
	public void Initialize(PlaypenController owner) { }

	// RVA: 0x104FA68 Offset: 0x104FA68 VA: 0x104FA68
	public void SetupHp(int hp) { }

	// RVA: 0x104FEF8 Offset: 0x104FEF8 VA: 0x104FEF8 Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0x1050154 Offset: 0x1050154 VA: 0x1050154 Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x105015C Offset: 0x105015C VA: 0x105015C Slot: 12
	public override Vector3 GetShootingPoint() { }

	// RVA: 0x10501A0 Offset: 0x10501A0 VA: 0x10501A0 Slot: 13
	public override Transform get_ShootingPointSpace() { }

	// RVA: 0x10501A8 Offset: 0x10501A8 VA: 0x10501A8 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x10501C4 Offset: 0x10501C4 VA: 0x10501C4
	private void AnimateHit() { }

	// RVA: 0x10504AC Offset: 0x10504AC VA: 0x10504AC Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x1050580 Offset: 0x1050580 VA: 0x1050580 Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x1050674 Offset: 0x1050674 VA: 0x1050674
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]