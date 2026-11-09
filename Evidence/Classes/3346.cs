private sealed class AudioManager.<>c // TypeDefIndex: 3346
{
	// Fields
	public static readonly AudioManager.<>c <>9; // 0x0
	public static Action<AudioManager> <>9__23_1; // 0x4
	public static Action<AudioManager, SoundType> <>9__30_0; // 0x8
	public static Action<AudioManager> <>9__31_0; // 0xC
	public static Action<AudioManager.OneShotData> <>9__32_0; // 0x10
	public static Action<AudioSource> <>9__33_0; // 0x14

	// Methods

	// RVA: 0x108EEE0 Offset: 0x108EEE0 VA: 0x108EEE0
	private static void .cctor() { }

	// RVA: 0x108EF54 Offset: 0x108EF54 VA: 0x108EF54
	public void .ctor() { }

	// RVA: 0x108EF5C Offset: 0x108EF5C VA: 0x108EF5C
	internal void <SetMusic>b__23_1(AudioManager this) { }

	// RVA: 0x108EF90 Offset: 0x108EF90 VA: 0x108EF90
	internal void <PlaySfxFinalHit>b__30_0(AudioManager this, SoundType st) { }

	// RVA: 0x108EFB8 Offset: 0x108EFB8 VA: 0x108EFB8
	internal void <PlayFinalHitNow>b__31_0(AudioManager this) { }

	// RVA: 0x108F010 Offset: 0x108F010 VA: 0x108F010
	internal void <PlaySfxOneShot>b__32_0(AudioManager.OneShotData data) { }

	// RVA: 0x108F0B0 Offset: 0x108F0B0 VA: 0x108F0B0
	internal void <PlaySfx>b__33_0(AudioSource instance) { }
}

// Namespace: Rotatelab.Audio
[DefaultExecutionOrder(-1000)]