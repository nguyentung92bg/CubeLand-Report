public class LeaderboardResultsController : MonoBehaviour // TypeDefIndex: 3441
{
	// Fields
	private CycleData data; // 0x10
	private ILeaderboardManager manager; // 0x14
	[SerializeField]
	private MetaScreenType type; // 0x18
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x1C
	[SerializeField]
	private TextMeshProUGUI playerRankText; // 0x20
	[SerializeField]
	private VerticalLayoutGroup competitorsParent; // 0x24
	[SerializeField]
	private PlayerCompetitor playerPrefab; // 0x28
	[SerializeField]
	private BotCompetitor botPrefab; // 0x2C
	[SerializeField]
	private GameObject playerSeparatorDot; // 0x30
	private readonly List<BaseCompetitor> allCompetitors; // 0x34
	[SerializeField]
	private RectTransform footer; // 0x38
	[SerializeField]
	private Button continueButton; // 0x3C
	[SerializeField]
	private GameObject claimArea; // 0x40
	[SerializeField]
	private Button claimButton; // 0x44
	[SerializeField]
	private LeaderboardRewardEntry[] rewardEntries; // 0x48

	// Methods

	// RVA: 0x10B3D5C Offset: 0x10B3D5C VA: 0x10B3D5C
	public void Initialize(ILeaderboardManager manager) { }

	// RVA: 0x10B3E94 Offset: 0x10B3E94 VA: 0x10B3E94
	public void Show(CycleData data) { }

	// RVA: 0x10B3F78 Offset: 0x10B3F78 VA: 0x10B3F78
	private void ShowInternal() { }

	// RVA: 0x10B4BB4 Offset: 0x10B4BB4 VA: 0x10B4BB4
	private void Hide() { }

	// RVA: 0x10B45A8 Offset: 0x10B45A8 VA: 0x10B45A8
	private void InstantiateCompetitors() { }

	// RVA: -1 Offset: -1
	private T InstantiateCompetitor<T>(T prefab) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x14AE964 Offset: 0x14AE964 VA: 0x14AE964
	|-LeaderboardResultsController.InstantiateCompetitor<object>
	*/

	// RVA: 0x10B4F80 Offset: 0x10B4F80 VA: 0x10B4F80
	private void OnClaimButtonClicked() { }

	// RVA: 0x10B5270 Offset: 0x10B5270 VA: 0x10B5270
	public void .ctor() { }
}

// Namespace: Rotatelab.Leaderboard