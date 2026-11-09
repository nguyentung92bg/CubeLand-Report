public sealed class SseDownloadHandler : DownloadHandlerScript // TypeDefIndex: 4167
{
	// Fields
	private const string DataPrefix = "data: ";
	private const string FrameSeparator = "\n\n";
	private const int ChunkSize = 8192;
	private readonly Decoder decoder; // 0xC
	private readonly StringBuilder pending; // 0x10
	private readonly Action<string> onPayload; // 0x14
	private readonly char[] decoded; // 0x18

	// Methods

	// RVA: 0x105BD38 Offset: 0x105BD38 VA: 0x105BD38
	public void .ctor(Action<string> onPayload) { }

	// RVA: 0x105C8BC Offset: 0x105C8BC VA: 0x105C8BC Slot: 9
	protected override bool ReceiveData(byte[] data, int dataLength) { }

	// RVA: 0x105C968 Offset: 0x105C968 VA: 0x105C968
	private void DrainFrames() { }
}

// Namespace: 