public class SpecialBooster : MonoBehaviour // TypeDefIndex: 3837
{
	// Fields
	[SerializeField]
	private Image iconFillImageBackground; // 0x10
	[SerializeField]
	private Image iconFillImage; // 0x14
	[SerializeField]
	private Image progressImage; // 0x18
	[SerializeField]
	private int requiredBullets; // 0x1C
	[SerializeField]
	private AnimationCurve scaleEasing; // 0x20
	private bool _isButtonShowedForTutorial; // 0x24

	// Properties
	public Vector2 IconScreenPosition { get; }

	// Methods

	// RVA: 0x113D474 Offset: 0x113D474 VA: 0x113D474
	public Vector2 get_IconScreenPosition() { }

	// RVA: 0x113D584 Offset: 0x113D584 VA: 0x113D584
	private void OnEnable() { }

	// RVA: 0x113D668 Offset: 0x113D668 VA: 0x113D668
	private void OnDisable() { }

	// RVA: 0x113D74C Offset: 0x113D74C VA: 0x113D74C
	private void Update() { }

	// RVA: 0x113D010 Offset: 0x113D010 VA: 0x113D010
	public void Initialize() { }

	// RVA: 0x113D8EC Offset: 0x113D8EC VA: 0x113D8EC
	public void TutorialActivateBooster() { }

	// RVA: 0x113DBB0 Offset: 0x113DBB0 VA: 0x113DBB0
	private void ActivateBooster() { }

	// RVA: 0x113D8A0 Offset: 0x113D8A0 VA: 0x113D8A0
	private void ResetProgress() { }

	// RVA: 0x113D750 Offset: 0x113D750 VA: 0x113D750
	private void UpdateProgress() { }

	// RVA: 0x113DC64 Offset: 0x113DC64 VA: 0x113DC64
	private void OnRainbowBlasterSpawnedHandler() { }

	// RVA: 0x113DEC4 Offset: 0x113DEC4 VA: 0x113DEC4
	public void .ctor() { }
}

// Namespace: Rotatelab.Boosters.UI