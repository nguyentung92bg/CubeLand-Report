public abstract class BaseDockController : MonoBehaviour // TypeDefIndex: 4015
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private Transform <PlacementPoint>k__BackingField; // 0x10
	[CompilerGenerated]
	private BasePlaceableController <DockedPlaceable>k__BackingField; // 0x14

	// Properties
	public Transform PlacementPoint { get; set; }
	public BasePlaceableController DockedPlaceable { get; set; }
	public virtual bool IsUsable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x100B350 Offset: 0x100B350 VA: 0x100B350
	public Transform get_PlacementPoint() { }

	[CompilerGenerated]
	// RVA: 0x100B358 Offset: 0x100B358 VA: 0x100B358
	private void set_PlacementPoint(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x100B360 Offset: 0x100B360 VA: 0x100B360
	public BasePlaceableController get_DockedPlaceable() { }

	[CompilerGenerated]
	// RVA: 0x100B368 Offset: 0x100B368 VA: 0x100B368
	private void set_DockedPlaceable(BasePlaceableController value) { }

	// RVA: 0x100B370 Offset: 0x100B370 VA: 0x100B370 Slot: 4
	public virtual bool get_IsUsable() { }

	// RVA: 0x100B3E0 Offset: 0x100B3E0 VA: 0x100B3E0 Slot: 5
	protected virtual void OnEnable() { }

	// RVA: 0x100B3E4 Offset: 0x100B3E4 VA: 0x100B3E4 Slot: 6
	protected virtual void OnDisable() { }

	// RVA: 0x100B3E8 Offset: 0x100B3E8 VA: 0x100B3E8
	protected void Fill(BasePlaceableController placeable) { }

	// RVA: 0x100B490 Offset: 0x100B490 VA: 0x100B490 Slot: 7
	protected virtual void OnFilled() { }

	// RVA: 0x100B530 Offset: 0x100B530 VA: 0x100B530
	public void Empty(BasePlaceableController dockedPlaceable) { }

	// RVA: 0x10093F0 Offset: 0x10093F0 VA: 0x10093F0
	public void OnLevelBeingCleared() { }

	// RVA: 0x100B60C Offset: 0x100B60C VA: 0x100B60C Slot: 8
	protected virtual void OnEmptied() { }

	// RVA: 0x100B6AC Offset: 0x100B6AC VA: 0x100B6AC
	protected void .ctor() { }
}

// Namespace: Rotatelab.Scripts