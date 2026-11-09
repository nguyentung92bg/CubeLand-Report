public class HiroRewardDialog : MonoBehaviour // TypeDefIndex: 3946
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI headerText; // 0x10
	[SerializeField]
	private TextMeshProUGUI messageText; // 0x14
	[SerializeField]
	private Button discardButton; // 0x18
	[SerializeField]
	private Button claimButton; // 0x1C
	[SerializeField]
	private TextMeshProUGUI claimButtonText; // 0x20
	[SerializeField]
	private HiroRewardUIEntryContainer rewardEntryContainer; // 0x24
	private IRewardMailboxEntry data; // 0x28
	private UniTaskCompletionSource taskCompletionSource; // 0x2C

	// Methods

	// RVA: 0xFE9DD0 Offset: 0xFE9DD0 VA: 0xFE9DD0
	protected void Awake() { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<ShowAsync>d__9))]
	// RVA: 0xFE9EF0 Offset: 0xFE9EF0 VA: 0xFE9EF0
	public UniTask ShowAsync(IRewardMailboxEntry data) { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<OnClaimButtonClickedAsync>d__10))]
	// RVA: 0xFE9FCC Offset: 0xFE9FCC VA: 0xFE9FCC
	private UniTaskVoid OnClaimButtonClickedAsync() { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<OnDiscardButtonClickedAsync>d__11))]
	// RVA: 0xFEA06C Offset: 0xFEA06C VA: 0xFEA06C
	private UniTaskVoid OnDiscardButtonClickedAsync() { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<OnBeforeClaimOrDiscardButtonClickedAsync>d__12))]
	// RVA: 0xFEA10C Offset: 0xFEA10C VA: 0xFEA10C
	private UniTask OnBeforeClaimOrDiscardButtonClickedAsync() { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<OnAfterClaimOrDiscardButtonClickedAsync>d__13))]
	// RVA: 0xFEA1D4 Offset: 0xFEA1D4 VA: 0xFEA1D4
	private UniTask OnAfterClaimOrDiscardButtonClickedAsync() { }

	// RVA: 0xFEA29C Offset: 0xFEA29C VA: 0xFEA29C
	private void ClaimReward() { }

	// RVA: 0xFEBCB0 Offset: 0xFEBCB0 VA: 0xFEBCB0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFEBCB8 Offset: 0xFEBCB8 VA: 0xFEBCB8
	private void <Awake>b__8_0() { }

	[CompilerGenerated]
	// RVA: 0xFEBCE4 Offset: 0xFEBCE4 VA: 0xFEBCE4
	private void <Awake>b__8_1() { }

	[AsyncStateMachine(typeof(HiroRewardDialog.<<OnAfterClaimOrDiscardButtonClickedAsync>b__13_0>d))]
	[CompilerGenerated]
	// RVA: 0xFEBD10 Offset: 0xFEBD10 VA: 0xFEBD10
	private UniTask <OnAfterClaimOrDiscardButtonClickedAsync>b__13_0() { }
}

// Namespace: 
[Serializable]