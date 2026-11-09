public abstract class BaseLeaderboardPanelController : MonoBehaviour // TypeDefIndex: 3418
{
	// Fields
	private CycleData data; // 0x10
	private ILeaderboardManager manager; // 0x14
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x18
	[SerializeField]
	private ScrollRect scrollRect; // 0x1C
	private float scrollRectYPos; // 0x20
	[SerializeField]
	private RectTransform competitorsParent; // 0x24
	private readonly List<BaseCompetitor> allCompetitors; // 0x28
	private float competitorHeight; // 0x2C
	[SerializeField]
	private BotCompetitor botPrefab; // 0x30
	[SerializeField]
	private PlayerCompetitor playerPrefab; // 0x34
	private PlayerCompetitor playerCompetitor; // 0x38
	private bool isPlayerOutsideViewport; // 0x3C
	[SerializeField]
	private Button infoButton; // 0x40
	[SerializeField]
	private Button closeButton; // 0x44

	// Properties
	public bool HasPlayerRankChangedSinceLastShow { get; }

	// Methods

	// RVA: 0x10ADFF0 Offset: 0x10ADFF0 VA: 0x10ADFF0
	public bool get_HasPlayerRankChangedSinceLastShow() { }

	// RVA: 0x10AE1C4 Offset: 0x10AE1C4 VA: 0x10AE1C4
	public void Initialize(ILeaderboardManager manager) { }

	// RVA: 0x10AE4D0 Offset: 0x10AE4D0 VA: 0x10AE4D0 Slot: 4
	public virtual void Show() { }

	// RVA: 0x10AF4A8 Offset: 0x10AF4A8 VA: 0x10AF4A8
	public void Hide() { }

	// RVA: 0x10AE8D8 Offset: 0x10AE8D8 VA: 0x10AE8D8
	private void InstantiateCompetitors() { }

	// RVA: -1 Offset: -1
	private T InstantiateCompetitor<T>(T prefab) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x143203C Offset: 0x143203C VA: 0x143203C
	|-BaseLeaderboardPanelController.InstantiateCompetitor<object>
	*/

	// RVA: 0x10AEBC4 Offset: 0x10AEBC4 VA: 0x10AEBC4
	private void RefreshCompetitorRanks(bool animatePlayerPosition) { }

	// RVA: 0x10AFA10 Offset: 0x10AFA10 VA: 0x10AFA10
	public void SortCompetitorsByScore(List<BaseCompetitor> competitors) { }

	// RVA: 0x10B02E4 Offset: 0x10B02E4 VA: 0x10B02E4
	private void FocusOnPlayer() { }

	// RVA: 0x10B0364 Offset: 0x10B0364 VA: 0x10B0364
	private void OnScrollRectScrolled(Vector2 normalizedPosition) { }

	// RVA: 0x10B06E0 Offset: 0x10B06E0 VA: 0x10B06E0
	public void OnRewardsHighlightTutorialStarted() { }

	// RVA: 0x10B0B68 Offset: 0x10B0B68 VA: 0x10B0B68
	public void OnRewardsHighlightTutorialCompleted() { }

	// RVA: 0x10B0CDC Offset: 0x10B0CDC VA: 0x10B0CDC
	protected void .ctor() { }
}

// Namespace: 
[CompilerGenerated]