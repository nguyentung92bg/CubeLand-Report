public class SeasonPassTutorialController : SingletonBehaviour<SeasonPassTutorialController> // TypeDefIndex: 3199
{
	// Fields
	[SerializeField]
	private List<CanvasGroup> highlights; // 0x10
	[SerializeField]
	private Image backgroundImage; // 0x14
	[SerializeField]
	private TMP_Text activateSeasonTitle; // 0x18
	[SerializeField]
	private TMP_Text activateSeasonInfo; // 0x1C
	private int _tutorialStep; // 0x20
	public readonly SavedBool IsSeasonPassTutorialCompleted; // 0x24

	// Methods

	// RVA: 0xFC5838 Offset: 0xFC5838 VA: 0xFC5838
	private void OnEnable() { }

	// RVA: 0xFC5918 Offset: 0xFC5918 VA: 0xFC5918
	private void OnDisable() { }

	// RVA: 0xFC59F8 Offset: 0xFC59F8 VA: 0xFC59F8
	private void OnSeasonPassTutorialStartedHandler() { }

	// RVA: 0xFC5BC4 Offset: 0xFC5BC4 VA: 0xFC5BC4
	private void CheckStep() { }

	// RVA: 0xFC5E48 Offset: 0xFC5E48 VA: 0xFC5E48
	public void ButtonClicked() { }

	// RVA: 0xFC6228 Offset: 0xFC6228 VA: 0xFC6228
	public void InfoButtonClick() { }

	// RVA: 0xFC62A0 Offset: 0xFC62A0 VA: 0xFC62A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFC6364 Offset: 0xFC6364 VA: 0xFC6364
	private void <ButtonClicked>b__10_0(float f) { }

	[CompilerGenerated]
	// RVA: 0xFC63F0 Offset: 0xFC63F0 VA: 0xFC63F0
	private void <ButtonClicked>b__10_1() { }
}

// Namespace: 
[Serializable]