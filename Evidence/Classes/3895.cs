public abstract class HiroUnityWebRequestAdapter // TypeDefIndex: 3895
{
	// Fields
	private readonly bool compressRequests; // 0x8
	private readonly bool decompressResponses; // 0x9
	protected HiroLogger logger; // 0xC

	// Methods

	// RVA: 0x115FB04 Offset: 0x115FB04 VA: 0x115FB04
	public void .ctor(bool compressRequests, bool decompressResponses) { }

	// RVA: 0x1160068 Offset: 0x1160068 VA: 0x1160068 Slot: 4
	public Task<string> SendAsync(string method, Uri uri, IDictionary<string, string> headers, byte[] body, int timeoutSec, Nullable<CancellationToken> cancellationToken) { }

	[AsyncStateMachine(typeof(HiroUnityWebRequestAdapter.<SendWebRequestAsync>d__5))]
	// RVA: 0x1160114 Offset: 0x1160114 VA: 0x1160114
	private UniTask<string> SendWebRequestAsync(string method, Uri uri, IDictionary<string, string> headers, byte[] body, int timeout, CancellationToken cancellationToken) { }

	// RVA: 0x1160284 Offset: 0x1160284 VA: 0x1160284
	private UnityWebRequest CreateWebRequest(string method, Uri uri, IDictionary<string, string> headers, byte[] body) { }

	// RVA: 0x11608FC Offset: 0x11608FC VA: 0x11608FC
	private static byte[] CompressDataWithGZip(byte[] data) { }

	// RVA: 0x1160BE8 Offset: 0x1160BE8 VA: 0x1160BE8
	private string ProcessResponse(UnityWebRequest www) { }

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract Exception GetApiResponseException(long statusCode, string content, int grpcCode);

	[CompilerGenerated]
	// RVA: 0x1161600 Offset: 0x1161600 VA: 0x1161600
	private Exception <ProcessResponse>g__OnError|8_0(long statusCode, string content, int grpcCode, ref HiroUnityWebRequestAdapter.<>c__DisplayClass8_0 ) { }
}

// Namespace: Rotatelab.Networking