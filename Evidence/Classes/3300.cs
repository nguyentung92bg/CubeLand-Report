public static class Utilities // TypeDefIndex: 3300
{
	// Fields
	public static readonly StringBuilder SharedStringBuilder; // 0x0
	private static readonly string[] numberToStringDecimalPointsFormat; // 0x4

	// Methods

	// RVA: 0x107D840 Offset: 0x107D840 VA: 0x107D840
	private static void .cctor() { }

	// RVA: 0x107DA1C Offset: 0x107DA1C VA: 0x107DA1C
	public static string FormatNumberWithDecimals(float number, int decimals = 2) { }

	// RVA: 0x107DB00 Offset: 0x107DB00 VA: 0x107DB00
	public static string FormatNumberWithDecimals(double number, int decimals = 2) { }

	// RVA: 0x107DBE8 Offset: 0x107DBE8 VA: 0x107DBE8
	public static string AbbreviateNumber(long number, int decimals = 2) { }

	// RVA: 0x107DF08 Offset: 0x107DF08 VA: 0x107DF08
	public static string Postfix(int index) { }

	// RVA: 0x107DFA0 Offset: 0x107DFA0 VA: 0x107DFA0
	public static bool CanProcessKeyboardShortcuts() { }

	// RVA: -1 Offset: -1
	public static bool TryChangeValue<T>(ref T currentValue, T newValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1663D40 Offset: 0x1663D40 VA: 0x1663D40
	|-Utilities.TryChangeValue<bool>
	|
	|-RVA: 0x1663DB8 Offset: 0x1663DB8 VA: 0x1663DB8
	|-Utilities.TryChangeValue<int>
	|
	|-RVA: 0x1663E28 Offset: 0x1663E28 VA: 0x1663E28
	|-Utilities.TryChangeValue<object>
	|
	|-RVA: 0x1663EAC Offset: 0x1663EAC VA: 0x1663EAC
	|-Utilities.TryChangeValue<ulong>
	|
	|-RVA: 0x1663F30 Offset: 0x1663F30 VA: 0x1663F30
	|-Utilities.TryChangeValue<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1076464 Offset: 0x1076464 VA: 0x1076464
	public static void ProcessException(Exception e, CancellationToken cancellationToken) { }

	[CompilerGenerated]
	// RVA: 0x107E100 Offset: 0x107E100 VA: 0x107E100
	internal static bool <ProcessException>g__IsExceptionHarmless|9_0(Exception e, CancellationToken cancellationToken) { }
}

// Namespace: 
[CompilerGenerated]