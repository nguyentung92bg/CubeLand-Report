public class RewardUIController : MonoBehaviour // TypeDefIndex: 3539
{
	// Fields
	[SerializeField]
	private RectTransform verticalLayout; // 0x10
	public TMP_Text headerText; // 0x14
	public PopupController rewardPopup; // 0x18
	public RewardInfo rewardInfoPrefab; // 0x1C
	public RectTransform horizontalGroupPrefab; // 0x20
	public RewardUIAnimationController rewardUIAnimationController; // 0x24
	private Queue<RewardData> _requestedRewardUIQueue; // 0x28
	private RectTransform[] _createdRewardInfos; // 0x2C

	// Methods

	// RVA: 0x10D3E34 Offset: 0x10D3E34 VA: 0x10D3E34
	protected void Awake() { }

	// RVA: 0x10D3F34 Offset: 0x10D3F34 VA: 0x10D3F34
	private void ShowRewardUIHandler(List<RewardBase> rewardBases, string header) { }

	// RVA: 0x10D4068 Offset: 0x10D4068 VA: 0x10D4068
	private void ShowReward(RewardData rewardData) { }

	// RVA: 0x10D449C Offset: 0x10D449C VA: 0x10D449C
	public void Claim() { }

	// RVA: 0x10D4B1C Offset: 0x10D4B1C VA: 0x10D4B1C
	public void .ctor() { }
}

// Namespace: Rotatelab.Shop