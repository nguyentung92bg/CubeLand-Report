public class DailyDeliveryDayBase : MonoBehaviour // TypeDefIndex: 3549
{
	// Fields
	[SerializeField]
	[Tooltip("Gap between two granted rewards on claim — a chest's rewards use it too, so they do not stack.")]
	private float rewardClaimStagger; // 0x10
	[SerializeField]
	private TMP_Text title; // 0x14
	[SerializeField]
	private RectTransform checkMark; // 0x18
	[SerializeField]
	private RectTransform rewardParent; // 0x1C
	[SerializeField]
	private DailyDeliverySingleReward singleRewardPrefab; // 0x20
	[SerializeField]
	private DailyDeliveryChest chestPrefab; // 0x24
	private readonly List<Transform> spawnedCells; // 0x28
	private readonly List<DailyDeliveryChest> spawnedChests; // 0x2C
	private DailyDeliverySO.DayData day; // 0x30

	// Properties
	public float RewardClaimStagger { get; }

	// Methods

	// RVA: 0x10D8290 Offset: 0x10D8290 VA: 0x10D8290
	public float get_RewardClaimStagger() { }

	// RVA: 0x10D6C50 Offset: 0x10D6C50 VA: 0x10D6C50
	public void Initialize(DailyDeliverySO.DayData dayData, int dayNumber, DailyDeliveryDayState dayState) { }

	// RVA: 0x10D7644 Offset: 0x10D7644 VA: 0x10D7644
	public Sequence PlayClaimAnimation(List<DailyDeliveryRewardParticle> rewardParticles) { }

	// RVA: 0x10D8A6C Offset: 0x10D8A6C VA: 0x10D8A6C
	private void PlayRewardParticle(List<DailyDeliveryRewardParticle> rewardParticles, DailyDeliverySO.SingleReward reward, int cellIndex) { }

	// RVA: 0x10D9160 Offset: 0x10D9160 VA: 0x10D9160 Slot: 4
	protected virtual void ApplyState(DailyDeliveryDayState dayState) { }

	// RVA: 0x10D88F8 Offset: 0x10D88F8 VA: 0x10D88F8
	private void OpenChests() { }

	// RVA: 0x10D8298 Offset: 0x10D8298 VA: 0x10D8298
	private void BuildCells(DailyDeliverySO.DayData dayData) { }

	// RVA: 0x10D9284 Offset: 0x10D9284 VA: 0x10D9284
	public void .ctor() { }
}

// Namespace: Rotatelab.DailyDelivery