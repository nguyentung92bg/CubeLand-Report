public abstract class BasePlaceableController : MonoBehaviour // TypeDefIndex: 4078
{
	// Fields
	public const float QueueToQueueJumpHeight = 0.5;
	public const float QueueToActiveJumpHeight = 0.75;
	public const float QueueJumpHalfDuration = 0.125;
	private const float QueueAnimationBlendDuration = 0.05;
	[SerializeField]
	protected Animator animator; // 0x10
	[SerializeField]
	private Transform queueJumpTransform; // 0x14
	[CompilerGenerated]
	private BlasterData <Data>k__BackingField; // 0x18
	[CompilerGenerated]
	private Vector2Int <Index>k__BackingField; // 0x1C
	[CompilerGenerated]
	private string <Id>k__BackingField; // 0x24
	private Tween movementTween; // 0x28
	private bool queueJumpBaselineInitialized; // 0x38
	private float queueJumpBaselineY; // 0x3C

	// Properties
	public BlasterData Data { get; set; }
	public Vector2Int Index { get; set; }
	public int Row { get; }
	public int Column { get; }
	public string Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10303CC Offset: 0x10303CC VA: 0x10303CC
	public BlasterData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x10303D4 Offset: 0x10303D4 VA: 0x10303D4
	public void set_Data(BlasterData value) { }

	[CompilerGenerated]
	// RVA: 0x10303DC Offset: 0x10303DC VA: 0x10303DC
	public Vector2Int get_Index() { }

	[CompilerGenerated]
	// RVA: 0x10303E8 Offset: 0x10303E8 VA: 0x10303E8
	public void set_Index(Vector2Int value) { }

	// RVA: 0x10303F8 Offset: 0x10303F8 VA: 0x10303F8
	public int get_Row() { }

	// RVA: 0x1030400 Offset: 0x1030400 VA: 0x1030400
	public int get_Column() { }

	[CompilerGenerated]
	// RVA: 0x1030408 Offset: 0x1030408 VA: 0x1030408
	public string get_Id() { }

	[CompilerGenerated]
	// RVA: 0x1030410 Offset: 0x1030410 VA: 0x1030410
	public void set_Id(string value) { }

	// RVA: 0x1030418 Offset: 0x1030418 VA: 0x1030418
	public void PlayQueueJump(bool isMovingToActive) { }

	// RVA: 0x1030550 Offset: 0x1030550 VA: 0x1030550
	protected void PlayAnimation(string stateName, bool smoothTransition, float blendDuration = 0.05) { }

	// RVA: 0x10305CC Offset: 0x10305CC VA: 0x10305CC
	public Tween Move(Vector3 position, float duration = 0.375) { }

	// RVA: 0x10306F0 Offset: 0x10306F0 VA: 0x10306F0
	public Tween LocalMove(Vector3 localPosition, float duration = 0.375, Vector3 offset) { }

	// RVA: 0x103089C Offset: 0x103089C VA: 0x103089C
	protected Tween MoveToTransform(Transform target, float duration, Vector3 offset, Ease ease = 9) { }

	// RVA: 0x1030AEC Offset: 0x1030AEC VA: 0x1030AEC Slot: 4
	public virtual void OnShuffleSettled() { }

	// RVA: 0x1030AF0 Offset: 0x1030AF0 VA: 0x1030AF0
	protected void .ctor() { }
}

// Namespace: Rotatelab.Scripts