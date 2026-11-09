public class GameManager : SingletonBehaviour<GameManager> // TypeDefIndex: 4200
{
	// Fields
	public static readonly SavedBool UserWasInGameOnPreviousSession; // 0x0

	// Properties
	public bool IsMainMenuActive { get; }

	// Methods

	// RVA: 0x1065C48 Offset: 0x1065C48 VA: 0x1065C48
	public bool get_IsMainMenuActive() { }

	// RVA: 0x1065D38 Offset: 0x1065D38 VA: 0x1065D38 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1066168 Offset: 0x1066168 VA: 0x1066168
	protected void Start() { }

	// RVA: 0x1066254 Offset: 0x1066254 VA: 0x1066254
	public void OnLevelCompleted() { }

	// RVA: 0x1066684 Offset: 0x1066684 VA: 0x1066684
	private void OnTryLevelRetriedHandler() { }

	// RVA: 0x10667C0 Offset: 0x10667C0 VA: 0x10667C0
	private void RetryLevel() { }

	// RVA: 0x1066984 Offset: 0x1066984 VA: 0x1066984
	private void OnReturnToPreGameHandler() { }

	// RVA: 0x1066B48 Offset: 0x1066B48 VA: 0x1066B48
	private void OnQuitLevelHandler() { }

	[AsyncStateMachine(typeof(GameManager.<OnLevelProgressChangedExternallyAsync>d__10))]
	// RVA: 0x1066B4C Offset: 0x1066B4C VA: 0x1066B4C
	public static UniTask OnLevelProgressChangedExternallyAsync() { }

	[RuntimeInitializeOnLoadMethod(3)]
	// RVA: 0x1066C00 Offset: 0x1066C00 VA: 0x1066C00
	private static void ObserveUnhandledTaskExceptions() { }

	// RVA: 0x1066D98 Offset: 0x1066D98 VA: 0x1066D98
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool arg2) { }

	// RVA: 0x1066E40 Offset: 0x1066E40 VA: 0x1066E40
	private void OnLevelSucceededHandler() { }

	// RVA: 0x1066EDC Offset: 0x1066EDC VA: 0x1066EDC
	public void .ctor() { }

	// RVA: 0x1066F30 Offset: 0x1066F30 VA: 0x1066F30
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x1066FE8 Offset: 0x1066FE8 VA: 0x1066FE8
	private void <OnTryLevelRetriedHandler>b__6_0(bool success) { }

	[CompilerGenerated]
	// RVA: 0x1067078 Offset: 0x1067078 VA: 0x1067078
	internal static void <ObserveUnhandledTaskExceptions>g__Handler|11_0(object sender, UnobservedTaskExceptionEventArgs e) { }

	[CompilerGenerated]
	// RVA: 0x106710C Offset: 0x106710C VA: 0x106710C
	internal static void <ObserveUnhandledTaskExceptions>g__UniTaskHandler|11_1(Exception e) { }
}

// Namespace: 