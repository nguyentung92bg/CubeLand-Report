private struct HiroUnityWebRequestAdapter.<SendWebRequestAsync>d__5 : IAsyncStateMachine // TypeDefIndex: 3894
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncUniTaskMethodBuilder<string> <>t__builder; // 0x4
	public byte[] body; // 0x10
	public HiroUnityWebRequestAdapter <>4__this; // 0x14
	public string method; // 0x18
	public Uri uri; // 0x1C
	public IDictionary<string, string> headers; // 0x20
	public CancellationToken cancellationToken; // 0x24
	public int timeout; // 0x28
	private UnityWebRequest <www>5__2; // 0x2C
	private UnityWebRequestAsyncOperation <asyncOp>5__3; // 0x30
	private ulong <lastUploadedBytes>5__4; // 0x38
	private ulong <lastDownloadedBytes>5__5; // 0x40
	private float <idleTimer>5__6; // 0x48
	private YieldAwaitable.Awaiter <>u__1; // 0x4C

	// Methods

	// RVA: 0x116187C Offset: 0x116187C VA: 0x116187C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1162238 Offset: 0x1162238 VA: 0x1162238 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Rotatelab.Networking