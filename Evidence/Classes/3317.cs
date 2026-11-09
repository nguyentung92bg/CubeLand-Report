public class SavedDateTime : SavedValue<DateTime> // TypeDefIndex: 3317
{
	// Fields
	private readonly bool useDateTimeNowAsDefault; // 0x30

	// Methods

	// RVA: 0x107971C Offset: 0x107971C VA: 0x107971C
	public void .ctor(string key, DateTime defaultValue, bool useDateTimeNowAsDefault = False) { }

	// RVA: 0x108322C Offset: 0x108322C VA: 0x108322C Slot: 4
	protected override DateTime GetSavedValue() { }

	// RVA: 0x1083300 Offset: 0x1083300 VA: 0x1083300 Slot: 5
	protected override void SetSavedValue(DateTime value) { }
}

// Namespace: Rotatelab.Save