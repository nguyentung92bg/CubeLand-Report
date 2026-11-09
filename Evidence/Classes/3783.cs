public abstract class Toggle : MonoBehaviour // TypeDefIndex: 3783
{
	// Fields
	public Image toggleImageOnBackGround; // 0x10
	public Image toggleImageParent; // 0x14
	public Image toggleImageOn; // 0x18
	public TMP_Text toggleImageOnText; // 0x1C
	public AnimationCurve toggleAnimCurve; // 0x20
	public RectTransform onPos; // 0x24
	public RectTransform offPos; // 0x28
	public Button button; // 0x2C
	private Tween toggleAnimation; // 0x30

	// Methods

	// RVA: 0x112C15C Offset: 0x112C15C VA: 0x112C15C
	protected void Start() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void LoadToggle();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void SetToggle();

	// RVA: 0x112C20C Offset: 0x112C20C VA: 0x112C20C Slot: 6
	protected virtual void UpdateToggle(bool value) { }

	// RVA: 0x112C424 Offset: 0x112C424 VA: 0x112C424
	private void OnToggleAnimationElapsed(float time) { }

	// RVA: 0x112BF84 Offset: 0x112BF84 VA: 0x112BF84
	protected void .ctor() { }
}

// Namespace: Rotatelab.UI