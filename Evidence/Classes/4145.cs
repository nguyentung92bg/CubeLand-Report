public class ShrinkingCoverController : BaseTargetableController // TypeDefIndex: 4145
{
	// Fields
	[CompilerGenerated]
	private ShrinkingCoverData <Data>k__BackingField; // 0x38
	private SkinnedMeshRenderer targetableRenderer; // 0x3C
	[SerializeField]
	private SkinnedMeshRenderer topRenderer; // 0x40
	[SerializeField]
	private SkinnedMeshRenderer edgeRenderer; // 0x44
	[SerializeField]
	private Material shrinkingCoverBaseMaterial; // 0x48
	[SerializeField]
	private Transform destroyPivot; // 0x4C
	[SerializeField]
	private Animator destroyAnimator; // 0x50
	[SerializeField]
	private AnimationClip destroyClip; // 0x54
	[FormerlySerializedAs("stripeOffsetPerHit")]
	[FormerlySerializedAs("stripeOffsetPerLayer")]
	[SerializeField]
	private float correctiveStripeOffsetPerLayer; // 0x58
	[SerializeField]
	private float closingStripeOffsetPerLayer; // 0x5C
	private Material coverMaterial; // 0x60
	private float initialStripeOffset; // 0x64
	private const int MinimumSize = 5;
	private const float ClosingTweenDuration = 0.25;
	private const float CorrectionWeightPerLayer = 2;
	private const float ClosingWeightPerLayer = 20;
	private int _currentHp; // 0x68
	private int _displayedHp; // 0x6C
	private float _currentClosingAmount; // 0x70
	private float _targetClosingAmount; // 0x74
	private float _closingAmountPerHit; // 0x78
	private float _correctionAmountPerHit; // 0x7C
	private float _currentCorrectionValue; // 0x80
	private float _targetCorrectionValue; // 0x84
	private float _nextClosingRemovalThreshold; // 0x88
	private float _nextCorrectionRemovalThreshold; // 0x8C
	private float _verticalWeight; // 0x90
	private List<Vector3Int> _orderedInnerVoxelPositions; // 0x94
	private Tween closingTween; // 0x98
	private Sequence destroySequence; // 0xA8
	private Tween correctionTween; // 0xB8
	private Coroutine _hitSoundLoopCoroutine; // 0xC8
	private float _lastHitTime; // 0xCC
	private const float HitSoundStopDelay = 0.3;
	private const float HitSoundInterval = 0.5;
	private const string DestroyStateName = "ShrinkingCover_Destroy";

	// Properties
	public ShrinkingCoverData Data { get; set; }
	public override bool IsTargetable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1050B0C Offset: 0x1050B0C VA: 0x1050B0C
	public ShrinkingCoverData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x1050B14 Offset: 0x1050B14 VA: 0x1050B14
	private void set_Data(ShrinkingCoverData value) { }

	// RVA: 0x1050B1C Offset: 0x1050B1C VA: 0x1050B1C Slot: 6
	public override bool get_IsTargetable() { }

	// RVA: 0x1050B34 Offset: 0x1050B34 VA: 0x1050B34
	public void Initialize(ShrinkingCoverData data) { }

	// RVA: 0x1050F00 Offset: 0x1050F00 VA: 0x1050F00
	private void UpdateSize() { }

	// RVA: 0x1051234 Offset: 0x1051234 VA: 0x1051234 Slot: 9
	public override void UpdateColor(ColorType colorType) { }

	// RVA: 0x10516F8 Offset: 0x10516F8 VA: 0x10516F8 Slot: 12
	public override Vector3 GetShootingPoint() { }

	// RVA: 0x1051828 Offset: 0x1051828 VA: 0x1051828 Slot: 8
	public override Vector3Int[] GetGridPositions() { }

	// RVA: 0x1051844 Offset: 0x1051844 VA: 0x1051844 Slot: 14
	protected override void GetDimmableRenderers(HashSet<Renderer> renderers) { }

	// RVA: 0x1051908 Offset: 0x1051908 VA: 0x1051908 Slot: 10
	public override void DecreaseHealthData() { }

	// RVA: 0x1051924 Offset: 0x1051924 VA: 0x1051924 Slot: 11
	public override void DecreaseHealthVisually() { }

	// RVA: 0x1052220 Offset: 0x1052220 VA: 0x1052220
	private IEnumerator HitSoundLoopRoutine() { }

	// RVA: 0x1052014 Offset: 0x1052014 VA: 0x1052014
	private void StopHitSoundLoop() { }

	// RVA: 0x1051BCC Offset: 0x1051BCC VA: 0x1051BCC
	private void AnimateCrack() { }

	// RVA: 0x10515A8 Offset: 0x10515A8 VA: 0x10515A8
	private void UpdateStripeOffset() { }

	// RVA: 0x10522B4 Offset: 0x10522B4 VA: 0x10522B4
	private void RemoveCrossedZLayersFromGrid() { }

	// RVA: 0x1052050 Offset: 0x1052050 VA: 0x1052050
	private void UnoccupyNextRow(bool isLastRowRemovable) { }

	// RVA: 0x10523A4 Offset: 0x10523A4 VA: 0x10523A4 Slot: 15
	protected override void Destroy() { }

	// RVA: 0x1052780 Offset: 0x1052780 VA: 0x1052780
	private Vector3 GetCollapseOrigin() { }

	// RVA: 0x1052988 Offset: 0x1052988 VA: 0x1052988 Slot: 16
	protected override void DestructionBehaviour() { }

	// RVA: 0x10529B8 Offset: 0x10529B8 VA: 0x10529B8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10529D8 Offset: 0x10529D8 VA: 0x10529D8
	private void <AnimateCrack>b__51_0(Transform _, float value) { }

	[CompilerGenerated]
	// RVA: 0x1052A48 Offset: 0x1052A48 VA: 0x1052A48
	private void <AnimateCrack>b__51_1(Transform _, float value) { }
}

// Namespace: Rotatelab.Scripts