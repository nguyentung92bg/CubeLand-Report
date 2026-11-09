public class DailyDeliverySO : ScriptableObject // TypeDefIndex: 3565
{
	// Fields
	public const int DayCountPerCycle = 7;
	public List<DailyDeliverySO.DayData> oddCycleDays; // 0xC
	public List<DailyDeliverySO.DayData> evenCycleDays; // 0x10
	public List<DailyDeliverySO.RewardTypeData> rewardTypes; // 0x14

	// Methods

	// RVA: 0x10D6C28 Offset: 0x10D6C28 VA: 0x10D6C28
	public List<DailyDeliverySO.DayData> GetCycleDays(int cycleNumber) { }

	// RVA: 0x10D98A0 Offset: 0x10D98A0 VA: 0x10D98A0
	public bool IsSpecialDay(int cycleNumber, int dayIndex) { }

	// RVA: 0x10D9914 Offset: 0x10D9914 VA: 0x10D9914
	public DailyDeliverySO.RewardTypeData GetRewardType(CurrencyType currencyType) { }

	// RVA: 0x10D9A14 Offset: 0x10D9A14 VA: 0x10D9A14
	private TriValidationResult ValidateOddCycleDays() { }

	// RVA: 0x10D9B2C Offset: 0x10D9B2C VA: 0x10D9B2C
	private TriValidationResult ValidateEvenCycleDays() { }

	// RVA: 0x10D9A48 Offset: 0x10D9A48 VA: 0x10D9A48
	private static TriValidationResult ValidateCycleDayCount(List<DailyDeliverySO.DayData> cycleDays) { }

	// RVA: 0x10D9B60 Offset: 0x10D9B60 VA: 0x10D9B60
	private void OnValidate() { }

	// RVA: 0x10D9BFC Offset: 0x10D9BFC VA: 0x10D9BFC
	private void InitializeCycle(List<DailyDeliverySO.DayData> cycleDays, string cycleName) { }

	// RVA: 0x10D9D4C Offset: 0x10D9D4C VA: 0x10D9D4C
	public void FillRewardIcons() { }

	// RVA: 0x10D9EEC Offset: 0x10D9EEC VA: 0x10D9EEC
	private void FillRewardIcons(List<DailyDeliverySO.DayData> cycleDays) { }

	// RVA: 0x10DA56C Offset: 0x10DA56C VA: 0x10DA56C
	public void .ctor() { }
}

// Namespace: Rotatelab.CloudRush