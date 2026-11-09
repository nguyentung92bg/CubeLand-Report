public abstract class UnifiedParticleEmitter : MonoBehaviour // TypeDefIndex: 3682
{
	// Fields
	[SerializeField]
	protected GameObject particlePrefab; // 0x10
	[SerializeField]
	protected int poolSize; // 0x14
	protected readonly List<UnifiedParticleEmitter.Instance> instances; // 0x18

	// Methods

	// RVA: 0x10FEFE8 Offset: 0x10FEFE8 VA: 0x10FEFE8 Slot: 4
	protected virtual void Awake() { }

	// RVA: 0x10FF15C Offset: 0x10FF15C VA: 0x10FF15C
	protected UnifiedParticleEmitter.Instance SpawnInstance() { }

	// RVA: 0x10FF6E0 Offset: 0x10FF6E0 VA: 0x10FF6E0
	private static void ForceWorldSimulation(ParticleSystem system) { }

	// RVA: 0x10FF7B4 Offset: 0x10FF7B4 VA: 0x10FF7B4
	protected void AssignMaterial(int slotIndex, Material material) { }

	// RVA: 0x10FF940 Offset: 0x10FF940 VA: 0x10FF940
	protected void AssignMesh(int slotIndex, Mesh mesh) { }

	// RVA: 0x10FFACC Offset: 0x10FFACC VA: 0x10FFACC
	protected ParticleSystemRenderer GetSlotRenderer(int slotIndex) { }

	// RVA: 0x10FFB84 Offset: 0x10FFB84 VA: 0x10FFB84
	protected void EmitSlot(int slotIndex, Vector3 worldPosition, Color color, int count) { }

	// RVA: 0x10FFD38 Offset: 0x10FFD38 VA: 0x10FFD38
	protected void EmitSlot(int slotIndex, Vector3 worldPosition, Color color, int count, float startSize) { }

	// RVA: 0x10FFBE0 Offset: 0x10FFBE0 VA: 0x10FFBE0
	protected void EmitSlot(int slotIndex, Vector3 worldPosition, Color rootColor, Color childColor, int count, float startSize) { }

	// RVA: 0x10FFF08 Offset: 0x10FFF08 VA: 0x10FFF08
	protected void EmitSlotOriented(int slotIndex, Vector3 worldPosition, Vector3 worldNormal, Color color) { }

	// RVA: 0x10FFD94 Offset: 0x10FFD94 VA: 0x10FFD94
	private static void EmitInto(ParticleSystem target, Vector3 worldPosition, Color color, int count, float startSize) { }

	// RVA: 0x11001CC Offset: 0x11001CC VA: 0x11001CC
	protected void .ctor() { }
}

// Namespace: Rotatelab.FX