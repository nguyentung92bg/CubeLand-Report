public class LegoCubeMeshApplier : MonoBehaviour // TypeDefIndex: 4211
{
	// Fields
	private const string Sphere12PrefabPath = "Assets/_GameArt/Marketing/Lego/Prefabs/sphere12_ObjectRoot.prefab";
	private const string Sphere12CubeMeshPath = "Assets/_GameArt/Marketing/Lego/Prefabs/Prefab_fbx/sphere12_cube.asset";
	private static readonly int BaseColorId; // 0x0
	private static readonly int UseAutomaticVariationId; // 0x4
	private static readonly int ColorVariationStepId; // 0x8
	private static readonly int DarkenAmountId; // 0xC
	private static readonly int LightenAmountId; // 0x10
	private static readonly int DarkSaturationId; // 0x14
	private static readonly int DefaultHueId; // 0x18
	private static readonly int DefaultSaturationId; // 0x1C
	private static readonly int LightSaturationId; // 0x20
	private static readonly int UseVariantColorId; // 0x24
	private static readonly int VariantColorId; // 0x28
	[SerializeField]
	private Mesh cubeMesh; // 0x10
	[SerializeField]
	private bool useAutomaticColorVariants; // 0x14
	[SerializeField]
	private float darkenAmount; // 0x18
	[SerializeField]
	private float lightenAmount; // 0x1C
	[SerializeField]
	private float darkSaturation; // 0x20
	[SerializeField]
	private float defaultHue; // 0x24
	[SerializeField]
	private float defaultSaturation; // 0x28
	[SerializeField]
	private float lightSaturation; // 0x2C
	[SerializeField]
	private bool useManualVariantColors; // 0x30
	[SerializeField]
	private Color variantColor1; // 0x34
	[SerializeField]
	private Color variantColor2; // 0x44
	[SerializeField]
	private Color variantColor3; // 0x54
	[SerializeField]
	private Color variantColor4; // 0x64
	[SerializeField]
	private Color variantColor5; // 0x74
	[SerializeField]
	private int variationSeed; // 0x84
	[SerializeField]
	[HideInInspector]
	private bool variantColorsInitialized; // 0x88
	private MaterialPropertyBlock materialPropertyBlock; // 0x8C

	// Properties
	public Mesh CubeMesh { get; }

	// Methods

	// RVA: 0x106C258 Offset: 0x106C258 VA: 0x106C258
	public Mesh get_CubeMesh() { }

	// RVA: 0x106C260 Offset: 0x106C260 VA: 0x106C260
	protected void Awake() { }

	// RVA: 0x106C944 Offset: 0x106C944 VA: 0x106C944
	protected void Reset() { }

	// RVA: 0x106C278 Offset: 0x106C278 VA: 0x106C278
	private void InitializeVariantColors() { }

	[ContextMenu("Reset Variant Colors To Base Color")]
	// RVA: 0x106C948 Offset: 0x106C948 VA: 0x106C948
	private void ResetVariantColorsToBaseColor() { }

	// RVA: 0x106CC40 Offset: 0x106CC40 VA: 0x106CC40
	private void SetVariantColors(Color color) { }

	// RVA: 0x106C9BC Offset: 0x106C9BC VA: 0x106C9BC
	private bool TryGetBaseColor(out Color baseColor) { }

	[ContextMenu("Apply Color Variations")]
	// RVA: 0x106C2F0 Offset: 0x106C2F0 VA: 0x106C2F0
	private void ApplyColorVariations() { }

	// RVA: 0x106CD00 Offset: 0x106CD00 VA: 0x106CD00
	private Color GetVariantColor(int index) { }

	// RVA: 0x106CC7C Offset: 0x106CC7C VA: 0x106CC7C
	private int GetVariantIndex(string objectName, int index) { }

	// RVA: 0x106CD68 Offset: 0x106CD68 VA: 0x106CD68
	public void .ctor() { }

	// RVA: 0x106CDB4 Offset: 0x106CDB4 VA: 0x106CDB4
	private static void .cctor() { }
}

// Namespace: Rotatelab.EditorTools
[DisallowMultipleComponent]