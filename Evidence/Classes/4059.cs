public static class RoundedBoxMeshGenerator // TypeDefIndex: 4059
{
	// Fields
	private const float NormalEpsilon = 0.0001;
	private const float CachePrecision = 1000;
	private static readonly Dictionary<RoundedBoxMeshGenerator.CacheKey, Mesh> MeshCache; // 0x0

	// Methods

	// RVA: 0x10194E4 Offset: 0x10194E4 VA: 0x10194E4
	public static Mesh Generate(Vector3 size, float radius, int segments) { }

	// RVA: 0x101B35C Offset: 0x101B35C VA: 0x101B35C
	private static Mesh CreateSharpBoxMesh(Vector3 halfExtents) { }

	// RVA: 0x101B880 Offset: 0x101B880 VA: 0x101B880
	private static void AppendFace(List<Vector3> vertices, List<Vector3> normals, List<Vector2> uvs, List<int> triangles, float[][] axes, Vector3 halfExtents, Vector3 innerExtents, float radius, int faceAxis, int axis0, int axis1, int sign) { }

	// RVA: 0x101C5C0 Offset: 0x101C5C0 VA: 0x101C5C0
	private static void AppendSharpFace(List<Vector3> vertices, List<Vector3> normals, List<Vector2> uvs, List<int> triangles, Vector3 halfExtents, int faceAxis, int axis0, int axis1, int sign) { }

	// RVA: 0x101B848 Offset: 0x101B848 VA: 0x101B848
	private static int EstimateVertexCapacity(int xCount, int yCount, int zCount) { }

	// RVA: 0x101B85C Offset: 0x101B85C VA: 0x101B85C
	private static int EstimateTriangleIndexCapacity(int xCount, int yCount, int zCount) { }

	// RVA: 0x101B6EC Offset: 0x101B6EC VA: 0x101B6EC
	private static float[] BuildAxis(float halfExtent, float innerExtent, int segments) { }

	// RVA: 0x101D000 Offset: 0x101D000 VA: 0x101D000
	private static void .cctor() { }
}

// Namespace: 