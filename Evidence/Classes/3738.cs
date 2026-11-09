public class GenericDialog : SingletonBehaviourFromResources<GenericDialog> // TypeDefIndex: 3738
{
	// Fields
	[SerializeField]
	private TextMeshProUGUI titleText; // 0x10
	[SerializeField]
	private TextMeshProUGUI messageText; // 0x14
	[SerializeField]
	private TextMeshProUGUI buttonText; // 0x18
	[SerializeField]
	private Button okButton; // 0x1C
	[SerializeField]
	private Button cancelButton; // 0x20
	[SerializeField]
	private Image dialogIcon; // 0x24
	private GenericDialog.DialogData activeDialog; // 0x28
	private readonly List<GenericDialog.DialogData> dialogQueue; // 0x2C

	// Methods

	// RVA: 0x1110E9C Offset: 0x1110E9C VA: 0x1110E9C
	protected void Awake() { }

	// RVA: 0x1110FBC Offset: 0x1110FBC VA: 0x1110FBC
	private void OnButtonClicked(int index) { }

	// RVA: 0x11111D8 Offset: 0x11111D8 VA: 0x11111D8
	public IDisposable ShowWithinScopeWithNoButtons(string title, string message) { }

	// RVA: 0x1111834 Offset: 0x1111834 VA: 0x1111834
	public void Show(string title, string message, string buttonLabel = "OK", Action onButtonClicked) { }

	// RVA: 0x1111A10 Offset: 0x1111A10 VA: 0x1111A10
	public UniTask ShowAsync(string title, string message, string buttonLabel = "OK", Sprite icon) { }

	// RVA: 0x1111ED8 Offset: 0x1111ED8 VA: 0x1111ED8
	public void ShowWithOKCancelButtons(string title, string message, string okButtonLabel = "OK", Action onOK, Action onCancel) { }

	[AsyncStateMachine(typeof(GenericDialog.<ShowWithOKCancelButtonsAsync>d__17))]
	// RVA: 0x1112050 Offset: 0x1112050 VA: 0x1112050
	public UniTask<bool> ShowWithOKCancelButtonsAsync(string title, string message, string okButtonLabel = "OK", Sprite icon) { }

	// RVA: 0x1111980 Offset: 0x1111980 VA: 0x1111980
	private void Show(string title, string message, GenericDialog.ButtonConfiguration[] buttons) { }

	// RVA: 0x1111B68 Offset: 0x1111B68 VA: 0x1111B68
	public UniTask<int> ShowAsync(string title, string message, Sprite icon, GenericDialog.ButtonConfiguration[] buttons) { }

	// RVA: 0x11121AC Offset: 0x11121AC VA: 0x11121AC
	private void EnsureAtLeastOneDialogButton(GenericDialog.ButtonConfiguration[] buttons) { }

	// RVA: 0x1111378 Offset: 0x1111378 VA: 0x1111378
	private void Show(GenericDialog.DialogData dialog) { }

	// RVA: 0x1112234 Offset: 0x1112234 VA: 0x1112234
	private void ShowInternal(GenericDialog.DialogData dialog) { }

	// RVA: 0x1111038 Offset: 0x1111038 VA: 0x1111038
	private void Hide() { }

	// RVA: 0x11126B4 Offset: 0x11126B4 VA: 0x11126B4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1112768 Offset: 0x1112768 VA: 0x1112768
	private void <Awake>b__11_0() { }

	[CompilerGenerated]
	// RVA: 0x1112770 Offset: 0x1112770 VA: 0x1112770
	private void <Awake>b__11_1() { }

	[CompilerGenerated]
	// RVA: 0x1112778 Offset: 0x1112778 VA: 0x1112778
	private void <ShowWithinScopeWithNoButtons>b__13_0(GenericDialog.DialogData dialog) { }
}

// Namespace: Rotatelab.UI