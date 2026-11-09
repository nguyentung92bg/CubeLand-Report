public class ObjectiveUIManager : MonoBehaviour // TypeDefIndex: 3142
{
	// Fields
	[SerializeField]
	private CanvasGroup dimCanvasGroup; // 0x10
	[SerializeField]
	private Animator animator; // 0x14
	[SerializeField]
	private TMP_Text objectiveText; // 0x18
	[SerializeField]
	private TMP_Text levelText; // 0x1C
	[SerializeField]
	private TMP_Text levelText2; // 0x20
	[SerializeField]
	private Image fill; // 0x24
	[SerializeField]
	private Image objectiveIcon; // 0x28
	[SerializeField]
	private Sprite objectiveSprite; // 0x2C
	[SerializeField]
	private RectTransform objectiveCheck; // 0x30
	[SerializeField]
	private FavIconSetter[] favIconSetters; // 0x34
	private int _objectiveMax; // 0x38
	private int _remainingObjectiveAmount; // 0x3C
	private int _gainedObjectiveAmount; // 0x40
	private bool _isLevelSuccessTriggered; // 0x44
	private Tween _gainTextTween; // 0x48
	private Tween _gainBarTween; // 0x4C

	// Methods

	// RVA: 0xFB00AC Offset: 0xFB00AC VA: 0xFB00AC
	private void OnEnable() { }

	// RVA: 0xFB0250 Offset: 0xFB0250 VA: 0xFB0250
	private void OnDisable() { }

	// RVA: 0xFB03F4 Offset: 0xFB03F4 VA: 0xFB03F4
	private void OnLevelLoaded(SoLevelData levelData) { }

	// RVA: 0xFB04D0 Offset: 0xFB04D0 VA: 0xFB04D0
	private void ResetLevelInitials() { }

	[AsyncStateMachine(typeof(ObjectiveUIManager.<SetFavIconsAsync>d__20))]
	// RVA: 0xFB0824 Offset: 0xFB0824 VA: 0xFB0824
	private UniTaskVoid SetFavIconsAsync() { }

	// RVA: 0xFB0758 Offset: 0xFB0758 VA: 0xFB0758
	private void StartObjectivesPanelAnimation() { }

	// RVA: 0xFB08CC Offset: 0xFB08CC VA: 0xFB08CC
	private void OnObjectiveGainedHandler(RectTransform insRect, int amount) { }

	// RVA: 0xFB0A24 Offset: 0xFB0A24 VA: 0xFB0A24
	private void ResetTween() { }

	// RVA: 0xFB0A50 Offset: 0xFB0A50 VA: 0xFB0A50
	private Tween AnimateObjectiveText(int from, int to) { }

	// RVA: 0xFB0C14 Offset: 0xFB0C14 VA: 0xFB0C14
	private Tween AnimateFillBar(float from, float to) { }

	// RVA: 0xFB0CF4 Offset: 0xFB0CF4 VA: 0xFB0CF4
	private void EnableDimCanvas(bool enable, float duration = 0, float delay = 0, Action onComplete) { }

	// RVA: 0xFB0F50 Offset: 0xFB0F50 VA: 0xFB0F50
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFB0F58 Offset: 0xFB0F58 VA: 0xFB0F58
	private void <AnimateFillBar>b__25_0(float value) { }
}

// Namespace: 