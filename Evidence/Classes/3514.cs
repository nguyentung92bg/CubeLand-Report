public class StarChallengeController : MonoBehaviour // TypeDefIndex: 3514
{
	// Fields
	[SerializeField]
	private List<TMP_Text> infoTexts; // 0x10
	[SerializeField]
	private List<TMP_Text> sliderProgressTexts; // 0x14
	[SerializeField]
	private List<TMP_Text> targetPrizeAmount; // 0x18
	[SerializeField]
	private List<SlicedFilledImage> sliderFills; // 0x1C
	[SerializeField]
	private List<Image> target; // 0x20
	[SerializeField]
	private GameObject inactiveTarget; // 0x24
	[SerializeField]
	private GameObject inactiveFill; // 0x28
	[SerializeField]
	private List<Image> grayscaleMatImages; // 0x2C
	[SerializeField]
	private List<Image> grayscaleMaskedMatImages; // 0x30
	[SerializeField]
	private Material grayscaleMat; // 0x34
	[SerializeField]
	private Material grayscaleMaskedMat; // 0x38
	[SerializeField]
	private RectTransform starParticleStartPos; // 0x3C
	[SerializeField]
	private Sprite starSprite; // 0x40
	[SerializeField]
	private RectTransform starChallengeBar; // 0x44
	[SerializeField]
	private PopupController popupController; // 0x48
	[SerializeField]
	private List<StarChallengeSO> jewelSoData; // 0x4C
	private readonly int _starRefillDuration; // 0x50
	private bool _isAlreadyApplicationPaused; // 0x54
	private int _cachedStarRemainingSecond; // 0x58
	private Coroutine _timerRoutine; // 0x5C
	private bool _isStarChallengeActive; // 0x60
	private bool _isStarChallengeVisible; // 0x61
	[CompilerGenerated]
	private static bool <AreAllChallengesCompleted>k__BackingField; // 0x0

	// Properties
	private StarChallengeSO JewelSo { get; }
	private int StarRemainingSecond { get; set; }
	private int CollectedStarAmount { get; set; }
	private DateTime LastStarChallengeSystemDateSaved { get; set; }
	public static bool AreAllChallengesCompleted { get; set; }

	// Methods

	// RVA: 0x10C6E5C Offset: 0x10C6E5C VA: 0x10C6E5C
	private StarChallengeSO get_JewelSo() { }

	// RVA: 0x10C6FEC Offset: 0x10C6FEC VA: 0x10C6FEC
	private int get_StarRemainingSecond() { }

	// RVA: 0x10C7044 Offset: 0x10C7044 VA: 0x10C7044
	private void set_StarRemainingSecond(int value) { }

	// RVA: 0x10C70A4 Offset: 0x10C70A4 VA: 0x10C70A4
	private int get_CollectedStarAmount() { }

	// RVA: 0x10C70F8 Offset: 0x10C70F8 VA: 0x10C70F8
	private void set_CollectedStarAmount(int value) { }

	// RVA: 0x10C7150 Offset: 0x10C7150 VA: 0x10C7150
	private DateTime get_LastStarChallengeSystemDateSaved() { }

	// RVA: 0x10C7294 Offset: 0x10C7294 VA: 0x10C7294
	private void set_LastStarChallengeSystemDateSaved(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x10C7394 Offset: 0x10C7394 VA: 0x10C7394
	public static bool get_AreAllChallengesCompleted() { }

	[CompilerGenerated]
	// RVA: 0x10C73E4 Offset: 0x10C73E4 VA: 0x10C73E4
	private static void set_AreAllChallengesCompleted(bool value) { }

	// RVA: 0x10C7438 Offset: 0x10C7438 VA: 0x10C7438
	private void OnEnable() { }

	// RVA: 0x10C7698 Offset: 0x10C7698 VA: 0x10C7698
	private void OnDisable() { }

	// RVA: 0x10C78F8 Offset: 0x10C78F8 VA: 0x10C78F8
	private void Start() { }

	// RVA: 0x10C8284 Offset: 0x10C8284 VA: 0x10C8284
	private void OnSessionTransitionCompletedHandler() { }

	// RVA: 0x10C84A4 Offset: 0x10C84A4 VA: 0x10C84A4
	private void OnNextLevelHandler() { }

	// RVA: 0x10C79B8 Offset: 0x10C79B8 VA: 0x10C79B8
	private void CheckStarChallengeActive() { }

	// RVA: 0x10C8EF8 Offset: 0x10C8EF8 VA: 0x10C8EF8
	public void OnClick() { }

	// RVA: 0x10C8814 Offset: 0x10C8814 VA: 0x10C8814
	private void TimeInit() { }

	// RVA: 0x10C8E80 Offset: 0x10C8E80 VA: 0x10C8E80
	private IEnumerator TimerRoutine() { }

	// RVA: 0x10C9120 Offset: 0x10C9120 VA: 0x10C9120
	private void SetRemainingTimeText() { }

	// RVA: 0x10C8618 Offset: 0x10C8618 VA: 0x10C8618
	private void ResetStarChallenges() { }

	// RVA: 0x10C89B4 Offset: 0x10C89B4 VA: 0x10C89B4
	private void SetTarget() { }

	// RVA: 0x10C8304 Offset: 0x10C8304 VA: 0x10C8304
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10C94B4 Offset: 0x10C94B4 VA: 0x10C94B4
	private void RunJewelCollect() { }

	// RVA: 0x10C9594 Offset: 0x10C9594 VA: 0x10C9594
	private void CollectJewels() { }

	// RVA: 0x10C93A4 Offset: 0x10C93A4 VA: 0x10C93A4
	private static void SpendJewels(long amount) { }

	// RVA: 0x10C98C8 Offset: 0x10C98C8 VA: 0x10C98C8
	private void FinishJewelCollect() { }

	// RVA: 0x10C9960 Offset: 0x10C9960 VA: 0x10C9960
	private void PlayRewardParticles(StarChallengeSO.RewardSlot slot) { }

	// RVA: 0x10C9CF0 Offset: 0x10C9CF0 VA: 0x10C9CF0
	private void PlayRewardParticle(StarChallengeSO.SingleReward reward, Vector3 spawnPosition) { }

	// RVA: 0x10C9F60 Offset: 0x10C9F60 VA: 0x10C9F60
	private void OnStarChallengeRetargetHandler() { }

	// RVA: 0x10C9F64 Offset: 0x10C9F64 VA: 0x10C9F64
	private void OnApplicationQuit() { }

	// RVA: 0x10C9FEC Offset: 0x10C9FEC VA: 0x10C9FEC
	private void OnApplicationPause(bool pauseStatus) { }

	// RVA: 0x10CA0A8 Offset: 0x10CA0A8 VA: 0x10CA0A8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10CA0BC Offset: 0x10CA0BC VA: 0x10CA0BC
	private void <CheckStarChallengeActive>b__42_0(Image i) { }

	[CompilerGenerated]
	// RVA: 0x10CA110 Offset: 0x10CA110 VA: 0x10CA110
	private void <CheckStarChallengeActive>b__42_6(Image i) { }

	[CompilerGenerated]
	// RVA: 0x10CA144 Offset: 0x10CA144 VA: 0x10CA144
	private void <CheckStarChallengeActive>b__42_7(Image i) { }

	[CompilerGenerated]
	// RVA: 0x10CA178 Offset: 0x10CA178 VA: 0x10CA178
	private void <OnClick>b__43_0() { }

	[CompilerGenerated]
	// RVA: 0x10CA1FC Offset: 0x10CA1FC VA: 0x10CA1FC
	private void <RunJewelCollect>b__50_0() { }

	[CompilerGenerated]
	// RVA: 0x10CA374 Offset: 0x10CA374 VA: 0x10CA374
	private void <FinishJewelCollect>b__53_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]