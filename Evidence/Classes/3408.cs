public class RainbowShooterController : SingletonBehaviour<RainbowShooterController> // TypeDefIndex: 3408
{
	// Fields
	[SerializeField]
	private RainbowShooterManager rainbowShooterManager; // 0x10
	private bool _isCheckingAvailable; // 0x14
	private bool _isRainbowShooterOfferAvailable; // 0x15
	private bool _isMaxLevelShowRequested; // 0x16

	// Properties
	public int MaxProgression { get; }
	public bool IsRainbowShooterActive { get; }
	public static bool IsForcedRainbowShooterShown { get; set; }
	public int RainbowShooterCurrentProgress { get; set; }

	// Methods

	// RVA: 0x10AB8A0 Offset: 0x10AB8A0 VA: 0x10AB8A0
	public int get_MaxProgression() { }

	// RVA: 0x10AB8A8 Offset: 0x10AB8A8 VA: 0x10AB8A8
	public bool get_IsRainbowShooterActive() { }

	// RVA: 0x10AB914 Offset: 0x10AB914 VA: 0x10AB914
	public static bool get_IsForcedRainbowShooterShown() { }

	// RVA: 0x10AB968 Offset: 0x10AB968 VA: 0x10AB968
	public static void set_IsForcedRainbowShooterShown(bool value) { }

	// RVA: 0x10AB8C0 Offset: 0x10AB8C0 VA: 0x10AB8C0
	public int get_RainbowShooterCurrentProgress() { }

	// RVA: 0x10AB9C0 Offset: 0x10AB9C0 VA: 0x10AB9C0
	public void set_RainbowShooterCurrentProgress(int value) { }

	// RVA: 0x10ABA64 Offset: 0x10ABA64 VA: 0x10ABA64
	private void OnEnable() { }

	// RVA: 0x10ABBEC Offset: 0x10ABBEC VA: 0x10ABBEC
	private void OnDisable() { }

	// RVA: 0x10ABD74 Offset: 0x10ABD74 VA: 0x10ABD74
	private void Start() { }

	// RVA: 0x10ABD78 Offset: 0x10ABD78 VA: 0x10ABD78
	private void CheckAvailable() { }

	// RVA: 0x10ABF50 Offset: 0x10ABF50 VA: 0x10ABF50
	private void ResetProgress() { }

	// RVA: 0x10ABFE8 Offset: 0x10ABFE8 VA: 0x10ABFE8
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10AC0E0 Offset: 0x10AC0E0 VA: 0x10AC0E0
	private void Log(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10AC148 Offset: 0x10AC148 VA: 0x10AC148
	private void LogWarning(string log) { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0x10AC1B0 Offset: 0x10AC1B0 VA: 0x10AC1B0
	private void LogError(string log) { }

	// RVA: 0x10AC218 Offset: 0x10AC218 VA: 0x10AC218
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10AC274 Offset: 0x10AC274 VA: 0x10AC274
	private void <CheckAvailable>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x10AC2A0 Offset: 0x10AC2A0 VA: 0x10AC2A0
	private void <OnMainCanvasChangeEndedHandler>b__19_0() { }
}

// Namespace: Rotatelab.RainbowShooter