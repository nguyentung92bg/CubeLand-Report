public class DoubleLargeVoxelController : MergedBlockController // TypeDefIndex: 4056
{
	// Fields
	private const int SeamRibbonCornerSegments = 8;
	[SerializeField]
	private LargeVoxelController largeVoxel1; // 0x20
	[SerializeField]
	private LargeVoxelController largeVoxel2; // 0x24
	[SerializeField]
	private MeshFilter seamOverlayFilter; // 0x28
	[SerializeField]
	private MeshRenderer seamOverlayRenderer; // 0x2C
	[Tooltip("Ribbon mesh genişliği (seam axis boyunca toplam uzunluk). Voxel cinsinden. Cube boyutundan büyük olursa otomatik clamp edilir.")]
	[SerializeField]
	private float seamStripHeight; // 0x30
	[Tooltip("Ribbon köşe yuvarlanma yarıçapı için global çarpan. 1.0 = default (auto-scale formula). 0.5 → tüm cube'larda yarı yuvarlanma. 0 → keskin köşeler.")]
	[SerializeField]
	private float seamRibbonRadiusScale; // 0x34
	private int aliveLargeVoxels; // 0x38
	private Mesh seamMesh; // 0x3C

	// Methods

	// RVA: 0x1018A78 Offset: 0x1018A78 VA: 0x1018A78
	public void Initialize(DoubleLargeVoxelData data) { }

	// RVA: 0x1013FEC Offset: 0x1013FEC VA: 0x1013FEC
	public void OnVisualHealthOfPieceIsDepleted(LargeVoxelController largeVoxel) { }

	// RVA: 0x10190F0 Offset: 0x10190F0 VA: 0x10190F0 Slot: 4
	protected override void OnDestroy() { }

	// RVA: 0x1018D28 Offset: 0x1018D28 VA: 0x1018D28
	private void GenerateSeamRibbon(DoubleLargeVoxelData data) { }

	// RVA: 0x10191AC Offset: 0x10191AC VA: 0x10191AC
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts
[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]