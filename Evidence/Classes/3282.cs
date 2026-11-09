public interface ITriggeredOffer // TypeDefIndex: 3282
{
	// Properties
	public abstract MetaScreenType TriggeredOfferOrder { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool IsTriggeredOfferEligible(OfferTrigger trigger);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract MetaScreenType get_TriggeredOfferOrder();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ShowForTrigger(OfferTrigger trigger, Action<bool> onClosed);
}

// Namespace: 
[CompilerGenerated]
[Serializable]