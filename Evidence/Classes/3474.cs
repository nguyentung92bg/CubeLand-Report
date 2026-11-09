public class DailyQuestChest : MonoBehaviour // TypeDefIndex: 3474
{
	// Fields
	[SerializeField]
	private DailyQuestReward rewardPrefab; // 0x10
	[SerializeField]
	private RectTransform rewardArea; // 0x14
	[SerializeField]
	private List<DailyQuestReward> generatedRewards; // 0x18
	[SerializeField]
	private List<DailyQuestRewardParticle> rewardParticles; // 0x1C
	[SerializeField]
	private Sprite starIcon; // 0x20
	private bool _isCollected; // 0x24
	private Tween _rewardAreaTween; // 0x28

	// Methods

	// RVA: 0x10BDC28 Offset: 0x10BDC28 VA: 0x10BDC28
	private void OnEnable() { }

	// RVA: 0x10BDD28 Offset: 0x10BDD28 VA: 0x10BDD28
	private void OnDisable() { }

	// RVA: 0x10BDE28 Offset: 0x10BDE28 VA: 0x10BDE28
	private void OnDailyQuestChestClickedHandler(DailyQuestChest chest) { }

	// RVA: 0x10BBC1C Offset: 0x10BBC1C VA: 0x10BBC1C
	public void Init(List<DailyQuestSo.DailyQuestSingleRewardData> singleRewards) { }

	// RVA: 0x10BE144 Offset: 0x10BE144 VA: 0x10BE144
	public void OnClick() { }

	[ContextMenu("Collect")]
	// RVA: 0x10BD090 Offset: 0x10BD090 VA: 0x10BD090
	public void Collect() { }

	// RVA: 0x10BBFD8 Offset: 0x10BBFD8 VA: 0x10BBFD8
	public void SetCollected() { }

	// RVA: 0x10BE324 Offset: 0x10BE324 VA: 0x10BE324
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10BE32C Offset: 0x10BE32C VA: 0x10BE32C
	private void <OnClick>b__11_0() { }
}

// Namespace: Rotatelab.Shop