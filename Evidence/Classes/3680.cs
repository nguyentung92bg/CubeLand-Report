public class RenderersOverlayEffect : SingletonBehaviour<RenderersOverlayEffect> // TypeDefIndex: 3680
{
	// Fields
	private const int TargetLayer = 1;
	[SerializeField]
	private Material baseMaterial; // 0x10
	private RenderersOverlayEffect.RenderPass renderPass; // 0x14
	private Renderer[] renderers; // 0x18
	private int[] rendererLayers; // 0x1C
	private Tween fadeTween; // 0x20

	// Methods

	// RVA: 0x10FDD38 Offset: 0x10FDD38 VA: 0x10FDD38
	protected void OnEnable() { }

	// RVA: 0x10FDDC8 Offset: 0x10FDDC8 VA: 0x10FDDC8
	protected void OnDisable() { }

	// RVA: 0x10FDE58 Offset: 0x10FDE58 VA: 0x10FDE58
	private void OnBeginCameraRendering(ScriptableRenderContext context, Camera camera) { }

	// RVA: 0x10FCDAC Offset: 0x10FCDAC VA: 0x10FCDAC
	public void Activate(Renderer[] renderers, Color color, float fadeTime = 0.15) { }

	// RVA: 0x10FD190 Offset: 0x10FD190 VA: 0x10FD190
	public void Stop(float fadeTime = 0.15) { }

	// RVA: 0x10FE2A0 Offset: 0x10FE2A0 VA: 0x10FE2A0
	private void DestroyRenderPass() { }

	// RVA: 0x10FE45C Offset: 0x10FE45C VA: 0x10FE45C
	public void .ctor() { }
}

// Namespace: 