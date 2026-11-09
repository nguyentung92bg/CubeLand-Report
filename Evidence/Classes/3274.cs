public class SoHolder : SingletonBehaviour<SoHolder> // TypeDefIndex: 3274
{
	// Fields
	[SerializeField]
	private SoLevelsData levelsData; // 0x10
	[SerializeField]
	private BoosterSo boosterSo; // 0x14
	[SerializeField]
	private MechanicSo mechanicSo; // 0x18

	// Properties
	public SoLevelsData LevelsData { get; }
	public BoosterSo BoosterSo { get; }
	public MechanicSo MechanicSo { get; }

	// Methods

	// RVA: 0x10793CC Offset: 0x10793CC VA: 0x10793CC
	public SoLevelsData get_LevelsData() { }

	// RVA: 0x10793D4 Offset: 0x10793D4 VA: 0x10793D4
	public BoosterSo get_BoosterSo() { }

	// RVA: 0x10793DC Offset: 0x10793DC VA: 0x10793DC
	public MechanicSo get_MechanicSo() { }

	// RVA: 0x10793E4 Offset: 0x10793E4 VA: 0x10793E4
	public void .ctor() { }
}

// Namespace: Rotatelab