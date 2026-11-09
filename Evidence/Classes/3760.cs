public class CopyTextOnClick : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IPointerDownHandler, IPointerUpHandler // TypeDefIndex: 3760
{
	// Fields
	[SerializeField]
	private TMP_Text text; // 0x10
	[SerializeField]
	private bool skipEmptyText; // 0x14
	[SerializeField]
	private float scaleOnPress; // 0x18

	// Methods

	// RVA: 0x111FF7C Offset: 0x111FF7C VA: 0x111FF7C Slot: 4
	private void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x112004C Offset: 0x112004C VA: 0x112004C Slot: 5
	private void UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x1120128 Offset: 0x1120128 VA: 0x1120128 Slot: 6
	private void UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x11201F8 Offset: 0x11201F8 VA: 0x11201F8
	protected void Reset() { }

	// RVA: 0x112025C Offset: 0x112025C VA: 0x112025C
	public void .ctor() { }
}

// Namespace: 