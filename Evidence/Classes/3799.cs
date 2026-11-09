public abstract class BaseBooster3DIconController : MonoBehaviour // TypeDefIndex: 3799
{
	// Fields
	[SerializeField]
	private GameObject visual; // 0x10
	[SerializeField]
	protected CurrencyType boosterType; // 0x14
	[SerializeField]
	protected Animator animator; // 0x18

	// Methods

	// RVA: 0x1130640 Offset: 0x1130640 VA: 0x1130640 Slot: 4
	protected virtual void OnEnable() { }

	// RVA: 0x11307AC Offset: 0x11307AC VA: 0x11307AC Slot: 5
	protected virtual void OnDisable() { }

	// RVA: 0x1130918 Offset: 0x1130918 VA: 0x1130918
	protected void Start() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void Use();

	// RVA: 0x1130928 Offset: 0x1130928 VA: 0x1130928 Slot: 7
	protected virtual void Show() { }

	// RVA: 0x1130A1C Offset: 0x1130A1C VA: 0x1130A1C Slot: 8
	protected virtual void Hide() { }

	// RVA: 0x1130AEC Offset: 0x1130AEC VA: 0x1130AEC
	private void OnBoosterStartedHandler(CurrencyType boosterType) { }

	// RVA: 0x1130B08 Offset: 0x1130B08 VA: 0x1130B08
	private void OnBoosterCancelledHandler(CurrencyType boosterType) { }

	// RVA: 0x1130B24 Offset: 0x1130B24 VA: 0x1130B24
	protected void .ctor() { }
}

// Namespace: 