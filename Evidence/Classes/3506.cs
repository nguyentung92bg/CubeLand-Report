public class StarChallenge : MonoBehaviour // TypeDefIndex: 3506
{
	// Fields
	public static GameAction<StarChallengeSO.RewardSlot, Transform> OnChestViewRequested; // 0x0
	[SerializeField]
	private RectTransform rectTransform; // 0x10
	[SerializeField]
	private TMP_Text orderText; // 0x14
	[SerializeField]
	private TMP_Text prizeAmountText; // 0x18
	[SerializeField]
	private Image prizeAmountIcon; // 0x1C
	[SerializeField]
	private Button chestButton; // 0x20
	[SerializeField]
	private RectTransform check; // 0x24
	[SerializeField]
	private RectTransform verticalLine; // 0x28
	[SerializeField]
	private GameObject currentStageGlow; // 0x2C
	private RectTransform _targetRect; // 0x30
	private StarChallengeSO.StarChallenges _myChallengeData; // 0x34
	private int _myChallengeIndex; // 0x38
	private Tween _checkTween; // 0x3C

	// Properties
	public RectTransform Rect { get; }

	// Methods

	// RVA: 0x10C4FC8 Offset: 0x10C4FC8 VA: 0x10C4FC8
	public RectTransform get_Rect() { }

	// RVA: 0x10C4FD0 Offset: 0x10C4FD0 VA: 0x10C4FD0
	protected void Awake() { }

	// RVA: 0x10C5084 Offset: 0x10C5084 VA: 0x10C5084
	protected void OnDestroy() { }

	// RVA: 0x10C5138 Offset: 0x10C5138 VA: 0x10C5138
	private void OnEnable() { }

	// RVA: 0x10C5288 Offset: 0x10C5288 VA: 0x10C5288
	private void OnDisable() { }

	// RVA: 0x10C53D8 Offset: 0x10C53D8 VA: 0x10C53D8
	public void Init(StarChallengeSO.StarChallenges data, int order, RectTransform targetRect, int totalChallengeCount) { }

	// RVA: 0x10C598C Offset: 0x10C598C VA: 0x10C598C
	private void RequestChestView() { }

	// RVA: 0x10C5AC0 Offset: 0x10C5AC0 VA: 0x10C5AC0
	private void OnStarChallengeClaimedHandler() { }

	// RVA: 0x10C5EE4 Offset: 0x10C5EE4 VA: 0x10C5EE4
	private void OnStarChallengeResetHandler() { }

	// RVA: 0x10C5878 Offset: 0x10C5878 VA: 0x10C5878
	public void CheckCompleteStatus() { }

	// RVA: 0x10C5F9C Offset: 0x10C5F9C VA: 0x10C5F9C
	public void .ctor() { }

	// RVA: 0x10C5FA4 Offset: 0x10C5FA4 VA: 0x10C5FA4
	private static void .cctor() { }
}

// Namespace: Rotatelab.Shop