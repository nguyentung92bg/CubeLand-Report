public class CloudRushPlayerAvatarController : MonoBehaviour // TypeDefIndex: 3580
{
	// Fields
	[SerializeField]
	private RectTransform root; // 0x10
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x14
	[SerializeField]
	private Image backgroundImage; // 0x18
	[SerializeField]
	private Image avatarImage; // 0x1C
	[SerializeField]
	private AnimationCurve moveCurve; // 0x20
	[SerializeField]
	private float jumpHeight; // 0x24
	[SerializeField]
	private float jumpDuration; // 0x28
	[SerializeField]
	private float jumpSquash; // 0x2C
	[SerializeField]
	private Vector2 jumpBackTiltAngleRange; // 0x30
	[SerializeField]
	private Vector2 jumpForwardTiltAngleRange; // 0x38
	[SerializeField]
	private List<Sprite> backgroundSprites; // 0x40
	private bool _isLocalPlayer; // 0x44
	private float _initialRootPositionY; // 0x48

	// Properties
	private Vector3 BaseScale { get; }
	public float JumpDuration { get; }

	// Methods

	// RVA: 0x10E5758 Offset: 0x10E5758 VA: 0x10E5758
	private Vector3 get_BaseScale() { }

	// RVA: 0x10E57E8 Offset: 0x10E57E8 VA: 0x10E57E8
	public float get_JumpDuration() { }

	// RVA: 0x10E57F0 Offset: 0x10E57F0 VA: 0x10E57F0
	private void OnEnable() { }

	// RVA: 0x10E58D4 Offset: 0x10E58D4 VA: 0x10E58D4
	private void OnDisable() { }

	// RVA: 0x10E1278 Offset: 0x10E1278 VA: 0x10E1278
	public void Init(bool isLocalPlayer) { }

	// RVA: 0x10E59B8 Offset: 0x10E59B8 VA: 0x10E59B8
	private void UpdateAvatar() { }

	// RVA: 0x10E2820 Offset: 0x10E2820 VA: 0x10E2820
	public float MoveInProgression(Vector2 newAnchoredPosition) { }

	// RVA: 0x10E3160 Offset: 0x10E3160 VA: 0x10E3160
	public float DropInProgression(Vector2 dropAnchoredPosition) { }

	// RVA: 0x10E5AEC Offset: 0x10E5AEC VA: 0x10E5AEC
	private float GetOffScreenAnchoredY() { }

	// RVA: 0x10E13F4 Offset: 0x10E13F4 VA: 0x10E13F4
	public void HideInProgression() { }

	// RVA: 0x10E14D4 Offset: 0x10E14D4 VA: 0x10E14D4
	public void ShowInProgression(Vector2 anchoredPosition) { }

	// RVA: 0x10E5D4C Offset: 0x10E5D4C VA: 0x10E5D4C
	public void HideInRegistration() { }

	// RVA: 0x10E5E70 Offset: 0x10E5E70 VA: 0x10E5E70
	public void ShowInRegistration() { }

	// RVA: 0x10E5FF4 Offset: 0x10E5FF4 VA: 0x10E5FF4
	private void OnProfileChangedHandler() { }

	// RVA: 0x10E5FF8 Offset: 0x10E5FF8 VA: 0x10E5FF8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10E6040 Offset: 0x10E6040 VA: 0x10E6040
	private void <ShowInRegistration>b__27_0() { }
}

// Namespace: 
[CompilerGenerated]