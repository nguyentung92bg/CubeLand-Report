public class HiddenChestController : BaseTargetableController // TypeDefIndex: 4036
{
	// Fields
	[CompilerGenerated]
	private HiddenChestData <Data>k__BackingField; // 0x38
	[SerializeField]
	private Transform hiddenChestSpawnRoot; // 0x3C
	[SerializeField]
	private HiddenChestController.HiddenChestPrefabData[] hiddenChestPrefabs; // 0x40
	private HiddenChestLockController hiddenChestLock; // 0x44
	private Animator animator; // 0x48
	private TMP_Text hpText; // 0x4C
	private int _currentHealth; // 0x50
	private int _displayedHealth; // 0x54

	// Properties
	public HiddenChestData Data { get; set; }
	public override bool IsTargetable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x100F884 Offset: 0x100F884 VA: 0x100F884
	public HiddenChestData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x100F88C Offset: 0x100F88C VA: 0x100F88C
	private void set_Data(HiddenChestData value) { }

	// RVA: 0x100F894 Offset: 0x100F894 VA: 0x100F894 Slot: 6
	public override bool get_IsTargetable() { }

	// RVA: 0x100F9E0 Offset: 0x100F9E0 VA: 0x100F9E0
	public void Initialize(HiddenChestData data) { }

	// RVA: 0x100FFAC Offset: 0x100FFAC VA: 0x100FFAC Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0x1010088 Offset: 0x1010088 VA: 0x1010088 Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x10100A4 Offset: 0x10100A4 VA: 0x10100A4 Slot: 12
	public override Vector3 GetShootingPoint() { }

	// RVA: 0x10101E4 Offset: 0x10101E4 VA: 0x10101E4 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x1010200 Offset: 0x1010200 VA: 0x1010200 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x101029C Offset: 0x101029C VA: 0x101029C
	public void OnVisualHealthDepleted() { }

	// RVA: 0x1010320 Offset: 0x1010320 VA: 0x1010320
	private void AnimateBreakParticle() { }

	// RVA: 0x100FF34 Offset: 0x100FF34 VA: 0x100FF34
	private void UpdateHealthTexts() { }

	// RVA: 0x1010324 Offset: 0x1010324 VA: 0x1010324 Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x1010448 Offset: 0x1010448 VA: 0x1010448
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1010450 Offset: 0x1010450 VA: 0x1010450
	private void <DestructionBehaviour>b__23_0() { }
}

// Namespace: Rotatelab.Scripts