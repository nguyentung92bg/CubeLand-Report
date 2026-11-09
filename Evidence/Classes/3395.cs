public class SeasonPassController : SingletonBehaviour<SeasonPassController> // TypeDefIndex: 3395
{
	// Fields
	[SerializeField]
	private SeasonPassManager seasonPassManager; // 0x10
	[SerializeField]
	private List<TMP_Text> timeTexts; // 0x14
	[SerializeField]
	private RectTransform notification; // 0x18
	[SerializeField]
	private TMP_Text notificationText; // 0x1C
	public SeasonPassSo seasonPassSo; // 0x20
	[SerializeField]
	private SeasonPassResultController seasonPassResultController; // 0x24
	public List<SeasonPassRewardParticle> rewardParticles; // 0x28
	public readonly SavedInt CubeAmountFromPreviousSession; // 0x2C
	private bool isInTutorialState; // 0x30
	private bool isCheckingAvailable; // 0x31
	public readonly SavedInt CurrentSeasonPassCheckPoint; // 0x34
	public readonly SavedInt CollectedKey; // 0x38
	public readonly SavedInt CurrentBarFill; // 0x3C
	public readonly SavedInt BonusBankBarFill; // 0x40
	public readonly SavedString SeasonPassClaimedRewards; // 0x44
	public readonly SavedDateTime SeasonPassLastVisitDate; // 0x48
	public List<SeasonPassController.SeasonPassClaimedRewardData> seasonPassClaimedRewards; // 0x4C

	// Properties
	public string GetPreviousSeasonName { get; }
	public string GetCurrentSeasonName { get; }
	public ObservableBool IsSeasonPassPurchased { get; }

	// Methods

	// RVA: 0x10A2950 Offset: 0x10A2950 VA: 0x10A2950
	public string get_GetPreviousSeasonName() { }

	// RVA: 0x10A01DC Offset: 0x10A01DC VA: 0x10A01DC
	public string get_GetCurrentSeasonName() { }

	// RVA: 0x10A01B8 Offset: 0x10A01B8 VA: 0x10A01B8
	public ObservableBool get_IsSeasonPassPurchased() { }

	// RVA: 0x10A2A48 Offset: 0x10A2A48 VA: 0x10A2A48
	protected void OnEnable() { }

	// RVA: 0x10A2E60 Offset: 0x10A2E60 VA: 0x10A2E60
	protected void OnDisable() { }

	// RVA: 0x10A308C Offset: 0x10A308C VA: 0x10A308C
	private void OnNextLevelHandler() { }

	// RVA: 0x10A30F4 Offset: 0x10A30F4 VA: 0x10A30F4
	protected void Start() { }

	// RVA: 0x10A3248 Offset: 0x10A3248 VA: 0x10A3248
	public bool IsSeasonPassAvailable() { }

	// RVA: 0x10A30F8 Offset: 0x10A30F8 VA: 0x10A30F8
	private void CheckAvailable() { }

	// RVA: 0x10A330C Offset: 0x10A330C VA: 0x10A330C
	private void CheckClaimedRewards() { }

	// RVA: 0x10A4748 Offset: 0x10A4748 VA: 0x10A4748
	private void ParseClaimedRewardData() { }

	// RVA: 0x10A4514 Offset: 0x10A4514 VA: 0x10A4514
	private void SaveClaimedRewardData() { }

	// RVA: 0x10A0EE8 Offset: 0x10A0EE8 VA: 0x10A0EE8
	public void UpdateClaimedRewards(int index, bool isUpdateFreeReward) { }

	// RVA: 0x10A34EC Offset: 0x10A34EC VA: 0x10A34EC
	private void CheckSystem() { }

	// RVA: 0x10A3750 Offset: 0x10A3750 VA: 0x10A3750
	private IEnumerator CheckRefreshRoutine() { }

	// RVA: 0x10A4B18 Offset: 0x10A4B18 VA: 0x10A4B18
	private void SetTime() { }

	// RVA: 0x10A4E14 Offset: 0x10A4E14 VA: 0x10A4E14
	public void ResetSeasonPass() { }

	// RVA: 0x10A51C8 Offset: 0x10A51C8 VA: 0x10A51C8
	private void StartTutorial() { }

	// RVA: 0x10A49F0 Offset: 0x10A49F0 VA: 0x10A49F0
	private void CheckResult() { }

	// RVA: 0x10A4D20 Offset: 0x10A4D20 VA: 0x10A4D20
	private DateTime GetEndOfMonth(DateTime date) { }

	// RVA: 0x10A2CFC Offset: 0x10A2CFC VA: 0x10A2CFC
	public void IncreaseCollectedKey(int amount) { }

	// RVA: 0x10A5274 Offset: 0x10A5274 VA: 0x10A5274
	private void OnSeasonPassCollectedKeyIncreaseHandler(int amount) { }

	// RVA: 0x10A5278 Offset: 0x10A5278 VA: 0x10A5278
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	// RVA: 0x10A5368 Offset: 0x10A5368 VA: 0x10A5368
	public void OnSeasonPassPurchased() { }

	// RVA: 0x10A43CC Offset: 0x10A43CC VA: 0x10A43CC
	public void RefreshNotification() { }

	// RVA: 0x10A56B0 Offset: 0x10A56B0 VA: 0x10A56B0
	public void HideNotification() { }

	// RVA: 0x10A557C Offset: 0x10A557C VA: 0x10A557C
	private int GetUnclaimedRewardCount() { }

	// RVA: 0x10A5734 Offset: 0x10A5734 VA: 0x10A5734
	public int GetProjectedCheckPoint(out int projectedBarFill, out int projectedBonusBank) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10A5974 Offset: 0x10A5974 VA: 0x10A5974
	private void Log(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10A59DC Offset: 0x10A59DC VA: 0x10A59DC
	private void LogWarning(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10A5A44 Offset: 0x10A5A44 VA: 0x10A5A44
	private void LogError(string log) { }

	// RVA: 0x10A5AAC Offset: 0x10A5AAC VA: 0x10A5AAC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10A5D80 Offset: 0x10A5D80 VA: 0x10A5D80
	private void <OnSeasonPassPurchased>b__44_0() { }
}

// Namespace: 
[CompilerGenerated]