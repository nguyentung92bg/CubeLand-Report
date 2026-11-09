private sealed class DockManager.<>c // TypeDefIndex: 4009
{
	// Fields
	public static readonly DockManager.<>c <>9; // 0x0
	public static Predicate<BaseBlasterDockController> <>9__44_0; // 0x4
	public static Predicate<BaseBlasterDockController> <>9__46_0; // 0x8
	public static Converter<PilotBlasterDockController, Vector3> <>9__47_0; // 0xC
	public static Converter<BlasterGhostDockController, Vector3> <>9__47_1; // 0x10
	public static Action<BlasterController> <>9__52_0; // 0x14
	public static Predicate<BlasterDockController> <>9__52_3; // 0x18
	public static Comparison<BlasterController> <>9__52_1; // 0x1C
	public static Predicate<BaseBlasterDockController> <>9__52_4; // 0x20
	public static Predicate<UtilityDockController> <>9__53_0; // 0x24
	public static Predicate<BlasterGhostDockController> <>9__56_0; // 0x28
	public static Predicate<UtilityDockController> <>9__59_0; // 0x2C
	public static Predicate<BlasterGhostDockController> <>9__59_1; // 0x30
	public static Comparison<BlasterController> <>9__64_0; // 0x34
	public static Predicate<UtilityDockController> <>9__70_0; // 0x38

	// Methods

	// RVA: 0x100969C Offset: 0x100969C VA: 0x100969C
	private static void .cctor() { }

	// RVA: 0x1009710 Offset: 0x1009710 VA: 0x1009710
	public void .ctor() { }

	// RVA: 0x1009718 Offset: 0x1009718 VA: 0x1009718
	internal bool <get_ShootingBlasterCount>b__44_0(BaseBlasterDockController e) { }

	// RVA: 0x1009800 Offset: 0x1009800 VA: 0x1009800
	internal bool <get_AnyBlasterHasShootableTarget>b__46_0(BaseBlasterDockController e) { }

	// RVA: 0x10098E8 Offset: 0x10098E8 VA: 0x10098E8
	internal Vector3 <Awake>b__47_0(PilotBlasterDockController e) { }

	// RVA: 0x1009948 Offset: 0x1009948 VA: 0x1009948
	internal Vector3 <Awake>b__47_1(BlasterGhostDockController e) { }

	// RVA: 0x10099A8 Offset: 0x10099A8 VA: 0x10099A8
	internal void <TryPlaceBlaster>b__52_0(BlasterController e) { }

	// RVA: 0x10099CC Offset: 0x10099CC VA: 0x10099CC
	internal bool <TryPlaceBlaster>b__52_3(BlasterDockController e) { }

	// RVA: 0x1009A70 Offset: 0x1009A70 VA: 0x1009A70
	internal int <TryPlaceBlaster>b__52_1(BlasterController e1, BlasterController e2) { }

	// RVA: 0x1009B20 Offset: 0x1009B20 VA: 0x1009B20
	internal bool <TryPlaceBlaster>b__52_4(BaseBlasterDockController e) { }

	// RVA: 0x1009B4C Offset: 0x1009B4C VA: 0x1009B4C
	internal bool <PlaceUtility>b__53_0(UtilityDockController e) { }

	// RVA: 0x1009B78 Offset: 0x1009B78 VA: 0x1009B78
	internal bool <MoveBlastersToGhostDocksCoroutine>b__56_0(BlasterGhostDockController e) { }

	// RVA: 0x1009BA4 Offset: 0x1009BA4 VA: 0x1009BA4
	internal bool <OnDockEmptied>b__59_0(UtilityDockController e) { }

	// RVA: 0x1009C48 Offset: 0x1009C48 VA: 0x1009C48
	internal bool <OnDockEmptied>b__59_1(BlasterGhostDockController e) { }

	// RVA: 0x1009CEC Offset: 0x1009CEC VA: 0x1009CEC
	internal int <PlayOnCoroutine>b__64_0(BlasterController e1, BlasterController e2) { }

	// RVA: 0x1009D3C Offset: 0x1009D3C VA: 0x1009D3C
	internal bool <OnBlasterShiftingFrontCompletedHandler>b__70_0(UtilityDockController e) { }
}

// Namespace: 
[CompilerGenerated]