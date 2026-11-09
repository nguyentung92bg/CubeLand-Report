public class AdBreakController : SingletonBehaviour<AdBreakController> // TypeDefIndex: 3747
{
	// Fields
	[SerializeField]
	private GameObject content; // 0x10
	[SerializeField]
	private CanvasGroup contentGroup; // 0x14
	[SerializeField]
	private Button watchNowButton; // 0x18
	[SerializeField]
	private Image progressFill; // 0x1C
	[SerializeField]
	private ShopNoAdsSO noAdsSo; // 0x20
	[SerializeField]
	private ShopPanelNoAdsItem noAdsItem; // 0x24
	[SerializeField]
	private Button noAdsPurchaseButton; // 0x28
	private float adAppearTimeoutSeconds; // 0x2C
	private int interstitialOpportunityCount; // 0x30
	private Action onContinue; // 0x34
	private Tween autoContinueTween; // 0x38
	private Tween fadeTween; // 0x48
	private Tween adTimeoutTween; // 0x58
	private bool isSubscribedToAdEvents; // 0x68

	// Methods

	// RVA: 0x1116670 Offset: 0x1116670 VA: 0x1116670 Slot: 4
	protected override void Awake() { }

	// RVA: 0x11168B8 Offset: 0x11168B8 VA: 0x11168B8
	protected void OnDestroy() { }

	// RVA: 0x1116BE4 Offset: 0x1116BE4 VA: 0x1116BE4
	public bool ShouldShow() { }

	// RVA: 0x1116CB4 Offset: 0x1116CB4 VA: 0x1116CB4
	public void Show(Action continueToAd) { }

	// RVA: 0x1116DC8 Offset: 0x1116DC8 VA: 0x1116DC8
	public void Continue() { }

	// RVA: 0x11173EC Offset: 0x11173EC VA: 0x11173EC
	public void Dismiss() { }

	// RVA: 0x111740C Offset: 0x111740C VA: 0x111740C
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType _, bool __) { }

	// RVA: 0x1117088 Offset: 0x1117088 VA: 0x1117088
	private void Hide() { }

	// RVA: 0x1117270 Offset: 0x1117270 VA: 0x1117270
	private void SubscribeToAdEvents() { }

	// RVA: 0x1116A64 Offset: 0x1116A64 VA: 0x1116A64
	private void UnsubscribeFromAdEvents() { }

	// RVA: 0x1117924 Offset: 0x1117924 VA: 0x1117924
	private void OnAdDisplayedHandler(string _, MaxSdkBase.AdInfo __) { }

	// RVA: 0x1117928 Offset: 0x1117928 VA: 0x1117928
	private void OnAdDisplayFailedHandler(MaxSdkBase.AdInfo _, MaxSdkBase.ErrorInfo __) { }

	// RVA: 0x111792C Offset: 0x111792C VA: 0x111792C
	private void OnNoAdsTappedHandler() { }

	// RVA: 0x1117A08 Offset: 0x1117A08 VA: 0x1117A08
	private void OnIAPCanvasDeactivatedHandler(bool isPaySuccess) { }

	// RVA: 0x1117B10 Offset: 0x1117B10 VA: 0x1117B10
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]