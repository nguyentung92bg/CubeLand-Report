public class DailyQuestReward : MonoBehaviour // TypeDefIndex: 3479
{
	// Fields
	[SerializeField]
	private Image icon; // 0x10
	[SerializeField]
	private TMP_Text amount; // 0x14
	private DailyQuestSo.DailyQuestSingleRewardData _rewardData; // 0x18

	// Properties
	public DailyQuestSo.DailyQuestSingleRewardData RewardData { get; }

	// Methods

	// RVA: 0x10BFCA0 Offset: 0x10BFCA0 VA: 0x10BFCA0
	public DailyQuestSo.DailyQuestSingleRewardData get_RewardData() { }

	// RVA: 0x10BDF0C Offset: 0x10BDF0C VA: 0x10BDF0C
	public void Init(DailyQuestSo.DailyQuestSingleRewardData rewardData) { }

	// RVA: 0x10BFCA8 Offset: 0x10BFCA8 VA: 0x10BFCA8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]