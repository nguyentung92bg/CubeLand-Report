public class PilotBlasterController : BlasterController // TypeDefIndex: 4112
{
	// Fields
	private static readonly int MainUvSetId; // 0x0
	[SerializeField]
	private Transform pilotShooterTransform; // 0x128
	[SerializeField]
	private MeshRenderer hatRenderer; // 0x12C
	[SerializeField]
	private MeshRenderer propellerRenderer; // 0x130
	[SerializeField]
	private GameObject propellerFadeBlades; // 0x134
	[SerializeField]
	private MeshRenderer[] fadeBladesLowAlpha; // 0x138
	[SerializeField]
	private MeshRenderer[] fadeBladesMediumAlpha; // 0x13C
	[SerializeField]
	private MeshRenderer[] fadeBladesHighAlpha; // 0x140
	[SerializeField]
	private SpriteRenderer blobShadowRenderer; // 0x144
	[SerializeField]
	private float queueShooterScale; // 0x148
	private MaterialPropertyBlock hiddenAccessoryPropertyBlock; // 0x14C
	[SerializeField]
	private TextMeshProUGUI leftSideText; // 0x150
	[SerializeField]
	private TextMeshProUGUI rightSideText; // 0x154
	[SerializeField]
	private float flightDuration; // 0x158
	[SerializeField]
	private float takeoffHeight; // 0x15C
	[SerializeField]
	private float landingScale; // 0x160
	[SerializeField]
	private float closeLegsWeight; // 0x164
	[SerializeField]
	private float aimYawIdle; // 0x168
	[SerializeField]
	private float aimYawMin; // 0x16C
	[SerializeField]
	private float aimYawMax; // 0x170
	[SerializeField]
	private float aimWorldXRange; // 0x174
	[SerializeField]
	private float aimTweenDuration; // 0x178
	[SerializeField]
	private float hoverBobAmplitude; // 0x17C
	[SerializeField]
	private float hoverBobUpDuration; // 0x180
	[SerializeField]
	private float hoverBobDownDuration; // 0x184
	[SerializeField]
	private float queuePropellerSpeed; // 0x188
	[SerializeField]
	private float frontRowPropellerSpeed; // 0x18C
	[SerializeField]
	private float hoverPropellerSpeed; // 0x190
	[SerializeField]
	private float flightPropellerSpeed; // 0x194
	private Tween _flightPathTween; // 0x198
	private Sequence hoverAtDockSequence; // 0x1A0
	private int _closeLegsIndex; // 0x1B0

	// Properties
	protected override bool AllowFailSearchAnimation { get; }

	// Methods

	// RVA: 0x103F480 Offset: 0x103F480 VA: 0x103F480 Slot: 5
	protected override bool get_AllowFailSearchAnimation() { }

	// RVA: 0x103F488 Offset: 0x103F488 VA: 0x103F488 Slot: 9
	public override void Initialize(BulletPool bulletPool) { }

	// RVA: 0x103F5D0 Offset: 0x103F5D0 VA: 0x103F5D0 Slot: 16
	protected override void Rotate(Vector3 targetPosition) { }

	// RVA: 0x103F820 Offset: 0x103F820 VA: 0x103F820 Slot: 17
	protected override void ResetRotation() { }

	// RVA: 0x103F920 Offset: 0x103F920 VA: 0x103F920 Slot: 10
	public override void SetSkinnedRendererActive(bool isActive) { }

	// RVA: 0x103FAF4 Offset: 0x103FAF4 VA: 0x103FAF4 Slot: 11
	protected override void RefreshMaterials() { }

	// RVA: 0x103FCE4 Offset: 0x103FCE4 VA: 0x103FCE4
	private void SetAccessoryMaterial(MeshRenderer renderer, Material material) { }

	// RVA: 0x103FF40 Offset: 0x103FF40 VA: 0x103FF40 Slot: 14
	public override void Place(BaseBlasterDockController dock) { }

	// RVA: 0x10407A0 Offset: 0x10407A0 VA: 0x10407A0
	private void OnFlightComplete() { }

	// RVA: 0x1040A14 Offset: 0x1040A14 VA: 0x1040A14
	protected void Update() { }

	// RVA: 0x1040B24 Offset: 0x1040B24 VA: 0x1040B24 Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x1040B60 Offset: 0x1040B60 VA: 0x1040B60
	public void .ctor() { }

	// RVA: 0x1040C54 Offset: 0x1040C54 VA: 0x1040C54
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x103FE50 Offset: 0x103FE50 VA: 0x103FE50
	private void <RefreshMaterials>g__SetFadeBladeMaterials|38_0(Material low, Material medium, Material high) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]