public class MeteorController : MonoBehaviour // TypeDefIndex: 4065
{
	// Fields
	[SerializeField]
	private float meteorTravelSpeed; // 0x10
	[SerializeField]
	private float meteorRotationSpeed; // 0x14
	[SerializeField]
	private float visibleTargetSpawnZ; // 0x18
	[SerializeField]
	private float hiddenTargetSpawnZ; // 0x1C
	[SerializeField]
	private GameObject meteorVisual; // 0x20
	[SerializeField]
	private ParticleSystem explosionParticle; // 0x24
	[SerializeField]
	private ParticleSystem scatteringParticle; // 0x28
	[SerializeField]
	private ParticleSystem fireParticle; // 0x2C
	[SerializeField]
	private ParticleSystem trailParticle; // 0x30
	private Camera _camera; // 0x34

	// Methods

	// RVA: 0x1026220 Offset: 0x1026220 VA: 0x1026220
	public float Init(Vector3 spawnPosition, VoxelController target) { }

	// RVA: 0x10264E8 Offset: 0x10264E8 VA: 0x10264E8
	private Vector3 GetTargetOnPlane(float planeZ, Transform target) { }

	// RVA: 0x102645C Offset: 0x102645C VA: 0x102645C
	private IEnumerator MoveMeteorCoroutine(Transform target) { }

	// RVA: 0x10265EC Offset: 0x10265EC VA: 0x10265EC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]