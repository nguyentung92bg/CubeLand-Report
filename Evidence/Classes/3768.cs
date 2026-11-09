public class PopupManager : SingletonBehaviour<PopupManager> // TypeDefIndex: 3768
{
	// Fields
	private readonly List<PopupController> popupQueue; // 0x10

	// Properties
	public bool IsAnyPopupVisible { get; }

	// Methods

	// RVA: 0x1124E44 Offset: 0x1124E44 VA: 0x1124E44
	public bool get_IsAnyPopupVisible() { }

	// RVA: 0x11247A8 Offset: 0x11247A8 VA: 0x11247A8
	public void ShowPopup(PopupController popup, bool insertAtFront = False) { }

	// RVA: 0x112499C Offset: 0x112499C VA: 0x112499C
	public void HidePopup(PopupController popup) { }

	// RVA: 0x1124FB8 Offset: 0x1124FB8 VA: 0x1124FB8
	public void CloseAll() { }

	// RVA: 0x1124EFC Offset: 0x1124EFC VA: 0x1124EFC
	private void SetPopupVisible(PopupController popup, bool isVisible) { }

	// RVA: 0x11250EC Offset: 0x11250EC VA: 0x11250EC
	public bool IsInQueue(PopupController popup) { }

	// RVA: 0x1125158 Offset: 0x1125158 VA: 0x1125158
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]