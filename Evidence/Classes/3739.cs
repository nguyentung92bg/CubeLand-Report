public class ProfileAvatarButton : MonoBehaviour // TypeDefIndex: 3739
{
	// Fields
	[SerializeField]
	private Image background; // 0x10
	[SerializeField]
	private Sprite backgroundDefault; // 0x14
	[SerializeField]
	private Sprite backgroundSelected; // 0x18
	[SerializeField]
	private Image avatarImage; // 0x1C
	[SerializeField]
	private GameObject selectedCheck; // 0x20
	[SerializeField]
	private Button button; // 0x24

	// Properties
	public Sprite Avatar { get; }
	public bool Interactable { get; set; }

	// Methods

	// RVA: 0x1113324 Offset: 0x1113324 VA: 0x1113324
	public Sprite get_Avatar() { }

	// RVA: 0x1113340 Offset: 0x1113340 VA: 0x1113340
	public bool get_Interactable() { }

	// RVA: 0x111335C Offset: 0x111335C VA: 0x111335C
	public void set_Interactable(bool value) { }

	// RVA: 0x1113388 Offset: 0x1113388 VA: 0x1113388
	public void Initialize(Sprite avatar, UnityAction onClick) { }

	// RVA: 0x11133EC Offset: 0x11133EC VA: 0x11133EC
	public void SetSelected(bool isSelected) { }

	// RVA: 0x111344C Offset: 0x111344C VA: 0x111344C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]