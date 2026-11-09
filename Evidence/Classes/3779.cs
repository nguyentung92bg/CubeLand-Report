public class SettingPanelController : MonoBehaviour // TypeDefIndex: 3779
{
	// Fields
	[SerializeField]
	private PopupController popupController; // 0x10
	[SerializeField]
	private RectTransform popup; // 0x14
	[SerializeField]
	private Button settingsButton; // 0x18
	[SerializeField]
	private Button homeButton; // 0x1C
	[SerializeField]
	private Button contactUsButton; // 0x20
	[SerializeField]
	private Button hideButton; // 0x24
	[SerializeField]
	private TMP_Text homeButtonText; // 0x28
	[SerializeField]
	private Button deleteAccountButton; // 0x2C
	[SerializeField]
	private DeleteAccountConfirmationPopup deleteAccountConfirmationPopup; // 0x30
	[SerializeField]
	private TextMeshProUGUI gameVersionText; // 0x34
	[SerializeField]
	private TextMeshProUGUI nakamaUserIDText; // 0x38
	[SerializeField]
	private VersionDataSo versionData; // 0x3C
	[SerializeField]
	private GameObject inGameButtons; // 0x40
	[SerializeField]
	private Button continueButton; // 0x44
	[SerializeField]
	private Button personalizeButton; // 0x48
	[SerializeField]
	private Button backButton; // 0x4C
	[SerializeField]
	private TMP_Text headerText; // 0x50
	[SerializeField]
	private RectTransform personalizeArea; // 0x54
	[SerializeField]
	private GameObject[] settingsPageObjects; // 0x58
	[SerializeField]
	private GameObject[] personalizePageObjects; // 0x5C
	private const string SettingsTitle = "Settings";
	private const string PersonalizeTitle = "Personalize";
	private bool[] settingsPageActiveStates; // 0x60
	private bool isPersonalizePageShown; // 0x64

	// Methods

	// RVA: 0x11298FC Offset: 0x11298FC VA: 0x11298FC
	protected void Awake() { }

	// RVA: 0x112A1CC Offset: 0x112A1CC VA: 0x112A1CC
	private void Show() { }

	// RVA: 0x112A8AC Offset: 0x112A8AC VA: 0x112A8AC
	private void Hide() { }

	// RVA: 0x112ABE4 Offset: 0x112ABE4 VA: 0x112ABE4
	private void ShowPersonalizePage() { }

	// RVA: 0x112A740 Offset: 0x112A740 VA: 0x112A740
	private void ShowSettingsPage() { }

	// RVA: 0x112AF50 Offset: 0x112AF50 VA: 0x112AF50
	private void OnHomeButtonClicked() { }

	[AsyncStateMachine(typeof(SettingPanelController.<OnDeleteAccountButtonClickedAsync>d__30))]
	// RVA: 0x112B2FC Offset: 0x112B2FC VA: 0x112B2FC
	private UniTaskVoid OnDeleteAccountButtonClickedAsync() { }

	// RVA: 0x112A038 Offset: 0x112A038 VA: 0x112A038
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	// RVA: 0x112B39C Offset: 0x112B39C VA: 0x112B39C
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0x112B3C4 Offset: 0x112B3C4 VA: 0x112B3C4
	private void OnLevelSucceededHandler() { }

	// RVA: 0x112B3EC Offset: 0x112B3EC VA: 0x112B3EC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x112B3F4 Offset: 0x112B3F4 VA: 0x112B3F4
	private void <Awake>b__24_0() { }
}

// Namespace: Rotatelab.UI