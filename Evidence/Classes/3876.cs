private struct HiroController.<ExecuteTask>d__88 : IAsyncStateMachine // TypeDefIndex: 3876
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncUniTaskMethodBuilder<bool> <>t__builder; // 0x4
	public StopwatchEvent stopwatch; // 0x10
	public bool skipFirstOnlineCheck; // 0x14
	public Func<UniTask> task; // 0x18
	public Action<Exception, int> onError; // 0x1C
	public float retryDelayMultiplier; // 0x20
	public int attemptCount; // 0x24
	private int <retryDelay>5__2; // 0x28
	private int <i>5__3; // 0x2C
	private UniTask.Awaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1155DEC Offset: 0x1155DEC VA: 0x1155DEC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1156904 Offset: 0x1156904 VA: 0x1156904 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: 
[CompilerGenerated]