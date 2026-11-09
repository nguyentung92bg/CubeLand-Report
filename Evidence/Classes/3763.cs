public class SlicedFilledImage : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter // TypeDefIndex: 3763
{
	// Fields
	private static readonly Vector3[] s_Vertices; // 0x0
	private static readonly Vector2[] s_UVs; // 0x4
	private static readonly Vector2[] s_SlicedVertices; // 0x8
	private static readonly Vector2[] s_SlicedUVs; // 0xC
	[SerializeField]
	private Sprite m_Sprite; // 0x80
	[SerializeField]
	private SlicedFilledImage.FillDirection m_FillDirection; // 0x84
	[SerializeField]
	private float m_FillAmount; // 0x88
	[SerializeField]
	private bool m_FillCenter; // 0x8C
	[SerializeField]
	private float m_PixelsPerUnitMultiplier; // 0x90
	private Sprite m_OverrideSprite; // 0x94
	[CompilerGenerated]
	private float <alphaHitTestMinimumThreshold>k__BackingField; // 0x98
	private bool m_Tracked; // 0x9C
	private static List<SlicedFilledImage> m_TrackedTexturelessImages; // 0x10
	private static bool s_Initialized; // 0x14

	// Properties
	public Sprite sprite { get; set; }
	public SlicedFilledImage.FillDirection fillDirection { get; set; }
	public float fillAmount { get; set; }
	public bool fillCenter { get; set; }
	public float pixelsPerUnitMultiplier { get; set; }
	public float pixelsPerUnit { get; }
	public Sprite overrideSprite { get; set; }
	private Sprite activeSprite { get; }
	public override Texture mainTexture { get; }
	public bool hasBorder { get; }
	public override Material material { get; set; }
	public float alphaHitTestMinimumThreshold { get; set; }
	private int UnityEngine.UI.ILayoutElement.layoutPriority { get; }
	private float UnityEngine.UI.ILayoutElement.minWidth { get; }
	private float UnityEngine.UI.ILayoutElement.minHeight { get; }
	private float UnityEngine.UI.ILayoutElement.flexibleWidth { get; }
	private float UnityEngine.UI.ILayoutElement.flexibleHeight { get; }
	private float UnityEngine.UI.ILayoutElement.preferredWidth { get; }
	private float UnityEngine.UI.ILayoutElement.preferredHeight { get; }

	// Methods

	// RVA: 0x1120278 Offset: 0x1120278 VA: 0x1120278
	public Sprite get_sprite() { }

	// RVA: 0x1120280 Offset: 0x1120280 VA: 0x1120280
	public void set_sprite(Sprite value) { }

	// RVA: 0x1120550 Offset: 0x1120550 VA: 0x1120550
	public SlicedFilledImage.FillDirection get_fillDirection() { }

	// RVA: 0x1120558 Offset: 0x1120558 VA: 0x1120558
	public void set_fillDirection(SlicedFilledImage.FillDirection value) { }

	// RVA: 0x11205D0 Offset: 0x11205D0 VA: 0x11205D0
	public float get_fillAmount() { }

	// RVA: 0x11205D8 Offset: 0x11205D8 VA: 0x11205D8
	public void set_fillAmount(float value) { }

	// RVA: 0x1120684 Offset: 0x1120684 VA: 0x1120684
	public bool get_fillCenter() { }

	// RVA: 0x112068C Offset: 0x112068C VA: 0x112068C
	public void set_fillCenter(bool value) { }

	// RVA: 0x1120704 Offset: 0x1120704 VA: 0x1120704
	public float get_pixelsPerUnitMultiplier() { }

	// RVA: 0x112070C Offset: 0x112070C VA: 0x112070C
	public void set_pixelsPerUnitMultiplier(float value) { }

	// RVA: 0x112072C Offset: 0x112072C VA: 0x112072C
	public float get_pixelsPerUnit() { }

	// RVA: 0x11208E0 Offset: 0x11208E0 VA: 0x11208E0
	public Sprite get_overrideSprite() { }

	// RVA: 0x11208E4 Offset: 0x11208E4 VA: 0x11208E4
	public void set_overrideSprite(Sprite value) { }

	// RVA: 0x1120860 Offset: 0x1120860 VA: 0x1120860
	private Sprite get_activeSprite() { }

	// RVA: 0x1120964 Offset: 0x1120964 VA: 0x1120964 Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x1120B20 Offset: 0x1120B20 VA: 0x1120B20
	public bool get_hasBorder() { }

	// RVA: 0x1120C08 Offset: 0x1120C08 VA: 0x1120C08 Slot: 32
	public override Material get_material() { }

	// RVA: 0x1120D60 Offset: 0x1120D60 VA: 0x1120D60 Slot: 33
	public override void set_material(Material value) { }

	[CompilerGenerated]
	// RVA: 0x1120D68 Offset: 0x1120D68 VA: 0x1120D68
	public float get_alphaHitTestMinimumThreshold() { }

	[CompilerGenerated]
	// RVA: 0x1120D70 Offset: 0x1120D70 VA: 0x1120D70
	public void set_alphaHitTestMinimumThreshold(float value) { }

	// RVA: 0x1120D78 Offset: 0x1120D78 VA: 0x1120D78
	protected void .ctor() { }

	// RVA: 0x1120DAC Offset: 0x1120DAC VA: 0x1120DAC Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x1120DC8 Offset: 0x1120DC8 VA: 0x1120DC8 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x1120E98 Offset: 0x1120E98 VA: 0x1120E98 Slot: 43
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x1121D70 Offset: 0x1121D70 VA: 0x1121D70 Slot: 40
	protected override void UpdateMaterial() { }

	// RVA: 0x1120F40 Offset: 0x1120F40 VA: 0x1120F40
	private void GenerateSlicedFilledSprite(VertexHelper vh) { }

	// RVA: 0x1122348 Offset: 0x1122348 VA: 0x1122348
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect) { }

	// RVA: 0x1121EA4 Offset: 0x1121EA4 VA: 0x1121EA4
	private void GenerateFilledSprite(VertexHelper vh, Vector4 vertices, Vector4 uvs, float fillAmount) { }

	// RVA: 0x11225C0 Offset: 0x11225C0 VA: 0x11225C0 Slot: 71
	private int UnityEngine.UI.ILayoutElement.get_layoutPriority() { }

	// RVA: 0x11225C8 Offset: 0x11225C8 VA: 0x11225C8 Slot: 65
	private float UnityEngine.UI.ILayoutElement.get_minWidth() { }

	// RVA: 0x11225D0 Offset: 0x11225D0 VA: 0x11225D0 Slot: 68
	private float UnityEngine.UI.ILayoutElement.get_minHeight() { }

	// RVA: 0x11225D8 Offset: 0x11225D8 VA: 0x11225D8 Slot: 67
	private float UnityEngine.UI.ILayoutElement.get_flexibleWidth() { }

	// RVA: 0x11225E4 Offset: 0x11225E4 VA: 0x11225E4 Slot: 70
	private float UnityEngine.UI.ILayoutElement.get_flexibleHeight() { }

	// RVA: 0x11225F0 Offset: 0x11225F0 VA: 0x11225F0 Slot: 66
	private float UnityEngine.UI.ILayoutElement.get_preferredWidth() { }

	// RVA: 0x11226BC Offset: 0x11226BC VA: 0x11226BC Slot: 69
	private float UnityEngine.UI.ILayoutElement.get_preferredHeight() { }

	// RVA: 0x1122788 Offset: 0x1122788 VA: 0x1122788 Slot: 63
	private void UnityEngine.UI.ILayoutElement.CalculateLayoutInputHorizontal() { }

	// RVA: 0x112278C Offset: 0x112278C VA: 0x112278C Slot: 64
	private void UnityEngine.UI.ILayoutElement.CalculateLayoutInputVertical() { }

	// RVA: 0x1122790 Offset: 0x1122790 VA: 0x1122790 Slot: 72
	private bool UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera) { }

	// RVA: 0x1122F18 Offset: 0x1122F18 VA: 0x1122F18 Slot: 61
	private void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize() { }

	// RVA: 0x1122F1C Offset: 0x1122F1C VA: 0x1122F1C Slot: 62
	private void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize() { }

	// RVA: 0x1120300 Offset: 0x1120300 VA: 0x1120300
	private void TrackImage() { }

	// RVA: 0x1120DF0 Offset: 0x1120DF0 VA: 0x1120DF0
	private void UnTrackImage() { }

	// RVA: 0x1122F4C Offset: 0x1122F4C VA: 0x1122F4C
	private static void RebuildImage(SpriteAtlas spriteAtlas) { }

	// RVA: 0x11230F8 Offset: 0x11230F8 VA: 0x11230F8
	private static void .cctor() { }
}

// Namespace: 