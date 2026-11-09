public class HomePageCoordinator : SingletonBehaviour<HomePageCoordinator> // TypeDefIndex: 3278
{
	// Fields
	private readonly Dictionary<MetaScreenType, Action> pending; // 0x10
	private Nullable<MetaScreenType> current; // 0x14
	private bool drainScheduled; // 0x1C
	private bool isSuspended; // 0x1D

	// Properties
	public bool IsBusy { get; }

	// Methods

	// RVA: 0x107A03C Offset: 0x107A03C VA: 0x107A03C
	public bool get_IsBusy() { }

	// RVA: 0x107A0E8 Offset: 0x107A0E8 VA: 0x107A0E8
	protected void OnEnable() { }

	// RVA: 0x107A1E8 Offset: 0x107A1E8 VA: 0x107A1E8
	protected void OnDisable() { }

	// RVA: 0x107A2E8 Offset: 0x107A2E8 VA: 0x107A2E8
	private void Start() { }

	// RVA: 0x107A308 Offset: 0x107A308 VA: 0x107A308
	private IEnumerator SubscribeToPageOpenedWhenReady() { }

	// RVA: 0x107A39C Offset: 0x107A39C VA: 0x107A39C
	protected void OnDestroy() { }

	// RVA: 0x107A4B8 Offset: 0x107A4B8 VA: 0x107A4B8
	private void OnMainCanvasChangeEndedHandler(MainCanvasType type, bool isInstant) { }

	// RVA: 0x107A4FC Offset: 0x107A4FC VA: 0x107A4FC
	private void OnPageOpenedHandler(PageButtonType type) { }

	// RVA: 0x107A508 Offset: 0x107A508 VA: 0x107A508
	public void Request(MetaScreenType type, Action show) { }

	// RVA: 0x107A584 Offset: 0x107A584 VA: 0x107A584
	public void NotifyClosed(MetaScreenType type) { }

	// RVA: 0x107A600 Offset: 0x107A600 VA: 0x107A600
	public void Suspend() { }

	// RVA: 0x107A60C Offset: 0x107A60C VA: 0x107A60C
	public void Resume() { }

	// RVA: 0x107A4C4 Offset: 0x107A4C4 VA: 0x107A4C4
	private void ScheduleDrain() { }

	// RVA: 0x107A618 Offset: 0x107A618 VA: 0x107A618
	private IEnumerator DrainNextFrame() { }

	// RVA: 0x107A6AC Offset: 0x107A6AC VA: 0x107A6AC
	public void .ctor() { }
}

// Namespace: Rotatelab