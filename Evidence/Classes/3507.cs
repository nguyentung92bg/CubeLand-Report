public class StarChallengeChestViewer : MonoBehaviour // TypeDefIndex: 3507
{
	// Fields
	[SerializeField]
	private RectTransform panel; // 0x10
	[SerializeField]
	private PointerDragEventListener scrollDragListener; // 0x14
	[SerializeField]
	private StarChallengeSingleReward singleRewardPrefab; // 0x18
	[SerializeField]
	private float visibleDuration; // 0x1C
	[SerializeField]
	private float anchorOffsetY; // 0x20
	private readonly List<StarChallengeSingleReward> spawnedCells; // 0x24
	private Sequence viewSequence; // 0x28

	// Methods

	// RVA: 0x10C6058 Offset: 0x10C6058 VA: 0x10C6058
	protected void OnEnable() { }

	// RVA: 0x10C61D8 Offset: 0x10C61D8 VA: 0x10C61D8
	protected void OnDisable() { }

	// RVA: 0x10C63E0 Offset: 0x10C63E0 VA: 0x10C63E0
	private void OnChestViewRequestedHandler(StarChallengeSO.RewardSlot slot, Transform chest) { }

	// RVA: 0x10C6C74 Offset: 0x10C6C74 VA: 0x10C6C74
	private void OnScrollBeginDragHandler(PointerEventData _) { }

	// RVA: 0x10C6834 Offset: 0x10C6834 VA: 0x10C6834
	private void BuildCells(StarChallengeSO.RewardSlot slot) { }

	// RVA: 0x10C6DB0 Offset: 0x10C6DB0 VA: 0x10C6DB0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]