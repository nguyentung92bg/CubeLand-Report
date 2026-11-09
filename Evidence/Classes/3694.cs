public class WallDestructionParticlePool : ObjectPool<WallDestructionParticleController> // TypeDefIndex: 3694
{
	// Fields
	[SerializeField]
	private float referenceParentScale; // 0x28
	private float sizeMultiplier; // 0x2C

	// Methods

	// RVA: 0x11039D0 Offset: 0x11039D0 VA: 0x11039D0 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1103B9C Offset: 0x1103B9C VA: 0x1103B9C
	protected void OnDestroy() { }

	// RVA: 0x1103D40 Offset: 0x1103D40 VA: 0x1103D40
	private void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0x1103DC0 Offset: 0x1103DC0 VA: 0x1103DC0
	private void OnParticleRequested(Vector3 position) { }

	// RVA: 0x1103E5C Offset: 0x1103E5C VA: 0x1103E5C Slot: 5
	protected override void OnInstanceCreated(WallDestructionParticleController instance) { }

	// RVA: 0x1103ED0 Offset: 0x1103ED0 VA: 0x1103ED0
	public void .ctor() { }
}

// Namespace: Rotatelab.Pool