public class UITransitionController : SingletonBehaviour<UITransitionController> // TypeDefIndex: 3793
{
	// Fields
	public const float TransitionDuration = 1.7;
	[CompilerGenerated]
	private bool <IsPlaying>k__BackingField; // 0x10
	private Sequence transitionSequence; // 0x14
	[SerializeField]
	private RectTransform background; // 0x18
	[SerializeField]
	private RectTransform backgroundMask; // 0x1C
	[SerializeField]
	private SlicedFilledImage loadingImage; // 0x20
	[SerializeField]
	private TextAnimatorPlayer loadingText; // 0x24
	[SerializeField]
	private AnimationCurve loadingCurve; // 0x28
	[SerializeField]
	private RectTransform logoType; // 0x2C
	[SerializeField]
	private RectTransform logoTypeParent; // 0x30
	[SerializeField]
	private RectTransform logoTypeParentWithMask; // 0x34
	[SerializeField]
	private RectTransform logoTypeParentWithoutMask; // 0x38
	[SerializeField]
	private RectTransform hole; // 0x3C
	[SerializeField]
	private List<string> funFacts; // 0x40
	[SerializeField]
	private TextAnimatorPlayer funFact; // 0x44
	private const int LoaderSceneMaxSteps = 7;
	[CompilerGenerated]
	private int <LoaderSceneCurrentStep>k__BackingField; // 0x48
	[CompilerGenerated]
	private AsyncOperation <GameSceneLoadingOperation>k__BackingField; // 0x4C

	// Properties
	public bool IsPlaying { get; set; }
	public int LoaderSceneCurrentStep { get; set; }
	public AsyncOperation GameSceneLoadingOperation { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x112D30C Offset: 0x112D30C VA: 0x112D30C
	public bool get_IsPlaying() { }

	[CompilerGenerated]
	// RVA: 0x112D314 Offset: 0x112D314 VA: 0x112D314
	private void set_IsPlaying(bool value) { }

	[CompilerGenerated]
	// RVA: 0x112D31C Offset: 0x112D31C VA: 0x112D31C
	public int get_LoaderSceneCurrentStep() { }

	[CompilerGenerated]
	// RVA: 0x112D324 Offset: 0x112D324 VA: 0x112D324
	public void set_LoaderSceneCurrentStep(int value) { }

	[CompilerGenerated]
	// RVA: 0x112D32C Offset: 0x112D32C VA: 0x112D32C
	public AsyncOperation get_GameSceneLoadingOperation() { }

	[CompilerGenerated]
	// RVA: 0x112D334 Offset: 0x112D334 VA: 0x112D334
	public void set_GameSceneLoadingOperation(AsyncOperation value) { }

	// RVA: 0x112D33C Offset: 0x112D33C VA: 0x112D33C Slot: 4
	protected override void Awake() { }

	// RVA: 0x112D5E4 Offset: 0x112D5E4 VA: 0x112D5E4
	private void OnGameLoadedHandler() { }

	// RVA: 0x1127948 Offset: 0x1127948 VA: 0x1127948
	public void StartTransition(TweenCallback halfway, TweenCallback ended) { }

	// RVA: 0x112DCBC Offset: 0x112DCBC VA: 0x112DCBC
	public void Hold() { }

	// RVA: 0x112DD10 Offset: 0x112DD10 VA: 0x112DD10
	public void Release() { }

	// RVA: 0x112D56C Offset: 0x112D56C VA: 0x112D56C
	private IEnumerator UpdateLoaderSceneProgressbarCoroutine() { }

	// RVA: 0x112DD80 Offset: 0x112DD80 VA: 0x112DD80
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x112DDD4 Offset: 0x112DDD4 VA: 0x112DDD4
	private void <OnGameLoadedHandler>b__28_0() { }

	[CompilerGenerated]
	// RVA: 0x112DDFC Offset: 0x112DDFC VA: 0x112DDFC
	private void <OnGameLoadedHandler>b__28_1() { }

	[CompilerGenerated]
	// RVA: 0x112DF24 Offset: 0x112DF24 VA: 0x112DF24
	private void <StartTransition>b__29_0() { }

	[CompilerGenerated]
	// RVA: 0x112DFF0 Offset: 0x112DFF0 VA: 0x112DFF0
	private void <StartTransition>b__29_1() { }

	[CompilerGenerated]
	// RVA: 0x112E01C Offset: 0x112E01C VA: 0x112E01C
	private void <StartTransition>b__29_2() { }

	[CompilerGenerated]
	// RVA: 0x112E044 Offset: 0x112E044 VA: 0x112E044
	private void <StartTransition>b__29_3() { }
}

// Namespace: Rotatelab.UI
[RequireComponent(typeof(VideoPlayer))]