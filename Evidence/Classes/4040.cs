public class InputManager : SingletonBehaviour<InputManager> // TypeDefIndex: 4040
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private PointerPressEventListener <PlaceablesPressInputListener>k__BackingField; // 0x10
	[CompilerGenerated]
	[SerializeField]
	private PointerDragEventListener <PlaceablesDragInputListener>k__BackingField; // 0x14
	[CompilerGenerated]
	[SerializeField]
	private PointerPressEventListener <ObjectPressInputListener>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private PointerDragEventListener <ObjectDragInputListener>k__BackingField; // 0x1C

	// Properties
	public PointerPressEventListener PlaceablesPressInputListener { get; set; }
	public PointerDragEventListener PlaceablesDragInputListener { get; set; }
	public PointerPressEventListener ObjectPressInputListener { get; set; }
	public PointerDragEventListener ObjectDragInputListener { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10120A0 Offset: 0x10120A0 VA: 0x10120A0
	public PointerPressEventListener get_PlaceablesPressInputListener() { }

	[CompilerGenerated]
	// RVA: 0x10120A8 Offset: 0x10120A8 VA: 0x10120A8
	private void set_PlaceablesPressInputListener(PointerPressEventListener value) { }

	[CompilerGenerated]
	// RVA: 0x10120B0 Offset: 0x10120B0 VA: 0x10120B0
	public PointerDragEventListener get_PlaceablesDragInputListener() { }

	[CompilerGenerated]
	// RVA: 0x10120B8 Offset: 0x10120B8 VA: 0x10120B8
	private void set_PlaceablesDragInputListener(PointerDragEventListener value) { }

	[CompilerGenerated]
	// RVA: 0x10120C0 Offset: 0x10120C0 VA: 0x10120C0
	public PointerPressEventListener get_ObjectPressInputListener() { }

	[CompilerGenerated]
	// RVA: 0x10120C8 Offset: 0x10120C8 VA: 0x10120C8
	private void set_ObjectPressInputListener(PointerPressEventListener value) { }

	[CompilerGenerated]
	// RVA: 0x10120D0 Offset: 0x10120D0 VA: 0x10120D0
	public PointerDragEventListener get_ObjectDragInputListener() { }

	[CompilerGenerated]
	// RVA: 0x10120D8 Offset: 0x10120D8 VA: 0x10120D8
	private void set_ObjectDragInputListener(PointerDragEventListener value) { }

	// RVA: 0x10120E0 Offset: 0x10120E0 VA: 0x10120E0 Slot: 4
	protected override void Awake() { }

	// RVA: 0x10121AC Offset: 0x10121AC VA: 0x10121AC
	private void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x101241C Offset: 0x101241C VA: 0x101241C
	private void OnPlaceableClicked(BasePlaceableController placeable) { }

	// RVA: 0x10127F8 Offset: 0x10127F8 VA: 0x10127F8
	public void .ctor() { }
}

// Namespace: 