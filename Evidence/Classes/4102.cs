public class HammerController : UtilityPlaceableController // TypeDefIndex: 4102
{
	// Fields
	[SerializeField]
	private float movementDuration; // 0x68
	[SerializeField]
	private float destructionDuration; // 0x6C
	[SerializeField]
	private Vector3 hitPositionOffset; // 0x70
	private int wallCountToDestroy; // 0x7C
	[CompilerGenerated]
	private HammerController.AnimationState <State>k__BackingField; // 0x80

	// Properties
	public HammerController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x103D2E4 Offset: 0x103D2E4 VA: 0x103D2E4
	public HammerController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x103D2EC Offset: 0x103D2EC VA: 0x103D2EC
	private void set_State(HammerController.AnimationState value) { }

	// RVA: 0x103D2F4 Offset: 0x103D2F4 VA: 0x103D2F4
	public void Init(int wallCountToDestroy) { }

	// RVA: 0x103D2FC Offset: 0x103D2FC VA: 0x103D2FC
	public void UpdateAnimationState(HammerController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x103D400 Offset: 0x103D400 VA: 0x103D400
	public void AnimateHit(WallController targetWall) { }

	// RVA: 0x103D83C Offset: 0x103D83C VA: 0x103D83C
	private void Destroy() { }

	// RVA: 0x103DA50 Offset: 0x103DA50 VA: 0x103DA50
	public void .ctor() { }
}

// Namespace: 