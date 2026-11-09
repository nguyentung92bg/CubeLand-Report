public struct FailProgressLossInfo // TypeDefIndex: 3756
{
	// Fields
	public readonly bool CrownTournament; // 0x0
	public readonly bool WinStreak; // 0x1
	public readonly bool CloudRush; // 0x2

	// Properties
	public bool HasAny { get; }

	// Methods

	// RVA: 0x111D0B4 Offset: 0x111D0B4 VA: 0x111D0B4
	public bool get_HasAny() { }

	// RVA: 0x111D0E4 Offset: 0x111D0E4 VA: 0x111D0E4
	private void .ctor(bool crownTournament, bool winStreak, bool cloudRush) { }

	// RVA: 0x111D0F4 Offset: 0x111D0F4 VA: 0x111D0F4
	public static FailProgressLossInfo Collect() { }
}

// Namespace: Rotatelab.UI