public class ColorBarrelController : MonoBehaviour // TypeDefIndex: 4096
{
	// Fields
	[SerializeField]
	private Renderer barrelRenderer; // 0x10
	[SerializeField]
	private Animator animator; // 0x14
	[SerializeField]
	private TMP_Text hpText; // 0x18
	[SerializeField]
	private ParticleSystem openParticle; // 0x1C
	[SerializeField]
	private List<ParticleSystem> openParticlesToUpdateColor; // 0x20
	[CompilerGenerated]
	private bool <IsOpen>k__BackingField; // 0x24
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0x28
	[CompilerGenerated]
	private ColorBarrelController.AnimationState <State>k__BackingField; // 0x2C
	private int _currentHp; // 0x30
	private BlasterController _blaster; // 0x34
	private Tween _delayTween; // 0x38
	private Sequence _delaySequence; // 0x48
	private bool _queueJumpBaselineInitialized; // 0x58
	private float _queueJumpBaselineY; // 0x5C

	// Properties
	public bool IsOpen { get; set; }
	public ColorType ColorType { get; set; }
	private ColorBarrelController.AnimationState State { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x103CC54 Offset: 0x103CC54 VA: 0x103CC54
	public bool get_IsOpen() { }

	[CompilerGenerated]
	// RVA: 0x103CC5C Offset: 0x103CC5C VA: 0x103CC5C
	private void set_IsOpen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x103CC64 Offset: 0x103CC64 VA: 0x103CC64
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0x103CC6C Offset: 0x103CC6C VA: 0x103CC6C
	private void set_ColorType(ColorType value) { }

	[CompilerGenerated]
	// RVA: 0x103CC74 Offset: 0x103CC74 VA: 0x103CC74
	private ColorBarrelController.AnimationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x103CC7C Offset: 0x103CC7C VA: 0x103CC7C
	private void set_State(ColorBarrelController.AnimationState value) { }

	// RVA: 0x1031CF0 Offset: 0x1031CF0 VA: 0x1031CF0
	public void Init(int hp, ColorType color, BlasterController blaster) { }

	// RVA: 0x103CCFC Offset: 0x103CCFC VA: 0x103CCFC
	private void UpdateColor() { }

	// RVA: 0x10342D4 Offset: 0x10342D4 VA: 0x10342D4
	public void PlayQueueJump(bool isMovingToActive) { }

	// RVA: 0x103CC84 Offset: 0x103CC84 VA: 0x103CC84
	private void UpdateHpText() { }

	// RVA: 0x1034798 Offset: 0x1034798 VA: 0x1034798
	public void DecreaseHp() { }

	// RVA: 0x103CF8C Offset: 0x103CF8C VA: 0x103CF8C
	private void Open() { }

	// RVA: 0x1034424 Offset: 0x1034424 VA: 0x1034424
	public void UpdateAnimationState(ColorBarrelController.AnimationState state) { }

	// RVA: 0x103CF94 Offset: 0x103CF94 VA: 0x103CF94
	public void Hide() { }

	// RVA: 0x103CFC4 Offset: 0x103CFC4 VA: 0x103CFC4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x103CFCC Offset: 0x103CFCC VA: 0x103CFCC
	private void <UpdateAnimationState>b__30_0() { }

	[CompilerGenerated]
	// RVA: 0x103D084 Offset: 0x103D084 VA: 0x103D084
	private void <UpdateAnimationState>b__30_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]