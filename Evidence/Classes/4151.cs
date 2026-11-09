public class LiveSolverGuideController : SingletonBehaviour<LiveSolverGuideController> // TypeDefIndex: 4151
{
	// Fields
	private const float OverlayHeightFraction = 0.011;
	private const float SettleSeconds = 1;
	[SerializeField]
	private Color highlightColor; // 0x10
	[SerializeField]
	private Color pinHighlightColor; // 0x20
	private BlasterHighlight highlight; // 0x30
	private Coroutine activeSolve; // 0x34
	private UnityWebRequest activeRequest; // 0x38
	private int turnSeed; // 0x3C
	private readonly List<int> pinnedCols; // 0x40
	private int pinnedIndex; // 0x44
	private float lastActivityAt; // 0x48
	private bool solvePending; // 0x4C
	private float solveStartedAt; // 0x50
	private int rollouts; // 0x54
	private int bestRemaining; // 0x58
	private int startingTargetables; // 0x5C
	private string finishedLine; // 0x60
	private bool lastSolveWasDeadEnd; // 0x64
	private GUIStyle overlayStyle; // 0x68
	[CompilerGenerated]
	private bool <IsGuideEnabled>k__BackingField; // 0x6C

	// Properties
	public bool IsGuideEnabled { get; set; }
	private float Elapsed { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10588A8 Offset: 0x10588A8 VA: 0x10588A8
	public bool get_IsGuideEnabled() { }

	[CompilerGenerated]
	// RVA: 0x10588B0 Offset: 0x10588B0 VA: 0x10588B0
	private void set_IsGuideEnabled(bool value) { }

	// RVA: 0x10588B8 Offset: 0x10588B8 VA: 0x10588B8 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1058BD0 Offset: 0x1058BD0 VA: 0x1058BD0
	protected void OnDestroy() { }

	// RVA: 0x1058F34 Offset: 0x1058F34 VA: 0x1058F34
	public void SetGuideEnabled(bool isEnabled) { }

	// RVA: 0x1059128 Offset: 0x1059128 VA: 0x1059128
	private void OnLevelLoadedHandler(SoLevelData levelData) { }

	// RVA: 0x1059268 Offset: 0x1059268 VA: 0x1059268
	private void OnPlaceableLeftQueueHandler(BasePlaceableController placeable) { }

	// RVA: 0x1059588 Offset: 0x1059588 VA: 0x1059588
	private void OnVoxelDestroyedHandler(BaseTargetableController targetable) { }

	// RVA: 0x10595BC Offset: 0x10595BC VA: 0x10595BC
	private void OnBulletsConsumedHandler(ColorType colorType, int amount) { }

	// RVA: 0x1059568 Offset: 0x1059568 VA: 0x1059568
	private void MarkBoardActivity() { }

	// RVA: 0x10595E8 Offset: 0x10595E8 VA: 0x10595E8
	protected void Update() { }

	// RVA: 0x10592D4 Offset: 0x10592D4 VA: 0x10592D4
	private void AdvancePin(int playedColumn) { }

	// RVA: 0x10590C4 Offset: 0x10590C4 VA: 0x10590C4
	private void ClearPin() { }

	// RVA: 0x1058FA0 Offset: 0x1058FA0 VA: 0x1058FA0
	private void RequestSolve() { }

	// RVA: 0x105964C Offset: 0x105964C VA: 0x105964C
	private IEnumerator SolveRoutine() { }

	// RVA: 0x10596E0 Offset: 0x10596E0 VA: 0x10596E0
	private void OnProgress(SolveStreamEvent frame) { }

	// RVA: 0x1059718 Offset: 0x1059718 VA: 0x1059718
	private void OnSolved(SolveResult result) { }

	// RVA: 0x1059B30 Offset: 0x1059B30 VA: 0x1059B30
	private void OnFailed(string reason) { }

	// RVA: 0x1059B0C Offset: 0x1059B0C VA: 0x1059B0C
	private float get_Elapsed() { }

	// RVA: 0x1059BE0 Offset: 0x1059BE0 VA: 0x1059BE0
	protected void OnGUI() { }

	// RVA: 0x105905C Offset: 0x105905C VA: 0x105905C
	private void StopActiveSolve() { }

	// RVA: 0x105A1F8 Offset: 0x105A1F8 VA: 0x105A1F8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x105A31C Offset: 0x105A31C VA: 0x105A31C
	private void <SolveRoutine>b__35_0(UnityWebRequest request) { }
}

// Namespace: 
[CompilerGenerated]