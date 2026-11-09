public class LargeVoxelController : BaseTargetableController // TypeDefIndex: 4046
{
	// Fields
	[CompilerGenerated]
	private LargeVoxelData <Data>k__BackingField; // 0x38
	[SerializeField]
	private MergedBlockController mergedBlockController; // 0x3C
	[SerializeField]
	[Tooltip("DoubleLargeCube's LargeVoxels share a single MeshRenderer with two submeshes so each one will have different material index.")]
	private int materialIndex; // 0x40
	private TextMeshPro[] healthTexts; // 0x44
	private int currentHealth; // 0x48
	private int displayedHealth; // 0x4C
	private float currentCrackAmount; // 0x50
	private MaterialPropertyBlock materialPropertyBlock; // 0x54

	// Properties
	public LargeVoxelData Data { get; set; }
	public override bool IsTargetable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10136AC Offset: 0x10136AC VA: 0x10136AC
	public LargeVoxelData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x10136B4 Offset: 0x10136B4 VA: 0x10136B4
	private void set_Data(LargeVoxelData value) { }

	// RVA: 0x10136BC Offset: 0x10136BC VA: 0x10136BC Slot: 6
	public override bool get_IsTargetable() { }

	// RVA: 0x10136D4 Offset: 0x10136D4 VA: 0x10136D4
	public void Initialize(LargeVoxelData data) { }

	// RVA: 0x10139C8 Offset: 0x10139C8 VA: 0x10139C8 Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0x1013BDC Offset: 0x1013BDC VA: 0x1013BDC Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x1013C0C Offset: 0x1013C0C VA: 0x1013C0C Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x1013C28 Offset: 0x1013C28 VA: 0x1013C28 Slot: 12
	public override Vector3 GetShootingPoint() { }

	// RVA: 0x1013D68 Offset: 0x1013D68 VA: 0x1013D68 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x1013D84 Offset: 0x1013D84 VA: 0x1013D84 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x1014318 Offset: 0x1014318 VA: 0x1014318
	public void OnVisualHealthDepleted() { }

	// RVA: 0x1013918 Offset: 0x1013918 VA: 0x1013918
	private void UpdateHealthTexts() { }

	// RVA: 0x1013E8C Offset: 0x1013E8C VA: 0x1013E8C
	private void AnimatePunch() { }

	// RVA: 0x10143A4 Offset: 0x10143A4 VA: 0x10143A4
	private void AnimateCrack() { }

	// RVA: 0x10147A4 Offset: 0x10147A4 VA: 0x10147A4
	public void EmitHitParticle(Vector3 worldPosition, Vector3 worldNormal) { }

	// RVA: 0x1014498 Offset: 0x1014498 VA: 0x1014498
	protected void AnimateBreakParticle() { }

	// RVA: 0x1014968 Offset: 0x1014968 VA: 0x1014968
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts