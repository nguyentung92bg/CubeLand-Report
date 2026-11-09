public class CurrencyManager : SingletonBehaviour<CurrencyManager> // TypeDefIndex: 3320
{
	// Fields
	public readonly ObservableLong Jewel; // 0x10
	public readonly ObservableBooster PreBooster1; // 0x14
	public readonly ObservableBooster PreBooster2; // 0x18
	public readonly SavedInt CoinAmountFromPreviousSession; // 0x1C
	public readonly SavedInt JewelAmountFromPreviousSession; // 0x20
	private long coinsEarnedFromTemporarySources; // 0x28

	// Properties
	public ObservableLong Coins { get; }
	public ObservableBooster Magnet { get; }
	public ObservableBooster MagicWand { get; }
	public ObservableBooster Bounce { get; }
	public ObservableBooster Vacuum { get; }
	public ObservableBooster ExtraSlot { get; }

	// Methods

	// RVA: 0x1083318 Offset: 0x1083318 VA: 0x1083318
	public ObservableLong get_Coins() { }

	// RVA: 0x108333C Offset: 0x108333C VA: 0x108333C
	public ObservableBooster get_Magnet() { }

	// RVA: 0x1083360 Offset: 0x1083360 VA: 0x1083360
	public ObservableBooster get_MagicWand() { }

	// RVA: 0x1083384 Offset: 0x1083384 VA: 0x1083384
	public ObservableBooster get_Bounce() { }

	// RVA: 0x10833A8 Offset: 0x10833A8 VA: 0x10833A8
	public ObservableBooster get_Vacuum() { }

	// RVA: 0x10833CC Offset: 0x10833CC VA: 0x10833CC
	public ObservableBooster get_ExtraSlot() { }

	// RVA: 0x10833F0 Offset: 0x10833F0 VA: 0x10833F0 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1083574 Offset: 0x1083574 VA: 0x1083574
	protected void Start() { }

	// RVA: 0x1083730 Offset: 0x1083730 VA: 0x1083730
	protected void OnDestroy() { }

	// RVA: 0x10808A4 Offset: 0x10808A4 VA: 0x10808A4
	public ObservableLong GetCurrency(CurrencyType type) { }

	// RVA: 0x10837E8 Offset: 0x10837E8 VA: 0x10837E8
	public ObservableBooster GetBooster(bool isPreBooster, int boosterId) { }

	// RVA: 0x10839A0 Offset: 0x10839A0 VA: 0x10839A0
	public void IncreaseCurrency(CurrencyType type, long diff, Nullable<float> animationDelay) { }

	// RVA: 0x1083C68 Offset: 0x1083C68 VA: 0x1083C68
	public void OnTemporaryCoinsCollected(long amount) { }

	// RVA: 0x1083734 Offset: 0x1083734 VA: 0x1083734
	private void RefundTemporaryCoins() { }

	// RVA: 0x1083CE8 Offset: 0x1083CE8 VA: 0x1083CE8
	private void OnLevelFailedHandler() { }

	// RVA: 0x1083CEC Offset: 0x1083CEC VA: 0x1083CEC
	private void OnLevelSucceededHandler() { }

	// RVA: 0x1083DC4 Offset: 0x1083DC4 VA: 0x1083DC4
	private void OnQuitLevelHandler() { }

	// RVA: 0x1083DC8 Offset: 0x1083DC8 VA: 0x1083DC8
	public void .ctor() { }
}

// Namespace: Rotatelab.Currency