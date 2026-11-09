public class ForcedOfferPopupTracker // TypeDefIndex: 3275
{
	// Fields
	private readonly SavedInt arrivalCount; // 0x8
	private readonly SavedInt windowShownCount; // 0xC
	private readonly SavedDateTime limitWindowStart; // 0x10
	private readonly SavedDateTime lastSessionStartShown; // 0x14
	private bool isSessionStartPopupPending; // 0x18

	// Methods

	// RVA: 0x1079438 Offset: 0x1079438 VA: 0x1079438
	public void .ctor(string key) { }

	// RVA: 0x107979C Offset: 0x107979C VA: 0x107979C
	public static bool IsHomeUnlocked(OfferPopupRule rule) { }

	// RVA: 0x107982C Offset: 0x107982C VA: 0x107982C
	public static bool IsShopUnlocked(OfferPopupRule rule) { }

	// RVA: 0x10798BC Offset: 0x10798BC VA: 0x10798BC
	public bool ShouldRequestOnMainMenuArrival(OfferPopupRule rule, bool isSessionStart) { }

	// RVA: 0x1079DF4 Offset: 0x1079DF4 VA: 0x1079DF4
	public void MarkShown() { }

	// RVA: 0x1079B68 Offset: 0x1079B68 VA: 0x1079B68
	private void ResetLimitWindowIfExpired(OfferPopupRule rule) { }
}

// Namespace: 
[CompilerGenerated]