public class MergedBlockController : MonoBehaviour // TypeDefIndex: 4057
{
	// Fields
	private const float HpCanvasScaleMultiplier = 0.01;
	private const float DefaultBoxRadiusMultiplier = 0.5;
	private const int DefaultSegments = 8;
	private const int DefaultResolution = 4;
	[SerializeField]
	private TextMeshPro healthTextPrefab; // 0x10
	[SerializeField]
	private Transform healthTextsParent; // 0x14
	private bool shouldDestroyMeshOnCleanup; // 0x18
	private Mesh generatedMesh; // 0x1C

	// Methods

	// RVA: 0x1010980 Offset: 0x1010980 VA: 0x1010980
	public void GenerateMesh(Vector3Int[] voxelGridPositions, Bounds bounds, float roundRadius) { }

	// RVA: 0x1018C34 Offset: 0x1018C34 VA: 0x1018C34
	protected void GenerateTwoColorMesh(Vector3Int[] group1Voxels, Vector3Int[] group2Voxels, float roundRadius) { }

	// RVA: 0x10191A8 Offset: 0x10191A8 VA: 0x10191A8 Slot: 4
	protected virtual void OnDestroy() { }

	// RVA: 0x1019274 Offset: 0x1019274 VA: 0x1019274
	private void CleanupGeneratedAssets() { }

	// RVA: 0x10192F0 Offset: 0x10192F0 VA: 0x10192F0
	private bool ShouldUseSimpleBox(Vector3Int[] positions, Bounds bounds) { }

	// RVA: 0x1014880 Offset: 0x1014880 VA: 0x1014880
	public Vector3 CalculateIdealParticleSpawnPosition(IList<TextMeshPro> healthTexts) { }

	// RVA: 0x1010E58 Offset: 0x1010E58 VA: 0x1010E58
	public TextMeshPro[] GenerateHealthTexts(HpTextData[] data, Vector3 size) { }

	// RVA: 0x101AF94 Offset: 0x101AF94 VA: 0x101AF94
	public TextMeshPro FindHealthTextNearestToCamera(IList<TextMeshPro> healthTexts) { }

	// RVA: 0x101B21C Offset: 0x101B21C VA: 0x101B21C
	private float CalculateHpScale(Vector3 hpTextDirection, Vector3 size) { }

	// RVA: 0x101B29C Offset: 0x101B29C VA: 0x101B29C
	private float GetHpFaceDimension(Vector3 hpTextDirection, Vector3 size) { }

	// RVA: 0x10191C8 Offset: 0x10191C8 VA: 0x10191C8
	public void .ctor() { }
}

// Namespace: 