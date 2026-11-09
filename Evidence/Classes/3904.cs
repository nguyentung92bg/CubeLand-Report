public class PushNotificationManager : MonoBehaviour // TypeDefIndex: 3904
{
	// Fields
	private const string SatoriTokenProperty = "pushTokenAndroid";
	private bool isTokenSentToAdjust; // 0x10

	// Methods

	// RVA: 0xFE4EC8 Offset: 0xFE4EC8 VA: 0xFE4EC8
	protected void Start() { }

	// RVA: 0xFE4F94 Offset: 0xFE4F94 VA: 0xFE4F94
	protected void OnDestroy() { }

	[AsyncStateMachine(typeof(PushNotificationManager.<InitializeAsync>d__4))]
	// RVA: 0xFE4EF4 Offset: 0xFE4EF4 VA: 0xFE4EF4
	private UniTaskVoid InitializeAsync() { }

	// RVA: 0xFE50F8 Offset: 0xFE50F8 VA: 0xFE50F8
	private void OnMainCanvasChangeEndedHandler(MainCanvasType canvasType, bool _) { }

	[AsyncStateMachine(typeof(PushNotificationManager.<RegisterToTokenReceivedEventAsync>d__6))]
	// RVA: 0xFE52B4 Offset: 0xFE52B4 VA: 0xFE52B4
	private UniTaskVoid RegisterToTokenReceivedEventAsync() { }

	// RVA: 0xFE5354 Offset: 0xFE5354 VA: 0xFE5354
	private void TokenReceivedHandler(object sender, TokenReceivedEventArgs receivedToken) { }

	// RVA: 0xFE5404 Offset: 0xFE5404 VA: 0xFE5404
	private void TrySendTokenToAdjust(string pushToken) { }

	[AsyncStateMachine(typeof(PushNotificationManager.<SendTokenToSatoriAsync>d__9))]
	// RVA: 0xFE54B4 Offset: 0xFE54B4 VA: 0xFE54B4
	private UniTaskVoid SendTokenToSatoriAsync(string pushToken) { }

	// RVA: 0xFE5554 Offset: 0xFE5554 VA: 0xFE5554
	public void .ctor() { }
}

// Namespace: Rotatelab.Networking
[Serializable]