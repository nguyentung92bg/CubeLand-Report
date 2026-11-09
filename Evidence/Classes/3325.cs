public class CurrencyPanel : SingletonBehaviour<CurrencyPanel> // TypeDefIndex: 3325
{
	// Fields
	[SerializeField]
	private Button coinButton; // 0x10
	[SerializeField]
	private GameObject coinButtonAddIcon; // 0x14
	private Canvas coinButtonCanvas; // 0x18
	[SerializeField]
	private Button heartButton; // 0x1C
	[SerializeField]
	private GameObject heartButtonAddIcon; // 0x20
	[SerializeField]
	private TextMeshProUGUI heartCountText; // 0x24
	[SerializeField]
	private TextMeshProUGUI heartRemainingTimeText; // 0x28
	[SerializeField]
	private Image heartIcon; // 0x2C
	[SerializeField]
	private Sprite heartNormalSprite; // 0x30
	[SerializeField]
	private Sprite heartInfiniteSprite; // 0x34
	private int _defaultSiblingIndex; // 0x38

	// Methods

	// RVA: 0x1084328 Offset: 0x1084328 VA: 0x1084328 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10844D8 Offset: 0x10844D8 VA: 0x10844D8
	protected void Start() { }

	// RVA: 0x1085278 Offset: 0x1085278 VA: 0x1085278
	private void OnCoinButtonClicked() { }

	// RVA: 0x10852E8 Offset: 0x10852E8 VA: 0x10852E8
	private void OnCurrencyObjectNeedToVisibleHandler(ParticleTargetPos target, bool isVisible, bool isWarning) { }

	// RVA: 0x10856D4 Offset: 0x10856D4 VA: 0x10856D4
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x10856D8 Offset: 0x10856D8 VA: 0x10856D8
	private void RefreshButtonsVisibility(MainCanvasType mainCanvasType) { }

	// RVA: 0x10857D0 Offset: 0x10857D0 VA: 0x10857D0
	public void SetVisibilityOverPopup(bool isVisible) { }

	// RVA: 0x1084A70 Offset: 0x1084A70 VA: 0x1084A70
	private void RefreshHeartCount() { }

	// RVA: 0x1084D80 Offset: 0x1084D80 VA: 0x1084D80
	private void RefreshHeartRemainingTime() { }

	// RVA: 0x108589C Offset: 0x108589C VA: 0x108589C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10858F0 Offset: 0x10858F0 VA: 0x10858F0
	private void <Start>b__12_1(long _) { }

	[CompilerGenerated]
	// RVA: 0x10858F4 Offset: 0x10858F4 VA: 0x10858F4
	private void <Start>b__12_2(long _) { }

	[CompilerGenerated]
	// RVA: 0x10858F8 Offset: 0x10858F8 VA: 0x10858F8
	private void <Start>b__12_3(long _) { }

	[CompilerGenerated]
	// RVA: 0x10858FC Offset: 0x10858FC VA: 0x10858FC
	private void <Start>b__12_4(long _) { }

	[CompilerGenerated]
	// RVA: 0x1085978 Offset: 0x1085978 VA: 0x1085978
	private void <OnCurrencyObjectNeedToVisibleHandler>b__14_0(Sequence sequence) { }

	[CompilerGenerated]
	// RVA: 0x1085BE0 Offset: 0x1085BE0 VA: 0x1085BE0
	private void <OnCurrencyObjectNeedToVisibleHandler>b__14_4() { }

	[CompilerGenerated]
	// RVA: 0x1085C08 Offset: 0x1085C08 VA: 0x1085C08
	private void <OnCurrencyObjectNeedToVisibleHandler>b__14_1(Sequence sequence) { }

	[CompilerGenerated]
	// RVA: 0x1085C54 Offset: 0x1085C54 VA: 0x1085C54
	private void <OnCurrencyObjectNeedToVisibleHandler>b__14_2() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]