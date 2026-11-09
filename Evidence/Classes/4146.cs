public class SolutionGuideController : SingletonBehaviour<SolutionGuideController> // TypeDefIndex: 4146
{
	// Fields
	[SerializeField]
	private Color highlightColor; // 0x10
	private int[] solutionColumns; // 0x20
	private int stepIndex; // 0x24
	private BlasterHighlight highlight; // 0x28
	[CompilerGenerated]
	private bool <IsGuideEnabled>k__BackingField; // 0x2C

	// Properties
	public bool HasSolution { get; }
	public bool IsGuideEnabled { get; set; }

	// Methods

	// RVA: 0x1052DDC Offset: 0x1052DDC VA: 0x1052DDC
	public bool get_HasSolution() { }

	[CompilerGenerated]
	// RVA: 0x1052E00 Offset: 0x1052E00 VA: 0x1052E00
	public bool get_IsGuideEnabled() { }

	[CompilerGenerated]
	// RVA: 0x1052E08 Offset: 0x1052E08 VA: 0x1052E08
	private void set_IsGuideEnabled(bool value) { }

	// RVA: 0x1052E10 Offset: 0x1052E10 VA: 0x1052E10 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1052FAC Offset: 0x1052FAC VA: 0x1052FAC
	protected void OnDestroy() { }

	// RVA: 0x10531AC Offset: 0x10531AC VA: 0x10531AC
	public void SetGuideEnabled(bool isEnabled) { }

	// RVA: 0x1053318 Offset: 0x1053318 VA: 0x1053318
	private void OnLevelLoadedHandler(SoLevelData levelData) { }

	// RVA: 0x105350C Offset: 0x105350C VA: 0x105350C
	private void OnPlaceableLeftQueueHandler(BasePlaceableController placeable) { }

	// RVA: 0x10531F4 Offset: 0x10531F4 VA: 0x10531F4
	private void HighlightCurrentStep() { }

	// RVA: 0x1053520 Offset: 0x1053520 VA: 0x1053520
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]