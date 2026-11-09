public class SeasonPassManager : BaseOfferButton // TypeDefIndex: 3403
{
	// Fields
	public List<SeasonPassCheckpointBase> generatedCheckpoints; // 0x3C
	[SerializeField]
	private SeasonPassSo seasonPassSo; // 0x40
	[SerializeField]
	private RectTransform contentMask; // 0x44
	[SerializeField]
	private Image checkpointsParent; // 0x48
	[SerializeField]
	private SeasonPassCheckpointBase checkpointStart; // 0x4C
	[SerializeField]
	private SeasonPassCheckpointBase checkpointMiddle; // 0x50
	[SerializeField]
	private SeasonPassCheckpointBase checkpointBonusBank; // 0x54
	[SerializeField]
	private GameObject inputPrevent; // 0x58
	[SerializeField]
	private CanvasGroup buttonCanvasGroup; // 0x5C
	[SerializeField]
	private TMP_Text seasonHeader; // 0x60
	[SerializeField]
	private SeasonPassTargetBar targetBar; // 0x64
	[SerializeField]
	private GameObject activateButton; // 0x68
	[SerializeField]
	private Image buttonBgFill; // 0x6C
	private RectTransform targetBarRect; // 0x70
	private Material runtimePattern; // 0x74
	private SeasonPassBonusBank bonusBankInstance; // 0x78
	[SerializeField]
	private SeasonPassController seasonPassController; // 0x7C

	// Methods

	// RVA: 0x10A37C8 Offset: 0x10A37C8 VA: 0x10A37C8
	public void Init() { }

	// RVA: 0x10A74B0 Offset: 0x10A74B0 VA: 0x10A74B0 Slot: 13
	protected override void OnDestroy() { }

	// RVA: 0x10A766C Offset: 0x10A766C VA: 0x10A766C
	private void OnHudFillSourceChanged(int _) { }

	// RVA: 0x10A7320 Offset: 0x10A7320 VA: 0x10A7320
	private void RefreshButtonRadialFill() { }

	// RVA: 0x10A5090 Offset: 0x10A5090 VA: 0x10A5090
	public void ResetNeeds() { }

	// RVA: 0x10A6ED0 Offset: 0x10A6ED0 VA: 0x10A6ED0
	private int GetCurrentTopBarTarget(int cp) { }

	// RVA: 0x10A6FB4 Offset: 0x10A6FB4 VA: 0x10A6FB4
	private bool IsBonusBankPhase(int cp) { }

	// RVA: 0x10A7254 Offset: 0x10A7254 VA: 0x10A7254
	private bool IsBonusBankCapReached() { }

	// RVA: 0x10A7670 Offset: 0x10A7670 VA: 0x10A7670 Slot: 14
	protected override void OnPurchaseSucceededHandler(IapObject iapObject) { }

	// RVA: 0x10A76FC Offset: 0x10A76FC VA: 0x10A76FC Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10A7F9C Offset: 0x10A7F9C VA: 0x10A7F9C
	private void BuildFillSequence(Sequence sequence, int startCp, int keysAvailable) { }

	// RVA: 0x10A8D0C Offset: 0x10A8D0C VA: 0x10A8D0C
	private void Finalized() { }

	// RVA: 0x10A8D3C Offset: 0x10A8D3C VA: 0x10A8D3C
	private void UpdateAllCheckpoints() { }

	// RVA: 0x10A7D2C Offset: 0x10A7D2C VA: 0x10A7D2C
	private Vector2 CalculateScrollFor(int cpIndex) { }

	// RVA: 0x10A8F08 Offset: 0x10A8F08 VA: 0x10A8F08 Slot: 18
	public override void HidePopup() { }

	// RVA: 0x10A5180 Offset: 0x10A5180 VA: 0x10A5180
	public void SetButtonVisibility(bool isVisible) { }

	// RVA: 0x10A8FC8 Offset: 0x10A8FC8 VA: 0x10A8FC8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]