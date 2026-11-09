private sealed class AdManager.<WaitForegroundCoroutine>d__50 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 3657
{
	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public AdManager <>4__this; // 0x10
	public bool restartOnResume; // 0x14
	public Func<bool> isDone; // 0x18
	public float timeoutSeconds; // 0x1C
	private float <elapsed>5__2; // 0x20
	private int <lastResumeCount>5__3; // 0x24

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x10F5E38 Offset: 0x10F5E38 VA: 0x10F5E38
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x10F899C Offset: 0x10F899C VA: 0x10F899C Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x10F89A0 Offset: 0x10F89A0 VA: 0x10F89A0 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x10F8ABC Offset: 0x10F8ABC VA: 0x10F8ABC Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x10F8AC4 Offset: 0x10F8AC4 VA: 0x10F8AC4 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x10F8B08 Offset: 0x10F8B08 VA: 0x10F8B08 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}

// Namespace: Rotatelab.Ads