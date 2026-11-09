public static class GameExtensions // TypeDefIndex: 3164
{
	// Methods

	[Extension]
	// RVA: 0xFB4C5C Offset: 0xFB4C5C VA: 0xFB4C5C
	public static int EmptyDockCount(IList<BaseDockController> docks) { }

	[Extension]
	// RVA: 0xFB4DB0 Offset: 0xFB4DB0 VA: 0xFB4DB0
	public static int OccupiedDockCount(IList<BaseDockController> docks) { }

	[Extension]
	// RVA: 0xFB4F04 Offset: 0xFB4F04 VA: 0xFB4F04
	public static int Multiplier(LevelDifficulty difficulty) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static T PauseGameDuringAnimation<T>(T tween) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x148FEC8 Offset: 0x148FEC8 VA: 0x148FEC8
	|-GameExtensions.PauseGameDuringAnimation<object>
	*/

	[Extension]
	// RVA: 0xFB4FB4 Offset: 0xFB4FB4 VA: 0xFB4FB4
	public static Tween PauseGameDuringAnimation(Tween tween) { }

	[Extension]
	// RVA: 0xFB5188 Offset: 0xFB5188 VA: 0xFB5188
	public static Sequence PauseGameDuringAnimation(Sequence sequence) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static T PreventFailSearchDuringAnimation<T>(T tween) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1490074 Offset: 0x1490074 VA: 0x1490074
	|-GameExtensions.PreventFailSearchDuringAnimation<object>
	*/

	[Extension]
	// RVA: 0xFB532C Offset: 0xFB532C VA: 0xFB532C
	public static Tween PreventFailSearchDuringAnimation(Tween tween) { }

	[Extension]
	// RVA: 0xFB5500 Offset: 0xFB5500 VA: 0xFB5500
	public static Sequence PreventFailSearchDuringAnimation(Sequence sequence) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static T PreventManualRotationDuringAnimation<T>(T tween) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1490220 Offset: 0x1490220 VA: 0x1490220
	|-GameExtensions.PreventManualRotationDuringAnimation<object>
	*/

	[Extension]
	// RVA: 0xFB56A4 Offset: 0xFB56A4 VA: 0xFB56A4
	public static Tween PreventManualRotationDuringAnimation(Tween tween) { }

	[Extension]
	// RVA: 0xFB5878 Offset: 0xFB5878 VA: 0xFB5878
	public static Sequence PreventManualRotationDuringAnimation(Sequence sequence) { }

	[Extension]
	// RVA: 0xFA9054 Offset: 0xFA9054 VA: 0xFA9054
	public static Task UpdateDefaultPropertyAsync(SatoriSystem satori, string key, string value, CancellationToken cancellationToken) { }

	[Extension]
	// RVA: 0xFB5A1C Offset: 0xFB5A1C VA: 0xFB5A1C
	public static Task UpdateCustomPropertyAsync(SatoriSystem satori, string key, string value, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(GameExtensions.<ReadStorageObjectAsync>d__14))]
	[Extension]
	// RVA: 0xFB5B10 Offset: 0xFB5B10 VA: 0xFB5B10
	public static Task<IApiStorageObject> ReadStorageObjectAsync(NakamaSystem nakama, IApiReadStorageObjectId id, RetryConfiguration retryConfiguration, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(GameExtensions.<WriteStorageObjectAsync>d__15))]
	[Extension]
	// RVA: 0xFB5C80 Offset: 0xFB5C80 VA: 0xFB5C80
	public static Task<IApiStorageObjectAck> WriteStorageObjectAsync(NakamaSystem nakama, IApiWriteStorageObject obj, RetryConfiguration retryConfiguration, CancellationToken cancellationToken) { }

	[Extension]
	// RVA: 0xFB5DF0 Offset: 0xFB5DF0 VA: 0xFB5DF0
	public static Task DeleteStorageObjectAsync(NakamaSystem nakama, StorageObjectId id, RetryConfiguration retryConfiguration, CancellationToken cancellationToken) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static bool TryRead<T>(IStorage storage, string key, out T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x14903CC Offset: 0x14903CC VA: 0x14903CC
	|-GameExtensions.TryRead<object>
	*/

	[Extension]
	// RVA: 0xFB5F5C Offset: 0xFB5F5C VA: 0xFB5F5C
	public static Dictionary<string, object> ToSatoriParameters(IList<Parameter> firebaseParameters) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]