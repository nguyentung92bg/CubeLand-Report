public class SagaMapController : MonoBehaviour // TypeDefIndex: 3308
{
	// Fields
	public List<SagaMapLabel> sagaMapLabels; // 0x10
	private SagaMapLabel _currentLevelLabel; // 0x14
	public RectTransform layout; // 0x18
	public Sprite pointNext; // 0x1C
	public Sprite pointPre; // 0x20
	public Sprite currentLevel; // 0x24
	public Sprite nextLevel; // 0x28
	public Sprite preLevel; // 0x2C
	private Vector2 _defaultPos; // 0x30

	// Methods

	// RVA: 0x1081E0C Offset: 0x1081E0C VA: 0x1081E0C
	protected void Awake() { }

	// RVA: 0x1081F20 Offset: 0x1081F20 VA: 0x1081F20
	protected void Start() { }

	// RVA: 0x10824C4 Offset: 0x10824C4 VA: 0x10824C4
	private void OnNextLevelHandler() { }

	// RVA: 0x1081F24 Offset: 0x1081F24 VA: 0x1081F24
	private void SetSagaMap() { }

	// RVA: 0x108251C Offset: 0x108251C VA: 0x108251C
	private void NextLevelAnimation() { }

	// RVA: 0x1082678 Offset: 0x1082678 VA: 0x1082678
	private void ShowCurrentLevel(int currentLevelLayoutIndex) { }

	// RVA: 0x10828F0 Offset: 0x10828F0 VA: 0x10828F0
	private void OnDestroy() { }

	// RVA: 0x10829D4 Offset: 0x10829D4 VA: 0x10829D4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1082858 Offset: 0x1082858 VA: 0x1082858
	private IEnumerator <NextLevelAnimation>g__NextLevelAnim|13_0(Vector2 fromPos, Vector2 targetPos) { }
}

// Namespace: Rotatelab.SagaMap