public struct DailyDeliveryState // TypeDefIndex: 3552
{
	// Fields
	public readonly int CycleNumber; // 0x0
	public readonly int ClaimedDayCount; // 0x4
	public readonly bool IsClaimableToday; // 0x8

	// Properties
	public int ClaimableDayIndex { get; }

	// Methods

	// RVA: 0x10D6C3C Offset: 0x10D6C3C VA: 0x10D6C3C
	public int get_ClaimableDayIndex() { }

	// RVA: 0x10D9654 Offset: 0x10D9654 VA: 0x10D9654
	public void .ctor(int cycleNumber, int claimedDayCount, bool isClaimableToday) { }
}

// Namespace: Rotatelab.DailyDelivery