public class SeasonPassResultController : MonoBehaviour // TypeDefIndex: 3406
{
	// Fields
	[SerializeField]
	private TMP_Text title; // 0x10
	[SerializeField]
	private TMP_Text info; // 0x14
	[SerializeField]
	private TMP_Text unclaimedPanelTitle; // 0x18
	[SerializeField]
	private TMP_Text bonusBankRewardAmount; // 0x1C
	[SerializeField]
	private Button unclaimedPanelButton; // 0x20
	[SerializeField]
	private RectTransform unclaimedPanelButtonText; // 0x24
	[SerializeField]
	private Button bonusBankPanelButton; // 0x28
	[SerializeField]
	private RectTransform bonusBankPanelButtonText; // 0x2C
	[SerializeField]
	private RectTransform bonusBankRewardArea; // 0x30
	[SerializeField]
	private CanvasGroup endPopup; // 0x34
	[SerializeField]
	private CanvasGroup unClaimedPopup; // 0x38
	[SerializeField]
	private CanvasGroup bonusPopup; // 0x3C
	[SerializeField]
	private List<SeasonPassUnClaimedReward> unClaimedRewardsObject; // 0x40
	private SeasonPassController seasonPassController; // 0x44
	public List<SeasonPassSo.SeasonReward> unclaimedRewardsData; // 0x48

	// Methods

	// RVA: 0x10A9604 Offset: 0x10A9604 VA: 0x10A9604
	public void ShowResult() { }

	// RVA: 0x10A9954 Offset: 0x10A9954 VA: 0x10A9954
	public void Continue() { }

	// RVA: 0x10A9A28 Offset: 0x10A9A28 VA: 0x10A9A28
	private void CheckUnclaimedRewards() { }

	// RVA: 0x10A9CCC Offset: 0x10A9CCC VA: 0x10A9CCC
	private void AddRewards(List<SeasonPassSo.SeasonReward> rewards) { }

	// RVA: 0x10AA278 Offset: 0x10AA278 VA: 0x10AA278
	private void ShowUnClaimedPanel() { }

	// RVA: 0x10AA930 Offset: 0x10AA930 VA: 0x10AA930
	public void ClaimRewards() { }

	// RVA: 0x10AAB60 Offset: 0x10AAB60 VA: 0x10AAB60
	private void HideUnClaimedPanel() { }

	// RVA: 0x10AA7A4 Offset: 0x10AA7A4 VA: 0x10AA7A4
	private void CheckBonusBank() { }

	// RVA: 0x10AAC2C Offset: 0x10AAC2C VA: 0x10AAC2C
	private void ShowBonusPanel() { }

	// RVA: 0x10AAF94 Offset: 0x10AAF94 VA: 0x10AAF94
	public void ClaimBonusReward() { }

	// RVA: 0x10AB214 Offset: 0x10AB214 VA: 0x10AB214
	private void HideBonusPanel() { }

	// RVA: 0x10AB3B0 Offset: 0x10AB3B0 VA: 0x10AB3B0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10AB3B8 Offset: 0x10AB3B8 VA: 0x10AB3B8
	private void <Continue>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x10AB3FC Offset: 0x10AB3FC VA: 0x10AB3FC
	private void <ShowUnClaimedPanel>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x10AB424 Offset: 0x10AB424 VA: 0x10AB424
	private void <HideUnClaimedPanel>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x10AB5E4 Offset: 0x10AB5E4 VA: 0x10AB5E4
	private void <ShowBonusPanel>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x10AB60C Offset: 0x10AB60C VA: 0x10AB60C
	private void <HideBonusPanel>b__25_0() { }
}

// Namespace: Rotatelab.SeasonPass