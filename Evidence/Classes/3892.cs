public class SatoriUnityWebRequestAdapter : HiroUnityWebRequestAdapter, IHttpAdapter // TypeDefIndex: 3892
{
	// Properties
	public ILogger Logger { get; set; }
	public TransientExceptionDelegate TransientExceptionDelegate { get; }

	// Methods

	// RVA: 0x115FCE0 Offset: 0x115FCE0 VA: 0x115FCE0 Slot: 9
	public ILogger get_Logger() { }

	// RVA: 0x115FCE8 Offset: 0x115FCE8 VA: 0x115FCE8 Slot: 7
	public void set_Logger(ILogger value) { }

	// RVA: 0x115FDB8 Offset: 0x115FDB8 VA: 0x115FDB8 Slot: 6
	public TransientExceptionDelegate get_TransientExceptionDelegate() { }

	// RVA: 0x114A7B0 Offset: 0x114A7B0 VA: 0x114A7B0
	public void .ctor(bool compressRequests, bool decompressResponses) { }

	// RVA: 0x115FEB0 Offset: 0x115FEB0 VA: 0x115FEB0 Slot: 5
	protected override Exception GetApiResponseException(long statusCode, string content, int grpcCode) { }
}

// Namespace: 
[CompilerGenerated]