public class HeartManager : SingletonBehaviour<HeartManager> // TypeDefIndex: 3322
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private int <HeartCost>k__BackingField; // 0x10
	private bool isHeartSpentForCurrentLevel; // 0x14

	// Properties
	public ObservableEnergy Hearts { get; }
	public int HeartCost { get; set; }

	// Methods

	// RVA: 0x10837C4 Offset: 0x10837C4 VA: 0x10837C4
	public ObservableEnergy get_Hearts() { }

	[CompilerGenerated]
	// RVA: 0x1083F6C Offset: 0x1083F6C VA: 0x1083F6C
	public int get_HeartCost() { }

	[CompilerGenerated]
	// RVA: 0x1083F74 Offset: 0x1083F74 VA: 0x1083F74
	private void set_HeartCost(int value) { }

	// RVA: 0x1083F7C Offset: 0x1083F7C VA: 0x1083F7C Slot: 4
	protected override void Awake() { }

	// RVA: 0x1084088 Offset: 0x1084088 VA: 0x1084088
	public void DecreaseHeart() { }

	// RVA: 0x1084258 Offset: 0x1084258 VA: 0x1084258
	private void OnLevelSucceededHandler() { }

	// RVA: 0x10842D4 Offset: 0x10842D4 VA: 0x10842D4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]