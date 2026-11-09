private sealed class CloudSaveManager.<>c // TypeDefIndex: 3849
{
	// Fields
	public static readonly CloudSaveManager.<>c <>9; // 0x0
	public static Predicate<EnergyModifier> <>9__46_0; // 0x4
	public static Func<InventoryItem, string> <>9__47_0; // 0x8
	public static Func<InventoryItem, long> <>9__47_1; // 0xC
	public static Extensions.DictionaryValueConverter<string, Stat, long> <>9__48_0; // 0x10
	public static Predicate<WriteStorageObject> <>9__49_0; // 0x14
	public static Predicate<WriteStorageObject> <>9__49_1; // 0x18

	// Methods

	// RVA: 0x1146DB8 Offset: 0x1146DB8 VA: 0x1146DB8
	private static void .cctor() { }

	// RVA: 0x1146E2C Offset: 0x1146E2C VA: 0x1146E2C
	public void .ctor() { }

	// RVA: 0x1146E34 Offset: 0x1146E34 VA: 0x1146E34
	internal bool <TryMigrateFromHiroEnergiesSystem>b__46_0(EnergyModifier e) { }

	// RVA: 0x1146E98 Offset: 0x1146E98 VA: 0x1146E98
	internal string <TryMigrateFromHiroInventorySystem>b__47_0(InventoryItem e) { }

	// RVA: 0x1146EB4 Offset: 0x1146EB4 VA: 0x1146EB4
	internal long <TryMigrateFromHiroInventorySystem>b__47_1(InventoryItem e) { }

	// RVA: 0x1146ED8 Offset: 0x1146ED8 VA: 0x1146ED8
	internal long <TryMigrateFromHiroStatsSystem>b__48_0(string id, Stat stat) { }

	// RVA: 0x1146EFC Offset: 0x1146EFC VA: 0x1146EFC
	internal bool <TryMigrateFromHiroStorageSystem>b__49_0(WriteStorageObject e) { }

	// RVA: 0x1146F60 Offset: 0x1146F60 VA: 0x1146F60
	internal bool <TryMigrateFromHiroStorageSystem>b__49_1(WriteStorageObject e) { }
}

// Namespace: 
[CompilerGenerated]