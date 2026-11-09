public class PerformanceHudController : MonoBehaviour // TypeDefIndex: 3717
{
	// Fields
	[CompilerGenerated]
	private static PerformanceHudController <Instance>k__BackingField; // 0x0
	[SerializeField]
	private Canvas hudCanvas; // 0x10
	[SerializeField]
	private TMP_Text textBody; // 0x14
	[SerializeField]
	private float averagingWindowSeconds; // 0x18
	[SerializeField]
	private float textRefreshIntervalSeconds; // 0x1C
	[SerializeField]
	private int ringCapacity; // 0x20
	private float[] _frameMs; // 0x24
	private float[] _timestamps; // 0x28
	private int _head; // 0x2C
	private int _tail; // 0x30
	private int _count; // 0x34
	private readonly StringBuilder _sb; // 0x38
	private float _timeSinceLastTextRefresh; // 0x3C
	private bool _isVisible; // 0x40

	// Properties
	public static PerformanceHudController Instance { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x110A2B8 Offset: 0x110A2B8 VA: 0x110A2B8
	public static PerformanceHudController get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x110A308 Offset: 0x110A308 VA: 0x110A308
	private static void set_Instance(PerformanceHudController value) { }

	// RVA: 0x110A36C Offset: 0x110A36C VA: 0x110A36C
	private void Awake() { }

	// RVA: 0x110A5C8 Offset: 0x110A5C8 VA: 0x110A5C8
	private void OnDestroy() { }

	// RVA: 0x110A6D0 Offset: 0x110A6D0 VA: 0x110A6D0
	public void SetVisible(bool isOn) { }

	// RVA: 0x110A798 Offset: 0x110A798 VA: 0x110A798
	private void Update() { }

	// RVA: 0x110A940 Offset: 0x110A940 VA: 0x110A940
	private void BuildBody() { }

	// RVA: 0x110AB80 Offset: 0x110AB80 VA: 0x110AB80
	private static void AppendFps(StringBuilder sb, string label, float value) { }

	// RVA: 0x110AC88 Offset: 0x110AC88 VA: 0x110AC88
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]