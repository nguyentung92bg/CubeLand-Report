public class UtilityPlaceableController : BasePlaceableController // TypeDefIndex: 4138
{
	// Fields
	[SerializeField]
	private Transform visualTransform; // 0x40
	[CompilerGenerated]
	private UtilityDockController <CurrentDock>k__BackingField; // 0x44
	private Tween rotationTween; // 0x48
	private Tween scaleTween; // 0x58

	// Properties
	public UtilityDockController CurrentDock { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x104F070 Offset: 0x104F070 VA: 0x104F070
	public UtilityDockController get_CurrentDock() { }

	[CompilerGenerated]
	// RVA: 0x104F078 Offset: 0x104F078 VA: 0x104F078
	private void set_CurrentDock(UtilityDockController value) { }

	// RVA: 0x104F080 Offset: 0x104F080 VA: 0x104F080
	public void Place(UtilityDockController dock) { }

	// RVA: 0x104F36C Offset: 0x104F36C VA: 0x104F36C
	private void SyncIdleAnimationWithDockedSameType() { }

	// RVA: 0x104D840 Offset: 0x104D840 VA: 0x104D840
	public void StopRotationTween() { }

	// RVA: 0x104E45C Offset: 0x104E45C VA: 0x104E45C
	public void Scale(Vector3 targetScale) { }

	// RVA: 0x104DACC Offset: 0x104DACC VA: 0x104DACC
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts