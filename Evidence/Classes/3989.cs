public abstract class BaseTargetableController : MonoBehaviour, IDimEffectTarget // TypeDefIndex: 3989
{
	// Fields
	[SerializeField]
	protected Renderer targetableRenderer; // 0x10
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0x14
	[CompilerGenerated]
	private bool <IsDestroyed>k__BackingField; // 0x18
	private bool m_isTargetable; // 0x19
	private int lastVisibleOnScreenFrame; // 0x1C
	[CompilerGenerated]
	private bool <IsVisibleOnScreen>k__BackingField; // 0x20
	protected Sequence scaleSequence; // 0x28

	// Properties
	public ColorType ColorType { get; set; }
	public bool IsDestroyed { get; set; }
	public virtual bool IsTargetable { get; }
	public bool IsVisibleOnScreen { get; set; }
	public virtual Transform ShootingPointSpace { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF586C Offset: 0xFF586C VA: 0xFF586C
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0xFF5874 Offset: 0xFF5874 VA: 0xFF5874
	private void set_ColorType(ColorType value) { }

	[CompilerGenerated]
	// RVA: 0xFF587C Offset: 0xFF587C VA: 0xFF587C
	public bool get_IsDestroyed() { }

	[CompilerGenerated]
	// RVA: 0xFF5884 Offset: 0xFF5884 VA: 0xFF5884
	private void set_IsDestroyed(bool value) { }

	// RVA: 0xFF588C Offset: 0xFF588C VA: 0xFF588C Slot: 6
	public virtual bool get_IsTargetable() { }

	[CompilerGenerated]
	// RVA: 0xFF58AC Offset: 0xFF58AC VA: 0xFF58AC
	public bool get_IsVisibleOnScreen() { }

	[CompilerGenerated]
	// RVA: 0xFF58B4 Offset: 0xFF58B4 VA: 0xFF58B4
	private void set_IsVisibleOnScreen(bool value) { }

	// RVA: 0xFF58BC Offset: 0xFF58BC VA: 0xFF58BC
	protected void OnInitialized(bool addToGrid = True) { }

	// RVA: 0xFF595C Offset: 0xFF595C VA: 0xFF595C Slot: 7
	protected virtual void OnDestroy() { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Vector3Int[] GetGridPositions();

	// RVA: 0xFF596C Offset: 0xFF596C VA: 0xFF596C Slot: 9
	public virtual void UpdateColor(ColorType colorType) { }

	// RVA: 0xFF5974 Offset: 0xFF5974 VA: 0xFF5974
	public void SetVisibility(bool isVisible) { }

	// RVA: 0xFF59B8 Offset: 0xFF59B8 VA: 0xFF59B8
	public void SetVisibleOnScreen(bool isVisible) { }

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void DecreaseHealthData();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void DecreaseHealthVisually();

	// RVA: 0xFF5A0C Offset: 0xFF5A0C VA: 0xFF5A0C
	protected void OnHealthDepleted() { }

	// RVA: 0xFF5A18 Offset: 0xFF5A18 VA: 0xFF5A18 Slot: 12
	public virtual Vector3 GetShootingPoint() { }

	// RVA: 0xFF5A68 Offset: 0xFF5A68 VA: 0xFF5A68 Slot: 13
	public virtual Transform get_ShootingPointSpace() { }

	// RVA: 0xFF5A70 Offset: 0xFF5A70 VA: 0xFF5A70 Slot: 5
	private void Rotatelab.FX.IDimEffectTarget.GetDimmableRenderers(HashSet<Renderer> renderers) { }

	// RVA: 0xFF5A80 Offset: 0xFF5A80 VA: 0xFF5A80 Slot: 14
	protected virtual void GetDimmableRenderers(HashSet<Renderer> renderers) { }

	// RVA: 0xFF5AEC Offset: 0xFF5AEC VA: 0xFF5AEC
	public void DestroyExternally() { }

	// RVA: 0xFF5B10 Offset: 0xFF5B10 VA: 0xFF5B10 Slot: 15
	protected virtual void Destroy() { }

	// RVA: -1 Offset: -1 Slot: 16
	protected abstract void DestructionBehaviour();

	// RVA: 0xFF608C Offset: 0xFF608C VA: 0xFF608C
	protected static void PlayDestructionSfx() { }

	// RVA: 0xFF6158 Offset: 0xFF6158 VA: 0xFF6158 Slot: 17
	public virtual void KillActiveTweens() { }

	// RVA: 0xFF6164 Offset: 0xFF6164 VA: 0xFF6164
	protected void .ctor() { }

	// RVA: 0xFF616C Offset: 0xFF616C VA: 0xFF616C Slot: 4
	private Transform Rotatelab.FX.IDimEffectTarget.get_transform() { }
}

// Namespace: Rotatelab.Scripts