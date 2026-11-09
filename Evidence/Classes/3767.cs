public class PopupController : MonoBehaviour, IPopupController // TypeDefIndex: 3767
{
	// Fields
	[CompilerGenerated]
	private bool <IsVisible>k__BackingField; // 0x10
	[SerializeField]
	private bool deactivateGameObjectOnHide; // 0x11
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x14
	private Transform defaultParent; // 0x18

	// Properties
	public bool IsVisible { get; set; }
	public CanvasGroup CanvasGroup { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1124690 Offset: 0x1124690 VA: 0x1124690
	public bool get_IsVisible() { }

	[CompilerGenerated]
	// RVA: 0x1124698 Offset: 0x1124698 VA: 0x1124698
	private void set_IsVisible(bool value) { }

	// RVA: 0x11246A0 Offset: 0x11246A0 VA: 0x11246A0
	public CanvasGroup get_CanvasGroup() { }

	// RVA: 0x11246A8 Offset: 0x11246A8 VA: 0x11246A8 Slot: 5
	protected virtual void Awake() { }

	// RVA: 0x11246E8 Offset: 0x11246E8 VA: 0x11246E8 Slot: 6
	protected virtual void Start() { }

	// RVA: 0x1124734 Offset: 0x1124734 VA: 0x1124734
	public void Show(bool insertAtFront = False) { }

	// RVA: 0x1124930 Offset: 0x1124930 VA: 0x1124930
	public void Hide() { }

	// RVA: 0x1124B50 Offset: 0x1124B50 VA: 0x1124B50 Slot: 4
	private void Rotatelab.UI.IPopupController.SetVisible(bool isVisible) { }

	// RVA: 0x1124DBC Offset: 0x1124DBC VA: 0x1124DBC Slot: 7
	protected virtual void OnPopupShown() { }

	// RVA: 0x1124DC0 Offset: 0x1124DC0 VA: 0x1124DC0 Slot: 8
	protected virtual void OnPopupHidden() { }

	// RVA: 0x1124DC4 Offset: 0x1124DC4 VA: 0x1124DC4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1124DCC Offset: 0x1124DCC VA: 0x1124DCC
	private void <Rotatelab.UI.IPopupController.SetVisible>b__13_0() { }
}

// Namespace: Rotatelab.UI