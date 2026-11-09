public class HiroRewardUIEntryContainer : MonoBehaviour // TypeDefIndex: 3950
{
	// Fields
	[SerializeField]
	private HiroRewardUIConfiguration configuration; // 0x10
	[SerializeField]
	private HiroRewardUIEntry entryPrefab; // 0x14
	[SerializeField]
	private RectTransform entriesParent; // 0x18
	private readonly List<HiroRewardUIEntry> allEntries; // 0x1C
	[CompilerGenerated]
	private int <ActiveEntryCount>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsDummyReward>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <IsLevelProgressReward>k__BackingField; // 0x25

	// Properties
	public int ActiveEntryCount { get; set; }
	public bool IsDummyReward { get; set; }
	public bool IsLevelProgressReward { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xFF0828 Offset: 0xFF0828 VA: 0xFF0828
	public int get_ActiveEntryCount() { }

	[CompilerGenerated]
	// RVA: 0xFF0830 Offset: 0xFF0830 VA: 0xFF0830
	private void set_ActiveEntryCount(int value) { }

	[CompilerGenerated]
	// RVA: 0xFF0838 Offset: 0xFF0838 VA: 0xFF0838
	public bool get_IsDummyReward() { }

	[CompilerGenerated]
	// RVA: 0xFF0840 Offset: 0xFF0840 VA: 0xFF0840
	private void set_IsDummyReward(bool value) { }

	[CompilerGenerated]
	// RVA: 0xFF0848 Offset: 0xFF0848 VA: 0xFF0848
	public bool get_IsLevelProgressReward() { }

	[CompilerGenerated]
	// RVA: 0xFF0850 Offset: 0xFF0850 VA: 0xFF0850
	private void set_IsLevelProgressReward(bool value) { }

	// RVA: 0xFEED34 Offset: 0xFEED34 VA: 0xFEED34
	public void Initialize(IReward data) { }

	// RVA: 0xFF0858 Offset: 0xFF0858 VA: 0xFF0858
	private void CreateEntry(string id, HiroRewardType type, string amount) { }

	// RVA: 0xFF08F4 Offset: 0xFF08F4 VA: 0xFF08F4
	private void CreateEntry(string id, HiroRewardType type, long amount) { }

	// RVA: 0xFF0B28 Offset: 0xFF0B28 VA: 0xFF0B28
	public void .ctor() { }
}

// Namespace: Rotatelab.Networking.HiroServices
[Preserve]