public class BlasterDockController : BaseBlasterDockController // TypeDefIndex: 4022
{
	// Fields
	private static readonly string[] idleAnimationsPerDifficulty; // 0x0
	private static readonly string[] maxAnimationsPerDifficulty; // 0x4
	[SerializeField]
	private Animator animator; // 0x18
	[SerializeField]
	private Renderer slotRenderer; // 0x1C
	[SerializeField]
	private Material extraSlotMaterial; // 0x20
	[SerializeField]
	private Material lightSlotMaterial; // 0x24
	[SerializeField]
	private RuntimeAnimatorController lightAnimatorController; // 0x28
	[SerializeField]
	private IvyLockController ivyLockPrefab; // 0x2C
	private Coroutine animatorSleepCoroutine; // 0x30
	private LevelDifficulty levelDifficulty; // 0x34
	private bool isExtraSlot; // 0x38
	private Material defaultSlotMaterial; // 0x3C
	private RuntimeAnimatorController defaultAnimatorController; // 0x40
	[CompilerGenerated]
	private BlasterDockController.AnimationState <State>k__BackingField; // 0x44
	[CompilerGenerated]
	private IvyLockController <CurrentIvyLock>k__BackingField; // 0x48

	// Properties
	public BlasterDockController.AnimationState State { get; set; }
	public IvyLockController CurrentIvyLock { get; set; }
	public bool HasIvyLock { get; }
	public override bool IsUsable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x100C608 Offset: 0x100C608 VA: 0x100C608
	public BlasterDockController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x100C610 Offset: 0x100C610 VA: 0x100C610
	private void set_State(BlasterDockController.AnimationState value) { }

	[CompilerGenerated]
	// RVA: 0x100C618 Offset: 0x100C618 VA: 0x100C618
	public IvyLockController get_CurrentIvyLock() { }

	[CompilerGenerated]
	// RVA: 0x100C620 Offset: 0x100C620 VA: 0x100C620
	private void set_CurrentIvyLock(IvyLockController value) { }

	// RVA: 0x100C628 Offset: 0x100C628 VA: 0x100C628
	public bool get_HasIvyLock() { }

	// RVA: 0x100C698 Offset: 0x100C698 VA: 0x100C698 Slot: 4
	public override bool get_IsUsable() { }

	// RVA: 0x100C74C Offset: 0x100C74C VA: 0x100C74C
	protected void Awake() { }

	// RVA: 0x100C7B4 Offset: 0x100C7B4 VA: 0x100C7B4 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x100C9E0 Offset: 0x100C9E0 VA: 0x100C9E0 Slot: 6
	protected override void OnDisable() { }

	// RVA: 0x10057A8 Offset: 0x10057A8 VA: 0x10057A8
	public void Init(LevelDifficulty levelDifficulty, bool isExtraSlot, bool hasIvyLock) { }

	// RVA: 0x100D098 Offset: 0x100D098 VA: 0x100D098
	public void RefreshLightMode() { }

	// RVA: 0x100CC0C Offset: 0x100CC0C VA: 0x100CC0C
	private void ApplyLightMode() { }

	// RVA: 0x100CE9C Offset: 0x100CE9C VA: 0x100CE9C
	private void UpdateAnimationState(BlasterDockController.AnimationState state) { }

	// RVA: 0x100D0CC Offset: 0x100D0CC VA: 0x100D0CC
	private IEnumerator SleepAnimatorAfterCurrentTransitionCoroutine() { }

	// RVA: 0x100D160 Offset: 0x100D160 VA: 0x100D160
	private void OnFailSearchStateChanged(bool isEnabled) { }

	// RVA: 0x100D190 Offset: 0x100D190 VA: 0x100D190
	private void OnLevelFailedHandler() { }

	// RVA: 0x100D198 Offset: 0x100D198 VA: 0x100D198
	private void OnPlayOnRequestedHandler(PlayOnOffer offer) { }

	// RVA: 0x100D1A0 Offset: 0x100D1A0 VA: 0x100D1A0
	public void .ctor() { }

	// RVA: 0x100D1A4 Offset: 0x100D1A4 VA: 0x100D1A4
	private static void .cctor() { }
}

// Namespace: Rotatelab.Scripts