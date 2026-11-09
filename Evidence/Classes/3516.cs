public class StarChallengePopup : PopupController // TypeDefIndex: 3516
{
	// Fields
	[SerializeField]
	private RectTransform popup; // 0x1C
	[SerializeField]
	private StarChallenge starChallengePrefab; // 0x20
	[SerializeField]
	private RectTransform contentArea; // 0x24
	[SerializeField]
	private RectTransform scrollMask; // 0x28
	[SerializeField]
	private VerticalLayoutGroup verticalLayoutGroup; // 0x2C
	[SerializeField]
	private CanvasGroup infoCanvasGroup; // 0x30
	private List<StarChallenge> _createdChallenges; // 0x34
	private StarChallengeSO _starChallengeSo; // 0x38
	private float _dynamicHeight; // 0x3C

	// Properties
	public static int CurrentStarChallengeIndex { get; set; }
	public static bool IsJewelForcedShowed { get; set; }

	// Methods

	// RVA: 0x10C5E90 Offset: 0x10C5E90 VA: 0x10C5E90
	public static int get_CurrentStarChallengeIndex() { }

	// RVA: 0x10C92F0 Offset: 0x10C92F0 VA: 0x10C92F0
	public static void set_CurrentStarChallengeIndex(int value) { }

	// RVA: 0x10CADFC Offset: 0x10CADFC VA: 0x10CADFC
	public static bool get_IsJewelForcedShowed() { }

	// RVA: 0x10CAE50 Offset: 0x10CAE50 VA: 0x10CAE50
	public static void set_IsJewelForcedShowed(bool value) { }

	// RVA: 0x10C84A8 Offset: 0x10C84A8 VA: 0x10C84A8
	public void Init(StarChallengeSO starChallengeSo, RectTransform targetRect) { }

	// RVA: 0x10CB34C Offset: 0x10CB34C VA: 0x10CB34C Slot: 7
	protected override void OnPopupShown() { }

	// RVA: 0x10CB744 Offset: 0x10CB744 VA: 0x10CB744
	public void HidePopup() { }

	// RVA: 0x10CAEA8 Offset: 0x10CAEA8 VA: 0x10CAEA8
	private void GenerateChallenges(RectTransform targetRect) { }

	// RVA: 0x10CB610 Offset: 0x10CB610 VA: 0x10CB610
	private void SetCompleteStatus() { }

	// RVA: 0x10CB4A0 Offset: 0x10CB4A0 VA: 0x10CB4A0
	private void FocusOnCurrentChallenge() { }

	// RVA: 0x10CB904 Offset: 0x10CB904 VA: 0x10CB904
	private void ShowInfoPopup() { }

	// RVA: 0x10CB978 Offset: 0x10CB978 VA: 0x10CB978
	public void HideInfoPopup() { }

	// RVA: 0x10CB9EC Offset: 0x10CB9EC VA: 0x10CB9EC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10CB9F4 Offset: 0x10CB9F4 VA: 0x10CB9F4
	private void <Init>b__15_0() { }
}

// Namespace: Rotatelab.Shop