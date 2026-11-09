public class TrapController : MonoBehaviour // TypeDefIndex: 4169
{
	// Fields
	[SerializeField]
	private Animator animator; // 0x10
	[CompilerGenerated]
	private bool <IsOpen>k__BackingField; // 0x14
	[CompilerGenerated]
	private TrapController.AnimationState <State>k__BackingField; // 0x18
	private bool _isOpenedPermanently; // 0x1C
	private BlasterController _blaster; // 0x20
	private Tween _delayTween; // 0x28
	private Sequence _delaySequence; // 0x38

	// Properties
	public bool IsOpen { get; set; }
	private TrapController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x105CB28 Offset: 0x105CB28 VA: 0x105CB28
	public bool get_IsOpen() { }

	[CompilerGenerated]
	// RVA: 0x105CB30 Offset: 0x105CB30 VA: 0x105CB30
	private void set_IsOpen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x105CB38 Offset: 0x105CB38 VA: 0x105CB38
	private TrapController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x105CB40 Offset: 0x105CB40 VA: 0x105CB40
	private void set_State(TrapController.AnimationState value) { }

	// RVA: 0x105CB48 Offset: 0x105CB48 VA: 0x105CB48
	public void Init(bool isTrapOpen, BlasterController blaster) { }

	// RVA: 0x105D0A8 Offset: 0x105D0A8 VA: 0x105D0A8
	public void ChangeState(bool openPermanently = False) { }

	// RVA: 0x105CC50 Offset: 0x105CC50 VA: 0x105CC50
	private void UpdateAnimationState(TrapController.AnimationState state) { }

	// RVA: 0x105D0F4 Offset: 0x105D0F4 VA: 0x105D0F4
	public void Hide() { }

	// RVA: 0x105D124 Offset: 0x105D124 VA: 0x105D124
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x105D12C Offset: 0x105D12C VA: 0x105D12C
	private void <UpdateAnimationState>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x105D16C Offset: 0x105D16C VA: 0x105D16C
	private void <UpdateAnimationState>b__16_1() { }

	[CompilerGenerated]
	// RVA: 0x105D188 Offset: 0x105D188 VA: 0x105D188
	private void <UpdateAnimationState>b__16_2() { }

	[CompilerGenerated]
	// RVA: 0x105D1CC Offset: 0x105D1CC VA: 0x105D1CC
	private void <UpdateAnimationState>b__16_3() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]