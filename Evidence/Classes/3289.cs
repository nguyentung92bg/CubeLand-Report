public static class BetterWaitForSeconds // TypeDefIndex: 3289
{
	// Fields
	private static readonly Stack<BetterWaitForSeconds.WaitForSeconds> waitForSecondsPool; // 0x0
	private static readonly Stack<BetterWaitForSeconds.WaitForSecondsRealtime> waitForSecondsRealtimePool; // 0x4

	// Methods

	// RVA: 0x107C5AC Offset: 0x107C5AC VA: 0x107C5AC
	public static CustomYieldInstruction Wait(float seconds) { }

	// RVA: 0x107C72C Offset: 0x107C72C VA: 0x107C72C
	public static CustomYieldInstruction WaitRealtime(float seconds) { }

	// RVA: 0x107C8AC Offset: 0x107C8AC VA: 0x107C8AC
	private static void Pool(BetterWaitForSeconds.WaitForSeconds instance) { }

	// RVA: 0x107C94C Offset: 0x107C94C VA: 0x107C94C
	private static void Pool(BetterWaitForSeconds.WaitForSecondsRealtime instance) { }

	// RVA: 0x107C9EC Offset: 0x107C9EC VA: 0x107C9EC
	private static void .cctor() { }
}

// Namespace: Rotatelab