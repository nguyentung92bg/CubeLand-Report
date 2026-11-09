public class TestUserManager : SingletonBehaviour<TestUserManager> // TypeDefIndex: 3722
{
	// Fields
	[SerializeField]
	private RemoteStringSO remoteIdfaPool; // 0x10
	[SerializeField]
	private RemoteStringSO remoteGoogleIdPool; // 0x14
	[SerializeField]
	private CanvasGroup creativeCanvasGroup; // 0x18
	[SerializeField]
	private DebugLogManager debugConsole; // 0x1C
	[SerializeField]
	private DebugLogPopup debugConsolePopup; // 0x20
	[SerializeField]
	private TextMeshProUGUI debugConsolePopupErrorCount; // 0x24
	[CompilerGenerated]
	private bool <IsTestUser>k__BackingField; // 0x28
	private int _settingsVisitCount; // 0x2C
	private const int TestUserPrefValue = 2703;

	// Properties
	public bool IsTestUser { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x110EE0C Offset: 0x110EE0C VA: 0x110EE0C
	public bool get_IsTestUser() { }

	[CompilerGenerated]
	// RVA: 0x110EE14 Offset: 0x110EE14 VA: 0x110EE14
	private void set_IsTestUser(bool value) { }

	// RVA: 0x110EE1C Offset: 0x110EE1C VA: 0x110EE1C
	private void OnEnable() { }

	// RVA: 0x110EF6C Offset: 0x110EF6C VA: 0x110EF6C
	private void OnDisable() { }

	// RVA: 0x110F0BC Offset: 0x110F0BC VA: 0x110F0BC Slot: 4
	protected override void Awake() { }

	[AsyncStateMachine(typeof(TestUserManager.<Start>d__15))]
	// RVA: 0x110F260 Offset: 0x110F260 VA: 0x110F260
	protected UniTaskVoid Start() { }

	// RVA: 0x110F300 Offset: 0x110F300 VA: 0x110F300
	private void CheckIfTestUser(RemoteStringSO remoteTestUsers, string id) { }

	// RVA: 0x110F4E4 Offset: 0x110F4E4 VA: 0x110F4E4
	private void SetTestUser(bool isTestUser) { }

	// RVA: 0x110F6E8 Offset: 0x110F6E8 VA: 0x110F6E8
	private void OnSettingsPopupClosedHandler() { }

	// RVA: 0x110F904 Offset: 0x110F904 VA: 0x110F904
	private void OnSettingsPopupOpenedHandler() { }

	// RVA: 0x110F6F0 Offset: 0x110F6F0 VA: 0x110F6F0
	private void SettingsPopupEnableHandler(bool isEnable) { }

	// RVA: 0x110DDD0 Offset: 0x110DDD0 VA: 0x110DDD0
	public void OpenLevel(int levelNumber) { }

	// RVA: 0x110F90C Offset: 0x110F90C VA: 0x110F90C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x110F960 Offset: 0x110F960 VA: 0x110F960
	private void <Start>b__15_0(string id) { }
}

// Namespace: 
[CompilerGenerated]