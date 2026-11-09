public class Chest : MonoBehaviour // TypeDefIndex: 3350
{
	// Fields
	[SerializeField]
	private Image image; // 0x10
	[SerializeField]
	private Button button; // 0x14
	[SerializeField]
	private BundleOffer rewardPrefab; // 0x18
	[SerializeField]
	private GridLayoutGroup rewardsParent; // 0x1C
	private BundleOffer[] rewards; // 0x20
	private Sequence showRewardsSequence; // 0x28
	[SerializeField]
	private RewardParticle[] rewardParticles; // 0x38
	private WinStreakSo.StageData data; // 0x3C
	private bool isCollected; // 0x40

	// Methods

	// RVA: 0x1090030 Offset: 0x1090030 VA: 0x1090030
	public void Initialize(WinStreakSo.StageData data) { }

	// RVA: 0x1090348 Offset: 0x1090348 VA: 0x1090348
	public void SetCollected(bool isCollected) { }

	// RVA: 0x10903A8 Offset: 0x10903A8 VA: 0x10903A8
	public void Collect() { }

	// RVA: 0x1090650 Offset: 0x1090650 VA: 0x1090650
	private void ShowRewards() { }

	// RVA: 0x1090928 Offset: 0x1090928 VA: 0x1090928
	public void .ctor() { }
}

// Namespace: Rotatelab.WinStreak