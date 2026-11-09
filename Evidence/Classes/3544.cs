public class DailyDeliveryController : MonoBehaviour // TypeDefIndex: 3544
{
	// Fields
	[SerializeField]
	private PopupController popupController; // 0x10
	[SerializeField]
	private RectTransform popup; // 0x14
	[SerializeField]
	private DailyDeliverySO dailyDeliverySo; // 0x18
	[SerializeField]
	private List<DailyDeliveryDayBase> dayCards; // 0x1C
	[SerializeField]
	private Button claimButton; // 0x20
	[SerializeField]
	[Tooltip("Reused round-robin, oldest first — a day grants at most a handful of rewards.")]
	private List<DailyDeliveryRewardParticle> rewardParticles; // 0x24
	[SerializeField]
	[Tooltip("Extra hold after the card animation so the last reward particle finishes before the popup slides away.")]
	private float claimCloseDelay; // 0x28
	private DailyDeliveryState state; // 0x2C

	// Methods

	// RVA: 0x10D5CB4 Offset: 0x10D5CB4 VA: 0x10D5CB4
	private void OnEnable() { }

	// RVA: 0x10D5DB4 Offset: 0x10D5DB4 VA: 0x10D5DB4
	private void OnDisable() { }

	// RVA: 0x10D5EB4 Offset: 0x10D5EB4 VA: 0x10D5EB4
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10D6048 Offset: 0x10D6048 VA: 0x10D6048
	protected void Awake() { }

	// RVA: 0x10D60FC Offset: 0x10D60FC VA: 0x10D60FC
	protected void OnDestroy() { }

	// RVA: 0x10D61B0 Offset: 0x10D61B0 VA: 0x10D61B0
	protected void Start() { }

	// RVA: 0x10D5EC0 Offset: 0x10D5EC0 VA: 0x10D5EC0
	private void TryRequestDelivery() { }

	// RVA: 0x10D62C4 Offset: 0x10D62C4 VA: 0x10D62C4
	private void Show() { }

	// RVA: 0x10D67F8 Offset: 0x10D67F8 VA: 0x10D67F8
	private void Hide() { }

	// RVA: 0x10D6674 Offset: 0x10D6674 VA: 0x10D6674
	private void BuildDays() { }

	// RVA: 0x10D6D40 Offset: 0x10D6D40 VA: 0x10D6D40
	private void Claim() { }

	// RVA: 0x10D712C Offset: 0x10D712C VA: 0x10D712C
	private void GrantDay(DailyDeliverySO.DayData day, float rewardStagger) { }

	// RVA: 0x10D80E8 Offset: 0x10D80E8 VA: 0x10D80E8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]