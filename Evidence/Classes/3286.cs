public static class TriggeredOfferPresenter // TypeDefIndex: 3286
{
	// Fields
	private static readonly List<ITriggeredOffer> offers; // 0x0
	private static readonly Queue<ITriggeredOffer> queue; // 0x4
	private static readonly object pauseSource; // 0x8
	private static Action onCompleted; // 0xC

	// Methods

	// RVA: 0x107B5C0 Offset: 0x107B5C0 VA: 0x107B5C0
	public static void Register(ITriggeredOffer offer) { }

	// RVA: 0x107B6B4 Offset: 0x107B6B4 VA: 0x107B6B4
	public static void Unregister(ITriggeredOffer offer) { }

	// RVA: 0x107B754 Offset: 0x107B754 VA: 0x107B754
	public static void Present(OfferTrigger trigger, Action onCompleted) { }

	// RVA: 0x107BE88 Offset: 0x107BE88 VA: 0x107BE88
	private static void ShowNext(OfferTrigger trigger) { }

	// RVA: 0x107C188 Offset: 0x107C188 VA: 0x107C188
	private static void .cctor() { }
}

// Namespace: 