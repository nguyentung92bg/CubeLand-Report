public class VoxelColorDataSo : SingletonScriptableObject<VoxelColorDataSo> // TypeDefIndex: 3985
{
	// Fields
	[SerializeField]
	private VoxelColorProperty[] voxelColors; // 0xC
	[SerializeField]
	private Mesh baseVoxelMesh; // 0x10
	[CompilerGenerated]
	[SerializeField]
	private Material <BaseVoxelMaterial>k__BackingField; // 0x14
	[CompilerGenerated]
	[SerializeField]
	private Material <GoldenVoxelMaterial>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private Material <BaseVoxelDestructionParticleTrailMaterial>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private Material <GoldenVoxelDestructionParticleTrailMaterial>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private Material <BaseVoxelDestructionGlowParticleMaterial>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private Material <GoldenVoxelDestructionGlowParticleMaterial>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private Gradient <BaseVoxelDestructionGlowParticleColorOverLifetime>k__BackingField; // 0x2C
	[CompilerGenerated]
	[SerializeField]
	private Gradient <GoldenVoxelDestructionGlowParticleColorOverLifetime>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private Sprite <GoldenVoxelCoinSprite>k__BackingField; // 0x34
	[CompilerGenerated]
	[SerializeField]
	private Sprite <JewelHeistSprite>k__BackingField; // 0x38

	// Properties
	public Material BaseVoxelMaterial { get; set; }
	public Material GoldenVoxelMaterial { get; set; }
	public Material BaseVoxelDestructionParticleTrailMaterial { get; set; }
	public Material GoldenVoxelDestructionParticleTrailMaterial { get; set; }
	public Material BaseVoxelDestructionGlowParticleMaterial { get; set; }
	public Material GoldenVoxelDestructionGlowParticleMaterial { get; set; }
	public Gradient BaseVoxelDestructionGlowParticleColorOverLifetime { get; set; }
	public Gradient GoldenVoxelDestructionGlowParticleColorOverLifetime { get; set; }
	public Sprite GoldenVoxelCoinSprite { get; set; }
	public Sprite JewelHeistSprite { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF52CC Offset: 0xFF52CC VA: 0xFF52CC
	public Material get_BaseVoxelMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF52D4 Offset: 0xFF52D4 VA: 0xFF52D4
	private void set_BaseVoxelMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF52DC Offset: 0xFF52DC VA: 0xFF52DC
	public Material get_GoldenVoxelMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF52E4 Offset: 0xFF52E4 VA: 0xFF52E4
	private void set_GoldenVoxelMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF52EC Offset: 0xFF52EC VA: 0xFF52EC
	public Material get_BaseVoxelDestructionParticleTrailMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF52F4 Offset: 0xFF52F4 VA: 0xFF52F4
	private void set_BaseVoxelDestructionParticleTrailMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF52FC Offset: 0xFF52FC VA: 0xFF52FC
	public Material get_GoldenVoxelDestructionParticleTrailMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF5304 Offset: 0xFF5304 VA: 0xFF5304
	private void set_GoldenVoxelDestructionParticleTrailMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF530C Offset: 0xFF530C VA: 0xFF530C
	public Material get_BaseVoxelDestructionGlowParticleMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF5314 Offset: 0xFF5314 VA: 0xFF5314
	private void set_BaseVoxelDestructionGlowParticleMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF531C Offset: 0xFF531C VA: 0xFF531C
	public Material get_GoldenVoxelDestructionGlowParticleMaterial() { }

	[CompilerGenerated]
	// RVA: 0xFF5324 Offset: 0xFF5324 VA: 0xFF5324
	private void set_GoldenVoxelDestructionGlowParticleMaterial(Material value) { }

	[CompilerGenerated]
	// RVA: 0xFF532C Offset: 0xFF532C VA: 0xFF532C
	public Gradient get_BaseVoxelDestructionGlowParticleColorOverLifetime() { }

	[CompilerGenerated]
	// RVA: 0xFF5334 Offset: 0xFF5334 VA: 0xFF5334
	private void set_BaseVoxelDestructionGlowParticleColorOverLifetime(Gradient value) { }

	[CompilerGenerated]
	// RVA: 0xFF533C Offset: 0xFF533C VA: 0xFF533C
	public Gradient get_GoldenVoxelDestructionGlowParticleColorOverLifetime() { }

	[CompilerGenerated]
	// RVA: 0xFF5344 Offset: 0xFF5344 VA: 0xFF5344
	private void set_GoldenVoxelDestructionGlowParticleColorOverLifetime(Gradient value) { }

	[CompilerGenerated]
	// RVA: 0xFF534C Offset: 0xFF534C VA: 0xFF534C
	public Sprite get_GoldenVoxelCoinSprite() { }

	[CompilerGenerated]
	// RVA: 0xFF5354 Offset: 0xFF5354 VA: 0xFF5354
	private void set_GoldenVoxelCoinSprite(Sprite value) { }

	[CompilerGenerated]
	// RVA: 0xFF535C Offset: 0xFF535C VA: 0xFF535C
	public Sprite get_JewelHeistSprite() { }

	[CompilerGenerated]
	// RVA: 0xFF5364 Offset: 0xFF5364 VA: 0xFF5364
	private void set_JewelHeistSprite(Sprite value) { }

	// RVA: 0xFF536C Offset: 0xFF536C VA: 0xFF536C
	public VoxelColorProperty GetData(ColorType colorType) { }

	// RVA: 0xFF54CC Offset: 0xFF54CC VA: 0xFF54CC
	public Mesh GetVoxelMesh(ColorType colorType) { }

	// RVA: 0xFF56EC Offset: 0xFF56EC VA: 0xFF56EC
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts
[Serializable]