public class PropellerController : BasePlaceableController // TypeDefIndex: 4126
{
	// Fields
	[SerializeField]
	private Transform visual; // 0x40
	[SerializeField]
	private GameObject propellerShadow; // 0x44
	[SerializeField]
	private float movementDuration; // 0x48
	[SerializeField]
	private ParticleSystem explosionParticle; // 0x4C
	private int voxelCountToDestroy; // 0x50
	[CompilerGenerated]
	private PropellerController.AnimationState <State>k__BackingField; // 0x54

	// Properties
	public PropellerController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x104D214 Offset: 0x104D214 VA: 0x104D214
	public PropellerController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x104D21C Offset: 0x104D21C VA: 0x104D21C
	private void set_State(PropellerController.AnimationState value) { }

	// RVA: 0x1046A6C Offset: 0x1046A6C VA: 0x1046A6C
	public void UpdateAnimationState(PropellerController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x10484BC Offset: 0x10484BC VA: 0x10484BC
	public void AnimateHit(VoxelController targetVoxel) { }

	// RVA: 0x104D22C Offset: 0x104D22C VA: 0x104D22C
	private void Destroy() { }

	// RVA: 0x104D4D4 Offset: 0x104D4D4 VA: 0x104D4D4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x104D4EC Offset: 0x104D4EC VA: 0x104D4EC
	private void <Destroy>b__12_0() { }
}

// Namespace: 