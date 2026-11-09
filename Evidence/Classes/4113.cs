private sealed class PlaceableManager.<>c // TypeDefIndex: 4113
{
	// Fields
	public static readonly PlaceableManager.<>c <>9; // 0x0
	public static Action<BlasterController> <>9__63_1; // 0x4
	public static Func<BasePlaceableController, Vector2Int, bool> <>9__67_1; // 0x8
	public static Action <>9__67_0; // 0xC
	public static Action<BlasterController> <>9__68_0; // 0x10
	public static Action<BlasterController> <>9__68_1; // 0x14
	public static Action<BlasterGeneratorController> <>9__68_2; // 0x18
	public static Action<KeyController> <>9__68_3; // 0x1C
	public static Action<LockController> <>9__68_4; // 0x20
	public static Action<ScissorsController> <>9__68_5; // 0x24
	public static Action<ScissorsController> <>9__68_6; // 0x28
	public static Action<HammerController> <>9__68_7; // 0x2C
	public static Action<HammerController> <>9__68_8; // 0x30
	public static Action<SwordController> <>9__68_9; // 0x34
	public static Action<SwordController> <>9__68_10; // 0x38
	public static Action<PropellerController> <>9__68_11; // 0x3C
	public static Action<PropellerController> <>9__68_12; // 0x40
	public static Action<MacheteController> <>9__68_13; // 0x44
	public static Action<MacheteController> <>9__68_14; // 0x48
	public static Action<StopSignController> <>9__68_15; // 0x4C
	public static Predicate<LockController> <>9__70_0; // 0x50
	public static Predicate<BasePlaceableController> <>9__83_0; // 0x54
	public static Predicate<BasePlaceableController> <>9__83_1; // 0x58
	public static Comparison<BlasterController> <>9__84_0; // 0x5C
	public static Action<PlaceableManager> <>9__89_0; // 0x60
	public static Predicate<BasePlaceableController> <>9__90_0; // 0x64
	public static Action<BasePlaceableController> <>9__90_1; // 0x68

	// Methods

	// RVA: 0x104B18C Offset: 0x104B18C VA: 0x104B18C
	private static void .cctor() { }

	// RVA: 0x104B200 Offset: 0x104B200 VA: 0x104B200
	public void .ctor() { }

	// RVA: 0x104B208 Offset: 0x104B208 VA: 0x104B208
	internal void <AnimateRainbowBlasterEntrance>b__63_1(BlasterController blaster) { }

	// RVA: 0x104B31C Offset: 0x104B31C VA: 0x104B31C
	internal bool <ShiftPlaceablesBehind>b__67_1(BasePlaceableController e, Vector2Int rearBlasterIndex) { }

	// RVA: 0x104B354 Offset: 0x104B354 VA: 0x104B354
	internal void <ShiftPlaceablesBehind>b__67_0() { }

	// RVA: 0x104B3D0 Offset: 0x104B3D0 VA: 0x104B3D0
	internal void <ShiftRearPlaceableForwards>b__68_0(BlasterController blaster) { }

	// RVA: 0x104B3F4 Offset: 0x104B3F4 VA: 0x104B3F4
	internal void <ShiftRearPlaceableForwards>b__68_1(BlasterController blaster) { }

	// RVA: 0x104B4AC Offset: 0x104B4AC VA: 0x104B4AC
	internal void <ShiftRearPlaceableForwards>b__68_2(BlasterGeneratorController blasterGenerator) { }

	// RVA: 0x104B52C Offset: 0x104B52C VA: 0x104B52C
	internal void <ShiftRearPlaceableForwards>b__68_3(KeyController key) { }

	// RVA: 0x104B638 Offset: 0x104B638 VA: 0x104B638
	internal void <ShiftRearPlaceableForwards>b__68_4(LockController lock) { }

	// RVA: 0x104B664 Offset: 0x104B664 VA: 0x104B664
	internal void <ShiftRearPlaceableForwards>b__68_5(ScissorsController scissors) { }

	// RVA: 0x104B68C Offset: 0x104B68C VA: 0x104B68C
	internal void <ShiftRearPlaceableForwards>b__68_6(ScissorsController scissors) { }

	// RVA: 0x104B760 Offset: 0x104B760 VA: 0x104B760
	internal void <ShiftRearPlaceableForwards>b__68_7(HammerController hammer) { }

	// RVA: 0x104B78C Offset: 0x104B78C VA: 0x104B78C
	internal void <ShiftRearPlaceableForwards>b__68_8(HammerController hammer) { }

	// RVA: 0x104B868 Offset: 0x104B868 VA: 0x104B868
	internal void <ShiftRearPlaceableForwards>b__68_9(SwordController sword) { }

	// RVA: 0x104B890 Offset: 0x104B890 VA: 0x104B890
	internal void <ShiftRearPlaceableForwards>b__68_10(SwordController sword) { }

	// RVA: 0x104B96C Offset: 0x104B96C VA: 0x104B96C
	internal void <ShiftRearPlaceableForwards>b__68_11(PropellerController propeller) { }

	// RVA: 0x104B994 Offset: 0x104B994 VA: 0x104B994
	internal void <ShiftRearPlaceableForwards>b__68_12(PropellerController propeller) { }

	// RVA: 0x104BA00 Offset: 0x104BA00 VA: 0x104BA00
	internal void <ShiftRearPlaceableForwards>b__68_13(MacheteController machete) { }

	// RVA: 0x104BA2C Offset: 0x104BA2C VA: 0x104BA2C
	internal void <ShiftRearPlaceableForwards>b__68_14(MacheteController machete) { }

	// RVA: 0x104BA98 Offset: 0x104BA98 VA: 0x104BA98
	internal void <ShiftRearPlaceableForwards>b__68_15(StopSignController stopSign) { }

	// RVA: 0x104BAC0 Offset: 0x104BAC0 VA: 0x104BAC0
	internal bool <TryUseKey>b__70_0(LockController e) { }

	// RVA: 0x104BB20 Offset: 0x104BB20 VA: 0x104BB20
	internal bool <OnWinSequenceStartedCoroutine>b__83_0(BasePlaceableController e) { }

	// RVA: 0x104BB6C Offset: 0x104BB6C VA: 0x104BB6C
	internal bool <OnWinSequenceStartedCoroutine>b__83_1(BasePlaceableController e) { }

	// RVA: 0x104BBBC Offset: 0x104BBBC VA: 0x104BBBC
	internal int <ConsumeBulletsOfQueuedBlastersExternally>b__84_0(BlasterController a, BlasterController b) { }

	// RVA: 0x104BC20 Offset: 0x104BC20 VA: 0x104BC20
	internal void <OnShuffleAnimationStartedHandler>b__89_0(PlaceableManager manager) { }

	// RVA: 0x104BC40 Offset: 0x104BC40 VA: 0x104BC40
	internal bool <ShufflePlaceables>b__90_0(BasePlaceableController e) { }

	// RVA: 0x104BD20 Offset: 0x104BD20 VA: 0x104BD20
	internal void <ShufflePlaceables>b__90_1(BasePlaceableController placeable) { }
}

// Namespace: 
[CompilerGenerated]