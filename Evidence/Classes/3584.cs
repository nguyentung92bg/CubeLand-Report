public class CloudRushRegistrationController : MonoBehaviour // TypeDefIndex: 3584
{
	// Fields
	[SerializeField]
	private CanvasGroup popupCanvasGroup; // 0x10
	[SerializeField]
	private TweenController tapToContinueTween; // 0x14
	[SerializeField]
	private TMP_Text playerCountText; // 0x18
	[SerializeField]
	private ParticleImage registrationCompletionParticle; // 0x1C
	[SerializeField]
	private float delayBeforeFindingPlayers; // 0x20
	[SerializeField]
	private float findPlayersDuration; // 0x24
	[Tooltip("1 = linear, higher = slower start and faster finish. Total duration always stays findPlayersDuration.")]
	[SerializeField]
	private float findPlayersAcceleration; // 0x28
	[SerializeField]
	private int maxPlayersPerStep; // 0x2C
	[SerializeField]
	private List<CloudRushPlayerAvatarController> playerAvatars; // 0x30
	private const int PlayerCountScaleCycleCount = 5;
	private const float PlayerCountScaleAmount = 0.1;
	private int _currentPlayerCount; // 0x34

	// Properties
	private int targetPlayerCount { get; }

	// Methods

	// RVA: 0x10E6170 Offset: 0x10E6170 VA: 0x10E6170
	private int get_targetPlayerCount() { }

	// RVA: 0x10E6178 Offset: 0x10E6178 VA: 0x10E6178
	private void OnEnable() { }

	// RVA: 0x10E625C Offset: 0x10E625C VA: 0x10E625C
	private void OnDisable() { }

	// RVA: 0x10E6340 Offset: 0x10E6340 VA: 0x10E6340
	private IEnumerator FindPlayersCoroutine() { }

	// RVA: 0x10E63D4 Offset: 0x10E63D4 VA: 0x10E63D4
	private float EaseProgress(float completionProgress) { }

	// RVA: 0x10E6410 Offset: 0x10E6410 VA: 0x10E6410
	private IEnumerator WaitForProgressCoroutine(float startTime, float completionProgress) { }

	// RVA: 0x10E64BC Offset: 0x10E64BC VA: 0x10E64BC
	private void SetPlayerCountText(int currentPlayerCount) { }

	// RVA: 0x10E657C Offset: 0x10E657C VA: 0x10E657C
	private IEnumerator ShowPlayerAvatarsCoroutine(float startTime) { }

	// RVA: 0x10E6620 Offset: 0x10E6620 VA: 0x10E6620
	private void SetupPlayerAvatars() { }

	// RVA: 0x10E6718 Offset: 0x10E6718 VA: 0x10E6718
	public void ClosePopup() { }

	// RVA: 0x10E687C Offset: 0x10E687C VA: 0x10E687C
	private void OnCloudRushRegistrationPopupRequestedHandler() { }

	// RVA: 0x10E6A38 Offset: 0x10E6A38 VA: 0x10E6A38
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10E6A64 Offset: 0x10E6A64 VA: 0x10E6A64
	private void <FindPlayersCoroutine>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x10E6A8C Offset: 0x10E6A8C VA: 0x10E6A8C
	private void <ClosePopup>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x10E6AD0 Offset: 0x10E6AD0 VA: 0x10E6AD0
	private void <OnCloudRushRegistrationPopupRequestedHandler>b__23_0() { }
}

// Namespace: Rotatelab.CloudRush