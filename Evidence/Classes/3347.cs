public class AudioManager : SingletonBehaviour<AudioManager> // TypeDefIndex: 3347
{
	// Fields
	private const float OneShotPitchIncrements = 0.05;
	public AudioSource musicAudioSource; // 0x10
	public readonly SavedBool IsSoundEnabled; // 0x14
	public readonly SavedBool IsMusicEnabled; // 0x18
	[SerializeField]
	private AudioLibrary audioLibrary; // 0x1C
	[SerializeField]
	private int initialAudioSourceCount; // 0x20
	[SerializeField]
	private float finalHitEchoDelay; // 0x24
	[SerializeField]
	private float finalHitEchoDecay; // 0x28
	[SerializeField]
	private float finalHitEchoWetMix; // 0x2C
	private readonly List<AudioManager.OneShotData> oneShotAudioSources; // 0x30
	private readonly Stack<AudioSource> audioSourcePool; // 0x34
	private AudioSource finalHitAudioSource; // 0x38
	private AudioEchoFilter finalHitEcho; // 0x3C
	private AudioReverbFilter finalHitReverb; // 0x40
	private Tween finalHitFilterDisableTween; // 0x48

	// Methods

	// RVA: 0x108CEDC Offset: 0x108CEDC VA: 0x108CEDC
	protected void OnEnable() { }

	// RVA: 0x108D108 Offset: 0x108D108 VA: 0x108D108
	protected void OnDisable() { }

	// RVA: 0x108D334 Offset: 0x108D334 VA: 0x108D334
	private void OnWinSequenceStartedHandler() { }

	// RVA: 0x108D4D8 Offset: 0x108D4D8 VA: 0x108D4D8
	private void OnLevelLoadedHandler(SoLevelData levelData) { }

	// RVA: 0x108D404 Offset: 0x108D404 VA: 0x108D404
	private VoxelBreakAudioGroup GetVoxelBreakGroup(SoundType soundType) { }

	// RVA: 0x108D50C Offset: 0x108D50C VA: 0x108D50C Slot: 4
	protected override void Awake() { }

	// RVA: 0x108D9C4 Offset: 0x108D9C4 VA: 0x108D9C4
	private void OnMainCanvasChangeHalfwayHandler(MainCanvasType arg1, bool arg2) { }

	// RVA: 0x107ADD0 Offset: 0x107ADD0 VA: 0x107ADD0
	public void SetMusic(bool isMusicEnabled) { }

	// RVA: 0x108DA80 Offset: 0x108DA80 VA: 0x108DA80
	private void SwitchMusic() { }

	// RVA: 0x108DAE0 Offset: 0x108DAE0 VA: 0x108DAE0
	private AudioSource GetAudioSource(bool is3D) { }

	// RVA: 0x108D70C Offset: 0x108D70C VA: 0x108D70C
	private AudioSource CreateAudioSource() { }

	// RVA: 0x108D8B8 Offset: 0x108D8B8 VA: 0x108D8B8
	private void RecycleAudioSource(AudioSource instance) { }

	// RVA: 0x1085FB4 Offset: 0x1085FB4 VA: 0x1085FB4
	public void PlaySfx(SoundType soundType) { }

	// RVA: 0x108DBE8 Offset: 0x108DBE8 VA: 0x108DBE8
	public void PlaySfx(SoundType soundType, float volumeScale) { }

	// RVA: 0x108E738 Offset: 0x108E738 VA: 0x108E738
	public void PlaySfxFinalHit(SoundType soundType) { }

	// RVA: 0x108E918 Offset: 0x108E918 VA: 0x108E918
	private void PlayFinalHitNow(SoundType soundType) { }

	// RVA: 0x108E1C0 Offset: 0x108E1C0 VA: 0x108E1C0
	private void PlaySfxOneShot(SoundType soundType, float volumeScale) { }

	// RVA: 0x108DD4C Offset: 0x108DD4C VA: 0x108DD4C
	public AudioSource PlaySfx(SoundType soundType, bool loop = False, Nullable<Vector3> position) { }

	// RVA: 0x108ECA4 Offset: 0x108ECA4 VA: 0x108ECA4
	public void StopSfx(AudioSource source) { }

	// RVA: 0x108ECA8 Offset: 0x108ECA8 VA: 0x108ECA8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x108EE88 Offset: 0x108EE88 VA: 0x108EE88
	private void <SetMusic>b__23_0(float f) { }

	[CompilerGenerated]
	// RVA: 0x108EEB4 Offset: 0x108EEB4 VA: 0x108EEB4
	private void <SetMusic>b__23_2(float f) { }
}

// Namespace: Rotatelab.Audio