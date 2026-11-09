public class SwordController : UtilityPlaceableController // TypeDefIndex: 4137
{
	// Fields
	[SerializeField]
	private float movementDuration; // 0x68
	[SerializeField]
	private ParticleSystem slashParticle; // 0x6C
	[SerializeField]
	private Transform topTransform; // 0x70
	[CompilerGenerated]
	private SwordController.AnimationState <State>k__BackingField; // 0x74
	private Tween rotationTween; // 0x78

	// Properties
	public SwordController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x104E444 Offset: 0x104E444 VA: 0x104E444
	public SwordController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x104E44C Offset: 0x104E44C VA: 0x104E44C
	private void set_State(SwordController.AnimationState value) { }

	// RVA: 0x1046960 Offset: 0x1046960 VA: 0x1046960
	public void UpdateAnimationState(SwordController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x1047D64 Offset: 0x1047D64 VA: 0x1047D64
	public void Hit(ShieldController shield, Transform targetPoint) { }

	// RVA: 0x104E568 Offset: 0x104E568 VA: 0x104E568
	private Tween Rotate(Transform targetPoint, float duration) { }

	// RVA: 0x104E6E0 Offset: 0x104E6E0 VA: 0x104E6E0
	private void Destroy() { }

	// RVA: 0x104E8F4 Offset: 0x104E8F4 VA: 0x104E8F4
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts