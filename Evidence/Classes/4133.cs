public class StopSignController : BasePlaceableController // TypeDefIndex: 4133
{
	// Fields
	[SerializeField]
	private TMP_Text hpText; // 0x40
	[CompilerGenerated]
	private StopSignController.AnimationState <State>k__BackingField; // 0x44
	private int health; // 0x48
	private Tween hitResetTween; // 0x50

	// Properties
	public StopSignController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x104DCB4 Offset: 0x104DCB4 VA: 0x104DCB4
	public StopSignController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x104DCBC Offset: 0x104DCBC VA: 0x104DCBC
	private void set_State(StopSignController.AnimationState value) { }

	// RVA: 0x104DCC4 Offset: 0x104DCC4 VA: 0x104DCC4
	private void OnEnable() { }

	// RVA: 0x104DD88 Offset: 0x104DD88 VA: 0x104DD88
	private void OnDisable() { }

	// RVA: 0x1043048 Offset: 0x1043048 VA: 0x1043048
	public void Init(int health) { }

	// RVA: 0x1046B80 Offset: 0x1046B80 VA: 0x1046B80
	public void UpdateAnimationState(StopSignController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x104DE4C Offset: 0x104DE4C VA: 0x104DE4C
	private void UpdateHealthText() { }

	// RVA: 0x104DEC4 Offset: 0x104DEC4 VA: 0x104DEC4
	private void TryBreak() { }

	// RVA: 0x104E034 Offset: 0x104E034 VA: 0x104E034
	private void Destroy() { }

	// RVA: 0x104E204 Offset: 0x104E204 VA: 0x104E204
	private void OnPlaceableLeftQueueHandler(BasePlaceableController placeable) { }

	// RVA: 0x104E290 Offset: 0x104E290 VA: 0x104E290
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x104E298 Offset: 0x104E298 VA: 0x104E298
	private void <TryBreak>b__13_0() { }

	[CompilerGenerated]
	// RVA: 0x104E2A4 Offset: 0x104E2A4 VA: 0x104E2A4
	private void <Destroy>b__14_1() { }
}

// Namespace: 