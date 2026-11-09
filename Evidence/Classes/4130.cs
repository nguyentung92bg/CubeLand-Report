public class ScissorsController : UtilityPlaceableController // TypeDefIndex: 4130
{
	// Fields
	[SerializeField]
	private float movementDuration; // 0x68
	[CompilerGenerated]
	private ScissorsController.AnimationState <State>k__BackingField; // 0x6C

	// Properties
	public ScissorsController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x104D828 Offset: 0x104D828 VA: 0x104D828
	public ScissorsController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x104D830 Offset: 0x104D830 VA: 0x104D830
	private void set_State(ScissorsController.AnimationState value) { }

	// RVA: 0x104684C Offset: 0x104684C VA: 0x104684C
	public void UpdateAnimationState(ScissorsController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x1047228 Offset: 0x1047228 VA: 0x1047228
	public void Cut(GiftWrapperController giftWrapper, Transform targetPoint) { }

	// RVA: 0x104D8A8 Offset: 0x104D8A8 VA: 0x104D8A8
	private void Destroy() { }

	// RVA: 0x104DABC Offset: 0x104DABC VA: 0x104DABC
	public void .ctor() { }
}

// Namespace: 