public class DailyQuestCanvasController : BaseOfferButton // TypeDefIndex: 3471
{
	// Fields
	public DayOfWeek allowedStartDay; // 0x3C
	public DayOfWeek allowedEndDay; // 0x40
	public GameObject dailyQuestButton; // 0x44
	[SerializeField]
	private List<TMP_Text> dailyQuestEndDurationTexts; // 0x48
	[SerializeField]
	private List<DailyQuestChest> weeklyChests; // 0x4C
	[SerializeField]
	private RectTransform dailyQuestMemberParent; // 0x50
	[SerializeField]
	private DailyQuestMemberController dailyQuestMemberControllerPrefab; // 0x54
	[SerializeField]
	private List<DailyQuestMemberController> generatedDailyQuestMembers; // 0x58
	[SerializeField]
	private DailyQuestSo dailyQuestSo; // 0x5C
	[SerializeField]
	private Slider weeklySlider; // 0x60
	[SerializeField]
	private TMP_Text weeklySliderText; // 0x64
	[SerializeField]
	private TMP_Text notificationText; // 0x68
	[SerializeField]
	private RectTransform notification; // 0x6C
	public static DailyQuestCanvasController Instance; // 0x0
	private readonly List<DailyQuestCanvasController.CurrentDailyQuest> currentDailyQuests; // 0x70
	private int _savedWeekNumber; // 0x74
	private int _savedDayNumber; // 0x78
	private bool _isActiveThisSession; // 0x7C
	private bool _isInitialized; // 0x7D
	private Tween _weeklySliderTween; // 0x80
	private int _totalWeeklyTarget; // 0x84
	private DateTime _dailyQuestEndDate; // 0x88

	// Properties
	public static DailyQuestSo DailyQuestSo { get; }
	public static int DailyQuestWeeklyValue { get; set; }
	public static int DailyQuestCollectedWeeklyChestCount { get; set; }
	private static string SavedDailyQuests { get; set; }
	public static bool IsDailyQuestForcedShowed { get; set; }

	// Methods

	// RVA: 0x10B9214 Offset: 0x10B9214 VA: 0x10B9214
	public static DailyQuestSo get_DailyQuestSo() { }

	// RVA: 0x10B9274 Offset: 0x10B9274 VA: 0x10B9274
	public static int get_DailyQuestWeeklyValue() { }

	// RVA: 0x10B92C8 Offset: 0x10B92C8 VA: 0x10B92C8
	public static void set_DailyQuestWeeklyValue(int value) { }

	// RVA: 0x10B9320 Offset: 0x10B9320 VA: 0x10B9320
	public static int get_DailyQuestCollectedWeeklyChestCount() { }

	// RVA: 0x10B9374 Offset: 0x10B9374 VA: 0x10B9374
	public static void set_DailyQuestCollectedWeeklyChestCount(int value) { }

	// RVA: 0x10B93CC Offset: 0x10B93CC VA: 0x10B93CC
	private static string get_SavedDailyQuests() { }

	// RVA: 0x10B943C Offset: 0x10B943C VA: 0x10B943C
	private static void set_SavedDailyQuests(string value) { }

	// RVA: 0x10B9494 Offset: 0x10B9494 VA: 0x10B9494
	public static bool get_IsDailyQuestForcedShowed() { }

	// RVA: 0x10B94E8 Offset: 0x10B94E8 VA: 0x10B94E8
	public static void set_IsDailyQuestForcedShowed(bool value) { }

	// RVA: 0x10B9540 Offset: 0x10B9540 VA: 0x10B9540 Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10B9778 Offset: 0x10B9778 VA: 0x10B9778 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10B99B0 Offset: 0x10B99B0 VA: 0x10B99B0 Slot: 9
	protected override void Awake() { }

	// RVA: 0x10B9A20 Offset: 0x10B9A20 VA: 0x10B9A20 Slot: 12
	protected override void Start() { }

	// RVA: 0x10B9CA0 Offset: 0x10B9CA0 VA: 0x10B9CA0
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10B9AEC Offset: 0x10B9AEC VA: 0x10B9AEC
	private void CheckInitialize() { }

	// RVA: 0x10BA0DC Offset: 0x10BA0DC VA: 0x10BA0DC
	private void Update() { }

	// RVA: 0x10BA3D8 Offset: 0x10BA3D8 VA: 0x10BA3D8 Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10B9CAC Offset: 0x10B9CAC VA: 0x10B9CAC
	private void InitializeDailyQuestSystem() { }

	// RVA: 0x10BA91C Offset: 0x10BA91C VA: 0x10BA91C
	private void SetWeeklyContents() { }

	// RVA: 0x10BC054 Offset: 0x10BC054 VA: 0x10BC054
	private void IncreaseSlider(int value) { }

	// RVA: 0x10BAC10 Offset: 0x10BAC10 VA: 0x10BAC10
	private void SetDailyContents() { }

	// RVA: 0x10BB768 Offset: 0x10BB768 VA: 0x10BB768
	private void GenerateDailyQuests() { }

	// RVA: 0x10BC9E0 Offset: 0x10BC9E0 VA: 0x10BC9E0
	public DailyQuestCanvasController.CurrentDailyQuest GetDailyQuest(DailyQuestSo.DailyQuestData data) { }

	// RVA: 0x10BC1A8 Offset: 0x10BC1A8 VA: 0x10BC1A8
	public void SaveCurrentDailyQuests() { }

	// RVA: 0x10BA6D4 Offset: 0x10BA6D4 VA: 0x10BA6D4
	private void ResetDailyQuestCompletely() { }

	// RVA: 0x10BA6F8 Offset: 0x10BA6F8 VA: 0x10BA6F8
	private void ResetDailyQuest() { }

	// RVA: 0x10BA798 Offset: 0x10BA798 VA: 0x10BA798
	private DateTime GetDailyQuestEndDate() { }

	// RVA: 0x10BA0EC Offset: 0x10BA0EC VA: 0x10BA0EC
	private void UpdateDailyQuestEndDuration() { }

	// RVA: 0x10BCB50 Offset: 0x10BCB50 VA: 0x10BCB50
	private void OnDailyQuestNotifiedHandler() { }

	// RVA: 0x10BCD78 Offset: 0x10BCD78 VA: 0x10BCD78
	private void OnDailyQuestWeeklyRewardClaimedHandler(int amount) { }

	// RVA: 0x10B9FFC Offset: 0x10B9FFC VA: 0x10B9FFC
	private void ShowButtonTutorial() { }

	// RVA: 0x10BA6D0 Offset: 0x10BA6D0 VA: 0x10BA6D0
	private void DebugLogWarning(string message) { }

	// RVA: 0x10BCD7C Offset: 0x10BCD7C VA: 0x10BCD7C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10BCE28 Offset: 0x10BCE28 VA: 0x10BCE28
	private void <IncreaseSlider>b__47_0(float v) { }

	[CompilerGenerated]
	// RVA: 0x10BD478 Offset: 0x10BD478 VA: 0x10BD478
	private void <ShowButtonTutorial>b__58_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]