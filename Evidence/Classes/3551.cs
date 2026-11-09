public static class DailyDeliveryProgress // TypeDefIndex: 3551
{
	// Properties
	private static CloudSaveData Data { get; }

	// Methods

	// RVA: 0x10D94C8 Offset: 0x10D94C8 VA: 0x10D94C8
	private static CloudSaveData get_Data() { }

	// RVA: 0x10D61B4 Offset: 0x10D61B4 VA: 0x10D61B4
	public static DailyDeliveryState Evaluate(DailyDeliverySO dailyDeliverySo) { }

	// RVA: 0x10D94D0 Offset: 0x10D94D0 VA: 0x10D94D0
	public static DailyDeliveryState Resolve(DateTime lastClaim, int cycleNumber, int claimedDayCount, int cycleDayCount) { }

	// RVA: 0x10D701C Offset: 0x10D701C VA: 0x10D701C
	public static void Commit(DailyDeliveryState state) { }

	// RVA: 0x10D966C Offset: 0x10D966C VA: 0x10D966C
	public static void SetDateForCreative(DateTime date) { }
}

// Namespace: Rotatelab.DailyDelivery