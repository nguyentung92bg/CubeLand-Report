public class VoxelBreakAudioGroup : AudioGroup // TypeDefIndex: 3348
{
	// Fields
	[SerializeField]
	private float finalHitDelay; // 0x38
	[SerializeField]
	private float finalHitPitch; // 0x3C
	[SerializeField]
	private float finalHitVolume; // 0x40
	[SerializeField]
	private AudioReverbPreset finalHitReverbPreset; // 0x44
	[SerializeField]
	private bool winPitchEscalationEnabled; // 0x48
	[SerializeField]
	private float winPitchStepPerPlay; // 0x4C
	[SerializeField]
	private float winPitchMax; // 0x50
	private bool isEscalating; // 0x54
	private float escalatedPitch; // 0x58

	// Properties
	public AudioReverbPreset FinalHitReverbPreset { get; set; }
	public float FinalHitDelay { get; set; }
	public float FinalHitPitch { get; set; }
	public float FinalHitVolume { get; set; }
	public bool WinPitchEscalationEnabled { get; set; }
	public float WinPitchStepPerPlay { get; set; }
	public float WinPitchMax { get; set; }

	// Methods

	// RVA: 0x108F11C Offset: 0x108F11C VA: 0x108F11C
	public AudioReverbPreset get_FinalHitReverbPreset() { }

	// RVA: 0x108F124 Offset: 0x108F124 VA: 0x108F124
	public void set_FinalHitReverbPreset(AudioReverbPreset value) { }

	// RVA: 0x108F12C Offset: 0x108F12C VA: 0x108F12C
	public float get_FinalHitDelay() { }

	// RVA: 0x108F134 Offset: 0x108F134 VA: 0x108F134
	public void set_FinalHitDelay(float value) { }

	// RVA: 0x108F13C Offset: 0x108F13C VA: 0x108F13C
	public float get_FinalHitPitch() { }

	// RVA: 0x108F144 Offset: 0x108F144 VA: 0x108F144
	public void set_FinalHitPitch(float value) { }

	// RVA: 0x108F14C Offset: 0x108F14C VA: 0x108F14C
	public float get_FinalHitVolume() { }

	// RVA: 0x108F154 Offset: 0x108F154 VA: 0x108F154
	public void set_FinalHitVolume(float value) { }

	// RVA: 0x108F15C Offset: 0x108F15C VA: 0x108F15C
	public bool get_WinPitchEscalationEnabled() { }

	// RVA: 0x108F164 Offset: 0x108F164 VA: 0x108F164
	public void set_WinPitchEscalationEnabled(bool value) { }

	// RVA: 0x108F16C Offset: 0x108F16C VA: 0x108F16C
	public float get_WinPitchStepPerPlay() { }

	// RVA: 0x108F174 Offset: 0x108F174 VA: 0x108F174
	public void set_WinPitchStepPerPlay(float value) { }

	// RVA: 0x108F17C Offset: 0x108F17C VA: 0x108F17C
	public float get_WinPitchMax() { }

	// RVA: 0x108F184 Offset: 0x108F184 VA: 0x108F184
	public void set_WinPitchMax(float value) { }

	// RVA: 0x108D4B4 Offset: 0x108D4B4 VA: 0x108D4B4
	public void BeginPitchEscalation() { }

	// RVA: 0x108D500 Offset: 0x108D500 VA: 0x108D500
	public void ResetPitchEscalation() { }

	// RVA: 0x108EC60 Offset: 0x108EC60 VA: 0x108EC60
	public void GetFinalHitPlaybackData(out AudioClip clip, out float volume, out float pitch) { }

	// RVA: 0x108F18C Offset: 0x108F18C VA: 0x108F18C Slot: 4
	protected override float GetPitch() { }

	// RVA: 0x108F1D0 Offset: 0x108F1D0 VA: 0x108F1D0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]