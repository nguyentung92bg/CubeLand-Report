public class LevelStateManager : SingletonBehaviour<LevelStateManager> // TypeDefIndex: 4054
{
	// Fields
	public static readonly SavedBool IsWinSequenceAnimationEnabled; // 0x0
	[CompilerGenerated]
	private bool <IsWinSequenceStarted>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsFailSearchStarted>k__BackingField; // 0x11
	[CompilerGenerated]
	private int <RemainingTargetables>k__BackingField; // 0x14
	[SerializeField]
	private ParticleSystem lastVoxelParticle; // 0x18
	private readonly List<object> pauseRequests; // 0x1C
	private readonly List<object> failSearchPreventRequests; // 0x20
	private Coroutine winSequenceCoroutine; // 0x24
	private Coroutine failSequenceCoroutine; // 0x28
	[CompilerGenerated]
	private Action<bool> OnPauseStateChanged; // 0x2C

	// Properties
	public bool IsPaused { get; }
	public bool IsWinSequenceStarted { get; set; }
	public bool IsWinSequenceAnimating { get; }
	public bool IsFailSearchStarted { get; set; }
	public int RemainingTargetables { get; set; }

	// Methods

	// RVA: 0x100E3E4 Offset: 0x100E3E4 VA: 0x100E3E4
	public bool get_IsPaused() { }

	[CompilerGenerated]
	// RVA: 0x10162B4 Offset: 0x10162B4 VA: 0x10162B4
	public bool get_IsWinSequenceStarted() { }

	[CompilerGenerated]
	// RVA: 0x10162BC Offset: 0x10162BC VA: 0x10162BC
	private void set_IsWinSequenceStarted(bool value) { }

	// RVA: 0x1006428 Offset: 0x1006428 VA: 0x1006428
	public bool get_IsWinSequenceAnimating() { }

	[CompilerGenerated]
	// RVA: 0x10162C4 Offset: 0x10162C4 VA: 0x10162C4
	public bool get_IsFailSearchStarted() { }

	[CompilerGenerated]
	// RVA: 0x10162CC Offset: 0x10162CC VA: 0x10162CC
	private void set_IsFailSearchStarted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x10162D4 Offset: 0x10162D4 VA: 0x10162D4
	public int get_RemainingTargetables() { }

	[CompilerGenerated]
	// RVA: 0x10162DC Offset: 0x10162DC VA: 0x10162DC
	private void set_RemainingTargetables(int value) { }

	[CompilerGenerated]
	// RVA: 0x10162E4 Offset: 0x10162E4 VA: 0x10162E4
	public void add_OnPauseStateChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x1016394 Offset: 0x1016394 VA: 0x1016394
	public void remove_OnPauseStateChanged(Action<bool> value) { }

	// RVA: 0x1016444 Offset: 0x1016444 VA: 0x1016444
	private void OnEnable() { }

	// RVA: 0x101665C Offset: 0x101665C VA: 0x101665C
	private void OnDisable() { }

	// RVA: 0x10167E4 Offset: 0x10167E4 VA: 0x10167E4
	public void Initialize() { }

	// RVA: 0x10169C8 Offset: 0x10169C8 VA: 0x10169C8
	public void ResetGameState() { }

	// RVA: 0x10168BC Offset: 0x10168BC VA: 0x10168BC
	private void StartCheckingLevelState() { }

	// RVA: 0x1016B14 Offset: 0x1016B14 VA: 0x1016B14
	private void StopCheckingLevelState() { }

	// RVA: 0x1016BFC Offset: 0x1016BFC VA: 0x1016BFC
	private IEnumerator CheckWinSequenceCoroutine() { }

	// RVA: 0x1016C90 Offset: 0x1016C90 VA: 0x1016C90
	private void TriggerWinSequence() { }

	// RVA: 0x1016DD0 Offset: 0x1016DD0 VA: 0x1016DD0
	private bool IsEmptyDockCountSufficientForQueuedBlasters() { }

	// RVA: 0x1016B84 Offset: 0x1016B84 VA: 0x1016B84
	private IEnumerator CheckFailSequenceCoroutine() { }

	// RVA: 0x1017304 Offset: 0x1017304 VA: 0x1017304
	private void TriggerLevelFailure() { }

	// RVA: 0x1016A58 Offset: 0x1016A58 VA: 0x1016A58
	private void SetFailSearchState(bool enabled) { }

	// RVA: 0x101738C Offset: 0x101738C VA: 0x101738C
	private bool IsLevelStuck() { }

	// RVA: 0x1017988 Offset: 0x1017988 VA: 0x1017988
	public void TrySetFailSearchAllowed(bool isAllowed, object source) { }

	// RVA: 0x1017A60 Offset: 0x1017A60 VA: 0x1017A60
	public IDisposable PreventFailSearchWithinScope() { }

	// RVA: 0x1017774 Offset: 0x1017774 VA: 0x1017774
	private bool CanCheckLevelState() { }

	// RVA: 0x1017B2C Offset: 0x1017B2C VA: 0x1017B2C
	public void TrySetGamePaused(bool isPaused, object source) { }

	// RVA: 0x10165E4 Offset: 0x10165E4 VA: 0x10165E4
	private IEnumerator CheckPausedStateRegularlyCoroutine() { }

	// RVA: 0x100B1DC Offset: 0x100B1DC VA: 0x100B1DC
	public IDisposable PauseGameWithinScope() { }

	// RVA: 0x1017CE8 Offset: 0x1017CE8 VA: 0x1017CE8
	private void OnVoxelDestroyedHandler(BaseTargetableController targetable) { }

	// RVA: 0x1017F4C Offset: 0x1017F4C VA: 0x1017F4C
	private void OnPlayOnComplete() { }

	// RVA: 0x1017F68 Offset: 0x1017F68 VA: 0x1017F68
	public void .ctor() { }

	// RVA: 0x1018044 Offset: 0x1018044 VA: 0x1018044
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]