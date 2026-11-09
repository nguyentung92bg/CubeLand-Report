public class PageButtonBase : MonoBehaviour // TypeDefIndex: 3791
{
	// Fields
	public PageButtonType pageButtonType; // 0x10
	[SerializeField]
	private Button pageButton; // 0x14
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x18
	[SerializeField]
	private RectTransform selector; // 0x1C
	[SerializeField]
	private Image pageButtonImage; // 0x20
	[SerializeField]
	private TextMeshProUGUI pageButtonText; // 0x24
	[SerializeField]
	private Sprite pageImage; // 0x28
	[SerializeField]
	private Sprite lockedImage; // 0x2C
	[SerializeField]
	private int unlockedLevel; // 0x30
	private Vector2 pageImageDefaultPos; // 0x34

	// Properties
	public bool IsUnlocked { get; }

	// Methods

	// RVA: 0x112D1D4 Offset: 0x112D1D4 VA: 0x112D1D4
	public bool get_IsUnlocked() { }

	// RVA: 0x11274A0 Offset: 0x11274A0 VA: 0x11274A0
	public void Initialize() { }

	// RVA: 0x112D254 Offset: 0x112D254 VA: 0x112D254
	public void RefreshLockedState() { }

	// RVA: 0x1128454 Offset: 0x1128454 VA: 0x1128454
	public bool SetPageEnable(bool enable) { }

	// RVA: 0x112D294 Offset: 0x112D294 VA: 0x112D294
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x112D29C Offset: 0x112D29C VA: 0x112D29C
	private void <Initialize>b__12_0() { }
}

// Namespace: 
[CompilerGenerated]