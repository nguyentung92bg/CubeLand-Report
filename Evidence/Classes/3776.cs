public class DeleteAccountConfirmationPopup : PopupController // TypeDefIndex: 3776
{
	// Fields
	private const string ConfirmationPhrase = "Delete my account";
	[SerializeField]
	private TMP_InputField inputField; // 0x1C
	[SerializeField]
	private Button confirmButton; // 0x20
	[SerializeField]
	private Button closeButton; // 0x24
	private UniTaskCompletionSource<bool> taskCompletionSource; // 0x28

	// Methods

	// RVA: 0x112943C Offset: 0x112943C VA: 0x112943C Slot: 6
	protected override void Start() { }

	// RVA: 0x1129750 Offset: 0x1129750 VA: 0x1129750
	public UniTask<bool> ShowAsync() { }

	// RVA: 0x1129870 Offset: 0x1129870 VA: 0x1129870
	private void Hide(bool success) { }

	// RVA: 0x1129624 Offset: 0x1129624 VA: 0x1129624
	private void OnInputFieldValueChanged(string value) { }

	// RVA: 0x11298E4 Offset: 0x11298E4 VA: 0x11298E4
	private void OnConfirmButtonClicked() { }

	// RVA: 0x11298EC Offset: 0x11298EC VA: 0x11298EC
	private void OnCloseButtonClicked() { }

	// RVA: 0x11298F4 Offset: 0x11298F4 VA: 0x11298F4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]