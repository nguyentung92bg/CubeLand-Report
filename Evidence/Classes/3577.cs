public class CloudRushManager : BaseOfferButton // TypeDefIndex: 3577
{
	// Fields
	[SerializeField]
	private PopupController cloudRushPopup; // 0x3C
	[SerializeField]
	private GameObject closeButtonGameobject; // 0x40
	[SerializeField]
	private GameObject timerPanel; // 0x44
	[SerializeField]
	private GameObject progressionRoot; // 0x48
	[SerializeField]
	private RectTransform warningTextTransform; // 0x4C
	[SerializeField]
	private RectTransform progressionPopup; // 0x50
	[SerializeField]
	private Image backgroundFillImage; // 0x54
	[SerializeField]
	private TMP_Text infoText; // 0x58
	[SerializeField]
	private TMP_Text failInfoText; // 0x5C
	[SerializeField]
	private TMP_Text currentLevelText; // 0x60
	[SerializeField]
	private TMP_Text currentPlayerCountText; // 0x64
	[SerializeField]
	private ParticleImage levelTextParticle; // 0x68
	[SerializeField]
	private ParticleImage playerCountTextParticle; // 0x6C
	[SerializeField]
	private List<CloudRushPlayerAvatarController> playerAvatars; // 0x70
	[SerializeField]
	private List<CloudRushPlayerAvatarController> dropPlayerAvatars; // 0x74
	[SerializeField]
	private List<CloudRushCloudController> clouds; // 0x78
	private bool _isRequestedFromPreGame; // 0x7C
	private FailPanelController.GameExitOptions _currentExitOption; // 0x80
	private Sequence _warningSequence; // 0x88
	private bool _isCheckingConnection; // 0x98
	private int _currentLevel; // 0x9C
	private int _currentPlayerCount; // 0xA0
	private int _targetLevel; // 0xA4
	private int _targetPlayerCount; // 0xA8
	private int _eliminatedPlayerCount; // 0xAC
	private int _droppingPlayerCount; // 0xB0
	private bool _isPlayerFailed; // 0xB4
	private bool _isPendingSessionContinue; // 0xB5
	private float _initialProgressionPopupPosY; // 0xB8
	private float _initialProgressionPopupHeight; // 0xBC
	private const float OtherAvatarsMoveInterval = 0.03;
	private const string InProgressInfoText = "Beat 7 levels to complete the challenge!";
	private const string ConnectionProbeUrl = "https://www.gstatic.com/generate_204";
	private const int ConnectionProbeTimeout = 3;

	// Properties
	private bool EliminateFromPlayerPool { get; }
	private int VisiblePlayerCountInPlayerPool { get; }

	// Methods

	// RVA: 0x10DFC74 Offset: 0x10DFC74 VA: 0x10DFC74
	private bool get_EliminateFromPlayerPool() { }

	// RVA: 0x10DFC94 Offset: 0x10DFC94 VA: 0x10DFC94
	private int get_VisiblePlayerCountInPlayerPool() { }

	// RVA: 0x10DFD38 Offset: 0x10DFD38 VA: 0x10DFD38 Slot: 9
	protected override void Awake() { }

	// RVA: 0x10DFD9C Offset: 0x10DFD9C VA: 0x10DFD9C Slot: 10
	protected override void OnEnable() { }

	// RVA: 0x10DFF48 Offset: 0x10DFF48 VA: 0x10DFF48 Slot: 11
	protected override void OnDisable() { }

	// RVA: 0x10DCBBC Offset: 0x10DCBBC VA: 0x10DCBBC
	public void Init() { }

	// RVA: 0x10DEC38 Offset: 0x10DEC38 VA: 0x10DEC38
	public void Refresh() { }

	// RVA: 0x10DC384 Offset: 0x10DC384 VA: 0x10DC384
	public void SetOfferButtonVisibility(bool isVisible) { }

	// RVA: 0x10E0148 Offset: 0x10E0148 VA: 0x10E0148
	private void InitializeCloudRushSystem() { }

	// RVA: 0x10E0308 Offset: 0x10E0308 VA: 0x10E0308
	private void ResetProgressionLayout() { }

	// RVA: 0x10E0A18 Offset: 0x10E0A18 VA: 0x10E0A18 Slot: 15
	public override void ShowPopup() { }

	// RVA: 0x10E0C28 Offset: 0x10E0C28 VA: 0x10E0C28
	private IEnumerator RequestOfferPopupWhenOnlineCoroutine() { }

	// RVA: 0x10E0CBC Offset: 0x10E0CBC VA: 0x10E0CBC
	private void ShowNoInternetWarning() { }

	// RVA: 0x10E04A8 Offset: 0x10E04A8 VA: 0x10E04A8
	private void UpdateOfferButtonBackgroundImage() { }

	// RVA: 0x10E1014 Offset: 0x10E1014 VA: 0x10E1014 Slot: 16
	public override void ClosePopup() { }

	// RVA: 0x10E0BB0 Offset: 0x10E0BB0 VA: 0x10E0BB0
	private IEnumerator UpdateProgressionCoroutine() { }

	// RVA: 0x10E0508 Offset: 0x10E0508 VA: 0x10E0508
	private void SetupClouds() { }

	// RVA: 0x10E06DC Offset: 0x10E06DC VA: 0x10E06DC
	private void SetupPlayerAvatars() { }

	// RVA: 0x10E1334 Offset: 0x10E1334 VA: 0x10E1334
	private void HidePlayerAvatars() { }

	// RVA: 0x10E141C Offset: 0x10E141C VA: 0x10E141C
	private void HideDroppingPlayerAvatars() { }

	// RVA: 0x10E0810 Offset: 0x10E0810 VA: 0x10E0810
	private void ShowPlayerAvatars() { }

	// RVA: 0x10E1574 Offset: 0x10E1574 VA: 0x10E1574
	private void CalculateDroppingPlayerCount() { }

	// RVA: 0x10E164C Offset: 0x10E164C VA: 0x10E164C
	private IEnumerator MoveNextCoroutine() { }

	// RVA: 0x10E16E0 Offset: 0x10E16E0 VA: 0x10E16E0
	private void OnCloudRushProgressionUpdatedHandler(bool isLevelWin, LevelDifficulty difficulty) { }

	// RVA: 0x10E1B34 Offset: 0x10E1B34 VA: 0x10E1B34
	private void OnCloudRushProgressionPopupRequestedHandler(bool isRequestedFromPreGame, FailPanelController.GameExitOptions exitOption) { }

	// RVA: 0x10E1BA0 Offset: 0x10E1BA0 VA: 0x10E1BA0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10E1BB0 Offset: 0x10E1BB0 VA: 0x10E1BB0
	private void <UpdateProgressionCoroutine>b__51_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x10E1D44 Offset: 0x10E1D44 VA: 0x10E1D44
	private void <UpdateProgressionCoroutine>b__51_1() { }

	[CompilerGenerated]
	// RVA: 0x10E1DD0 Offset: 0x10E1DD0 VA: 0x10E1DD0
	private void <UpdateProgressionCoroutine>b__51_2() { }

	[CompilerGenerated]
	// RVA: 0x10E1DF8 Offset: 0x10E1DF8 VA: 0x10E1DF8
	private void <UpdateProgressionCoroutine>b__51_3(float value) { }

	[CompilerGenerated]
	// RVA: 0x10E1F8C Offset: 0x10E1F8C VA: 0x10E1F8C
	private void <UpdateProgressionCoroutine>b__51_4() { }

	[CompilerGenerated]
	// RVA: 0x10E1FB0 Offset: 0x10E1FB0 VA: 0x10E1FB0
	internal static void <MoveNextCoroutine>g__TrackSequenceEnd|58_0(float duration, ref CloudRushManager.<>c__DisplayClass58_0 ) { }
}

// Namespace: Rotatelab.CloudRush