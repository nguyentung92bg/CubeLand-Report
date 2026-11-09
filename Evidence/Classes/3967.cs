public class BotClickHand : MonoBehaviour // TypeDefIndex: 3967
{
	// Fields
	[SerializeField]
	private Image image; // 0x10
	[SerializeField]
	private Sprite released; // 0x14
	[SerializeField]
	private Sprite pressed; // 0x18
	[Tooltip("Seconds for the finger to glide from its current spot to the next tap target.")]
	[Min(0)]
	[SerializeField]
	private float moveDuration; // 0x1C
	[Tooltip("How long the pressed frame is held at the tap so the press clearly reads on camera.")]
	[Min(0)]
	[SerializeField]
	private float pressHoldSeconds; // 0x20
	[Tooltip("Screen-pixel nudge on the tap target so the fingertip sits slightly off the blaster's pivot instead of on its very tip. +Y = up.")]
	[SerializeField]
	private Vector2 tapOffset; // 0x24
	[Tooltip("How much the glide curves toward the target instead of going dead-straight, as a fraction of the travel distance (0 = straight line, ~0.15 = a gentle human arc). The bow's direction and amount vary per glide; same-column re-taps barely travel so they stay straight.")]
	[Min(0)]
	[SerializeField]
	private float curveStrength; // 0x2C
	private const float SameSpotThreshold = 30;
	private WaitForSeconds _pressHold; // 0x30

	// Methods

	// RVA: 0xFF3CF8 Offset: 0xFF3CF8 VA: 0xFF3CF8
	protected void Awake() { }

	// RVA: 0xFF3B70 Offset: 0xFF3B70 VA: 0xFF3B70
	public IEnumerator MoveTo(Vector3 screenPosition) { }

	// RVA: 0xFF20D4 Offset: 0xFF20D4 VA: 0xFF20D4
	public void Show() { }

	// RVA: 0xFF2F98 Offset: 0xFF2F98 VA: 0xFF2F98
	public void Hide() { }

	// RVA: 0xFF3C00 Offset: 0xFF3C00 VA: 0xFF3C00
	public void Press() { }

	// RVA: 0xFF3C2C Offset: 0xFF3C2C VA: 0xFF3C2C
	public IEnumerator ReleaseAfterBeat() { }

	// RVA: 0xFF2174 Offset: 0xFF2174 VA: 0xFF2174
	public void Stop() { }

	// RVA: 0xFF3DC4 Offset: 0xFF3DC4 VA: 0xFF3DC4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]