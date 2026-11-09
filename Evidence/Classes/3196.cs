public class SeasonPassChestViewer : MonoBehaviour // TypeDefIndex: 3196
{
	// Fields
	[SerializeField]
	private List<SeasonPassUnClaimedReward> unClaimedRewardsObject; // 0x10
	[SerializeField]
	private GameObject nozzleUp; // 0x14
	[SerializeField]
	private GameObject nozzleDown; // 0x18
	private RectTransform rectTransform; // 0x1C
	private Sequence viewSequence; // 0x20
	private Camera mainCamera; // 0x30

	// Methods

	// RVA: 0xFC464C Offset: 0xFC464C VA: 0xFC464C
	protected void OnEnable() { }

	// RVA: 0xFC474C Offset: 0xFC474C VA: 0xFC474C
	protected void OnDisable() { }

	// RVA: 0xFC484C Offset: 0xFC484C VA: 0xFC484C
	protected void Awake() { }

	// RVA: 0xFC48B0 Offset: 0xFC48B0 VA: 0xFC48B0
	private void Start() { }

	// RVA: 0xFC48D4 Offset: 0xFC48D4 VA: 0xFC48D4
	private void OnChestViewRequestedHandler(List<SeasonPassSo.SeasonReward> rewards, Transform posRef) { }

	// RVA: 0xFC504C Offset: 0xFC504C VA: 0xFC504C
	public Vector2 GetPanelSize(int count) { }

	// RVA: 0xFC5094 Offset: 0xFC5094 VA: 0xFC5094
	public void .ctor() { }
}

// Namespace: Rotatelab