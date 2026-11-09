public class DockManager : SingletonBehaviour<DockManager> // TypeDefIndex: 4014
{
	// Fields
	[SerializeField]
	private Transform docksRoot; // 0x10
	[SerializeField]
	private BlasterDockController blasterDockPrefab; // 0x14
	[SerializeField]
	private Transform blasterDocksPosition; // 0x18
	[SerializeField]
	private float blasterDocksSpacing; // 0x1C
	[SerializeField]
	private UtilityDockController utilityDockPrefab; // 0x20
	[SerializeField]
	private Transform utilityDocksStartPosition; // 0x24
	[SerializeField]
	private Vector3 utilityDocksPositionOffset; // 0x28
	[SerializeField]
	private BlasterGhostDockController[] ghostDocks; // 0x34
	[SerializeField]
	private float ghostBlasterScaleUpToSixDocks; // 0x38
	[SerializeField]
	private float ghostBlasterScaleAtSevenDocks; // 0x3C
	[SerializeField]
	private float ghostBlasterScaleAtEightDocks; // 0x40
	[CompilerGenerated]
	private BlasterDockController[] <BlasterDocks>k__BackingField; // 0x44
	[CompilerGenerated]
	private BlasterGhostDockController[] <BlasterGhostDocks>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private PilotBlasterDockController[] <PilotBlasterDocks>k__BackingField; // 0x4C
	public readonly List<BaseBlasterDockController> AllBlasterDocks; // 0x50
	public readonly List<UtilityDockController> UtilityDocks; // 0x54
	private const int DefaultUsableGhostDockCount = 6;
	private const float DefaultGhostBlasterScale = 0.75;
	private const float GhostDockLayoutDuration = 0.25;
	private const float PilotBlasterDocksSinkDistance = 12;
	private static readonly Vector3 DocksRootBoosterOffset; // 0x0
	private Vector3[] pilotBlasterDocksDefaultLocalPositions; // 0x58
	private Vector3[] ghostDocksDefaultLocalPositions; // 0x5C
	private Tween[] ghostDockLayoutTweens; // 0x60
	[CompilerGenerated]
	private bool <IsConsecutivePlayOnActive>k__BackingField; // 0x64
	[CompilerGenerated]
	private bool <IsExtraSlotUsed>k__BackingField; // 0x65

	// Properties
	public BlasterDockController[] BlasterDocks { get; set; }
	public BlasterGhostDockController[] BlasterGhostDocks { get; set; }
	public PilotBlasterDockController[] PilotBlasterDocks { get; set; }
	public bool IsConsecutivePlayOnActive { get; set; }
	public bool IsExtraSlotUsed { get; set; }
	public float GhostBlasterScale { get; }
	public int ShootingBlasterCount { get; }
	public bool AnyBlasterHasShootableTarget { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1004444 Offset: 0x1004444 VA: 0x1004444
	public BlasterDockController[] get_BlasterDocks() { }

	[CompilerGenerated]
	// RVA: 0x100444C Offset: 0x100444C VA: 0x100444C
	private void set_BlasterDocks(BlasterDockController[] value) { }

	[CompilerGenerated]
	// RVA: 0x1004454 Offset: 0x1004454 VA: 0x1004454
	public BlasterGhostDockController[] get_BlasterGhostDocks() { }

	[CompilerGenerated]
	// RVA: 0x100445C Offset: 0x100445C VA: 0x100445C
	private void set_BlasterGhostDocks(BlasterGhostDockController[] value) { }

	[CompilerGenerated]
	// RVA: 0x1004464 Offset: 0x1004464 VA: 0x1004464
	public PilotBlasterDockController[] get_PilotBlasterDocks() { }

	[CompilerGenerated]
	// RVA: 0x100446C Offset: 0x100446C VA: 0x100446C
	private void set_PilotBlasterDocks(PilotBlasterDockController[] value) { }

	[CompilerGenerated]
	// RVA: 0x1004474 Offset: 0x1004474 VA: 0x1004474
	public bool get_IsConsecutivePlayOnActive() { }

	[CompilerGenerated]
	// RVA: 0x100447C Offset: 0x100447C VA: 0x100447C
	private void set_IsConsecutivePlayOnActive(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1004484 Offset: 0x1004484 VA: 0x1004484
	public bool get_IsExtraSlotUsed() { }

	[CompilerGenerated]
	// RVA: 0x100448C Offset: 0x100448C VA: 0x100448C
	private void set_IsExtraSlotUsed(bool value) { }

	// RVA: 0x1004494 Offset: 0x1004494 VA: 0x1004494
	public float get_GhostBlasterScale() { }

	// RVA: 0x10044E4 Offset: 0x10044E4 VA: 0x10044E4
	public int get_ShootingBlasterCount() { }

	// RVA: 0x100463C Offset: 0x100463C VA: 0x100463C
	public bool get_AnyBlasterHasShootableTarget() { }

	// RVA: 0x10047A4 Offset: 0x10047A4 VA: 0x10047A4 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1004AA8 Offset: 0x1004AA8 VA: 0x1004AA8
	private void OnEnable() { }

	// RVA: 0x1004EF4 Offset: 0x1004EF4 VA: 0x1004EF4
	private void OnDisable() { }

	// RVA: 0x1005340 Offset: 0x1005340 VA: 0x1005340
	public void Initialize(SoLevelData levelData) { }

	// RVA: 0x100597C Offset: 0x100597C VA: 0x100597C
	public bool CanPlaceBlaster(BlasterController blaster) { }

	// RVA: 0x1005AD4 Offset: 0x1005AD4 VA: 0x1005AD4
	public bool TryPlaceBlaster(BlasterController targetBlaster) { }

	// RVA: 0x1006808 Offset: 0x1006808 VA: 0x1006808
	public void PlaceUtility(UtilityPlaceableController placeable) { }

	// RVA: 0x1006B74 Offset: 0x1006B74 VA: 0x1006B74
	public void MoveBlasterToGhostDock(BlasterController blaster) { }

	// RVA: 0x1006B94 Offset: 0x1006B94 VA: 0x1006B94
	private IEnumerator MoveBlasterToGhostDockCoroutine(BlasterController blaster) { }

	// RVA: 0x1006C3C Offset: 0x1006C3C VA: 0x1006C3C
	private IEnumerator MoveBlastersToGhostDocksCoroutine(List<BlasterController> blasters) { }

	// RVA: 0x1005AA0 Offset: 0x1005AA0 VA: 0x1005AA0
	public BaseBlasterDockController[] GetTargetDocksForBlaster(BlasterController blaster) { }

	// RVA: 0x1006CE4 Offset: 0x1006CE4 VA: 0x1006CE4
	public BaseBlasterDockController[] GetTargetDocksForBlaster(Type blasterType) { }

	// RVA: 0x1006D80 Offset: 0x1006D80 VA: 0x1006D80
	private void OnDockEmptied(BaseDockController dock) { }

	// RVA: 0x10071E8 Offset: 0x10071E8 VA: 0x10071E8
	private void RefreshGhostDockVisuals() { }

	// RVA: 0x100747C Offset: 0x100747C VA: 0x100747C
	private Vector3 GetGhostDockLocalPosition(int dockIndex, int usedDockCount) { }

	// RVA: 0x1007594 Offset: 0x1007594 VA: 0x1007594
	public int GetPlayOnBlasterCount(int requestedCount) { }

	// RVA: 0x10076D4 Offset: 0x10076D4 VA: 0x10076D4
	private void OnPlayOnRequestedHandler(PlayOnOffer offer) { }

	// RVA: 0x10076FC Offset: 0x10076FC VA: 0x10076FC
	private IEnumerator PlayOnCoroutine(PlayOnOffer offer) { }

	// RVA: 0x10077A8 Offset: 0x10077A8 VA: 0x10077A8
	private void OnBoosterStarted(CurrencyType boosterType) { }

	// RVA: 0x1007DA4 Offset: 0x1007DA4 VA: 0x1007DA4
	private void OnBoosterUsed(CurrencyType boosterType) { }

	// RVA: 0x1007DD0 Offset: 0x1007DD0 VA: 0x1007DD0
	private void AddExtraSlot() { }

	// RVA: 0x100896C Offset: 0x100896C VA: 0x100896C
	private void OnBoosterCancelled(CurrencyType boosterType) { }

	// RVA: 0x10085C4 Offset: 0x10085C4 VA: 0x10085C4
	private void OnBoosterCancelledOrUsed(CurrencyType boosterType, bool isUsed) { }

	// RVA: 0x1008B0C Offset: 0x1008B0C VA: 0x1008B0C
	private void OnBlasterShiftingFrontCompletedHandler() { }

	// RVA: 0x1008D64 Offset: 0x1008D64 VA: 0x1008D64
	private void OnMagnetAnimationStartedHandler(BlasterController pulledBlaster) { }

	// RVA: 0x1007A98 Offset: 0x1007A98 VA: 0x1007A98
	private void SinkPilotBlasterDocksBehindDim(Vector3 docksRootOffset) { }

	// RVA: 0x1008974 Offset: 0x1008974 VA: 0x1008974
	private void RestorePilotBlasterDocks(Vector3 docksRootOffset, float duration) { }

	// RVA: 0x1008EFC Offset: 0x1008EFC VA: 0x1008EFC
	public void ClearDocks() { }

	// RVA: 0x10094C0 Offset: 0x10094C0 VA: 0x10094C0
	public void .ctor() { }

	// RVA: 0x1009634 Offset: 0x1009634 VA: 0x1009634
	private static void .cctor() { }
}

// Namespace: Rotatelab.Scripts