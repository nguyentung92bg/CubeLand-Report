private struct RoundedMeshGenerator.SampleGrid // TypeDefIndex: 4060
{
	// Fields
	public readonly float MinX; // 0x0
	public readonly float MinY; // 0x4
	public readonly float MinZ; // 0x8
	public readonly float Step; // 0xC
	public readonly int Nx; // 0x10
	public readonly int Ny; // 0x14
	public readonly int Nz; // 0x18
	public readonly int SearchRange; // 0x1C

	// Methods

	// RVA: 0x10248C8 Offset: 0x10248C8 VA: 0x10248C8
	public void .ctor(Vector3Int min, Vector3Int max, float radius, int resolution) { }

	// RVA: 0x1024B84 Offset: 0x1024B84 VA: 0x1024B84
	public Vector3 GetPoint(int ix, int iy, int iz) { }
}

// Namespace: Rotatelab.Scripts