public class BaseOfferButtonsParent : MonoBehaviour // TypeDefIndex: 3524
{
	// Fields
	[SerializeField]
	private RectTransform topOnePiece; // 0x10
	[SerializeField]
	private RectTransform leftGrid; // 0x14
	[SerializeField]
	private RectTransform rightGrid; // 0x18
	private MainCanvasType currentMainCanvasType; // 0x1C
	private float _visiblePos; // 0x20
	private float _hiddenPos; // 0x24
	private Tween _leftTween; // 0x28
	private Tween _rightTween; // 0x2C
	public List<BaseOfferButtonsParent.MenuItems> leftMenuItems; // 0x30
	public List<BaseOfferButtonsParent.MenuItems> rightMenuItems; // 0x34

	// Methods

	// RVA: 0x10CD1BC Offset: 0x10CD1BC VA: 0x10CD1BC
	private void OnEnable() { }

	// RVA: 0x10CD52C Offset: 0x10CD52C VA: 0x10CD52C
	private void OnDisable() { }

	// RVA: 0x10CD828 Offset: 0x10CD828 VA: 0x10CD828
	private void OnStarChallengeVisibleHandler(bool isVisible) { }

	// RVA: 0x10CD870 Offset: 0x10CD870 VA: 0x10CD870
	private void OnMenuItemNeedToPositioningHandler(Transform member, RectTransform.Edge direction, int childIndex) { }

	// RVA: 0x10CDAD4 Offset: 0x10CDAD4 VA: 0x10CDAD4
	private void RePos() { }

	// RVA: 0x10CDAF0 Offset: 0x10CDAF0 VA: 0x10CDAF0
	private static void ApplyOrder(List<BaseOfferButtonsParent.MenuItems> menuItems) { }

	// RVA: 0x10CDEFC Offset: 0x10CDEFC VA: 0x10CDEFC
	private void OnBaseOfferButtonsActivationRequestedHandler(bool isActive) { }

	// RVA: 0x10CE24C Offset: 0x10CE24C VA: 0x10CE24C Slot: 4
	protected virtual void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10CE288 Offset: 0x10CE288 VA: 0x10CE288 Slot: 5
	protected virtual void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10CE2BC Offset: 0x10CE2BC VA: 0x10CE2BC
	private void OnAnyPopupUpdateHandler(bool isActive) { }

	// RVA: 0x10CDFAC Offset: 0x10CDFAC VA: 0x10CDFAC
	private void MoveLeftGrid(float targetPositionX, bool isInstant = False) { }

	// RVA: 0x10CE0FC Offset: 0x10CE0FC VA: 0x10CE0FC
	private void MoveRightGrid(float targetPositionX, bool isInstant = False) { }

	// RVA: 0x10CE308 Offset: 0x10CE308 VA: 0x10CE308
	private void OnDestroy() { }

	// RVA: 0x10CE344 Offset: 0x10CE344 VA: 0x10CE344
	public void .ctor() { }
}

// Namespace: Rotatelab.Shop