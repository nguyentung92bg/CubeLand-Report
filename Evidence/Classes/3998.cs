public class CameraManager : SingletonBehaviour<CameraManager> // TypeDefIndex: 3998
{
	// Fields
	[SerializeField]
	private float shakeStrength; // 0x10
	[SerializeField]
	private float shakeFrequency; // 0x14
	private readonly List<object> manualRotationPreventRequests; // 0x18
	[CompilerGenerated]
	private bool <IsRotatingCameraManually>k__BackingField; // 0x1C
	private Transform cameraTransform; // 0x20
	private Vector3 cameraDefaultLocalPosition; // 0x24
	private Tween shakeTween; // 0x30

	// Properties
	public bool IsRotatingCameraManually { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFFB544 Offset: 0xFFB544 VA: 0xFFB544
	public bool get_IsRotatingCameraManually() { }

	[CompilerGenerated]
	// RVA: 0xFFB54C Offset: 0xFFB54C VA: 0xFFB54C
	private void set_IsRotatingCameraManually(bool value) { }

	// RVA: 0xFFB554 Offset: 0xFFB554 VA: 0xFFB554 Slot: 4
	protected override void Awake() { }

	// RVA: 0xFFB770 Offset: 0xFFB770 VA: 0xFFB770
	public void Initialize() { }

	// RVA: 0xFFB7E8 Offset: 0xFFB7E8 VA: 0xFFB7E8
	private void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0xFFB93C Offset: 0xFFB93C VA: 0xFFB93C
	private void OnEndDrag(PointerEventData eventData) { }

	// RVA: 0xFFB880 Offset: 0xFFB880 VA: 0xFFB880
	private void SetCameraRotationModeEnabled(bool isEnabled) { }

	// RVA: 0xFFB944 Offset: 0xFFB944 VA: 0xFFB944
	private void OnPointerDrag(PointerEventData eventData) { }

	// RVA: 0xFFB9DC Offset: 0xFFB9DC VA: 0xFFB9DC
	public void ShakeCamera(float strength = 0.08) { }

	// RVA: 0xFFBBD4 Offset: 0xFFBBD4 VA: 0xFFBBD4
	public void TrySetManualRotationAllowed(bool isAllowed, object source) { }

	// RVA: 0xFFBCE8 Offset: 0xFFBCE8 VA: 0xFFBCE8
	public IDisposable PreventManualRotationWithinScope() { }

	// RVA: 0xFFBDB4 Offset: 0xFFBDB4 VA: 0xFFBDB4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFFBE84 Offset: 0xFFBE84 VA: 0xFFBE84
	private void <ShakeCamera>b__16_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]