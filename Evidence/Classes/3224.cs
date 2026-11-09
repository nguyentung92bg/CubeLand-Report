public abstract class GameActionBase // TypeDefIndex: 3224
{
	// Methods

	// RVA: 0xFDC6FC Offset: 0xFDC6FC VA: 0xFDC6FC
	protected void .ctor(string name) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void DestroyEvent();

	[Conditional("UNITY_EDITOR")]
	// RVA: 0xFDC704 Offset: 0xFDC704 VA: 0xFDC704
	protected void RecordEvent() { }

	[Conditional("UNITY_EDITOR")]
	// RVA: 0xFDC708 Offset: 0xFDC708 VA: 0xFDC708
	protected void ResetOnDomainReload() { }
}

// Namespace: Rotatelab