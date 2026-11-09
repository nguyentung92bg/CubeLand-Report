public class WinStreakManager : SingletonBehaviour<WinStreakManager> // TypeDefIndex: 3359
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private WinStreakSo <Data>k__BackingField; // 0x10
	[SerializeField]
	private DayOfWeek firstCycleStartDay; // 0x14
	[SerializeField]
	private DayOfWeek firstCycleEndDay; // 0x18
	[SerializeField]
	private DayOfWeek secondCycleStartDay; // 0x1C
	[SerializeField]
	private DayOfWeek secondCycleEndDay; // 0x20
	[SerializeField]
	private WinStreakPopup popup; // 0x24
	[SerializeField]
	private TextMeshProUGUI[] streakEndDurationTexts; // 0x28
	[SerializeField]
	private Button showButton; // 0x2C
	[SerializeField]
	private Image showButtonCurrentStageProgress; // 0x30
	[SerializeField]
	private GameObject showButtonStageChangedNotification; // 0x34
	[SerializeField]
	private CanvasGroup tutorial; // 0x38
	[SerializeField]
	private Button tutorialCloseButton; // 0x3C
	[SerializeField]
	private Button closeButton; // 0x40
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x44
	private Coroutine refreshRemainingTimeCoroutine; // 0x48

	// Properties
	public WinStreakSo Data { get; set; }
	public bool IsActive { get; set; }
	private static int CurrentLevel { get; }
	private static int PreviousLevel { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1091C68 Offset: 0x1091C68 VA: 0x1091C68
	public WinStreakSo get_Data() { }

	[CompilerGenerated]
	// RVA: 0x1091C70 Offset: 0x1091C70 VA: 0x1091C70
	private void set_Data(WinStreakSo value) { }

	[CompilerGenerated]
	// RVA: 0x1091C78 Offset: 0x1091C78 VA: 0x1091C78
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x1091C80 Offset: 0x1091C80 VA: 0x1091C80
	private void set_IsActive(bool value) { }

	// RVA: 0x1091C88 Offset: 0x1091C88 VA: 0x1091C88
	private static ref int get_CurrentLevel() { }

	// RVA: 0x1091CAC Offset: 0x1091CAC VA: 0x1091CAC
	private static ref int get_PreviousLevel() { }

	// RVA: 0x1091CD0 Offset: 0x1091CD0 VA: 0x1091CD0
	protected void Start() { }

	// RVA: 0x10921E0 Offset: 0x10921E0 VA: 0x10921E0
	private void Refresh() { }

	// RVA: 0x1092884 Offset: 0x1092884 VA: 0x1092884
	private void RefreshProgressOfShowButton() { }

	// RVA: 0x1092AB0 Offset: 0x1092AB0 VA: 0x1092AB0
	private void OnLevelFailedHandler() { }

	// RVA: 0x1092B28 Offset: 0x1092B28 VA: 0x1092B28
	private void OnLevelSucceededHandler() { }

	// RVA: 0x1092BDC Offset: 0x1092BDC VA: 0x1092BDC
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isAnimationPlayed) { }

	// RVA: 0x1092D48 Offset: 0x1092D48 VA: 0x1092D48
	private void ShowPopupAfterDelay() { }

	// RVA: 0x1092F38 Offset: 0x1092F38 VA: 0x1092F38
	private void ShowTutorial() { }

	// RVA: 0x1093168 Offset: 0x1093168 VA: 0x1093168
	private void HideTutorial() { }

	// RVA: 0x10933CC Offset: 0x10933CC VA: 0x10933CC
	public bool WouldLoseProgressOnFail() { }

	// RVA: 0x10927FC Offset: 0x10927FC VA: 0x10927FC
	private IEnumerator RefreshRemainingTimeRegularlyCoroutine(DateTime endTime) { }

	// RVA: 0x109270C Offset: 0x109270C VA: 0x109270C
	private DateTime GetCycleEndTime(DateTime now, DayOfWeek endDay) { }

	// RVA: 0x1093478 Offset: 0x1093478 VA: 0x1093478
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10934CC Offset: 0x10934CC VA: 0x10934CC
	private void <Start>b__25_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]