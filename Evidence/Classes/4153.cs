private sealed class RemoteSolverClient.<Solve>d__5 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 4153
{
	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public Action<SolveStreamEvent> onProgress; // 0x10
	public LevelDataWire level; // 0x14
	public int seed; // 0x18
	public List<int[]> shootableCells; // 0x1C
	public Action<UnityWebRequest> onRequestStarted; // 0x20
	public Action<string> onError; // 0x24
	private RemoteSolverClient.<>c__DisplayClass5_0 <>8__1; // 0x28
	public Action<SolveResult> onResult; // 0x2C
	private UnityWebRequest <webRequest>5__2; // 0x30

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x105B42C Offset: 0x105B42C VA: 0x105B42C
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x105B448 Offset: 0x105B448 VA: 0x105B448 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x105B460 Offset: 0x105B460 VA: 0x105B460 Slot: 6
	private bool MoveNext() { }

	// RVA: 0x105BE64 Offset: 0x105BE64 VA: 0x105BE64
	private void <>m__Finally1() { }

	[DebuggerHidden]
	// RVA: 0x105BF24 Offset: 0x105BF24 VA: 0x105BF24 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x105BF2C Offset: 0x105BF2C VA: 0x105BF2C Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x105BF70 Offset: 0x105BF70 VA: 0x105BF70 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}

// Namespace: Rotatelab.Scripts