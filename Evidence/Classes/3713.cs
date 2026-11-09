public class GridManager : SingletonBehaviour<GridManager> // TypeDefIndex: 3713
{
	// Fields
	public static readonly Vector3Int[] NeighbourGridDirections; // 0x0
	private GridVisibilityController gridVisibilityController; // 0x10
	public readonly List<BaseTargetableController> VisibleTargetables; // 0x14
	private DynamicGrid dynamicGrid; // 0x18
	private GridCell[] grid; // 0x1C
	private int gridPositionOffsetX; // 0x20
	private int gridPositionOffsetY; // 0x24
	private int gridPositionOffsetZ; // 0x28
	private int width; // 0x2C
	private int height; // 0x30
	private int depth; // 0x34
	private int width_x_height; // 0x38

	// Methods

	// RVA: 0x110695C Offset: 0x110695C VA: 0x110695C
	public void Initialize() { }

	// RVA: 0x11069D4 Offset: 0x11069D4 VA: 0x11069D4
	public void FinalizeGrid() { }

	// RVA: 0x1106D28 Offset: 0x1106D28 VA: 0x1106D28
	public void AddToGrid(Component obj, Vector3Int position) { }

	// RVA: 0x1106F50 Offset: 0x1106F50 VA: 0x1106F50
	public void AddToGrid(Component obj, Vector3Int[] positions) { }

	// RVA: 0x1106FD4 Offset: 0x1106FD4 VA: 0x1106FD4
	public void RemoveFromGrid(Component obj, Vector3Int position) { }

	// RVA: 0x1107024 Offset: 0x1107024 VA: 0x1107024
	public void RemoveFromGrid(Component obj, Vector3Int[] positions) { }

	// RVA: 0x11070A8 Offset: 0x11070A8 VA: 0x11070A8
	public GridCell[] GetFlattenedGrid() { }

	// RVA: -1 Offset: -1
	public bool TryGetGridCellContent<T>(Vector3Int position, out T obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1492BBC Offset: 0x1492BBC VA: 0x1492BBC
	|-GridManager.TryGetGridCellContent<object>
	*/

	// RVA: -1 Offset: -1
	public T GetGridCellContent<T>(Vector3Int position) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1492B18 Offset: 0x1492B18 VA: 0x1492B18
	|-GridManager.GetGridCellContent<object>
	*/

	// RVA: 0x1106D80 Offset: 0x1106D80 VA: 0x1106D80
	public ref GridCell GetGridCell(Vector3Int position) { }

	// RVA: 0x11070B0 Offset: 0x11070B0 VA: 0x11070B0
	private int ConvertGridPositionToIndex(Vector3Int position) { }

	// RVA: 0x1107118 Offset: 0x1107118 VA: 0x1107118
	public Vector3Int[] GetCellsEncapsulatedByRenderer(Renderer renderer) { }

	// RVA: 0x1107A90 Offset: 0x1107A90 VA: 0x1107A90
	public bool Raycast(Ray ray, out GridRaycastHit hit, bool calculateHitPoint) { }

	// RVA: 0x1108344 Offset: 0x1108344 VA: 0x1108344
	public void FindAllTargetables(List<BaseTargetableController> result) { }

	// RVA: 0x1108600 Offset: 0x1108600 VA: 0x1108600
	public void ShowTargetablesAdjacentToCells(IList<Vector3Int> positions) { }

	// RVA: 0x1108AA8 Offset: 0x1108AA8 VA: 0x1108AA8
	public void SetOffGridTargetable(BaseTargetableController targetable) { }

	// RVA: 0x1108AD4 Offset: 0x1108AD4 VA: 0x1108AD4
	public void .ctor() { }

	// RVA: 0x1108B8C Offset: 0x1108B8C VA: 0x1108B8C
	private static void .cctor() { }
}

// Namespace: Rotatelab.Grid