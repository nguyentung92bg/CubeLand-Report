public class BlasterDockComboFeedback : MonoBehaviour // TypeDefIndex: 4018
{
	// Fields
	[SerializeField]
	[Tooltip("Sırasıyla Level 1, Level 2, Level 3 alev efekti root'ları (ComboFlameFX_Low/Mid/High).")]
	private GameObject[] levelRoots; // 0x10
	private ParticleSystem[][] levelParticles; // 0x14
	private float[] levelFadeOutSeconds; // 0x18
	private Tween[] hideTweens; // 0x1C
	private int currentLevel; // 0x20
	private float stopTime; // 0x24
	private int activeIndex; // 0x28
	private Tween holdTween; // 0x30

	// Methods

	// RVA: 0x100B6B4 Offset: 0x100B6B4 VA: 0x100B6B4
	protected void Awake() { }

	// RVA: 0x100B99C Offset: 0x100B99C VA: 0x100B99C
	protected void OnEnable() { }

	// RVA: 0x100BB40 Offset: 0x100BB40 VA: 0x100BB40
	protected void OnDisable() { }

	// RVA: 0x100BCE4 Offset: 0x100BCE4 VA: 0x100BCE4
	private void OnComboTriggeredHandler(int level) { }

	// RVA: 0x100C098 Offset: 0x100C098 VA: 0x100C098
	private void OnComboActiveChangedHandler(bool isActive) { }

	// RVA: 0x100BD78 Offset: 0x100BD78 VA: 0x100BD78
	private void TryActivate() { }

	// RVA: 0x100C0A8 Offset: 0x100C0A8 VA: 0x100C0A8
	private void Deactivate() { }

	// RVA: 0x100C130 Offset: 0x100C130 VA: 0x100C130
	private void HideLevelImmediately(int index) { }

	// RVA: 0x100C204 Offset: 0x100C204 VA: 0x100C204
	private void FadeOutLevel(int index) { }

	// RVA: 0x100C4E0 Offset: 0x100C4E0 VA: 0x100C4E0
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts