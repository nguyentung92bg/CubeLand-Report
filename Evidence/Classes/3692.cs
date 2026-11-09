public class VoxelDestructionParticlePool : ObjectPool<VoxelDestructionParticleController> // TypeDefIndex: 3692
{
	// Fields
	[Tooltip("Reference parent scale (= the cube scale at which the prefab startSize was authored). Multiplier = min(1, currentParentScale / referenceParentScale). Particle never scales up; only shrinks for cubes smaller than this reference.")]
	[SerializeField]
	private float referenceParentScale; // 0x28
	private float sizeMultiplier; // 0x2C

	// Methods

	// RVA: 0x1103394 Offset: 0x1103394 VA: 0x1103394 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1103560 Offset: 0x1103560 VA: 0x1103560
	protected void OnDestroy() { }

	// RVA: 0x1103704 Offset: 0x1103704 VA: 0x1103704
	private void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0x1103784 Offset: 0x1103784 VA: 0x1103784
	private void OnParticleRequested(Vector3 position, ColorType colorType) { }

	// RVA: 0x1103828 Offset: 0x1103828 VA: 0x1103828 Slot: 5
	protected override void OnInstanceCreated(VoxelDestructionParticleController instance) { }

	// RVA: 0x110389C Offset: 0x110389C VA: 0x110389C
	public void .ctor() { }
}

// Namespace: Rotatelab.Pool