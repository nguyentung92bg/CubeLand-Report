public class ParticleEffectsLibrary : MonoBehaviour // TypeDefIndex: 3077
{
	// Fields
	public static ParticleEffectsLibrary GlobalAccess; // 0x0
	public int TotalEffects; // 0x10
	public int CurrentParticleEffectIndex; // 0x14
	public int CurrentParticleEffectNum; // 0x18
	public Vector3[] ParticleEffectSpawnOffsets; // 0x1C
	public float[] ParticleEffectLifetimes; // 0x20
	public GameObject[] ParticleEffectPrefabs; // 0x24
	private string effectNameString; // 0x28
	private List<Transform> currentActivePEList; // 0x2C
	private Vector3 spawnPosition; // 0x30

	// Methods

	// RVA: 0xF9F8EC Offset: 0xF9F8EC VA: 0xF9F8EC
	private void Awake() { }

	// RVA: 0xF9FCAC Offset: 0xF9FCAC VA: 0xF9FCAC
	public string GetCurrentPENameString() { }

	// RVA: 0xF9FEB8 Offset: 0xF9FEB8 VA: 0xF9FEB8
	public void PreviousParticleEffect() { }

	// RVA: 0xFA02A8 Offset: 0xFA02A8 VA: 0xFA02A8
	public void NextParticleEffect() { }

	// RVA: 0xFA06A8 Offset: 0xFA06A8 VA: 0xFA06A8
	public void SpawnParticleEffect(Vector3 positionInWorldToSpawn) { }

	// RVA: 0xFA0B1C Offset: 0xFA0B1C VA: 0xFA0B1C
	public void .ctor() { }
}

// Namespace: 