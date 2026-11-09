public class BlasterGeneratorController : BasePlaceableController // TypeDefIndex: 4088
{
	// Fields
	[SerializeField]
	private Transform body; // 0x40
	[SerializeField]
	private Transform blastersParent; // 0x44
	[SerializeField]
	private TextMeshProUGUI remainingBlastersText; // 0x48
	[SerializeField]
	private float exposedBlasterScale; // 0x4C
	[SerializeField]
	private float bodyScaleAmount; // 0x50
	[SerializeField]
	private float exposeBlasterDuration; // 0x54
	[SerializeField]
	private float collapseDuration; // 0x58
	private List<BlasterController> remainingBlasters; // 0x5C
	[CompilerGenerated]
	private BlasterController <ExposedBlaster>k__BackingField; // 0x60
	private Sequence exposeBlasterSequence; // 0x68

	// Properties
	public int RemainingBlasterCount { get; }
	public List<BlasterController> RemainingBlasters { get; }
	public BlasterController ExposedBlaster { get; set; }

	// Methods

	// RVA: 0x103ADAC Offset: 0x103ADAC VA: 0x103ADAC
	public int get_RemainingBlasterCount() { }

	// RVA: 0x103ADFC Offset: 0x103ADFC VA: 0x103ADFC
	public List<BlasterController> get_RemainingBlasters() { }

	[CompilerGenerated]
	// RVA: 0x103AE04 Offset: 0x103AE04 VA: 0x103AE04
	public BlasterController get_ExposedBlaster() { }

	[CompilerGenerated]
	// RVA: 0x103AE0C Offset: 0x103AE0C VA: 0x103AE0C
	private void set_ExposedBlaster(BlasterController value) { }

	// RVA: 0x103AE14 Offset: 0x103AE14 VA: 0x103AE14
	public void UpdateAnimationState(BlasterGeneratorController.AnimationState state, bool smoothTransition = False) { }

	// RVA: 0x103AEBC Offset: 0x103AEBC VA: 0x103AEBC
	public void Initialize(List<BlasterData> innerData, BlasterController blasterPrefab, BulletPool bulletPool) { }

	// RVA: 0x103B240 Offset: 0x103B240 VA: 0x103B240
	public void TryExposeNextBlaster() { }

	// RVA: 0x103B824 Offset: 0x103B824 VA: 0x103B824
	public bool IsReadyToEject() { }

	// RVA: 0x1035F80 Offset: 0x1035F80 VA: 0x1035F80
	public void OnExposedBlasterEjecting() { }

	// RVA: 0x103B1C0 Offset: 0x103B1C0 VA: 0x103B1C0
	private void UpdateRemainingBlastersText() { }

	// RVA: 0x1037744 Offset: 0x1037744 VA: 0x1037744
	public void OnInnerBlasterRemovedExternally(BlasterController blaster) { }

	// RVA: 0x103B5BC Offset: 0x103B5BC VA: 0x103B5BC
	private void Destroy() { }

	// RVA: 0x103B8C0 Offset: 0x103B8C0 VA: 0x103B8C0
	public void .ctor() { }
}

// Namespace: 
[Serializable]