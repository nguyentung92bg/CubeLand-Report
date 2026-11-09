public class MainThreadDispatcher : MonoBehaviour // TypeDefIndex: 3659
{
	// Fields
	private static readonly Queue<Action> PendingActions; // 0x0
	private readonly List<Action> _executingActions; // 0x10

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x10F8B10 Offset: 0x10F8B10 VA: 0x10F8B10
	private static void Initialize() { }

	// RVA: 0x10EF008 Offset: 0x10EF008 VA: 0x10EF008
	public static void Enqueue(Action action) { }

	// RVA: 0x10F8CA0 Offset: 0x10F8CA0 VA: 0x10F8CA0
	protected void Update() { }

	// RVA: 0x10F9088 Offset: 0x10F9088 VA: 0x10F9088
	public void .ctor() { }

	// RVA: 0x10F9120 Offset: 0x10F9120 VA: 0x10F9120
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]