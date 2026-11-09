public abstract class BaseCompetitor : MonoBehaviour // TypeDefIndex: 3420
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI rankText; // 0x10
	[SerializeField]
	private TextMeshProUGUI nameText; // 0x14
	[SerializeField]
	private TextMeshProUGUI scoreText; // 0x18
	[SerializeField]
	private TextMeshProUGUI singleRewardText; // 0x1C
	[SerializeField]
	private Button showRewardsButton; // 0x20
	[SerializeField]
	private RectTransform rewardContent; // 0x24
	[SerializeField]
	private Image avatar; // 0x28
	[SerializeField]
	private Image avatarBg; // 0x2C
	[SerializeField]
	private Image reward; // 0x30
	[SerializeField]
	private Image medal; // 0x34
	[SerializeField]
	private Sprite[] rewardSprites; // 0x38
	[SerializeField]
	private Sprite[] medalSprites; // 0x3C
	[SerializeField]
	private LeaderboardRewardEntry[] dashRewardMembers; // 0x40
	[SerializeField]
	private Image scoreIcon; // 0x44
	private ILeaderboardManager manager; // 0x48
	private CycleData cycle; // 0x4C
	private int rank; // 0x50
	private Tween contentTween; // 0x58

	// Properties
	public abstract int Score { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract int get_Score();

	// RVA: 0x10B107C Offset: 0x10B107C VA: 0x10B107C
	public void Initialize(ILeaderboardManager manager, CycleData cycle) { }

	// RVA: 0x10B115C Offset: 0x10B115C VA: 0x10B115C
	protected void SetData(string name, Sprite avatar, Sprite avatarBackground) { }

	// RVA: 0x10AFB40 Offset: 0x10AFB40 VA: 0x10AFB40
	public void SetRank(int rank) { }

	// RVA: 0x10B0814 Offset: 0x10B0814 VA: 0x10B0814
	public void ShowRewards(bool autoHideAfterDelay) { }

	// RVA: 0x10B0BFC Offset: 0x10B0BFC VA: 0x10B0BFC
	public void HideRewards(float delay = 0) { }

	// RVA: 0x10B12AC Offset: 0x10B12AC VA: 0x10B12AC
	protected void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10B12B4 Offset: 0x10B12B4 VA: 0x10B12B4
	private void <Initialize>b__20_0() { }
}

// Namespace: Rotatelab.Leaderboard