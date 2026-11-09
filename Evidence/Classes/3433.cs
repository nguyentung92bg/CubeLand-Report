public static class TimeOfDayExtensions // TypeDefIndex: 3433
{
	// Fields
	private static readonly TimeSpan[,] times; // 0x0
	private static readonly float[] timeElapseAmounts; // 0x4
	private static int lastTimeElapseAmountCalculationFrame; // 0x8

	// Methods

	// RVA: 0x10B1A80 Offset: 0x10B1A80 VA: 0x10B1A80
	public static float[] CalculateElapsedPercentagesToday() { }

	[Extension]
	// RVA: 0x10B1F88 Offset: 0x10B1F88 VA: 0x10B1F88
	public static float ElapsedPercentageToday(IList<TimeOfDay> times) { }

	// RVA: 0x10B2224 Offset: 0x10B2224 VA: 0x10B2224
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]