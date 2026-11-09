public class AboveUiOverlayRenderer : SingletonBehaviour<AboveUiOverlayRenderer> // TypeDefIndex: 3671
{
	// Fields
	private const string TargetLayerName = "RenderAboveUI";
	[SerializeField]
	private Camera overlayCamera; // 0x10
	[SerializeField]
	private Canvas overlayCanvas; // 0x14
	[SerializeField]
	private RawImage overlayImage; // 0x18
	private RenderTexture renderTexture; // 0x1C
	private GameObject target; // 0x20
	private int targetLayerBeforeOverlay; // 0x24

	// Methods

	// RVA: 0x10FBD68 Offset: 0x10FBD68 VA: 0x10FBD68
	public void Begin(GameObject target) { }

	// RVA: 0x10FC048 Offset: 0x10FC048 VA: 0x10FC048
	public void End() { }

	// RVA: 0x10FC22C Offset: 0x10FC22C VA: 0x10FC22C
	protected void LateUpdate() { }

	// RVA: 0x10FC2E0 Offset: 0x10FC2E0 VA: 0x10FC2E0
	protected void OnDisable() { }

	// RVA: 0x10FC2E4 Offset: 0x10FC2E4 VA: 0x10FC2E4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]