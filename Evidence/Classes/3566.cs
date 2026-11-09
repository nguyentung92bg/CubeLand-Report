public class CloudRushCloudController : MonoBehaviour // TypeDefIndex: 3566
{
	// Fields
	[SerializeField]
	private List<Vector2> playerAvatarPositions; // 0x10
	[SerializeField]
	private List<Vector2> dropPositions; // 0x14
	[SerializeField]
	private float visibilityDuration; // 0x18
	private RectTransform _rectTransform; // 0x1C
	private RectTransform _parentRectTransform; // 0x20
	private RectTransform _rootCanvasRectTransform; // 0x24
	private float _visibleAnchoredPositionY; // 0x28
	private Tween _visibilityTween; // 0x30

	// Methods

	// RVA: 0x10DB148 Offset: 0x10DB148 VA: 0x10DB148
	protected void Awake() { }

	// RVA: 0x10DB3B0 Offset: 0x10DB3B0 VA: 0x10DB3B0
	public float SetVisibility(bool isVisible, bool isInstant) { }

	// RVA: 0x10DB558 Offset: 0x10DB558 VA: 0x10DB558
	private float GetOffScreenAnchoredY() { }

	// RVA: 0x10DB6F0 Offset: 0x10DB6F0 VA: 0x10DB6F0
	public Vector2 GetPlayerAvatarPosition(int index) { }

	// RVA: 0x10DB87C Offset: 0x10DB87C VA: 0x10DB87C
	public Vector2 GetReversedPlayerAvatarPosition(int index) { }

	// RVA: 0x10DBA10 Offset: 0x10DBA10 VA: 0x10DBA10
	public Vector2 GetDropPosition(int index) { }

	// RVA: 0x10DBB9C Offset: 0x10DBB9C VA: 0x10DBB9C
	public void .ctor() { }
}

// Namespace: 