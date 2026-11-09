public class TutorialManager : SingletonBehaviour<TutorialManager> // TypeDefIndex: 3306
{
	// Fields
	public SpecialBoosterInfoPopupController specialBoosterInfoPopup; // 0x10
	public BoosterInfoPopupController boosterInfoPopup; // 0x14
	public MechanicInfoPopupController mechanicInfoPopup; // 0x18
	public PreBoosterSo preBoosterSo; // 0x1C
	private MechanicSo.MechanicData currentMechanicData; // 0x20
	public GameObject clickHand; // 0x24
	public CanvasGroup manualRotation; // 0x28
	private string _level1Key; // 0x2C
	private string manualRotationKey; // 0x30
	private string specialBoosterKey; // 0x34
	[CompilerGenerated]
	private bool <IsManualRotationTutorialActive>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <IsSpecialBoosterTutorialActive>k__BackingField; // 0x39
	[CompilerGenerated]
	private BoosterBaseData <CurrentBoosterTutorialData>k__BackingField; // 0x3C

	// Properties
	public bool IsManualRotationTutorialActive { get; set; }
	public bool IsSpecialBoosterTutorialActive { get; set; }
	public static int CurrentTutorialStepIndex { get; set; }
	public BoosterBaseData CurrentBoosterTutorialData { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x107EF64 Offset: 0x107EF64 VA: 0x107EF64
	public bool get_IsManualRotationTutorialActive() { }

	[CompilerGenerated]
	// RVA: 0x107EF6C Offset: 0x107EF6C VA: 0x107EF6C
	private void set_IsManualRotationTutorialActive(bool value) { }

	[CompilerGenerated]
	// RVA: 0x107EF74 Offset: 0x107EF74 VA: 0x107EF74
	public bool get_IsSpecialBoosterTutorialActive() { }

	[CompilerGenerated]
	// RVA: 0x107EF7C Offset: 0x107EF7C VA: 0x107EF7C
	public void set_IsSpecialBoosterTutorialActive(bool value) { }

	// RVA: 0x107EF84 Offset: 0x107EF84 VA: 0x107EF84
	public static int get_CurrentTutorialStepIndex() { }

	// RVA: 0x107EFD8 Offset: 0x107EFD8 VA: 0x107EFD8
	public static void set_CurrentTutorialStepIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x107F030 Offset: 0x107F030 VA: 0x107F030
	public BoosterBaseData get_CurrentBoosterTutorialData() { }

	[CompilerGenerated]
	// RVA: 0x107F038 Offset: 0x107F038 VA: 0x107F038
	private void set_CurrentBoosterTutorialData(BoosterBaseData value) { }

	// RVA: 0x107F040 Offset: 0x107F040 VA: 0x107F040
	public bool CheckShowed(string key) { }

	// RVA: 0x107F0F4 Offset: 0x107F0F4 VA: 0x107F0F4
	private void SetShowed(string key) { }

	// RVA: 0x107F180 Offset: 0x107F180 VA: 0x107F180
	public void SuppressTutorials() { }

	// RVA: 0x107F448 Offset: 0x107F448 VA: 0x107F448
	private void OnEnable() { }

	// RVA: 0x107F63C Offset: 0x107F63C VA: 0x107F63C
	private void OnDisable() { }

	// RVA: 0x107F830 Offset: 0x107F830 VA: 0x107F830
	private void OnObjectiveAnimationFinishedHandler() { }

	// RVA: 0x107F914 Offset: 0x107F914 VA: 0x107F914
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x107FA4C Offset: 0x107FA4C VA: 0x107FA4C
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x107FD34 Offset: 0x107FD34 VA: 0x107FD34
	private void CheckBlasterPlacementTutorial() { }

	// RVA: 0x107FDD4 Offset: 0x107FDD4 VA: 0x107FDD4
	private IEnumerator ShowBlasterPlacementTutorialCoroutine() { }

	// RVA: 0x107FE68 Offset: 0x107FE68 VA: 0x107FE68
	private void CheckManualRotationTutorial() { }

	// RVA: 0x107FF08 Offset: 0x107FF08 VA: 0x107FF08
	private IEnumerator ShowManualRotationTutorialCoroutine() { }

	// RVA: 0x107F9A0 Offset: 0x107F9A0 VA: 0x107F9A0
	private void CheckLevelPopupTutorial() { }

	// RVA: 0x107FF9C Offset: 0x107FF9C VA: 0x107FF9C
	private void CheckBoosterTutorial() { }

	// RVA: 0x107FC14 Offset: 0x107FC14 VA: 0x107FC14
	private void CheckSpecialBoosterTutorial() { }

	// RVA: 0x1080CC8 Offset: 0x1080CC8 VA: 0x1080CC8
	public void ShowSpecialBoosterInfoPopup() { }

	// RVA: 0x1080DC0 Offset: 0x1080DC0 VA: 0x1080DC0
	public void CheckPreBoosterTutorial(BoosterBaseData data) { }

	// RVA: 0x108050C Offset: 0x108050C VA: 0x108050C
	private void CheckMechanicTutorial() { }

	// RVA: 0x1081084 Offset: 0x1081084 VA: 0x1081084
	public void HideBoosterInfoPopup() { }

	// RVA: 0x1081264 Offset: 0x1081264 VA: 0x1081264
	public void HideMechanicInfoPopup() { }

	// RVA: 0x10810D4 Offset: 0x10810D4 VA: 0x10810D4
	private void UnlockBoosterButton() { }

	// RVA: 0x1080B14 Offset: 0x1080B14 VA: 0x1080B14
	private void AutoPlaceBlastersOfColor(ColorType color, int maxCount) { }

	// RVA: 0x1081478 Offset: 0x1081478 VA: 0x1081478
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1081550 Offset: 0x1081550 VA: 0x1081550
	private void <OnObjectiveAnimationFinishedHandler>b__30_0() { }

	[CompilerGenerated]
	// RVA: 0x1081570 Offset: 0x1081570 VA: 0x1081570
	private void <ShowManualRotationTutorialCoroutine>b__36_0() { }
}

// Namespace: 
[CompilerGenerated]