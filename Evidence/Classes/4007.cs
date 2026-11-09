public class ComboController : MonoBehaviour // TypeDefIndex: 4007
{
	// Fields
	[CompilerGenerated]
	private float <Bullets>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Level>k__BackingField; // 0x14
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x18
	private float _lastBulletTime; // 0x1C
	private float _lastLevelChangeTime; // 0x20
	private bool _isLevelEnded; // 0x24

	// Properties
	public float Bullets { get; set; }
	public int Level { get; set; }
	public bool IsActive { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1002CC0 Offset: 0x1002CC0 VA: 0x1002CC0
	public float get_Bullets() { }

	[CompilerGenerated]
	// RVA: 0x1002CC8 Offset: 0x1002CC8 VA: 0x1002CC8
	private void set_Bullets(float value) { }

	[CompilerGenerated]
	// RVA: 0x1002CD0 Offset: 0x1002CD0 VA: 0x1002CD0
	public int get_Level() { }

	[CompilerGenerated]
	// RVA: 0x1002CD8 Offset: 0x1002CD8 VA: 0x1002CD8
	private void set_Level(int value) { }

	[CompilerGenerated]
	// RVA: 0x1002CE0 Offset: 0x1002CE0 VA: 0x1002CE0
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x1002CE8 Offset: 0x1002CE8 VA: 0x1002CE8
	private void set_IsActive(bool value) { }

	// RVA: 0x1002CF0 Offset: 0x1002CF0 VA: 0x1002CF0
	protected void OnEnable() { }

	// RVA: 0x100305C Offset: 0x100305C VA: 0x100305C
	protected void OnDisable() { }

	// RVA: 0x10033C8 Offset: 0x10033C8 VA: 0x10033C8
	protected void Start() { }

	// RVA: 0x10036E8 Offset: 0x10036E8 VA: 0x10036E8
	protected void Update() { }

	// RVA: 0x1003C98 Offset: 0x1003C98 VA: 0x1003C98
	private void OnBulletFiredHandler() { }

	// RVA: 0x1003F08 Offset: 0x1003F08 VA: 0x1003F08
	private void OnMainCanvasChangedHandler(MainCanvasType type, bool _) { }

	// RVA: 0x1003F14 Offset: 0x1003F14 VA: 0x1003F14
	private void OnLevelEndedHandler() { }

	// RVA: 0x10038D4 Offset: 0x10038D4 VA: 0x10038D4
	private void RefreshActive() { }

	// RVA: 0x1003F20 Offset: 0x1003F20 VA: 0x1003F20
	private void SetActive(bool isActive) { }

	// RVA: 0x1003B5C Offset: 0x1003B5C VA: 0x1003B5C
	private float GetCurrentDrainRate() { }

	// RVA: 0x1003560 Offset: 0x1003560 VA: 0x1003560
	private int GetCurrentThresholdInt() { }

	// RVA: 0x1003C0C Offset: 0x1003C0C VA: 0x1003C0C
	private float GetNormalizedFill() { }

	// RVA: 0x1003A04 Offset: 0x1003A04 VA: 0x1003A04
	private void ResetState() { }

	// RVA: 0x1003FE8 Offset: 0x1003FE8 VA: 0x1003FE8
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts