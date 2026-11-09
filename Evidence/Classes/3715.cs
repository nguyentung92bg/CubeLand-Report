public class GridVisibilityController : MonoBehaviour // TypeDefIndex: 3715
{
	// Fields
	private const int FrameIntervals = 3;
	private const int ResolutionX = 150;
	private const int ResolutionY = 150;
	private GridCell[] grid; // 0x10
	private BoundsInt gridBounds; // 0x14
	private int3 gridSize; // 0x2C
	private NativeArray<int> nativeGrid; // 0x38
	private JobHandle jobHandle; // 0x48
	private int nextJobFrame; // 0x58
	private List<BaseTargetableController> visibleTargetables; // 0x5C
	private BaseTargetableController offGridTargetable; // 0x60
	private Camera mainCamera; // 0x64

	// Methods

	// RVA: 0x1106B74 Offset: 0x1106B74 VA: 0x1106B74
	public void Initialize(GridCell[] grid, BoundsInt gridBounds, List<BaseTargetableController> visibleTargetables) { }

	// RVA: 0x1108DC0 Offset: 0x1108DC0 VA: 0x1108DC0
	protected void OnDestroy() { }

	// RVA: 0x1108ED8 Offset: 0x1108ED8 VA: 0x1108ED8
	protected void Awake() { }

	// RVA: 0x1108EFC Offset: 0x1108EFC VA: 0x1108EFC
	protected void Update() { }

	// RVA: 0x1109310 Offset: 0x1109310 VA: 0x1109310
	private void ExecuteNewJob(Camera camera) { }

	// RVA: 0x1109A70 Offset: 0x1109A70 VA: 0x1109A70
	private Rect CalculateViewportRectOfGrid(Camera camera) { }

	// RVA: 0x1108FE4 Offset: 0x1108FE4 VA: 0x1108FE4
	private void CompleteRunningJob(Camera camera) { }

	// RVA: 0x1107AF8 Offset: 0x1107AF8 VA: 0x1107AF8
	public bool Raycast(Ray ray, out GridRaycastHit hit, bool calculateHitPoint) { }

	// RVA: 0x1109EDC Offset: 0x1109EDC VA: 0x1109EDC
	public void SetOffGridTargetable(BaseTargetableController targetable) { }

	// RVA: 0x1109D3C Offset: 0x1109D3C VA: 0x1109D3C
	private bool IsOffGridTargetableVisible(Camera camera) { }

	// RVA: 0x1109EE4 Offset: 0x1109EE4 VA: 0x1109EE4
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0x110A08C Offset: 0x110A08C VA: 0x110A08C
	public void .ctor() { }
}

// Namespace: Rotatelab.Grid
[BurstCompile]