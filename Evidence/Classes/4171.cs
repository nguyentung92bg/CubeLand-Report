public class VoxelController : BaseTargetableController, ICannonShootableTarget // TypeDefIndex: 4171
{
	// Fields
	private readonly Vector3Int[] m_position; // 0x38
	[SerializeField]
	private MeshFilter meshFilter; // 0x3C

	// Properties
	public bool IsCannonShootable { get; }
	public Vector3Int Position { get; set; }

	// Methods

	// RVA: 0x105D1D4 Offset: 0x105D1D4 VA: 0x105D1D4 Slot: 18
	public bool get_IsCannonShootable() { }

	// RVA: 0x105D1E4 Offset: 0x105D1E4 VA: 0x105D1E4
	public Vector3Int get_Position() { }

	// RVA: 0x105D220 Offset: 0x105D220 VA: 0x105D220
	private void set_Position(Vector3Int value) { }

	// RVA: 0x105D260 Offset: 0x105D260 VA: 0x105D260
	public void Initialize(Vector3Int position, ColorType colorType) { }

	// RVA: 0x105D448 Offset: 0x105D448 VA: 0x105D448 Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x105D450 Offset: 0x105D450 VA: 0x105D450 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x105D458 Offset: 0x105D458 VA: 0x105D458 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x105D468 Offset: 0x105D468 VA: 0x105D468 Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0x105D574 Offset: 0x105D574 VA: 0x105D574
	public void DestroyViaVacuumBooster(Transform hoseTip) { }

	// RVA: 0x105DCC4 Offset: 0x105DCC4 VA: 0x105DCC4 Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x105DCCC Offset: 0x105DCCC VA: 0x105DCCC
	private void DestructionBehaviour(bool playDestructionParticle) { }

	// RVA: 0x105DE04 Offset: 0x105DE04 VA: 0x105DE04
	private void CollectGoldenCoin() { }

	// RVA: 0x105E048 Offset: 0x105E048 VA: 0x105E048
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]