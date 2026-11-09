public static class LiveSnapshotBuilder // TypeDefIndex: 4149
{
	// Fields
	private static readonly int[] ColorMap; // 0x0
	private static readonly FieldInfo FiBlasterIce; // 0x4
	private static readonly FieldInfo FiIceHp; // 0x8
	private static readonly FieldInfo FiColorBoxHp; // 0xC
	private static readonly FieldInfo FiShrinkHp; // 0x10
	private static readonly FieldInfo FiBombHp; // 0x14
	private static readonly FieldInfo FiLargeHp; // 0x18
	private static readonly FieldInfo FiScrewHp; // 0x1C
	private static readonly FieldInfo FiSecondaryBullets; // 0x20

	// Methods

	// RVA: 0x105361C Offset: 0x105361C VA: 0x105361C
	private static int[] BuildColorMap() { }

	// RVA: 0x1053880 Offset: 0x1053880 VA: 0x1053880
	private static int MapColor(ColorType live) { }

	// RVA: 0x105390C Offset: 0x105390C VA: 0x105390C
	private static FieldInfo PrivateField(Type type, string name) { }

	// RVA: 0x10539B0 Offset: 0x10539B0 VA: 0x10539B0
	private static int ReflectHp(FieldInfo field, object instance) { }

	// RVA: 0x1053A30 Offset: 0x1053A30 VA: 0x1053A30
	private static int[] ToWire(Vector3Int p) { }

	// RVA: 0x1053ADC Offset: 0x1053ADC VA: 0x1053ADC
	private static float[] ToWire(Vector3 v) { }

	// RVA: 0x1053B88 Offset: 0x1053B88 VA: 0x1053B88
	private static List<int[]> ToWireVoxels(Vector3Int[] positions) { }

	// RVA: 0x1053D28 Offset: 0x1053D28 VA: 0x1053D28
	public static LevelDataWire BuildLevel() { }

	// RVA: 0x1053E58 Offset: 0x1053E58 VA: 0x1053E58
	private static void AddVoxelGroupsFromLive(LevelDataWire level) { }

	// RVA: 0x1055A54 Offset: 0x1055A54 VA: 0x1055A54
	private static void AddQueueFromLive(LevelDataWire level) { }

	// RVA: 0x1056B30 Offset: 0x1056B30 VA: 0x1056B30
	private static BlasterWire MakeBlasterWire(BasePlaceableController placeable, ref int uid, Dictionary<BlasterController, BlasterWire> wireByBlaster) { }

	// RVA: 0x1056858 Offset: 0x1056858 VA: 0x1056858
	private static void AddDockedFromLive(LevelDataWire level) { }

	// RVA: 0x1057240 Offset: 0x1057240 VA: 0x1057240
	private static void AddDockedWire(LevelDataWire level, BlasterController blaster, int dockIndex, bool isPilot) { }

	// RVA: 0x1054490 Offset: 0x1054490 VA: 0x1054490
	private static void AddSpecialObjectsFromLive(LevelDataWire level) { }

	// RVA: 0x10574DC Offset: 0x10574DC VA: 0x10574DC
	private static void AddLargeCubesFromLive(LevelDataWire level) { }

	// RVA: 0x1058248 Offset: 0x1058248 VA: 0x1058248
	public static List<int[]> CollectShootableCells() { }

	// RVA: 0x1058590 Offset: 0x1058590 VA: 0x1058590
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x1056A20 Offset: 0x1056A20 VA: 0x1056A20
	internal static GroupWire <AddVoxelGroupsFromLive>g__GroupFor|17_0(int color, ref LiveSnapshotBuilder.<>c__DisplayClass17_0 ) { }

	[CompilerGenerated]
	// RVA: 0x10580C8 Offset: 0x10580C8 VA: 0x10580C8
	internal static LargeWire <AddLargeCubesFromLive>g__MakeGroup|23_0(LargeVoxelController large) { }

	[CompilerGenerated]
	// RVA: 0x1057F30 Offset: 0x1057F30 VA: 0x1057F30
	internal static void <AddLargeCubesFromLive>g__EmitSingle|23_1(LargeVoxelController large, ref LiveSnapshotBuilder.<>c__DisplayClass23_0 ) { }
}

// Namespace: 
[CompilerGenerated]