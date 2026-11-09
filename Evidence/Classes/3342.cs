public class AudioGroup : ScriptableObject // TypeDefIndex: 3342
{
	// Fields
	[SerializeField]
	[Tooltip("Logs every playback to the Console; the stack trace shows who requested it.")]
	private bool logWhenPlayed; // 0xC
	[SerializeField]
	private AudioClip[] audioClips; // 0x10
	[SerializeField]
	private Vector2 volumeRange; // 0x14
	[SerializeField]
	private Vector2 pitchRange; // 0x1C
	[SerializeField]
	private int incrementalPitchSteps; // 0x24
	[SerializeField]
	private float incrementalPitchCountdown; // 0x28
	[SerializeField]
	[Tooltip("Seconds. > 0 delays the sound, < 0 skips into the clip so it lands earlier.")]
	private float timingOffset; // 0x2C
	private float lastPlaytime; // 0x30
	private int playCount; // 0x34

	// Properties
	public float TimingOffset { get; }
	protected Vector2 PitchRange { get; }

	// Methods

	// RVA: 0x108CB98 Offset: 0x108CB98 VA: 0x108CB98
	public float get_TimingOffset() { }

	// RVA: 0x108CBA0 Offset: 0x108CBA0 VA: 0x108CBA0
	protected Vector2 get_PitchRange() { }

	// RVA: 0x108CBAC Offset: 0x108CBAC VA: 0x108CBAC
	protected AudioClip PickClip() { }

	// RVA: 0x108CD20 Offset: 0x108CD20 VA: 0x108CD20
	public void GetPlaybackData(out AudioClip clip, out float volume, out float pitch) { }

	// RVA: 0x108CD74 Offset: 0x108CD74 VA: 0x108CD74 Slot: 4
	protected virtual float GetPitch() { }

	// RVA: 0x108CE28 Offset: 0x108CE28 VA: 0x108CE28
	public void .ctor() { }
}

// Namespace: Rotatelab.Audio