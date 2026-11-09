public static class SeamRibbonMeshGenerator // TypeDefIndex: 4063
{
	// Fields
	private const float SurfaceOffset = 0.05;
	private const float TileWorldSize = 1;
	private const float Epsilon = 0.0001;
	private const float DedupToleranceSqr = 1E-06;
	private const float QuadrantArcSpan = 1.5707964;
	private const float RadiusCap = 1;
	private const float RadiusCoefficient = 0.3;
	private static readonly int[] SignU; // 0x0
	private static readonly int[] SignV; // 0x4
	private static readonly float[] StartAngle; // 0x8

	// Methods

	// RVA: 0x1024BC8 Offset: 0x1024BC8 VA: 0x1024BC8
	public static bool TryDetectSeam(Bounds group1, Bounds group2, out int seamAxis, out float seamWorld) { }

	// RVA: 0x1024D70 Offset: 0x1024D70 VA: 0x1024D70
	public static Mesh Generate(Vector3 localBoundsSize, int seamAxis, float seamLocal, float stripHeight, int cornerSegments, float radiusScale) { }

	// RVA: 0x1025334 Offset: 0x1025334 VA: 0x1025334
	private static void BuildPerimeter(List<SeamRibbonMeshGenerator.PerimeterSample> samples, float innerU, float innerV, float r, int cornerSegments) { }

	// RVA: 0x10256AC Offset: 0x10256AC VA: 0x10256AC
	private static float[] ComputeArcLengths(List<SeamRibbonMeshGenerator.PerimeterSample> samples, out float totalPerimeter) { }

	// RVA: 0x1025974 Offset: 0x1025974 VA: 0x1025974
	private static void WriteRibbonVertices(List<SeamRibbonMeshGenerator.PerimeterSample> samples, float[] arcLengths, float totalPerimeter, int tileCount, int axisU, int axisV, int seamAxis, float topSeam, float bottomSeam, Vector3[] vertices, Vector3[] normals, Vector2[] uvs) { }

	// RVA: 0x1025F78 Offset: 0x1025F78 VA: 0x1025F78
	private static int[] BuildTriangleIndices(int perimeterCount) { }

	// RVA: 0x10260AC Offset: 0x10260AC VA: 0x10260AC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]