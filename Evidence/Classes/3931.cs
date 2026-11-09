public class SatoriNoAdsBundleConfigFlag : SatoriBundleConfigFlag // TypeDefIndex: 3931
{
	// Fields
	public List<SatoriNoAdsBundleConfigFlag.EcpmOverride> ecpmOverrides; // 0x1C
	private bool isEcpmApplied; // 0x20

	// Properties
	protected override CurrencyType RequiredElementType { get; }

	// Methods

	// RVA: 0xFE87B4 Offset: 0xFE87B4 VA: 0xFE87B4 Slot: 5
	protected override CurrencyType get_RequiredElementType() { }

	// RVA: 0xFE87BC Offset: 0xFE87BC VA: 0xFE87BC
	public void RefreshBundle() { }

	// RVA: 0xFE88DC Offset: 0xFE88DC VA: 0xFE88DC Slot: 7
	protected override void Apply() { }

	// RVA: 0xFE8920 Offset: 0xFE8920 VA: 0xFE8920 Slot: 6
	protected override SatoriBundleConfigFlag.BundleConfig SelectConfig() { }

	// RVA: 0xFE8AE8 Offset: 0xFE8AE8 VA: 0xFE8AE8
	public void .ctor() { }
}

// Namespace: Rotatelab.Networking
[Serializable]