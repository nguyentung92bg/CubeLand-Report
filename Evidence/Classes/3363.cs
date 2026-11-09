public class WinStreakPopup : PopupController // TypeDefIndex: 3363
{
	// Fields
	[SerializeField]
	private ScrollRect stagesScrollRect; // 0x1C
	[SerializeField]
	private VerticalLayoutGroup stagesParent; // 0x20
	[SerializeField]
	private Stage stagePrefab; // 0x24
	private Stage[] stages; // 0x28
	private float stageHeight; // 0x2C
	[SerializeField]
	private RectTransform rope; // 0x30
	[SerializeField]
	private float ropeHeightOffset; // 0x34
	[SerializeField]
	private ScrollRect backgroundScrollRect; // 0x38
	[SerializeField]
	private RectTransform progressHandle; // 0x3C
	[SerializeField]
	private TextMeshProUGUI currentLevelText; // 0x40
	[SerializeField]
	private Button infoButton; // 0x44
	[SerializeField]
	private WinStreakInfoController info; // 0x48
	[SerializeField]
	private Button closeButton; // 0x4C

	// Properties
	private WinStreakSo Data { get; }

	// Methods

	// RVA: 0x1093A68 Offset: 0x1093A68 VA: 0x1093A68
	private WinStreakSo get_Data() { }

	// RVA: 0x1093AC8 Offset: 0x1093AC8 VA: 0x1093AC8 Slot: 5
	protected override void Awake() { }

	// RVA: 0x1093D0C Offset: 0x1093D0C VA: 0x1093D0C Slot: 7
	protected override void OnPopupShown() { }

	// RVA: 0x10941A0 Offset: 0x10941A0 VA: 0x10941A0 Slot: 8
	protected override void OnPopupHidden() { }

	// RVA: 0x1093E0C Offset: 0x1093E0C VA: 0x1093E0C
	private void GenerateStages() { }

	[AsyncStateMachine(typeof(WinStreakPopup.<AnimateProgressAsync>d__19))]
	// RVA: 0x10940F4 Offset: 0x10940F4 VA: 0x10940F4
	private UniTaskVoid AnimateProgressAsync() { }

	// RVA: 0x1094244 Offset: 0x1094244 VA: 0x1094244
	private Tween AnimateProgress(int fromLevel, int toLevel) { }

	// RVA: 0x109463C Offset: 0x109463C VA: 0x109463C
	private void SetProgress(float height) { }

	// RVA: 0x1094490 Offset: 0x1094490 VA: 0x1094490
	private float GetLevelHeight(int level) { }

	// RVA: 0x1094708 Offset: 0x1094708 VA: 0x1094708
	private float GetRopeLength(float levelHeight) { }

	// RVA: 0x109474C Offset: 0x109474C VA: 0x109474C
	private int GetLevelAtHeight(float height, out Stage stage, out float stageProgress) { }

	// RVA: 0x10948E4 Offset: 0x10948E4 VA: 0x10948E4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10948EC Offset: 0x10948EC VA: 0x10948EC
	private void <Awake>b__15_0(Vector2 value) { }
}

// Namespace: Rotatelab.IAP
[Serializable]