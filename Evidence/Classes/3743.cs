public class ProfileManager : SingletonBehaviour<ProfileManager> // TypeDefIndex: 3743
{
	// Fields
	[CompilerGenerated]
	private Sprite <Avatar>k__BackingField; // 0x10
	[SerializeField]
	private Image profileAvatar; // 0x14
	[SerializeField]
	private Image popupProfileAvatar; // 0x18
	[SerializeField]
	private ProfileAvatarButton avatarButtonPrefab; // 0x1C
	[SerializeField]
	private RectTransform avatarButtonsParent; // 0x20
	private ProfileAvatarButton[] avatarButtons; // 0x24
	public List<Sprite> avatars; // 0x28
	private Sprite selectedAvatar; // 0x2C
	[SerializeField]
	private TMP_InputField usernameInputField; // 0x30
	[SerializeField]
	private Button saveButton; // 0x34
	[SerializeField]
	private Button showPopupButton; // 0x38
	[SerializeField]
	private Button hidePopupButton; // 0x3C
	public List<Sprite> frames; // 0x40
	public CanvasGroup canvasGroup; // 0x44
	public CanvasGroup tutorialCanvasGroup; // 0x48

	// Properties
	public string Username { get; }
	public Sprite Avatar { get; set; }

	// Methods

	// RVA: 0x1113454 Offset: 0x1113454 VA: 0x1113454
	public string get_Username() { }

	[CompilerGenerated]
	// RVA: 0x1113600 Offset: 0x1113600 VA: 0x1113600
	public Sprite get_Avatar() { }

	[CompilerGenerated]
	// RVA: 0x1113608 Offset: 0x1113608 VA: 0x1113608
	private void set_Avatar(Sprite value) { }

	// RVA: 0x1113610 Offset: 0x1113610 VA: 0x1113610 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1113F18 Offset: 0x1113F18 VA: 0x1113F18
	private void ShowProfilePopup() { }

	// RVA: 0x1114468 Offset: 0x1114468 VA: 0x1114468
	private void HideProfilePopup() { }

	[AsyncStateMachine(typeof(ProfileManager.<SaveChangesAsync>d__23))]
	// RVA: 0x1114754 Offset: 0x1114754 VA: 0x1114754
	private UniTaskVoid SaveChangesAsync() { }

	// RVA: 0x1114308 Offset: 0x1114308 VA: 0x1114308
	private void Refresh() { }

	// RVA: 0x11147F8 Offset: 0x11147F8 VA: 0x11147F8
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x111497C Offset: 0x111497C VA: 0x111497C
	private void ShowProfileTutorial() { }

	// RVA: 0x1113B40 Offset: 0x1113B40 VA: 0x1113B40
	private void LoadAvatarFromNakama() { }

	// RVA: 0x1114C18 Offset: 0x1114C18 VA: 0x1114C18
	private void OnAvatarSelected(Sprite avatar) { }

	// RVA: 0x1114D54 Offset: 0x1114D54 VA: 0x1114D54
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1114DA8 Offset: 0x1114DA8 VA: 0x1114DA8
	private void <Awake>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x1114DD4 Offset: 0x1114DD4 VA: 0x1114DD4
	private void <OnMainCanvasChangeEndedHandler>b__25_0() { }
}

// Namespace: Rotatelab.UI
[RequireComponent(typeof(TMP_Text))]