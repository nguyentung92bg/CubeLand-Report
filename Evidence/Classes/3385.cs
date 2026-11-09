public abstract class SeasonPassRewardBase : MonoBehaviour // TypeDefIndex: 3385
{
	// Fields
	[SerializeField]
	private Image icon; // 0x10
	[SerializeField]
	private TMP_Text info; // 0x14
	[SerializeField]
	private GameObject checkUI; // 0x18
	public Button claimButton; // 0x1C
	private Button rewardButton; // 0x20
	protected int checkpointIndex; // 0x24
	private SeasonPassSo.SeasonPassRewardData rewardData; // 0x28
	private bool isChest; // 0x2C

	// Methods

	// RVA: 0x10A19E8 Offset: 0x10A19E8 VA: 0x10A19E8
	protected void Awake() { }

	// RVA: 0x10A0A3C Offset: 0x10A0A3C VA: 0x10A0A3C Slot: 4
	public virtual void Init(SeasonPassSo.SeasonPassRewardData rewardData, int index) { }

	// RVA: 0x10A0CA8 Offset: 0x10A0CA8 VA: 0x10A0CA8 Slot: 5
	public virtual void Claim() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void CheckClaimStatus(bool collectAnimated);

	// RVA: 0x10A111C Offset: 0x10A111C VA: 0x10A111C
	protected void SetCollect(bool isCollected, bool collectAnimated) { }

	// RVA: 0x10A1AE0 Offset: 0x10A1AE0 VA: 0x10A1AE0
	private void ShowChest() { }

	// RVA: 0x10A1708 Offset: 0x10A1708 VA: 0x10A1708
	protected void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10A1BA8 Offset: 0x10A1BA8 VA: 0x10A1BA8
	private void <SetCollect>b__12_0() { }
}

// Namespace: 
[Serializable]