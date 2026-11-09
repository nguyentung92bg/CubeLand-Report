public class RewardMiniPanelController : MonoBehaviour // TypeDefIndex: 3537
{
	// Fields
	[SerializeField]
	private RewardInfo rewardInfoPrefab; // 0x10
	public RectTransform rewardPanel; // 0x14
	public AnimationCurve showCurve; // 0x18
	private bool _isShowCoroutineStart; // 0x1C

	// Methods

	// RVA: 0x10D35C8 Offset: 0x10D35C8 VA: 0x10D35C8
	public void SetRewardMiniPanel(List<RewardBase> rewardBases) { }

	[ContextMenu("AQ")]
	// RVA: 0x10D3718 Offset: 0x10D3718 VA: 0x10D3718
	public void ShowReward() { }

	// RVA: 0x10D3750 Offset: 0x10D3750 VA: 0x10D3750
	private IEnumerator ShowRewardAnim() { }

	// RVA: 0x10D37E4 Offset: 0x10D37E4 VA: 0x10D37E4
	public void .ctor() { }
}

// Namespace: Rotatelab.Shop