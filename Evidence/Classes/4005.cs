public class ComboBarUI : MonoBehaviour // TypeDefIndex: 4005
{
	// Fields
	[SerializeField]
	private Image fillImage; // 0x10
	[SerializeField]
	private TMP_Text comboText; // 0x14
	[SerializeField]
	private RectTransform comboTextRect; // 0x18
	[SerializeField]
	private TMP_Text progressText; // 0x1C
	[SerializeField]
	private ParticleSystem sparkleParticle; // 0x20
	[SerializeField]
	private float popScale; // 0x24
	[SerializeField]
	private float popDuration; // 0x28
	private Sequence _popSequence; // 0x30
	private CanvasGroup _canvasGroup; // 0x40
	private int _lastShownCurrent; // 0x44
	private int _lastShownMax; // 0x48

	// Methods

	// RVA: 0x1000BCC Offset: 0x1000BCC VA: 0x1000BCC
	protected void Awake() { }

	// RVA: 0x1000CFC Offset: 0x1000CFC VA: 0x1000CFC
	protected void OnEnable() { }

	// RVA: 0x1000FB0 Offset: 0x1000FB0 VA: 0x1000FB0
	protected void OnDisable() { }

	// RVA: 0x1001264 Offset: 0x1001264 VA: 0x1001264
	private void OnComboActiveChangedHandler(bool isActive) { }

	// RVA: 0x10012A8 Offset: 0x10012A8 VA: 0x10012A8
	private void OnComboFillUpdatedHandler(float fill01, int currentMax) { }

	// RVA: 0x10014C4 Offset: 0x10014C4 VA: 0x10014C4
	private void OnComboTriggeredHandler(int level) { }

	// RVA: 0x1001874 Offset: 0x1001874 VA: 0x1001874
	private void OnComboLevelResetHandler(int newStartingLevel) { }

	// RVA: 0x1001920 Offset: 0x1001920 VA: 0x1001920
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts
[SingletonConfiguration("ComboConfig")]