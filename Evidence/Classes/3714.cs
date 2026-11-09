public struct GridRaycastHit // TypeDefIndex: 3714
{
	// Fields
	public readonly Vector3Int CellCoordinates; // 0x0
	public readonly Vector3 Point; // 0xC
	public readonly Vector3 Normal; // 0x18

	// Properties
	public GridCell Cell { get; }

	// Methods

	// RVA: 0x1108CF0 Offset: 0x1108CF0 VA: 0x1108CF0
	public GridCell get_Cell() { }

	// RVA: 0x1108D88 Offset: 0x1108D88 VA: 0x1108D88
	public void .ctor(Vector3Int cellCoordinates, Vector3 point, Vector3 normal) { }
}

// Namespace: Rotatelab.Grid