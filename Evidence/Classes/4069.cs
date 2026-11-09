public class MeteorShowerManager : MonoBehaviour // TypeDefIndex: 4069
{
	// Fields
	[SerializeField]
	private MeteorController meteorPrefab; // 0x10
	[SerializeField]
	private Transform[] spawnPoints; // 0x14
	private Vector3Int[] meteorClusterOffsets; // 0x18
	private List<VoxelController> _clusterCenterVoxels; // 0x1C

	// Methods

	// RVA: 0x1026BA0 Offset: 0x1026BA0 VA: 0x1026BA0
	protected void Awake() { }

	// RVA: 0x1026CA0 Offset: 0x1026CA0 VA: 0x1026CA0
	protected void OnDestroy() { }

	// RVA: 0x1026DA0 Offset: 0x1026DA0 VA: 0x1026DA0
	private void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0x1026E40 Offset: 0x1026E40 VA: 0x1026E40
	private void BuildClusterOffsets() { }

	// RVA: 0x1027178 Offset: 0x1027178 VA: 0x1027178
	private float SpawnMeteor(VoxelController target) { }

	// RVA: 0x1027100 Offset: 0x1027100 VA: 0x1027100
	private IEnumerator MeteorShowerCoroutine() { }

	// RVA: 0x10272B4 Offset: 0x10272B4 VA: 0x10272B4
	private IEnumerator DestroyClusterRoutine(List<VoxelController> clusterVoxels, float window) { }

	// RVA: 0x102736C Offset: 0x102736C VA: 0x102736C
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts