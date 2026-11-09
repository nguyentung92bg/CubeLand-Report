public class BlasterColorDataSo : SingletonScriptableObject<BlasterColorDataSo> // TypeDefIndex: 3972
{
	// Fields
	[SerializeField]
	private BlasterColorProperty[] blasterColors; // 0xC
	[SerializeField]
	private Material baseBlasterStaticBodyMaterial; // 0x10
	[SerializeField]
	private Material baseBlasterSkinnedBodyMaterial; // 0x14
	[CompilerGenerated]
	[SerializeField]
	private Material <BlasterHiddenBodyMaterial>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private Material <BlasterStaticBodyOutlineMaterial>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private Material <IcedConnectionMaterial>k__BackingField; // 0x20
	[SerializeField]
	private Material baseBlasterDieRingParticleMaterial; // 0x24
	[SerializeField]
	private Material goldenBlasterDieRingParticleMaterial; // 0x28
	[SerializeField]
	private Material rainbowBlasterDieRingParticleMaterial; // 0x2C
	[SerializeField]
	private Material baseBlasterDieDropletsParticleMaterial; // 0x30
	[SerializeField]
	private Material goldenBlasterDieDropletsParticleMaterial; // 0x34
	[SerializeField]
	private Material rainbowBlasterDieDropletsParticleMaterial; // 0x38
	[SerializeField]
	private Color hiddenConnectionColor; // 0x3C

	// Properties
	public Material BlasterHiddenBodyMaterial { get; set; }
	public Material BlasterStaticBodyOutlineMaterial { get; set; }
	public Material IcedConnectionMaterial { get; set; }
	public Material BaseBlasterDieRingParticleMaterial { get; }
	public Material GoldenBlasterDieRingParticleMaterial { get; }
	public Material RainbowBlasterDieRingParticleMaterial { get; }
	public Material BaseBlasterDieDropletsParticleMaterial { get; }
	public Material GoldenBlasterDieDropletsParticleMaterial { get; }
	public Material RainbowBlasterDieDropletsParticleMaterial { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF46E0 Offset: 0xFF46E0 VA: 0xFF46E0
	public Material get_BlasterHiddenBodyMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF46E8 Offset: 0xFF46E8 VA: 0xFF46E8
	private void set_BlasterHiddenBodyMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF46F0 Offset: 0xFF46F0 VA: 0xFF46F0
	public Material get_BlasterStaticBodyOutlineMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF46F8 Offset: 0xFF46F8 VA: 0xFF46F8
	private void set_BlasterStaticBodyOutlineMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF4700 Offset: 0xFF4700 VA: 0xFF4700
	public Material get_IcedConnectionMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF4708 Offset: 0xFF4708 VA: 0xFF4708
	private void set_IcedConnectionMaterial(Material value) { }

	// RVA: 0xFF4710 Offset: 0xFF4710 VA: 0xFF4710
	public Material get_BaseBlasterDieRingParticleMaterial() { }

	// RVA: 0xFF4718 Offset: 0xFF4718 VA: 0xFF4718
	public Material get_GoldenBlasterDieRingParticleMaterial() { }

	// RVA: 0xFF4720 Offset: 0xFF4720 VA: 0xFF4720
	public Material get_RainbowBlasterDieRingParticleMaterial() { }

	// RVA: 0xFF4728 Offset: 0xFF4728 VA: 0xFF4728
	public Material get_BaseBlasterDieDropletsParticleMaterial() { }

	// RVA: 0xFF4730 Offset: 0xFF4730 VA: 0xFF4730
	public Material get_GoldenBlasterDieDropletsParticleMaterial() { }

	// RVA: 0xFF4738 Offset: 0xFF4738 VA: 0xFF4738
	public Material get_RainbowBlasterDieDropletsParticleMaterial() { }

	// RVA: 0xFF4740 Offset: 0xFF4740 VA: 0xFF4740
	private BlasterColorProperty GetDataByType(ColorType colorType) { }

	// RVA: 0xFF48A0 Offset: 0xFF48A0 VA: 0xFF48A0
	public Material GetBodyMaterialByType(ColorType colorType, bool isSkinned) { }

	// RVA: 0xFF4C04 Offset: 0xFF4C04 VA: 0xFF4C04
	public Color GetColorByType(ColorType colorType) { }

	// RVA: 0xFF4C38 Offset: 0xFF4C38 VA: 0xFF4C38
	public Color GetConnectionColorByType(ColorType colorType, bool isHidden) { }

	// RVA: 0xFF4C7C Offset: 0xFF4C7C VA: 0xFF4C7C
	public Color GetShadowColorByType(ColorType colorType) { }

	// RVA: 0xFF4CB0 Offset: 0xFF4CB0 VA: 0xFF4CB0
	public Color GetSpecularColorByType(ColorType colorType) { }

	// RVA: 0xFF4CE4 Offset: 0xFF4CE4 VA: 0xFF4CE4
	public Material GetHatMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4D04 Offset: 0xFF4D04 VA: 0xFF4D04
	public Material GetPropellerMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4D24 Offset: 0xFF4D24 VA: 0xFF4D24
	public Material GetPropellerFadeMaterialByType(ColorType colorType, PropellerFadeAlpha alpha) { }

	// RVA: 0xFF4D84 Offset: 0xFF4D84 VA: 0xFF4D84
	public Gradient GetDieRingParticleColorByType(ColorType colorType) { }

	// RVA: 0xFF4DA4 Offset: 0xFF4DA4 VA: 0xFF4DA4
	public Gradient GetDieDropletParticleColorByType(ColorType colorType) { }

	// RVA: 0xFF4DC4 Offset: 0xFF4DC4 VA: 0xFF4DC4
	public Material GetBulletMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4DE4 Offset: 0xFF4DE4 VA: 0xFF4DE4
	public Material GetBulletTrailMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4E04 Offset: 0xFF4E04 VA: 0xFF4E04
	public Material GetColorBarrelBaseMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4E24 Offset: 0xFF4E24 VA: 0xFF4E24
	public Material GetColorBarrelTopMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4E44 Offset: 0xFF4E44 VA: 0xFF4E44
	public Material GetColorBarrelExplosionParticleMaterialByType(ColorType colorType) { }

	// RVA: 0xFF4E64 Offset: 0xFF4E64 VA: 0xFF4E64
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xFF4A3C Offset: 0xFF4A3C VA: 0xFF4A3C
	internal static Material <GetBodyMaterialByType>g__InstantiateBaseMaterial|35_0(Material baseMaterial, ref BlasterColorDataSo.<>c__DisplayClass35_0 ) { }
}

// Namespace: Rotatelab.Scripts
[Serializable]