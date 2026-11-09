public interface IDimEffectTarget // TypeDefIndex: 3674
{
	// Properties
	public abstract Transform transform { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Transform get_transform();

	// RVA: 0x10FC338 Offset: 0x10FC338 VA: 0x10FC338 Slot: 1
	public virtual void GetDimmableRenderers(HashSet<Renderer> renderers) { }

	// RVA: 0x10FC3EC Offset: 0x10FC3EC VA: 0x10FC3EC
	public static void GetDimmableRenderers(Component component, HashSet<Renderer> renderers) { }

	// RVA: 0x10FC718 Offset: 0x10FC718 VA: 0x10FC718
	public static void DimEverythingExceptStandardVoxels() { }

	// RVA: 0x10FC814 Offset: 0x10FC814 VA: 0x10FC814
	public static void DimWithFilter(Predicate<Component> filter) { }

	// RVA: 0x10FD124 Offset: 0x10FD124 VA: 0x10FD124
	public static void StopActiveDimEffect() { }

	[CompilerGenerated]
	// RVA: 0x10FCBC4 Offset: 0x10FCBC4 VA: 0x10FCBC4
	internal static void <DimWithFilter>g__AddRenderersOf|5_0(Component component, ref IDimEffectTarget.<>c__DisplayClass5_0 ) { }
}

// Namespace: Rotatelab.FX