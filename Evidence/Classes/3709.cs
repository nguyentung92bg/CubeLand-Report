public class DynamicGrid // TypeDefIndex: 3709
{
	// Fields
	private static DynamicGrid instance; // 0x0
	private readonly List<ValueTuple<Component, Vector3Int[]>> grid; // 0x8
	private Vector3Int minCellCoords; // 0xC
	private Vector3Int maxCellCoords; // 0x18

	// Methods

	// RVA: 0x1105764 Offset: 0x1105764 VA: 0x1105764
	public static DynamicGrid Get() { }

	// RVA: 0x1105814 Offset: 0x1105814 VA: 0x1105814
	private void .ctor() { }

	// RVA: 0x1105950 Offset: 0x1105950 VA: 0x1105950
	public void AddToGrid(Component obj, Vector3Int position) { }

	// RVA: 0x11059F0 Offset: 0x11059F0 VA: 0x11059F0
	public void AddToGrid(Component obj, Vector3Int[] positions) { }

	// RVA: 0x1105B98 Offset: 0x1105B98 VA: 0x1105B98
	public void BuildGrid(out GridCell[] grid, out BoundsInt gridBounds) { }

	// RVA: 0x11058B0 Offset: 0x11058B0 VA: 0x11058B0
	private void Clear() { }
}

// Namespace: Rotatelab.Grid
[BurstCompile]