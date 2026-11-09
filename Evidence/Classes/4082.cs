private sealed class BlasterController.<>c // TypeDefIndex: 4082
{
	// Fields
	public static readonly BlasterController.<>c <>9; // 0x0
	public static Func<ConnectionController, BlasterController, bool> <>9__120_1; // 0x4
	public static Action<GameObject> <>9__123_0; // 0x8
	public static Action<ChainConnectionController> <>9__124_0; // 0xC
	public static Predicate<BlasterController> <>9__125_0; // 0x10
	public static Action<BlasterController> <>9__126_3; // 0x14
	public static Action<BlasterController> <>9__138_0; // 0x18
	public static Action<BlasterController> <>9__143_0; // 0x1C
	public static Predicate<BlasterController> <>9__147_0; // 0x20
	public static Action<BlasterController> <>9__152_0; // 0x24
	public static Predicate<BlasterController> <>9__158_1; // 0x28
	public static Action<BlasterController> <>9__161_0; // 0x2C
	public static Action<BlasterController> <>9__161_1; // 0x30
	public static Action<BlasterController> <>9__170_0; // 0x34

	// Methods

	// RVA: 0x103937C Offset: 0x103937C VA: 0x103937C
	private static void .cctor() { }

	// RVA: 0x10393F0 Offset: 0x10393F0 VA: 0x10393F0
	public void .ctor() { }

	// RVA: 0x10393F8 Offset: 0x10393F8 VA: 0x10393F8
	internal bool <BreakConnection>b__120_1(ConnectionController connection, BlasterController to) { }

	// RVA: 0x1039478 Offset: 0x1039478 VA: 0x1039478
	internal void <TryBreakIce>b__123_0(GameObject iceObject) { }

	// RVA: 0x10394A0 Offset: 0x10394A0 VA: 0x10394A0
	internal void <SwingChains>b__124_0(ChainConnectionController connection) { }

	// RVA: 0x10394DC Offset: 0x10394DC VA: 0x10394DC
	internal bool <TryBreakChains>b__125_0(BlasterController blaster) { }

	// RVA: 0x1039500 Offset: 0x1039500 VA: 0x1039500
	internal void <BreakChains>b__126_3(BlasterController blaster) { }

	// RVA: 0x1039520 Offset: 0x1039520 VA: 0x1039520
	internal void <AnimateHiddenReveal>b__138_0(BlasterController this) { }

	// RVA: 0x10397F0 Offset: 0x10397F0 VA: 0x10397F0
	internal void <WarningAnimation>b__143_0(BlasterController this) { }

	// RVA: 0x1039810 Offset: 0x1039810 VA: 0x1039810
	internal bool <IsPlaceable>b__147_0(BlasterController blaster) { }

	// RVA: 0x103983C Offset: 0x103983C VA: 0x103983C
	internal void <Place>b__152_0(BlasterController this) { }

	// RVA: 0x103985C Offset: 0x103985C VA: 0x103985C
	internal bool <ShootingCoroutine>b__158_1(BlasterController e) { }

	// RVA: 0x103988C Offset: 0x103988C VA: 0x103988C
	internal void <ShowSecondaryBlaster>b__161_0(BlasterController this) { }

	// RVA: 0x1039B3C Offset: 0x1039B3C VA: 0x1039B3C
	internal void <ShowSecondaryBlaster>b__161_1(BlasterController this) { }

	// RVA: 0x1039B98 Offset: 0x1039B98 VA: 0x1039B98
	internal void <Destroy>b__170_0(BlasterController this) { }
}

// Namespace: 
[CompilerGenerated]