public class LeaderboardTutorialController : MonoBehaviour // TypeDefIndex: 3445
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private MetaScreenType <Type>k__BackingField; // 0x10
	[SerializeField]
	private CanvasGroup[] steps; // 0x14
	[SerializeField]
	private TextMeshProUGUI timerInfoText; // 0x18
	private ILeaderboardManager manager; // 0x1C
	private int currentStep; // 0x20

	// Properties
	public MetaScreenType Type { get; set; }
	public bool ShouldShow { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10B5474 Offset: 0x10B5474 VA: 0x10B5474
	public MetaScreenType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x10B547C Offset: 0x10B547C VA: 0x10B547C
	private void set_Type(MetaScreenType value) { }

	// RVA: 0x10B5484 Offset: 0x10B5484 VA: 0x10B5484
	public bool get_ShouldShow() { }

	// RVA: 0x10B5598 Offset: 0x10B5598 VA: 0x10B5598
	public void Initialize(ILeaderboardManager manager) { }

	// RVA: 0x10B56C8 Offset: 0x10B56C8 VA: 0x10B56C8
	public void Show() { }

	// RVA: 0x10B5798 Offset: 0x10B5798 VA: 0x10B5798
	private void ShowInternal() { }

	// RVA: 0x10B5870 Offset: 0x10B5870 VA: 0x10B5870
	private void StartStep(int step) { }

	// RVA: 0x10B5F24 Offset: 0x10B5F24 VA: 0x10B5F24
	private void OnStepCompleted() { }

	// RVA: 0x10B5B80 Offset: 0x10B5B80 VA: 0x10B5B80
	private Tween GetCanvasGroupFadeTween(CanvasGroup canvasGroup, bool fadeIn) { }

	// RVA: 0x10B54B8 Offset: 0x10B54B8 VA: 0x10B54B8
	private bool IsPhaseCompleted(LeaderboardTutorialController.Phase phase) { }

	// RVA: 0x10B5E4C Offset: 0x10B5E4C VA: 0x10B5E4C
	private void OnPhaseCompleted(LeaderboardTutorialController.Phase phase) { }

	// RVA: 0x10B6310 Offset: 0x10B6310 VA: 0x10B6310
	public static void ResetIntroductionPhase(bool isRoundVariant) { }

	// RVA: 0x10B6370 Offset: 0x10B6370 VA: 0x10B6370
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10B6380 Offset: 0x10B6380 VA: 0x10B6380
	private void <Show>b__12_0() { }
}

// Namespace: 
[Serializable]