public class UiElementHider : MonoBehaviour // TypeDefIndex: 3798
{
	// Fields
	[SerializeField]
	private UIType uiType; // 0x10
	[SerializeField]
	private UiElementHider.AnchorData[] uiObjectAnchorDatas; // 0x14
	[SerializeField]
	private RectTransform container; // 0x18
	[SerializeField]
	private float animationDuration; // 0x1C
	[SerializeField]
	private Ease animationEase; // 0x20
	private static readonly List<UiElementHider> instances; // 0x0
	private MainCanvasType mainCanvasType; // 0x24
	private bool isBoostersForcedHide; // 0x28
	private bool isTutorialActivated; // 0x29

	// Methods

	// RVA: 0x112E444 Offset: 0x112E444 VA: 0x112E444
	protected void OnEnable() { }

	// RVA: 0x112F054 Offset: 0x112F054 VA: 0x112F054
	protected void OnDisable() { }

	// RVA: 0x112F808 Offset: 0x112F808 VA: 0x112F808
	private void OnDailyDeliveryActivatedHandler(bool isActive) { }

	// RVA: 0x112FB00 Offset: 0x112FB00 VA: 0x112FB00
	private void OnLevel1TutorialActivatedHandler(bool isActivated) { }

	// RVA: 0x112FB20 Offset: 0x112FB20 VA: 0x112FB20
	private void OnBoosterBannerVisibilityActivatedHandler(bool isActivated) { }

	// RVA: 0x112FB40 Offset: 0x112FB40 VA: 0x112FB40
	private void OnSettingsPopupOpenedHandler() { }

	// RVA: 0x112FB50 Offset: 0x112FB50 VA: 0x112FB50
	private void OnSettingsPopupClosedHandler() { }

	// RVA: 0x112FB60 Offset: 0x112FB60 VA: 0x112FB60
	private void OnPageOpened(PageButtonType type) { }

	// RVA: 0x112FC48 Offset: 0x112FC48 VA: 0x112FC48
	private void OnBoosterStarted(CurrencyType boosterType) { }

	// RVA: 0x112FC54 Offset: 0x112FC54 VA: 0x112FC54
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x112FC58 Offset: 0x112FC58 VA: 0x112FC58
	private void OnBoosterCancelledHandler(CurrencyType boosterType) { }

	// RVA: 0x112FC5C Offset: 0x112FC5C VA: 0x112FC5C
	private void OnBaseOfferButtonsActivationRequestedHandler(bool isActive) { }

	// RVA: 0x112FD48 Offset: 0x112FD48 VA: 0x112FD48
	private void OnComplementaryBoosterStateActivatedHandler(bool isActive, bool isHideForPreBooster) { }

	// RVA: 0x112FD74 Offset: 0x112FD74 VA: 0x112FD74
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool isActive) { }

	// RVA: 0x112FD7C Offset: 0x112FD7C VA: 0x112FD7C
	private void OnObjectiveAnimationFinishedHandler() { }

	// RVA: 0x112FD8C Offset: 0x112FD8C VA: 0x112FD8C
	public static void SetVisibility(bool isVisible) { }

	// RVA: 0x112F818 Offset: 0x112F818 VA: 0x112F818
	private void Hide() { }

	// RVA: 0x112EC5C Offset: 0x112EC5C VA: 0x112EC5C
	private void Show() { }

	// RVA: 0x112FF4C Offset: 0x112FF4C VA: 0x112FF4C
	private UiElementHider.AnchorData GetAnchorData() { }

	[ContextMenu("Move to Shown Position")]
	// RVA: 0x11300AC Offset: 0x11300AC VA: 0x11300AC
	private void MoveToDefaultPosition() { }

	[ContextMenu("Move to Hidden Position")]
	// RVA: 0x11300F4 Offset: 0x11300F4 VA: 0x11300F4
	private void MoveToHiddenPosition() { }

	[ContextMenu("SetCurrentTOShown")]
	// RVA: 0x113013C Offset: 0x113013C VA: 0x113013C
	private void SetCurrentTOShown() { }

	[ContextMenu("SetCurrentTOHidden")]
	// RVA: 0x1130300 Offset: 0x1130300 VA: 0x1130300
	private void SetCurrentTOHidden() { }

	// RVA: 0x11304C4 Offset: 0x11304C4 VA: 0x11304C4
	public void .ctor() { }

	// RVA: 0x11304DC Offset: 0x11304DC VA: 0x11304DC
	private static void .cctor() { }
}

// Namespace: Rotatelab.Boosters