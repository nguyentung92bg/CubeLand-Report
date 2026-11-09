public class ObjectManager : SingletonBehaviour<ObjectManager> // TypeDefIndex: 4075
{
	// Fields
	[SerializeField]
	private Transform objectRoot; // 0x10
	[SerializeField]
	private Transform idleRotationAxis; // 0x14
	[SerializeField]
	private VoxelPool voxelPool; // 0x18
	[SerializeField]
	private WallPool wallPool; // 0x1C
	[SerializeField]
	private FlyingPiggyController flyingPiggyPrefab; // 0x20
	[SerializeField]
	private LargeVoxelController largeVoxelPrefab; // 0x24
	[SerializeField]
	private DoubleLargeVoxelController doubleLargeVoxelPrefab; // 0x28
	[SerializeField]
	private IceWrapperController iceWrapperPrefab; // 0x2C
	[SerializeField]
	private GiftWrapperController giftWrapperPrefab; // 0x30
	[SerializeField]
	private PlaypenController playpenPrefab; // 0x34
	[SerializeField]
	private ShrinkingCoverController shrinkingCoverPrefab; // 0x38
	[SerializeField]
	private BombController bombPrefab; // 0x3C
	[SerializeField]
	private ColorBoxController colorBoxPrefab; // 0x40
	[SerializeField]
	private ShieldController shieldPrefab; // 0x44
	[SerializeField]
	private HiddenChestController hiddenChestPrefab; // 0x48
	private Transform cameraTransform; // 0x4C
	[CompilerGenerated]
	private Transform <CurrentObject>k__BackingField; // 0x50
	[CompilerGenerated]
	private float <ObjectBaseScale>k__BackingField; // 0x54
	public readonly List<BaseTargetableController> Targetables; // 0x58
	public readonly List<GiftWrapperController> GiftWrappers; // 0x5C
	public readonly List<WallController> Walls; // 0x60
	public readonly List<BombController> Bombs; // 0x64
	public readonly List<ShieldController> Shields; // 0x68
	[SerializeField]
	private float manualRotationSpeed; // 0x6C
	[SerializeField]
	private float maxManualRotation; // 0x70
	[SerializeField]
	private float wallDestroyDuration; // 0x74
	[Tooltip("Minimum distance, in voxel units (grid cells), a new propeller's target must keep from the targets of propellers that are still in flight, so near-simultaneous propellers spread out instead of clustering. Measured in grid space so it is independent of the per-level cube scale. A single blast spans ~4 voxels across, so keep this above that to leave a visible gap.")]
	[SerializeField]
	private float minPropellerTargetSeparation; // 0x78
	private readonly List<VoxelController> activePropellerTargets; // 0x7C
	private float currentIdleRotationSpeed; // 0x80
	private FlyingPiggyController flyingPiggy; // 0x84
	private bool suppressIdleRotationForLinedUpShot; // 0x88
	private float levelStartSpinElapsed; // 0x8C
	private float levelStartSpinDuration; // 0x90
	private float levelStartSpinTotalAngle; // 0x94
	private float levelStartSpinAppliedAngle; // 0x98
	private Ease levelStartSpinEase; // 0x9C
	private float levelStartScaleElapsed; // 0xA0
	private float levelStartScaleDuration; // 0xA4
	private float levelStartScaleFrom; // 0xA8
	private float levelStartScaleTo; // 0xAC
	private Ease levelStartScaleEase; // 0xB0
	[CompilerGenerated]
	private Action OnLevelStartSpinEnded; // 0xB4

	// Properties
	public Transform CurrentObject { get; set; }
	public float ObjectBaseScale { get; set; }
	public bool IsLevelStartSpinActive { get; }
	public bool IsLevelStartScaleActive { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x102A048 Offset: 0x102A048 VA: 0x102A048
	public Transform get_CurrentObject() { }

	[CompilerGenerated]
	// RVA: 0x102A050 Offset: 0x102A050 VA: 0x102A050
	private void set_CurrentObject(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x102A058 Offset: 0x102A058 VA: 0x102A058
	public float get_ObjectBaseScale() { }

	[CompilerGenerated]
	// RVA: 0x102A060 Offset: 0x102A060 VA: 0x102A060
	private void set_ObjectBaseScale(float value) { }

	// RVA: 0x102A068 Offset: 0x102A068 VA: 0x102A068
	public bool get_IsLevelStartSpinActive() { }

	// RVA: 0x102A084 Offset: 0x102A084 VA: 0x102A084
	public bool get_IsLevelStartScaleActive() { }

	[CompilerGenerated]
	// RVA: 0x102A0A0 Offset: 0x102A0A0 VA: 0x102A0A0
	public void add_OnLevelStartSpinEnded(Action value) { }

	[CompilerGenerated]
	// RVA: 0x102A140 Offset: 0x102A140 VA: 0x102A140
	public void remove_OnLevelStartSpinEnded(Action value) { }

	// RVA: 0x102A1E0 Offset: 0x102A1E0 VA: 0x102A1E0 Slot: 4
	protected override void Awake() { }

	// RVA: 0x102A540 Offset: 0x102A540 VA: 0x102A540
	protected void OnDestroy() { }

	// RVA: 0x102A844 Offset: 0x102A844 VA: 0x102A844
	public void Initialize(SoLevelData levelData) { }

	// RVA: 0x102AA60 Offset: 0x102AA60 VA: 0x102AA60
	private void GenerateObject(SoLevelData levelData) { }

	// RVA: 0x102CA58 Offset: 0x102CA58 VA: 0x102CA58
	public void ClearObject() { }

	// RVA: 0x102D0B8 Offset: 0x102D0B8 VA: 0x102D0B8
	private void Update() { }

	// RVA: 0x102D568 Offset: 0x102D568 VA: 0x102D568
	public void RotateObjectManually(Vector2 pointerDelta) { }

	// RVA: 0x102D704 Offset: 0x102D704 VA: 0x102D704
	private void StartLevelStartIntro() { }

	// RVA: 0x102D7E4 Offset: 0x102D7E4 VA: 0x102D7E4
	public void SkipLevelStartIntro() { }

	// RVA: 0x102C464 Offset: 0x102C464 VA: 0x102C464
	private void PrepareLevelStartSpin() { }

	// RVA: 0x102D734 Offset: 0x102D734 VA: 0x102D734
	private void StartLevelStartSpin() { }

	// RVA: 0x102D42C Offset: 0x102D42C VA: 0x102D42C
	private void ApplyLevelStartSpin() { }

	// RVA: 0x102D034 Offset: 0x102D034 VA: 0x102D034
	private void StopLevelStartSpin() { }

	// RVA: 0x102C5BC Offset: 0x102C5BC VA: 0x102C5BC
	private void PrepareLevelStartScale() { }

	// RVA: 0x102D71C Offset: 0x102D71C VA: 0x102D71C
	private void StartLevelStartScale() { }

	// RVA: 0x102D3A8 Offset: 0x102D3A8 VA: 0x102D3A8
	private void ApplyLevelStartScale() { }

	// RVA: 0x102D8A4 Offset: 0x102D8A4 VA: 0x102D8A4
	private void SetObjectScaleMultiplier(float multiplier) { }

	// RVA: 0x102A878 Offset: 0x102A878 VA: 0x102A878
	private float GetIdleRotationSpeed() { }

	// RVA: 0x102D958 Offset: 0x102D958 VA: 0x102D958
	public WallController GetClosestWall() { }

	// RVA: 0x102DB40 Offset: 0x102DB40 VA: 0x102DB40
	public VoxelController GetClosestVoxel() { }

	// RVA: 0x102DD98 Offset: 0x102DD98 VA: 0x102DD98
	private bool IsFarFromActivePropellerTargets(Vector3Int gridPosition, float separationSqr) { }

	// RVA: 0x102DEC0 Offset: 0x102DEC0 VA: 0x102DEC0
	public List<WallController> MarkWallsToBreakByHammer(WallController targetWall, int wallCountToDestroy) { }

	// RVA: 0x102E314 Offset: 0x102E314 VA: 0x102E314
	public void BreakWallsByHammer(WallController targetWall, List<WallController> wallsToBreak, float duration) { }

	// RVA: 0x102E81C Offset: 0x102E81C VA: 0x102E81C
	public List<VoxelController> MarkVoxelsToDestroyByPropeller(VoxelController targetVoxel, int voxelCountToDestroy) { }

	// RVA: 0x102F018 Offset: 0x102F018 VA: 0x102F018
	public void BreakVoxelsByPropeller(VoxelController targetVoxel, List<VoxelController> voxelsToBreak) { }

	// RVA: 0x102F248 Offset: 0x102F248 VA: 0x102F248
	private void DestroyAllWalls() { }

	// RVA: 0x102C6AC Offset: 0x102C6AC VA: 0x102C6AC
	private float CalculateOrbitRadius() { }

	// RVA: 0x102F7D0 Offset: 0x102F7D0 VA: 0x102F7D0
	private void OnManualObjectRotationModeToggled(bool isEnabled) { }

	// RVA: 0x102F854 Offset: 0x102F854 VA: 0x102F854
	private void OnMainCanvasChangeEndedHandler(MainCanvasType mainCanvasType, bool isInstant) { }

	// RVA: 0x102F874 Offset: 0x102F874 VA: 0x102F874
	private void OnSessionTransitionCompletedHandler() { }

	// RVA: 0x102F90C Offset: 0x102F90C VA: 0x102F90C
	private void OnPlayOnCompleteHandler() { }

	// RVA: 0x102F920 Offset: 0x102F920 VA: 0x102F920
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts