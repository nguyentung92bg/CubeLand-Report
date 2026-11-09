public abstract class BaseBoosterController : MonoBehaviour // TypeDefIndex: 3807
{
	// Fields
	private static readonly List<CurrencyType> activeBoosters; // 0x0

	// Properties
	protected abstract CurrencyType BoosterType { get; }
	public BoosterBaseData Data { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract CurrencyType get_BoosterType();

	// RVA: 0x1131AC0 Offset: 0x1131AC0 VA: 0x1131AC0
	public BoosterBaseData get_Data() { }

	// RVA: 0x1131C7C Offset: 0x1131C7C VA: 0x1131C7C Slot: 5
	protected virtual void OnEnable() { }

	// RVA: 0x1131DE8 Offset: 0x1131DE8 VA: 0x1131DE8 Slot: 6
	protected virtual void OnDisable() { }

	// RVA: 0x1131F54 Offset: 0x1131F54 VA: 0x1131F54
	private void OnBoosterStarted(CurrencyType boosterType) { }

	// RVA: 0x1132070 Offset: 0x1132070 VA: 0x1132070
	private void OnBoosterCancelled(CurrencyType boosterType) { }

	// RVA: 0x1132168 Offset: 0x1132168 VA: 0x1132168
	protected void RemoveFromActiveBoosters() { }

	// RVA: 0x113229C Offset: 0x113229C VA: 0x113229C
	protected void Use() { }

	// RVA: 0x1132370 Offset: 0x1132370 VA: 0x1132370 Slot: 7
	protected virtual void OnActivated() { }

	// RVA: 0x11323E4 Offset: 0x11323E4 VA: 0x11323E4 Slot: 8
	protected virtual void OnDeactivated() { }

	// RVA: 0x1132458 Offset: 0x1132458 VA: 0x1132458 Slot: 9
	protected virtual void OnUsed() { }

	// RVA: 0x11324CC Offset: 0x11324CC VA: 0x11324CC
	public static bool IsBoosterActive(CurrencyType boosterType) { }

	// RVA: 0x113256C Offset: 0x113256C VA: 0x113256C
	public static bool IsAnyBoosterActive() { }

	// RVA: 0x11325FC Offset: 0x11325FC VA: 0x11325FC
	protected void .ctor() { }

	// RVA: 0x1132604 Offset: 0x1132604 VA: 0x1132604
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]