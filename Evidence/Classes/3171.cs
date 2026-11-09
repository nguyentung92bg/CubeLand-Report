public class ContactUs : MonoBehaviour // TypeDefIndex: 3171
{
	// Fields
	[SerializeField]
	private Button contactUs; // 0x10
	[SerializeField]
	private Button close; // 0x14
	[SerializeField]
	private Button send; // 0x18
	[SerializeField]
	private CanvasGroup canvasGroup; // 0x1C
	[SerializeField]
	private TMP_InputField message; // 0x20
	[SerializeField]
	private TextMeshProUGUI nakamaUserIDText; // 0x24
	[SerializeField]
	private VersionDataSo versionData; // 0x28
	[SerializeField]
	private TMP_Text status; // 0x2C
	[SerializeField]
	private RectTransform successInfo; // 0x30
	[SerializeField]
	private TweenController successCheck; // 0x34
	[SerializeField]
	private int logEntryCount; // 0x38
	[Tooltip("0 = no stack trace, -1 = full stack trace, >0 = first N frames.")]
	[SerializeField]
	private int stackTraceLineLimit; // 0x3C
	[Tooltip("Total size cap for the appended log block; -1 = unlimited.")]
	[SerializeField]
	private int maxLogBlockChars; // 0x40
	[Tooltip("Off: only Error / Exception / Assert logs are sent.")]
	[SerializeField]
	private bool includeWarnings; // 0x44
	private bool isSending; // 0x45
	private Sequence statusSequence; // 0x48

	// Methods

	// RVA: 0xFB87C4 Offset: 0xFB87C4 VA: 0xFB87C4
	protected void Awake() { }

	// RVA: 0xFB8950 Offset: 0xFB8950 VA: 0xFB8950
	private void Show() { }

	// RVA: 0xFB8B34 Offset: 0xFB8B34 VA: 0xFB8B34
	private void Hide() { }

	[AsyncStateMachine(typeof(ContactUs.<SendAsync>d__19))]
	// RVA: 0xFB8BC8 Offset: 0xFB8BC8 VA: 0xFB8BC8
	private UniTaskVoid SendAsync() { }

	// RVA: 0xFB8C64 Offset: 0xFB8C64 VA: 0xFB8C64
	private void SetStatus(string s) { }

	// RVA: 0xFB8FD0 Offset: 0xFB8FD0 VA: 0xFB8FD0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFB8FF8 Offset: 0xFB8FF8 VA: 0xFB8FF8
	private void <Awake>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0xFB9024 Offset: 0xFB9024 VA: 0xFB9024
	private void <SetStatus>b__20_0() { }
}

// Namespace: 