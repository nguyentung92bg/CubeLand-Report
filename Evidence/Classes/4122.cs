public class PlaceableManager : SingletonBehaviour<PlaceableManager> // TypeDefIndex: 4122
{
	// Fields
	[SerializeField]
	private BulletPool bulletPool; // 0x10
	[SerializeField]
	private Transform queueRoot; // 0x14
	[SerializeField]
	private BlasterController blasterPrefab; // 0x18
	[SerializeField]
	private BlasterController pilotBlasterPrefab; // 0x1C
	[SerializeField]
	private BlasterGeneratorController generatorPrefab; // 0x20
	[SerializeField]
	private KeyController keyPrefab; // 0x24
	[SerializeField]
	private LockController lockPrefab; // 0x28
	[SerializeField]
	private ScissorsController scissorsPrefab; // 0x2C
	[SerializeField]
	private HammerController hammerPrefab; // 0x30
	[SerializeField]
	private SwordController swordPrefab; // 0x34
	[SerializeField]
	private PropellerController propellerPrefab; // 0x38
	[SerializeField]
	private StopSignController stopSignPrefab; // 0x3C
	[SerializeField]
	private MacheteController machetePrefab; // 0x40
	[SerializeField]
	private Transform queueStartPosition; // 0x44
	[SerializeField]
	private Vector2 queueSpacing; // 0x48
	private int queueColumnCount; // 0x50
	private Vector3 queueFrontLeftPosition; // 0x54
	[SerializeField]
	private float hiddenBlasterMaterialScrollSpeed; // 0x60
	private Material hiddenBlasterMaterial; // 0x64
	private Vector4 hiddenBlasterMaterialTilingAndOffset; // 0x68
	private int pendingRainbowBlasterCount; // 0x78
	private Coroutine pendingRainbowBlasterCoroutine; // 0x7C
	private Sequence rainbowBlasterEntranceSequence; // 0x80
	private readonly List<BlasterController> spawnedRainbowBlasters; // 0x90
	[SerializeField]
	private float rainbowEntranceDuration; // 0x94
	[SerializeField]
	private float rainbowEntranceArcHeight; // 0x98
	[SerializeField]
	private float rainbowEntranceStartScale; // 0x9C
	[SerializeField]
	private Vector3 rainbowEntranceStartEulerAngles; // 0xA0
	[SerializeField]
	private int rainbowEntranceTurnCount; // 0xAC
	public int totalBlasterCharge; // 0xB0
	public readonly List<BasePlaceableController> PlaceablesInQueue; // 0xB4
	public readonly HashSet<BasePlaceableController> placeablesOutsideQueue; // 0xB8
	[CompilerGenerated]
	private Action<BasePlaceableController> OnPlaceableLeftQueue; // 0xBC
	private Sequence[] shiftPlaceablesBehindSequences; // 0xC0
	private bool isDeferringRemovals; // 0xC4
	private readonly Queue<BasePlaceableController> pendingRemovals; // 0xC8

	// Properties
	private int RainbowBlasterBulletCount { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1040D8C Offset: 0x1040D8C VA: 0x1040D8C
	public void add_OnPlaceableLeftQueue(Action<BasePlaceableController> value) { }

	[CompilerGenerated]
	// RVA: 0x1040E3C Offset: 0x1040E3C VA: 0x1040E3C
	public void remove_OnPlaceableLeftQueue(Action<BasePlaceableController> value) { }

	// RVA: 0x1040EEC Offset: 0x1040EEC VA: 0x1040EEC
	private int get_RainbowBlasterBulletCount() { }

	// RVA: 0x1040F54 Offset: 0x1040F54 VA: 0x1040F54 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1041524 Offset: 0x1041524 VA: 0x1041524
	protected void OnDestroy() { }

	// RVA: 0x104185C Offset: 0x104185C VA: 0x104185C
	protected void Update() { }

	// RVA: 0x1041970 Offset: 0x1041970 VA: 0x1041970
	public void Initialize(SoLevelData levelData) { }

	// RVA: 0x10420F4 Offset: 0x10420F4 VA: 0x10420F4
	private void DistributeJewelHeists() { }

	// RVA: 0x1042968 Offset: 0x1042968 VA: 0x1042968
	public Vector3 GetPlaceableLocalPosition(Vector2Int index) { }

	// RVA: 0x1041E4C Offset: 0x1041E4C VA: 0x1041E4C
	private void GeneratePlaceables(BlasterData[][] grid) { }

	// RVA: 0x10429B0 Offset: 0x10429B0 VA: 0x10429B0
	private BlasterController SpawnBlaster(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042A9C Offset: 0x1042A9C VA: 0x1042A9C
	private void SpawnKey(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042B2C Offset: 0x1042B2C VA: 0x1042B2C
	private void SpawnLock(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042BBC Offset: 0x1042BBC VA: 0x1042BBC
	private void SpawnScissors(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042C4C Offset: 0x1042C4C VA: 0x1042C4C
	private void SpawnGenerator(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042D20 Offset: 0x1042D20 VA: 0x1042D20
	private void SpawnHammer(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042DD4 Offset: 0x1042DD4 VA: 0x1042DD4
	private void SpawnSword(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042E64 Offset: 0x1042E64 VA: 0x1042E64
	private void SpawnPropeller(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042EF4 Offset: 0x1042EF4 VA: 0x1042EF4
	private void SpawnStopSign(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: 0x1042FB8 Offset: 0x1042FB8 VA: 0x1042FB8
	private void SpawnMachete(BlasterData data, Vector3 localPosition, Vector2Int index) { }

	// RVA: -1 Offset: -1
	private T SpawnPrefab<T>(BlasterData data, T prefab, Vector3 localPosition, Vector2Int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x1535370 Offset: 0x1535370 VA: 0x1535370
	|-PlaceableManager.SpawnPrefab<object>
	*/

	// RVA: 0x104306C Offset: 0x104306C VA: 0x104306C
	public BasePlaceableController FindPlaceableByData(BlasterData data) { }

	// RVA: 0x10431E4 Offset: 0x10431E4 VA: 0x10431E4
	public void ClearPlaceables() { }

	// RVA: 0x10433F4 Offset: 0x10433F4 VA: 0x10433F4
	public void QueueRainbowBlasterSpawn() { }

	// RVA: 0x10434B0 Offset: 0x10434B0 VA: 0x10434B0
	private IEnumerator SpawnPendingRainbowBlastersCoroutine() { }

	// RVA: 0x1043544 Offset: 0x1043544 VA: 0x1043544
	private bool TrySpawnRainbowBlasterAtFront() { }

	// RVA: 0x104427C Offset: 0x104427C VA: 0x104427C
	private void AnimateRainbowBlasterEntrance(BlasterController blaster, Vector3 targetLocalPosition, Vector3 initialEulerAngles) { }

	// RVA: 0x1043FC8 Offset: 0x1043FC8 VA: 0x1043FC8
	private int GetRainbowBlasterCount(int column) { }

	// RVA: 0x1043DC8 Offset: 0x1043DC8 VA: 0x1043DC8
	private bool IsColumnEligibleForRainbowBlaster(int column) { }

	// RVA: 0x10441A0 Offset: 0x10441A0 VA: 0x10441A0
	public void CompleteCurrentShiftPlaceablesAnimationImmediately(int column) { }

	// RVA: 0x1044BDC Offset: 0x1044BDC VA: 0x1044BDC
	private void ShiftPlaceablesBehind(BasePlaceableController leavingPlaceable) { }

	// RVA: 0x1045214 Offset: 0x1045214 VA: 0x1045214
	private Sequence ShiftRearPlaceableForwards(BasePlaceableController placeable, BasePlaceableController leavingPlaceable) { }

	// RVA: 0x1046D14 Offset: 0x1046D14 VA: 0x1046D14
	public static bool TryGetBlasterFromPlaceable(BasePlaceableController placeable, out BlasterController blaster) { }

	// RVA: 0x1046E4C Offset: 0x1046E4C VA: 0x1046E4C
	public bool TryUseKey(KeyController key) { }

	// RVA: 0x1046FEC Offset: 0x1046FEC VA: 0x1046FEC
	public bool TryUseScissors(ScissorsController scissors) { }

	// RVA: 0x10477F8 Offset: 0x10477F8 VA: 0x10477F8
	private bool TryUseHammer(HammerController hammer) { }

	// RVA: 0x10479E0 Offset: 0x10479E0 VA: 0x10479E0
	private bool TryUseSword(SwordController sword) { }

	// RVA: 0x10483D4 Offset: 0x10483D4 VA: 0x10483D4
	private bool TryUsePropeller(PropellerController propeller) { }

	// RVA: 0x1048B7C Offset: 0x1048B7C VA: 0x1048B7C
	private void UseMachete(MacheteController machete) { }

	// RVA: 0x10413BC Offset: 0x10413BC VA: 0x10413BC
	private IEnumerator TryUseScissorsInDocksContinuouslyCoroutine() { }

	// RVA: 0x1041434 Offset: 0x1041434 VA: 0x1041434
	private IEnumerator TryUseSwordInDocksContinuouslyCoroutine() { }

	// RVA: 0x10414AC Offset: 0x10414AC VA: 0x10414AC
	private IEnumerator TryUseHammerInDocksContinuouslyCoroutine() { }

	// RVA: 0x10478E4 Offset: 0x10478E4 VA: 0x10478E4
	public void RemovePlaceableFromQueue(BasePlaceableController placeable) { }

	// RVA: 0x1048BF8 Offset: 0x1048BF8 VA: 0x1048BF8
	private void ProcessRemoval(BasePlaceableController placeable) { }

	// RVA: 0x1048CD8 Offset: 0x1048CD8 VA: 0x1048CD8
	private void DrainPendingRemovals() { }

	// RVA: 0x1048D78 Offset: 0x1048D78 VA: 0x1048D78
	private void OnWinSequenceStarted() { }

	// RVA: 0x1048FA8 Offset: 0x1048FA8 VA: 0x1048FA8
	private IEnumerator OnWinSequenceStartedCoroutine() { }

	// RVA: 0x104903C Offset: 0x104903C VA: 0x104903C
	public void ConsumeBulletsOfQueuedBlastersExternally(ColorType colorType, int bulletCount, bool startFromRearRows) { }

	// RVA: 0x10499A4 Offset: 0x10499A4 VA: 0x10499A4
	private void OnBoosterStarted(CurrencyType boosterType) { }

	// RVA: 0x1049D8C Offset: 0x1049D8C VA: 0x1049D8C
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x104A1A8 Offset: 0x104A1A8 VA: 0x104A1A8
	private void OnBoosterCancelled(CurrencyType boosterType) { }

	// RVA: 0x1049D94 Offset: 0x1049D94 VA: 0x1049D94
	private void OnBoosterCancelledOrUsed(CurrencyType boosterType, bool isUsed) { }

	// RVA: 0x104A1B0 Offset: 0x104A1B0 VA: 0x104A1B0
	private void OnShuffleAnimationStartedHandler() { }

	// RVA: 0x104A328 Offset: 0x104A328 VA: 0x104A328
	private void ShufflePlaceables() { }

	// RVA: 0x104AB24 Offset: 0x104AB24 VA: 0x104AB24
	public BlasterController GetFrontBlaster(int column) { }

	// RVA: 0x1041860 Offset: 0x1041860 VA: 0x1041860
	private void AnimateHiddenBlasterMaterialTexture() { }

	// RVA: 0x104AD78 Offset: 0x104AD78 VA: 0x104AD78
	private void OnLastVoxelDestroyedHandler() { }

	// RVA: 0x104AF78 Offset: 0x104AF78 VA: 0x104AF78
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1042838 Offset: 0x1042838 VA: 0x1042838
	internal static void <DistributeJewelHeists>g__TryAddBlaster|44_0(BlasterController blaster, ref PlaceableManager.<>c__DisplayClass44_0 ) { }

	[CompilerGenerated]
	// RVA: 0x10498B0 Offset: 0x10498B0 VA: 0x10498B0
	internal static void <ConsumeBulletsOfQueuedBlastersExternally>g__TryAddBlasterToQueue|84_1(BlasterController blaster, ref PlaceableManager.<>c__DisplayClass84_0 ) { }
}

// Namespace: 