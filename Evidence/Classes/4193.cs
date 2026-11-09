public class ControllerFirebase : MonoBehaviour // TypeDefIndex: 4193
{
	// Fields
	public AdjustManager adjustManager; // 0x10
	public ControllerFacebook controllerFacebook; // 0x14
	[CompilerGenerated]
	private static string <FirebasePseudoId>k__BackingField; // 0x0
	[CompilerGenerated]
	private static bool <IsFirebaseAppInitialized>k__BackingField; // 0x4
	private static string eventQueuePath; // 0x8
	public static readonly Func<Parameter, string> ParameterNameGetter; // 0xC
	public static readonly Func<Parameter, object> ParameterValueGetter; // 0x10

	// Properties
	public static string FirebasePseudoId { get; set; }
	public static bool IsFirebaseAppInitialized { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1060098 Offset: 0x1060098 VA: 0x1060098
	public static string get_FirebasePseudoId() { }

	[CompilerGenerated]
	// RVA: 0x10600FC Offset: 0x10600FC VA: 0x10600FC
	private static void set_FirebasePseudoId(string value) { }

	[CompilerGenerated]
	// RVA: 0x1060174 Offset: 0x1060174 VA: 0x1060174
	public static bool get_IsFirebaseAppInitialized() { }

	[CompilerGenerated]
	// RVA: 0x10601D8 Offset: 0x10601D8 VA: 0x10601D8
	private static void set_IsFirebaseAppInitialized(bool value) { }

	// RVA: 0x1060240 Offset: 0x1060240 VA: 0x1060240
	protected void Awake() { }

	// RVA: 0x106039C Offset: 0x106039C VA: 0x106039C
	protected void Start() { }

	[AsyncStateMachine(typeof(ControllerFirebase.<InitializeAsync>d__15))]
	// RVA: 0x1060434 Offset: 0x1060434 VA: 0x1060434
	private UniTaskVoid InitializeAsync() { }

	// RVA: 0x1060568 Offset: 0x1060568 VA: 0x1060568
	private void OnNetworkConnectivityChanged(bool online) { }

	// RVA: 0x1060648 Offset: 0x1060648 VA: 0x1060648
	private void CheckFirstOpen() { }

	[AsyncStateMachine(typeof(ControllerFirebase.<ResetAnalyticsDataAsync>d__18))]
	// RVA: 0x106091C Offset: 0x106091C VA: 0x106091C
	public static UniTaskVoid ResetAnalyticsDataAsync() { }

	// RVA: 0x10609AC Offset: 0x10609AC VA: 0x10609AC
	public static void SendEvent(string eventName, List<Parameter> parameters) { }

	// RVA: 0x1060A54 Offset: 0x1060A54 VA: 0x1060A54
	public static void SendEvent(string eventName, Parameter[] parameters) { }

	[AsyncStateMachine(typeof(ControllerFirebase.<SendEventAsync>d__21))]
	// RVA: 0x1060DF8 Offset: 0x1060DF8 VA: 0x1060DF8
	private static UniTaskVoid SendEventAsync(string eventName, Parameter[] parameters) { }

	// RVA: 0x1060EAC Offset: 0x1060EAC VA: 0x1060EAC
	private static void LogEvent(string eventName, Parameter[] parameters) { }

	// RVA: 0x1061010 Offset: 0x1061010 VA: 0x1061010
	public static void SetUserProperty(string name, string property) { }

	[AsyncStateMachine(typeof(ControllerFirebase.<SetUserPropertyAsync>d__24))]
	// RVA: 0x106109C Offset: 0x106109C VA: 0x106109C
	private static UniTaskVoid SetUserPropertyAsync(string name, string property) { }

	// RVA: 0x1061150 Offset: 0x1061150 VA: 0x1061150
	public static void LogAppleTransaction(string transactionId) { }

	[AsyncStateMachine(typeof(ControllerFirebase.<LogAppleTransactionAsync>d__26))]
	// RVA: 0x10611D4 Offset: 0x10611D4 VA: 0x10611D4
	private static UniTaskVoid LogAppleTransactionAsync(string transactionId) { }

	// RVA: 0x1060B44 Offset: 0x1060B44 VA: 0x1060B44
	private static void QueueEvent(string eventName, Parameter[] parameters) { }

	[AsyncStateMachine(typeof(ControllerFirebase.<SendQueuedEventsAsync>d__28))]
	// RVA: 0x10604D8 Offset: 0x10604D8 VA: 0x10604D8
	private static UniTaskVoid SendQueuedEventsAsync() { }

	// RVA: 0x106140C Offset: 0x106140C VA: 0x106140C
	public void .ctor() { }

	// RVA: 0x1061414 Offset: 0x1061414 VA: 0x1061414
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x1061764 Offset: 0x1061764 VA: 0x1061764
	private void <InitializeAsync>b__15_0(object sender, NetworkMonitorEventArgs e) { }
}

// Namespace: Rotatelab.Scripts