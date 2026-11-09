public class NakamaUnityWebRequestAdapter : HiroUnityWebRequestAdapter, IHttpAdapter // TypeDefIndex: 3890
{
	// Properties
	public ILogger Logger { get; set; }
	public TransientExceptionDelegate TransientExceptionDelegate { get; }

	// Methods

	// RVA: 0x115F934 Offset: 0x115F934 VA: 0x115F934 Slot: 9
	public ILogger get_Logger() { }

	// RVA: 0x115F93C Offset: 0x115F93C VA: 0x115F93C Slot: 7
	public void set_Logger(ILogger value) { }

	// RVA: 0x115FA0C Offset: 0x115FA0C VA: 0x115FA0C Slot: 6
	public TransientExceptionDelegate get_TransientExceptionDelegate() { }

	// RVA: 0x114A78C Offset: 0x114A78C VA: 0x114A78C
	public void .ctor(bool compressRequests, bool decompressResponses) { }

	// RVA: 0x115FB28 Offset: 0x115FB28 VA: 0x115FB28 Slot: 5
	protected override Exception GetApiResponseException(long statusCode, string content, int grpcCode) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]