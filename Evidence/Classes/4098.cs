public class ConnectionController : MonoBehaviour // TypeDefIndex: 4098
{
	// Fields
	[SerializeField]
	private Renderer connectionRenderer; // 0x10
	[SerializeField]
	private Renderer connectionNodeRenderer; // 0x14
	[SerializeField]
	private Transform connectionTransform; // 0x18
	[SerializeField]
	private float lengthMultiplier; // 0x1C
	[SerializeField]
	private ParticleSystem breakParticle; // 0x20
	[CompilerGenerated]
	private BlasterController <ConnectedBlaster>k__BackingField; // 0x24
	private Transform blasterVisual; // 0x28
	private Transform lookAt; // 0x2C
	private Material colorMaterial; // 0x30

	// Properties
	public BlasterController ConnectedBlaster { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x103D090 Offset: 0x103D090 VA: 0x103D090
	public BlasterController get_ConnectedBlaster() { }

	[CompilerGenerated]
	// RVA: 0x103D098 Offset: 0x103D098 VA: 0x103D098
	private void set_ConnectedBlaster(BlasterController value) { }

	// RVA: 0x10320C0 Offset: 0x10320C0 VA: 0x10320C0
	public void Init(BlasterController connectedBlaster, Transform blasterVisual, Transform lookAt, Color color, bool isIced) { }

	// RVA: 0x103D0A0 Offset: 0x103D0A0 VA: 0x103D0A0
	protected void LateUpdate() { }

	// RVA: 0x1039740 Offset: 0x1039740 VA: 0x1039740
	public void UpdateColor(Color color) { }

	// RVA: 0x1033758 Offset: 0x1033758 VA: 0x1033758
	public void SetIced(bool isIced) { }

	// RVA: 0x103868C Offset: 0x103868C VA: 0x103868C
	public void PulseNode() { }

	// RVA: 0x1038D48 Offset: 0x1038D48 VA: 0x1038D48
	public void Break() { }

	// RVA: 0x103D1D0 Offset: 0x103D1D0 VA: 0x103D1D0
	public void .ctor() { }
}

// Namespace: 