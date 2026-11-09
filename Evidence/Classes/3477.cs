public class DailyQuestMemberController : MonoBehaviour // TypeDefIndex: 3477
{
	// Fields
	[SerializeField]
	private Image icon; // 0x10
	[SerializeField]
	private TMP_Text info; // 0x14
	[SerializeField]
	private TMP_Text sliderText; // 0x18
	[SerializeField]
	private Slider slider; // 0x1C
	[SerializeField]
	private DailyQuestChest chest; // 0x20
	private bool _isCollected; // 0x24
	public bool isCollectable; // 0x25
	private bool _isTimerActive; // 0x26
	private float _timer; // 0x28
	private DailyQuestSo.DailyQuestData _dailyQuestData; // 0x2C
	private DailyQuestCanvasController _dailyQuestCanvasController; // 0x30

	// Methods

	// RVA: 0x10BC510 Offset: 0x10BC510 VA: 0x10BC510
	public void Init(DailyQuestSo.DailyQuestData dailyQuestData, DailyQuestSo.DailyQuestRewardsData rewardsData, int currentSliderValue, bool isCollected) { }

	// RVA: 0x10BF408 Offset: 0x10BF408 VA: 0x10BF408
	private void Update() { }

	// RVA: 0x10BEE30 Offset: 0x10BEE30 VA: 0x10BEE30
	private void SignUpEvents() { }

	// RVA: 0x10BF50C Offset: 0x10BF50C VA: 0x10BF50C
	private void SignOutEvents() { }

	// RVA: 0x10BFA84 Offset: 0x10BFA84 VA: 0x10BFA84
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10BFA98 Offset: 0x10BFA98 VA: 0x10BFA98
	private void OnObjectiveGainedHandler(RectTransform arg1, int amount) { }

	// RVA: 0x10BFAA0 Offset: 0x10BFAA0 VA: 0x10BFAA0
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x10BFB38 Offset: 0x10BFB38 VA: 0x10BFB38
	private void OnPlayOnCompleteHandler() { }

	// RVA: 0x10BFB40 Offset: 0x10BFB40 VA: 0x10BFB40
	private void OnLevelSucceededHandler() { }

	// RVA: 0x10BFB48 Offset: 0x10BFB48 VA: 0x10BFB48
	private void OnLevelFailedHandler() { }

	// RVA: 0x10BF488 Offset: 0x10BF488 VA: 0x10BF488
	private void IncreaseCurrentValueBy(int value) { }

	// RVA: 0x10BFBE4 Offset: 0x10BFBE4 VA: 0x10BFBE4
	private void OnReturnToPreGameHandler() { }

	// RVA: 0x10BFBE8 Offset: 0x10BFBE8 VA: 0x10BFBE8
	private void OnQuitLevelHandler() { }

	// RVA: 0x10BEC7C Offset: 0x10BEC7C VA: 0x10BEC7C
	private void SetSlider(int value) { }

	// RVA: 0x10BD618 Offset: 0x10BD618 VA: 0x10BD618
	public void Collect() { }

	// RVA: 0x10BFBEC Offset: 0x10BFBEC VA: 0x10BFBEC
	private void OnDisable() { }

	// RVA: 0x10BFBF0 Offset: 0x10BFBF0 VA: 0x10BFBF0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]