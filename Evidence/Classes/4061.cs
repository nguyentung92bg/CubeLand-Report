public static class RoundedMeshGenerator // TypeDefIndex: 4061
{
	// Fields
	private const float IsoValue = 0;
	private const float VoxelHalfExtent = 0.5;
	private const float SamplePadding = 0.1;
	private const float SearchPadding = 1.5;
	private const float SeamClipEpsilon = 1E-05;
	private const float SeamAreaEpsilonSqr = 1E-12;
	private static readonly Vector3Int[] CornerOffsets; // 0x0
	private static readonly Vector3Int[] FaceNeighborOffsets; // 0x4
	private static readonly int[] FaceAxes; // 0x8
	private static readonly int[] FaceSigns; // 0xC
	private static readonly int[] EdgeCornerA; // 0x10
	private static readonly int[] EdgeCornerB; // 0x14
	private static readonly int[] EdgeTable; // 0x18
	private static readonly int[,] TriTable; // 0x1C

	// Methods

	// RVA: 0x1019D5C Offset: 0x1019D5C VA: 0x1019D5C
	public static Mesh Generate(Vector3Int[] voxelGridPositions, float radius, int resolution = 4) { }

	// RVA: 0x101A260 Offset: 0x101A260 VA: 0x101A260
	public static Mesh GenerateTwoColor(Vector3Int[] group1Voxels, Vector3Int[] group2Voxels, float radius, int resolution = 4) { }

	// RVA: 0x101F788 Offset: 0x101F788 VA: 0x101F788
	private static void BuildOccupancyWithGroup(Vector3Int[] group1Voxels, Vector3Int[] group2Voxels, HashSet<Vector3Int> occupancy, Dictionary<Vector3Int, byte> groupIds, ref Vector3Int min, ref Vector3Int max) { }

	// RVA: 0x10200D0 Offset: 0x10200D0 VA: 0x10200D0
	private static void ComputeNormalizedGroupBounds(Vector3Int[] group1Voxels, Vector3Int[] group2Voxels, Vector3Int min, out Bounds group1Bounds, out Bounds group2Bounds) { }

	// RVA: 0x102099C Offset: 0x102099C VA: 0x102099C
	private static Bounds BuildVoxelBounds(Vector3Int[] voxels, Vector3Int min) { }

	// RVA: 0x1020478 Offset: 0x1020478 VA: 0x1020478
	private static Mesh CreateTwoColorMesh(List<Vector3> vertices, List<int> triangles, int seamAxis, float seamCoord, byte plusSubmesh, byte minusSubmesh, float radius, int resolution) { }

	// RVA: 0x102163C Offset: 0x102163C VA: 0x102163C
	private static void ClipTrianglesAtPlane(List<Vector3> vertices, List<int> triangles, int seamAxis, float seamCoord, byte plusSubmesh, byte minusSubmesh, List<int> submesh0Tris, List<int> submesh1Tris) { }

	// RVA: 0x10220A8 Offset: 0x10220A8 VA: 0x10220A8
	private static float SignedSeamDistance(float d) { }

	// RVA: 0x10220E8 Offset: 0x10220E8 VA: 0x10220E8
	private static void ClipEdge(List<Vector3> vertices, Dictionary<long, int> seamVertexCache, int seamAxis, float seamCoord, int ia, float da, int ib, float db, int[] plusPoly, ref int plusCount, int[] minusPoly, ref int minusCount) { }

	// RVA: 0x1022688 Offset: 0x1022688 VA: 0x1022688
	private static int GetOrCreateSeamVertex(List<Vector3> vertices, Dictionary<long, int> seamVertexCache, int seamAxis, float seamCoord, int ia, int ib) { }

	// RVA: 0x1022308 Offset: 0x1022308 VA: 0x1022308
	private static void FanTriangulate(List<Vector3> vertices, List<int> target, int[] poly, int count) { }

	// RVA: 0x101FA08 Offset: 0x101FA08 VA: 0x101FA08
	private static Mesh CreateSharpMeshTwoColor(HashSet<Vector3Int> occupancy, Dictionary<Vector3Int, byte> groupIds) { }

	// RVA: 0x101D328 Offset: 0x101D328 VA: 0x101D328
	private static void BuildOccupancy(Vector3Int[] voxelGridPositions, HashSet<Vector3Int> occupancy, out Vector3Int min, out Vector3Int max) { }

	// RVA: 0x101D460 Offset: 0x101D460 VA: 0x101D460
	private static HashSet<Vector3Int> NormalizeOccupancy(HashSet<Vector3Int> occupancy, Vector3Int min, out Vector3Int max) { }

	// RVA: 0x101E3F4 Offset: 0x101E3F4 VA: 0x101E3F4
	private static Dictionary<Vector3Int, byte> BuildExposedFaceMasks(HashSet<Vector3Int> occupancy) { }

	// RVA: 0x101E768 Offset: 0x101E768 VA: 0x101E768
	private static float[] BuildSignedDistanceField(HashSet<Vector3Int> occupancy, Dictionary<Vector3Int, byte> exposedFaceMasks, RoundedMeshGenerator.SampleGrid grid) { }

	// RVA: 0x10201A8 Offset: 0x10201A8 VA: 0x10201A8
	private static float[] BuildSignedDistanceFieldBox(Vector3Int boxMin, Vector3Int boxMax, RoundedMeshGenerator.SampleGrid grid) { }

	// RVA: 0x101E9B8 Offset: 0x101E9B8 VA: 0x101E9B8
	private static void BuildSurface(float[] sdfGrid, RoundedMeshGenerator.SampleGrid grid, List<Vector3> vertices, List<int> triangles) { }

	// RVA: 0x101F408 Offset: 0x101F408 VA: 0x101F408
	private static Mesh CreateMesh(List<Vector3> vertices, List<int> triangles, float radius, int resolution) { }

	// RVA: 0x101D718 Offset: 0x101D718 VA: 0x101D718
	private static Mesh CreateSharpMesh(HashSet<Vector3Int> occupancy) { }

	// RVA: 0x1022A10 Offset: 0x1022A10 VA: 0x1022A10
	private static int CountExposedFaces(Dictionary<Vector3Int, byte> exposedFaceMasks) { }

	// RVA: 0x1022BE8 Offset: 0x1022BE8 VA: 0x1022BE8
	private static void AppendSharpFace(List<Vector3> vertices, List<Vector3> normals, List<int> triangles, Vector3Int voxel, int faceAxis, int sign) { }

	// RVA: 0x101DE7C Offset: 0x101DE7C VA: 0x101DE7C
	private static void FillNarrowGaps(HashSet<Vector3Int> occupancy, Vector3Int min, Vector3Int max) { }

	// RVA: 0x10236E0 Offset: 0x10236E0 VA: 0x10236E0
	private static float FindNearestFaceDistance(Vector3 point, Dictionary<Vector3Int, byte> exposedFaceMasks, int searchRange) { }

	// RVA: 0x1024150 Offset: 0x1024150 VA: 0x1024150
	private static float DistanceToFaceRect(Vector3 point, Vector3Int voxel, int axis, int sign) { }

	// RVA: 0x1023BE0 Offset: 0x1023BE0 VA: 0x1023BE0
	private static void PopulateCubeValues(float[] cubeValues, float[] sdfGrid, int ix, int iy, int iz, RoundedMeshGenerator.SampleGrid grid) { }

	// RVA: 0x1023DD4 Offset: 0x1023DD4 VA: 0x1023DD4
	private static void PopulateCornerPositions(Vector3[] cornerPositions, int ix, int iy, int iz, RoundedMeshGenerator.SampleGrid grid) { }

	// RVA: 0x1023D74 Offset: 0x1023D74 VA: 0x1023D74
	private static int GetCubeIndex(float[] cubeValues) { }

	// RVA: 0x1021EFC Offset: 0x1021EFC VA: 0x1021EFC
	private static Vector2[] BuildBoxProjectionUvs(List<Vector3> vertices, Vector3[] normals) { }

	// RVA: 0x1020B04 Offset: 0x1020B04 VA: 0x1020B04
	private static void HCLaplacianSmooth(List<Vector3> vertices, List<int> triangles, int iterations, float alpha, float beta) { }

	// RVA: 0x1023570 Offset: 0x1023570 VA: 0x1023570
	private static Vector3Int ToContainingVoxel(Vector3 point) { }

	// RVA: 0x1023BD0 Offset: 0x1023BD0 VA: 0x1023BD0
	private static int GridIndex(int x, int y, int z, int ny, int nz) { }

	// RVA: 0x1024068 Offset: 0x1024068 VA: 0x1024068
	private static Vector3 Interpolate(Vector3 p1, Vector3 p2, float v1, float v2, float iso) { }

	// RVA: 0x1023F84 Offset: 0x1023F84 VA: 0x1023F84
	private static long EdgeKey(int ix, int iy, int iz, int edge, int ny, int nz) { }

	// RVA: 0x101DCEC Offset: 0x101DCEC VA: 0x101DCEC
	private static void CenterAndScaleMesh(Mesh mesh, Vector3Int max) { }

	// RVA: 0x102423C Offset: 0x102423C VA: 0x102423C
	private static int CompareVoxel(Vector3Int a, Vector3Int b) { }

	// RVA: 0x102428C Offset: 0x102428C VA: 0x102428C
	private static void .cctor() { }
}

// Namespace: 