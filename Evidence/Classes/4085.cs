public class BlasterController : BasePlaceableController // TypeDefIndex: 4085
{
	// Fields
	[SerializeField]
	private Transform blasterVisual; // 0x40
	[SerializeField]
	protected SkinnedMeshRenderer skinnedMeshRenderer; // 0x44
	[SerializeField]
	private MeshRenderer staticMeshRenderer; // 0x48
	[SerializeField]
	private BlasterAnimEventBridge animEventBridge; // 0x4C
	private Renderer blasterRenderer; // 0x50
	[SerializeField]
	protected TextMeshProUGUI bulletCountText; // 0x54
	private Nullable<Color> defaultBulletCountColor; // 0x58
	private object highlightOwner; // 0x6C
	[SerializeField]
	protected float timeBetweenShoots; // 0x70
	[SerializeField]
	private Transform bulletSpawnPoint; // 0x74
	[SerializeField]
	private TextMeshProUGUI hiddenModeQuestionMarkText; // 0x78
	[SerializeField]
	private Transform connectionJoint; // 0x7C
	[SerializeField]
	private ConnectionController connectionPrefab; // 0x80
	[SerializeField]
	private ChainConnectionController chainConnectionPrefab; // 0x84
	[SerializeField]
	private GameObject goldenShineObject; // 0x88
	[SerializeField]
	private GameObject iceObject; // 0x8C
	[SerializeField]
	private TextMeshProUGUI iceHealthText; // 0x90
	private int iceHealth; // 0x94
	[SerializeField]
	private JewelController jewelHeistPrefab; // 0x98
	[SerializeField]
	private Transform jewelHeistSpawnPoint; // 0x9C
	private JewelController currentJewelHeist; // 0xA0
	[SerializeField]
	private TrapController trapObject; // 0xA4
	[SerializeField]
	private ColorBarrelController colorBarrelObject; // 0xA8
	private BlasterController.AnimationState currentState; // 0xAC
	private BulletPool bulletPool; // 0xB0
	private int secondaryBulletCount; // 0xB4
	[CompilerGenerated]
	private Component <Owner>k__BackingField; // 0xB8
	[CompilerGenerated]
	private BaseBlasterDockController <CurrentDock>k__BackingField; // 0xBC
	[CompilerGenerated]
	private bool <IsPlacedToDock>k__BackingField; // 0xC0
	[CompilerGenerated]
	private bool <IsDestroyed>k__BackingField; // 0xC1
	[CompilerGenerated]
	private bool <IsHidden>k__BackingField; // 0xC2
	[CompilerGenerated]
	private bool <IsShooting>k__BackingField; // 0xC3
	[CompilerGenerated]
	private bool <IsChainConnected>k__BackingField; // 0xC4
	[CompilerGenerated]
	private bool <HasJewel>k__BackingField; // 0xC5
	[CompilerGenerated]
	private bool <IsWarningAnimationPlaying>k__BackingField; // 0xC6
	[CompilerGenerated]
	private bool <IsEnteringQueue>k__BackingField; // 0xC7
	private const float GhostDockScaleDuration = 0.25;
	private const float SecondaryRevealScaleMultiplier = 1.4;
	private Tween endlessScaleTween; // 0xC8
	private Tween shakeTween; // 0xD8
	private Tween ghostDockScaleTween; // 0xE8
	protected Tween rotationTween; // 0xF8
	private Coroutine shootingCoroutine; // 0x108
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0x10C
	[CompilerGenerated]
	private ColorType <SecondaryColorType>k__BackingField; // 0x110
	[CompilerGenerated]
	private int <CurrentBulletCount>k__BackingField; // 0x114
	public static GameAction<ColorType, int> OnBulletsConsumed; // 0x0
	public static GameAction OnBulletFired; // 0x4
	public readonly List<ConnectionController> Connections; // 0x118
	public readonly List<ChainConnectionController> ChainConnections; // 0x11C
	public readonly List<BlasterController> AllConnectedBlasters; // 0x120
	public readonly List<BlasterController> AllChainedBlasters; // 0x124

	// Properties
	public Component Owner { get; set; }
	public BaseBlasterDockController CurrentDock { get; set; }
	public bool IsPlacedToDock { get; set; }
	public bool IsBeingPlacedToDock { get; }
	public bool IsDestroyed { get; set; }
	public bool IsHidden { get; set; }
	public bool IsIced { get; }
	public bool IsShooting { get; set; }
	public bool IsChainConnected { get; set; }
	public bool HasJewel { get; set; }
	public bool HasTrap { get; }
	public bool IsTrapOpen { get; }
	public bool HasColorBarrel { get; }
	public bool IsColorBarrelOpen { get; }
	public bool IsWarningAnimationPlaying { get; set; }
	public bool IsEnteringQueue { get; set; }
	protected virtual bool AllowFailSearchAnimation { get; }
	public ColorType ColorType { get; set; }
	public ColorType SecondaryColorType { get; set; }
	public bool IsDoubleColored { get; }
	public int CurrentBulletCount { get; set; }
	public bool IsConnected { get; }
	private bool UsesGhostDockScale { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1030D50 Offset: 0x1030D50 VA: 0x1030D50
	public Component get_Owner() { }

	[CompilerGenerated]
	// RVA: 0x1030D58 Offset: 0x1030D58 VA: 0x1030D58
	public void set_Owner(Component value) { }

	[CompilerGenerated]
	// RVA: 0x1030D60 Offset: 0x1030D60 VA: 0x1030D60
	public BaseBlasterDockController get_CurrentDock() { }

	[CompilerGenerated]
	// RVA: 0x1030D68 Offset: 0x1030D68 VA: 0x1030D68
	private void set_CurrentDock(BaseBlasterDockController value) { }

	[CompilerGenerated]
	// RVA: 0x1030D70 Offset: 0x1030D70 VA: 0x1030D70
	public bool get_IsPlacedToDock() { }

	[CompilerGenerated]
	// RVA: 0x1030D78 Offset: 0x1030D78 VA: 0x1030D78
	private void set_IsPlacedToDock(bool value) { }

	// RVA: 0x1030D80 Offset: 0x1030D80 VA: 0x1030D80
	public bool get_IsBeingPlacedToDock() { }

	[CompilerGenerated]
	// RVA: 0x1030E00 Offset: 0x1030E00 VA: 0x1030E00
	public bool get_IsDestroyed() { }

	[CompilerGenerated]
	// RVA: 0x1030E08 Offset: 0x1030E08 VA: 0x1030E08
	private void set_IsDestroyed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1030E10 Offset: 0x1030E10 VA: 0x1030E10
	public bool get_IsHidden() { }

	[CompilerGenerated]
	// RVA: 0x1030E18 Offset: 0x1030E18 VA: 0x1030E18
	private void set_IsHidden(bool value) { }

	// RVA: 0x1030E20 Offset: 0x1030E20 VA: 0x1030E20
	public bool get_IsIced() { }

	[CompilerGenerated]
	// RVA: 0x1030E34 Offset: 0x1030E34 VA: 0x1030E34
	public bool get_IsShooting() { }

	[CompilerGenerated]
	// RVA: 0x1030E3C Offset: 0x1030E3C VA: 0x1030E3C
	private void set_IsShooting(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1030E44 Offset: 0x1030E44 VA: 0x1030E44
	public bool get_IsChainConnected() { }

	[CompilerGenerated]
	// RVA: 0x1030E4C Offset: 0x1030E4C VA: 0x1030E4C
	private void set_IsChainConnected(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1030E54 Offset: 0x1030E54 VA: 0x1030E54
	public bool get_HasJewel() { }

	[CompilerGenerated]
	// RVA: 0x1030E5C Offset: 0x1030E5C VA: 0x1030E5C
	private void set_HasJewel(bool value) { }

	// RVA: 0x1030E64 Offset: 0x1030E64 VA: 0x1030E64
	public bool get_HasTrap() { }

	// RVA: 0x1030E88 Offset: 0x1030E88 VA: 0x1030E88
	public bool get_IsTrapOpen() { }

	// RVA: 0x1030EDC Offset: 0x1030EDC VA: 0x1030EDC
	public bool get_HasColorBarrel() { }

	// RVA: 0x1030F00 Offset: 0x1030F00 VA: 0x1030F00
	public bool get_IsColorBarrelOpen() { }

	[CompilerGenerated]
	// RVA: 0x1030F54 Offset: 0x1030F54 VA: 0x1030F54
	public bool get_IsWarningAnimationPlaying() { }

	[CompilerGenerated]
	// RVA: 0x1030F5C Offset: 0x1030F5C VA: 0x1030F5C
	private void set_IsWarningAnimationPlaying(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1030F64 Offset: 0x1030F64 VA: 0x1030F64
	public bool get_IsEnteringQueue() { }

	[CompilerGenerated]
	// RVA: 0x1030F6C Offset: 0x1030F6C VA: 0x1030F6C
	public void set_IsEnteringQueue(bool value) { }

	// RVA: 0x1030F74 Offset: 0x1030F74 VA: 0x1030F74 Slot: 5
	protected virtual bool get_AllowFailSearchAnimation() { }

	[CompilerGenerated]
	// RVA: 0x1030F90 Offset: 0x1030F90 VA: 0x1030F90
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0x1030F98 Offset: 0x1030F98 VA: 0x1030F98
	private void set_ColorType(ColorType value) { }

	[CompilerGenerated]
	// RVA: 0x1030FA0 Offset: 0x1030FA0 VA: 0x1030FA0
	public ColorType get_SecondaryColorType() { }

	[CompilerGenerated]
	// RVA: 0x1030FA8 Offset: 0x1030FA8 VA: 0x1030FA8
	private void set_SecondaryColorType(ColorType value) { }

	// RVA: 0x1030FB0 Offset: 0x1030FB0 VA: 0x1030FB0
	public bool get_IsDoubleColored() { }

	[CompilerGenerated]
	// RVA: 0x1030FC0 Offset: 0x1030FC0 VA: 0x1030FC0
	public int get_CurrentBulletCount() { }

	[CompilerGenerated]
	// RVA: 0x1030FC8 Offset: 0x1030FC8 VA: 0x1030FC8
	private void set_CurrentBulletCount(int value) { }

	// RVA: 0x1030FD0 Offset: 0x1030FD0 VA: 0x1030FD0
	public bool get_IsConnected() { }

	// RVA: 0x103102C Offset: 0x103102C VA: 0x103102C Slot: 6
	protected virtual void OnEnable() { }

	// RVA: 0x103133C Offset: 0x103133C VA: 0x103133C Slot: 7
	protected virtual void OnDisable() { }

	// RVA: 0x103164C Offset: 0x103164C VA: 0x103164C Slot: 8
	protected virtual void OnDestroy() { }

	// RVA: 0x10316D8 Offset: 0x10316D8 VA: 0x10316D8 Slot: 9
	public virtual void Initialize(BulletPool bulletPool) { }

	// RVA: 0x1031D7C Offset: 0x1031D7C VA: 0x1031D7C
	public void CreateConnections() { }

	// RVA: 0x1032208 Offset: 0x1032208 VA: 0x1032208
	public void CreateChainConnections() { }

	// RVA: 0x103252C Offset: 0x103252C VA: 0x103252C
	public void RefreshAllConnectedBlasters() { }

	// RVA: 0x1032790 Offset: 0x1032790 VA: 0x1032790
	public void RefreshAllChainedBlasters() { }

	// RVA: 0x10329F4 Offset: 0x10329F4 VA: 0x10329F4
	public void BreakAllConnections() { }

	// RVA: 0x1032AB0 Offset: 0x1032AB0 VA: 0x1032AB0
	private void BreakConnection(BlasterController blaster) { }

	// RVA: 0x1032F74 Offset: 0x1032F74 VA: 0x1032F74
	public void CreateJewelHeist() { }

	// RVA: 0x1033038 Offset: 0x1033038 VA: 0x1033038 Slot: 10
	public virtual void SetSkinnedRendererActive(bool isActive) { }

	// RVA: 0x10331D0 Offset: 0x10331D0 VA: 0x10331D0
	private void TryBreakIce() { }

	// RVA: 0x1033814 Offset: 0x1033814 VA: 0x1033814
	private void SwingChains() { }

	// RVA: 0x1033A90 Offset: 0x1033A90 VA: 0x1033A90
	private void TryBreakChains() { }

	// RVA: 0x1033C88 Offset: 0x1033C88 VA: 0x1033C88
	public void BreakChains(bool playSfx) { }

	// RVA: 0x1033E58 Offset: 0x1033E58 VA: 0x1033E58
	private void CollectJewelHeist() { }

	// RVA: 0x1031C54 Offset: 0x1031C54 VA: 0x1031C54
	private void SetHiddenModeActive(bool isHidden) { }

	// RVA: 0x1033F10 Offset: 0x1033F10 VA: 0x1033F10
	public void SetBulletCountTextVisibility(bool isVisible) { }

	// RVA: 0x1033F58 Offset: 0x1033F58 VA: 0x1033F58
	public Tween ScaleBlasterVisual(float scale, float duration, Ease ease = 0) { }

	// RVA: 0x1034040 Offset: 0x1034040 VA: 0x1034040
	private bool get_UsesGhostDockScale() { }

	// RVA: 0x1034104 Offset: 0x1034104 VA: 0x1034104
	public void RefreshGhostDockScale() { }

	// RVA: 0x10341EC Offset: 0x10341EC VA: 0x10341EC
	private void TryUpdateTrap(bool shouldHide) { }

	// RVA: 0x1034264 Offset: 0x1034264 VA: 0x1034264
	public void OpenTrapPermanently() { }

	// RVA: 0x103428C Offset: 0x103428C VA: 0x103428C
	public void PlayColorBarrelQueueMove(bool isMovingToActive) { }

	// RVA: 0x1034708 Offset: 0x1034708 VA: 0x1034708
	private void TryUpdateColorCage(ColorType colorType, ColorType secondaryColorType) { }

	// RVA: 0x103481C Offset: 0x103481C VA: 0x103481C
	public void AnimateHiddenReveal() { }

	// RVA: 0x1034AB0 Offset: 0x1034AB0 VA: 0x1034AB0 Slot: 4
	public override void OnShuffleSettled() { }

	// RVA: 0x1034B84 Offset: 0x1034B84 VA: 0x1034B84 Slot: 11
	protected virtual void RefreshMaterials() { }

	// RVA: 0x1034E24 Offset: 0x1034E24 VA: 0x1034E24
	public void SetEndlessScaleAnimationEnabled(bool enabled) { }

	// RVA: 0x1034FBC Offset: 0x1034FBC VA: 0x1034FBC
	public void SetEndlessShakeAnimationEnabled(bool enabled) { }

	// RVA: 0x10351BC Offset: 0x10351BC VA: 0x10351BC
	public void WarningAnimation() { }

	// RVA: 0x1031A08 Offset: 0x1031A08 VA: 0x1031A08
	private void UpdateBulletCount() { }

	// RVA: 0x10353E4 Offset: 0x10353E4 VA: 0x10353E4
	public void SetBulletCountHighlighted(bool isHighlighted, Color highlightColor, object caller) { }

	// RVA: 0x1031B30 Offset: 0x1031B30 VA: 0x1031B30
	private void UpdateIceHealthText() { }

	// RVA: 0x103561C Offset: 0x103561C VA: 0x103561C
	public bool IsPlaceable() { }

	// RVA: 0x10357C4 Offset: 0x10357C4 VA: 0x10357C4
	private bool IsSameColumnFrontStack() { }

	// RVA: 0x10359C4 Offset: 0x10359C4 VA: 0x10359C4 Slot: 12
	protected virtual bool IsSelfPlaceable() { }

	// RVA: 0x10359D8 Offset: 0x10359D8 VA: 0x10359D8 Slot: 13
	protected virtual bool IsSelfPlaceable(bool ignoreRowRestriction) { }

	// RVA: 0x1035B1C Offset: 0x1035B1C VA: 0x1035B1C
	public int NeededPlaceableSpace() { }

	// RVA: 0x1035B6C Offset: 0x1035B6C VA: 0x1035B6C Slot: 14
	public virtual void Place(BaseBlasterDockController dock) { }

	// RVA: 0x1036220 Offset: 0x1036220 VA: 0x1036220
	protected void OnBeingPlacedToDock(BaseBlasterDockController dock) { }

	// RVA: 0x1036408 Offset: 0x1036408 VA: 0x1036408
	protected void OnPlacedToDock() { }

	// RVA: 0x103643C Offset: 0x103643C VA: 0x103643C Slot: 15
	protected virtual bool IsShootingAllowed() { }

	// RVA: 0x1036550 Offset: 0x1036550 VA: 0x1036550
	public bool HasShootableTarget() { }

	// RVA: 0x1036330 Offset: 0x1036330 VA: 0x1036330
	private void SetShootingState(bool startShooting) { }

	// RVA: 0x103694C Offset: 0x103694C VA: 0x103694C
	private IEnumerator ShootingCoroutine() { }

	// RVA: 0x10365A8 Offset: 0x10365A8 VA: 0x10365A8
	private bool TryFindTarget(out BaseTargetableController targetable) { }

	// RVA: 0x10369E0 Offset: 0x10369E0 VA: 0x10369E0
	private bool IsTargetableValid(BaseTargetableController targetable) { }

	// RVA: 0x1036AF4 Offset: 0x1036AF4 VA: 0x1036AF4
	private void ShowSecondaryBlaster(bool immediately = False) { }

	// RVA: 0x1036EB4 Offset: 0x1036EB4 VA: 0x1036EB4
	private void SpawnBullet(BaseTargetableController target, Vector3 targetPoint) { }

	// RVA: 0x10372FC Offset: 0x10372FC VA: 0x10372FC
	public int ConsumeBulletsExternally(ColorType colorType, int totalBulletsToConsume) { }

	// RVA: 0x1037BC4 Offset: 0x1037BC4 VA: 0x1037BC4 Slot: 16
	protected virtual void Rotate(Vector3 targetPosition) { }

	// RVA: 0x1037DF0 Offset: 0x1037DF0 VA: 0x1037DF0 Slot: 17
	protected virtual void ResetRotation() { }

	// RVA: 0x1037F3C Offset: 0x1037F3C VA: 0x1037F3C Slot: 18
	public virtual void UpdateAnimationState(BlasterController.AnimationState newState) { }

	// RVA: 0x1034B3C Offset: 0x1034B3C VA: 0x1034B3C
	public void SetSkinnedMeshDetails(bool isEnabled) { }

	// RVA: 0x1038660 Offset: 0x1038660 VA: 0x1038660
	public void SetAnimBridge(bool isEnabled) { }

	// RVA: 0x10384EC Offset: 0x10384EC VA: 0x10384EC
	private void PulseConnectionNodes() { }

	// RVA: 0x103784C Offset: 0x103784C VA: 0x103784C
	public void Destroy() { }

	// RVA: 0x10387F0 Offset: 0x10387F0 VA: 0x10387F0
	private void OnManualObjectRotationModeToggled(bool isEnabled) { }

	// RVA: 0x10387F8 Offset: 0x10387F8 VA: 0x10387F8
	private void OnGamePauseStateChanged(bool isPaused) { }

	// RVA: 0x1038800 Offset: 0x1038800 VA: 0x1038800
	private void OnPlaceableLeftQueueHandler(BasePlaceableController placeable) { }

	// RVA: 0x1038980 Offset: 0x1038980 VA: 0x1038980
	private void OnFailSearchStateChanged(bool isEnabled) { }

	// RVA: 0x10389E4 Offset: 0x10389E4 VA: 0x10389E4
	private void OnLevelFailedHandler() { }

	// RVA: 0x1038A04 Offset: 0x1038A04 VA: 0x1038A04
	private CustomYieldInstruction GetShootingDelay() { }

	// RVA: 0x1038AC0 Offset: 0x1038AC0 VA: 0x1038AC0
	public void .ctor() { }

	// RVA: 0x1038C4C Offset: 0x1038C4C VA: 0x1038C4C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x10325AC Offset: 0x10325AC VA: 0x10325AC
	private void <RefreshAllConnectedBlasters>g__GetConnectionsRecursive|117_0(BlasterController current) { }

	[CompilerGenerated]
	// RVA: 0x1032810 Offset: 0x1032810 VA: 0x1032810
	private void <RefreshAllChainedBlasters>g__GetChainConnectionsRecursive|118_0(BlasterController current) { }

	[CompilerGenerated]
	// RVA: 0x1032DB4 Offset: 0x1032DB4 VA: 0x1032DB4
	internal static void <BreakConnection>g__BreakConnectionInternal|120_0(BlasterController from, BlasterController to) { }

	[CompilerGenerated]
	// RVA: 0x103913C Offset: 0x103913C VA: 0x103913C
	private void <TryBreakChains>b__125_1() { }

	[CompilerGenerated]
	// RVA: 0x1039144 Offset: 0x1039144 VA: 0x1039144
	private void <ShootingCoroutine>g__OnBulletsDepleted|158_0() { }

	[CompilerGenerated]
	// RVA: 0x10383F4 Offset: 0x10383F4 VA: 0x10383F4
	private void <UpdateAnimationState>g__JumpVisual|166_0(float amount, float duration, float delay = 0) { }
}

// Namespace: 