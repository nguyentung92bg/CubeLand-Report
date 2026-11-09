public class SuccessPanelController : MonoBehaviour // TypeDefIndex: 3759
{
	// Fields
	public TMP_Text coinEarnText; // 0x10
	public TMP_Text coinMultipliedCostText; // 0x14
	public TMP_Text coinMultiplierText; // 0x18
	public TMP_Text trophyEarnText; // 0x1C
	public TMP_Text cubeEarnText; // 0x20
	public TMP_Text crownEarnText; // 0x24
	private long giveCoin; // 0x28
	private int giveTrophy; // 0x30
	private int giveCube; // 0x34
	private int giveCrown; // 0x38
	public Sprite coinImage; // 0x3C
	public Sprite trophyImage; // 0x40
	public Sprite seasonPassImage; // 0x44
	public Sprite starImage; // 0x48
	public PopupController successPopup; // 0x4C
	[SerializeField]
	private Button claimButton; // 0x50
	[SerializeField]
	private Button claimRwButton; // 0x54
	public ParticleImage confetti; // 0x58
	public TextAnimatorPlayer header; // 0x5C
	public TMP_Text levelText; // 0x60
	public RectTransform contentPanel; // 0x64
	public List<EndGlow> finalGlows; // 0x68
	public GameObject rewardHead; // 0x6C
	public GameObject newItemArea; // 0x70
	public RectTransform rewardedArea; // 0x74
	public Image newItemIcon; // 0x78
	public Image newItemBlackedIcon; // 0x7C
	public Slider newItemSlider; // 0x80
	public TMP_Text progressText; // 0x84
	public TMP_Text progressTitleText; // 0x88
	public Button invisibleTapToSkip; // 0x8C
	private Tween _successPanelTween; // 0x90
	public Button invisibleTapToSkipCoin; // 0x94
	private Tween _claimCoinTween; // 0x98
	private bool isLeagueAvailable; // 0x9C
	private bool isSeasonPassAvailable; // 0x9D
	private bool isCrownAvailable; // 0x9E
	private bool _animateRewardParticlesOnPreGame; // 0x9F
	private int claimFreeMultiplier; // 0xA0
	private int claimRewardedMultiplier; // 0xA4

	// Properties
	private static bool IsCloudRushContinuingLevelFlow { get; }

	// Methods

	// RVA: 0x111D2A0 Offset: 0x111D2A0 VA: 0x111D2A0
	private static bool get_IsCloudRushContinuingLevelFlow() { }

	// RVA: 0x111D33C Offset: 0x111D33C VA: 0x111D33C
	protected void Awake() { }

	// RVA: 0x111D4C4 Offset: 0x111D4C4 VA: 0x111D4C4
	public void ClaimRw() { }

	// RVA: 0x111D5AC Offset: 0x111D5AC VA: 0x111D5AC
	public void Claim() { }

	// RVA: 0x111D9EC Offset: 0x111D9EC VA: 0x111D9EC
	private void FinishClaim(bool isFromRewarded) { }

	// RVA: 0x111D5C4 Offset: 0x111D5C4 VA: 0x111D5C4
	public void ClaimReward(int rewardMultiplier) { }

	// RVA: 0x111DB10 Offset: 0x111DB10 VA: 0x111DB10
	private void CoinParticle() { }

	// RVA: 0x111DBEC Offset: 0x111DBEC VA: 0x111DBEC
	private void AnimateRewardParticles() { }

	// RVA: 0x111DEE4 Offset: 0x111DEE4 VA: 0x111DEE4
	private void OnLevelSucceededHandler() { }

	// RVA: 0x111EF58 Offset: 0x111EF58 VA: 0x111EF58
	private void CheckNewItem(int level) { }

	// RVA: 0x111F744 Offset: 0x111F744 VA: 0x111F744
	public void InvisibleTapToSkipClick() { }

	// RVA: 0x111F9B4 Offset: 0x111F9B4 VA: 0x111F9B4
	public void InvisibleTapToSkipCoinClick() { }

	// RVA: 0x111FB98 Offset: 0x111FB98 VA: 0x111FB98
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	// RVA: 0x111FBBC Offset: 0x111FBBC VA: 0x111FBBC
	private void OnDestroy() { }

	// RVA: 0x111FD44 Offset: 0x111FD44 VA: 0x111FD44
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x111FD5C Offset: 0x111FD5C VA: 0x111FD5C
	private void <ClaimRw>g__RwSuccess|43_0() { }
}

// Namespace: Rotatelab.UI