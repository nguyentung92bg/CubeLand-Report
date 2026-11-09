public class UIManager : SingletonBehaviour<UIManager> // TypeDefIndex: 3775
{
	// Fields
	private MainCanvasBase[] mainCanvases; // 0x10
	[CompilerGenerated]
	private MainCanvasBase <CurrentMainCanvas>k__BackingField; // 0x14
	[CompilerGenerated]
	[SerializeField]
	private PreLevelStartController <LevelStartBoosterPopup>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private ExitLevelConfirmationPopup <ExitLevelConfirmationPopup>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private HeartPurchasePopup <HeartPurchasePopup>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private BoosterPurchasePopup <BoosterPurchasePopup>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private AdNotReadyController <AdNotReadyController>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private AlertTextController <AlertText>k__BackingField; // 0x2C
	[SerializeField]
	private PageButtonBase[] pageButtons; // 0x30
	private PageButtonBase activePageButton; // 0x34
	[CompilerGenerated]
	private Action<PageButtonType> OnPageOpened; // 0x38

	// Properties
	public MainCanvasBase CurrentMainCanvas { get; set; }
	public PreLevelStartController LevelStartBoosterPopup { get; set; }
	public ExitLevelConfirmationPopup ExitLevelConfirmationPopup { get; set; }
	public HeartPurchasePopup HeartPurchasePopup { get; set; }
	public BoosterPurchasePopup BoosterPurchasePopup { get; set; }
	public AdNotReadyController AdNotReadyController { get; set; }
	public AlertTextController AlertText { get; set; }
	public PageButtonType ActivePageType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1127108 Offset: 0x1127108 VA: 0x1127108
	public MainCanvasBase get_CurrentMainCanvas() { }

	[CompilerGenerated]
	// RVA: 0x1127110 Offset: 0x1127110 VA: 0x1127110
	private void set_CurrentMainCanvas(MainCanvasBase value) { }

	[CompilerGenerated]
	// RVA: 0x1127118 Offset: 0x1127118 VA: 0x1127118
	public PreLevelStartController get_LevelStartBoosterPopup() { }

	[CompilerGenerated]
	// RVA: 0x1127120 Offset: 0x1127120 VA: 0x1127120
	private void set_LevelStartBoosterPopup(PreLevelStartController value) { }

	[CompilerGenerated]
	// RVA: 0x1127128 Offset: 0x1127128 VA: 0x1127128
	public ExitLevelConfirmationPopup get_ExitLevelConfirmationPopup() { }

	[CompilerGenerated]
	// RVA: 0x1127130 Offset: 0x1127130 VA: 0x1127130
	private void set_ExitLevelConfirmationPopup(ExitLevelConfirmationPopup value) { }

	[CompilerGenerated]
	// RVA: 0x1127138 Offset: 0x1127138 VA: 0x1127138
	public HeartPurchasePopup get_HeartPurchasePopup() { }

	[CompilerGenerated]
	// RVA: 0x1127140 Offset: 0x1127140 VA: 0x1127140
	private void set_HeartPurchasePopup(HeartPurchasePopup value) { }

	[CompilerGenerated]
	// RVA: 0x1127148 Offset: 0x1127148 VA: 0x1127148
	public BoosterPurchasePopup get_BoosterPurchasePopup() { }

	[CompilerGenerated]
	// RVA: 0x1127150 Offset: 0x1127150 VA: 0x1127150
	private void set_BoosterPurchasePopup(BoosterPurchasePopup value) { }

	[CompilerGenerated]
	// RVA: 0x1127158 Offset: 0x1127158 VA: 0x1127158
	public AdNotReadyController get_AdNotReadyController() { }

	[CompilerGenerated]
	// RVA: 0x1127160 Offset: 0x1127160 VA: 0x1127160
	private void set_AdNotReadyController(AdNotReadyController value) { }

	[CompilerGenerated]
	// RVA: 0x1127168 Offset: 0x1127168 VA: 0x1127168
	public AlertTextController get_AlertText() { }

	[CompilerGenerated]
	// RVA: 0x1127170 Offset: 0x1127170 VA: 0x1127170
	private void set_AlertText(AlertTextController value) { }

	// RVA: 0x1127178 Offset: 0x1127178 VA: 0x1127178
	public PageButtonType get_ActivePageType() { }

	[CompilerGenerated]
	// RVA: 0x1127194 Offset: 0x1127194 VA: 0x1127194
	public void add_OnPageOpened(Action<PageButtonType> value) { }

	[CompilerGenerated]
	// RVA: 0x1127244 Offset: 0x1127244 VA: 0x1127244
	public void remove_OnPageOpened(Action<PageButtonType> value) { }

	// RVA: 0x11272F4 Offset: 0x11272F4 VA: 0x11272F4 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1126B6C Offset: 0x1126B6C VA: 0x1126B6C
	public void SetMainCanvas(MainCanvasType mainCanvasType, bool playAnimation = True, Action onBeforeHalfwayReached) { }

	// RVA: 0x11283EC Offset: 0x11283EC VA: 0x11283EC
	private MainCanvasBase GetMainCanvasByType(MainCanvasType mainCanvasType) { }

	// RVA: 0x11276EC Offset: 0x11276EC VA: 0x11276EC
	public void OpenPage(PageButtonType type) { }

	[AsyncStateMachine(typeof(UIManager.<WaitUntilUserIsIdleAsync>d__40))]
	// RVA: 0x1128958 Offset: 0x1128958 VA: 0x1128958
	public static UniTask WaitUntilUserIsIdleAsync() { }

	// RVA: 0x1128A0C Offset: 0x1128A0C VA: 0x1128A0C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1128A60 Offset: 0x1128A60 VA: 0x1128A60
	internal static bool <WaitUntilUserIsIdleAsync>g__IsUserIdle|40_0() { }
}

// Namespace: Rotatelab.UI