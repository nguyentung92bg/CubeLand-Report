public class ColorBoxPlankLayer : MonoBehaviour // TypeDefIndex: 4004
{
	// Fields
	private const int FaceCount = 6;
	private const float PlankFitMargin = 0.913;
	private static readonly Vector3 PlankAxisFit; // 0x0
	private const int ReservedCenterPlanksPerFace = 2;
	private const float BreakSfxCooldown = 0.33;
	private const float ShatterParticleDelay = 0.22;
	[SerializeField]
	[Tooltip("Single template plank cloned and tiled across all 6 cover faces. Must have a MeshFilter with sharedMesh assigned.")]
	private Transform plankTemplate; // 0x10
	private List<Transform>[] _planksByFace; // 0x14
	private int[] _shatteredByFace; // 0x18
	private List<Transform> _centerReservedPlanks; // 0x1C
	private int _centerReservedShatteredCount; // 0x20
	private int _normalPool; // 0x24
	private int _shatteredCount; // 0x28
	private int _totalPlanks; // 0x2C
	private ColorType _plankColor; // 0x30
	private Material _plankSharedMaterial; // 0x34
	private float _lastBreakSfxTime; // 0x38
	private bool _playShatterSfx; // 0x3C
	private float _coverScale; // 0x40

	// Methods

	// RVA: 0xFFC820 Offset: 0xFFC820 VA: 0xFFC820
	public void Initialize(Bounds bounds, ColorType colorType, int maxHp, HpTextData[] hpTexts, float coverScale) { }

	// RVA: 0xFFF580 Offset: 0xFFF580 VA: 0xFFF580
	private static void ExtractCenterPlanksTo(List<Transform> face, Vector3 faceCenter, List<Transform> reservedSink) { }

	// RVA: 0xFFD5B4 Offset: 0xFFD5B4 VA: 0xFFD5B4
	public void OnHealthDecreased(int currentHp, int maxHp, bool playSfx = True) { }

	// RVA: 0xFFDB5C Offset: 0xFFDB5C VA: 0xFFDB5C
	public void DestroyAllRemaining() { }

	// RVA: 0xFFF7E4 Offset: 0xFFF7E4 VA: 0xFFF7E4
	private void ShatterNormalUpTo(int target) { }

	// RVA: 0xFFF9C8 Offset: 0xFFF9C8 VA: 0xFFF9C8
	private void ShatterReservedUpTo(int target) { }

	// RVA: 0xFFFA8C Offset: 0xFFFA8C VA: 0xFFFA8C
	private void ShatterPlank(Transform plank) { }

	// RVA: 0xFFEC90 Offset: 0xFFEC90 VA: 0xFFEC90
	private void BuildCoverage(Bounds bounds) { }

	// RVA: 0x1000050 Offset: 0x1000050 VA: 0x1000050
	private void TileXZFace(Vector3 c, int normalDir, float worldY, float xStart, int xCount, float zStart, int zCount, float uniformScale, List<Transform> faceList) { }

	// RVA: 0x1000230 Offset: 0x1000230 VA: 0x1000230
	private void TileYZFace(Vector3 c, int normalDir, float worldX, float yStart, int yCount, float zStart, int zCount, float uniformScale, List<Transform> faceList) { }

	// RVA: 0x10003D4 Offset: 0x10003D4 VA: 0x10003D4
	private void TileXYFace(Vector3 c, int normalDir, float worldZ, float xStart, int xCount, float yStart, int yCount, float uniformScale, List<Transform> faceList) { }

	// RVA: 0x1000580 Offset: 0x1000580 VA: 0x1000580
	private void SpawnPlank(Vector3 localPos, Quaternion localRot, float uniformScale, List<Transform> faceList) { }

	// RVA: 0x10008D8 Offset: 0x10008D8 VA: 0x10008D8
	public void .ctor() { }

	// RVA: 0x10008FC Offset: 0x10008FC VA: 0x10008FC
	private static void .cctor() { }
}

// Namespace: Rotatelab.Scripts
[RequireComponent(typeof(CanvasGroup))]