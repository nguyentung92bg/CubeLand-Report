public class WallController : MonoBehaviour // TypeDefIndex: 4173
{
	// Fields
	[SerializeField]
	private Renderer wallRenderer; // 0x10
	private static readonly Material[] materialCache; // 0x0
	private bool playParticleOnDestruction; // 0x14
	private readonly Vector3Int[] m_position; // 0x18
	[CompilerGenerated]
	private bool <IsBreaking>k__BackingField; // 0x1C

	// Properties
	public Vector3Int Position { get; set; }
	public bool IsBreaking { get; set; }

	// Methods

	// RVA: 0x105E270 Offset: 0x105E270 VA: 0x105E270
	public Vector3Int get_Position() { }

	// RVA: 0x105E2AC Offset: 0x105E2AC VA: 0x105E2AC
	private void set_Position(Vector3Int value) { }

	[CompilerGenerated]
	// RVA: 0x105E2EC Offset: 0x105E2EC VA: 0x105E2EC
	public bool get_IsBreaking() { }

	[CompilerGenerated]
	// RVA: 0x105E2F4 Offset: 0x105E2F4 VA: 0x105E2F4
	private void set_IsBreaking(bool value) { }

	// RVA: 0x105E2FC Offset: 0x105E2FC VA: 0x105E2FC
	public void Initialize(Vector3Int position) { }

	// RVA: 0x105E7B0 Offset: 0x105E7B0 VA: 0x105E7B0
	public void SetVisibility(bool isVisible) { }

	// RVA: 0x105E7F0 Offset: 0x105E7F0 VA: 0x105E7F0
	public void SetAsBreakingWall() { }

	// RVA: 0x105E828 Offset: 0x105E828 VA: 0x105E828
	public void Destroy(bool playParticle, bool scaleUp) { }

	// RVA: 0x105EC80 Offset: 0x105EC80 VA: 0x105EC80
	public void .ctor() { }

	// RVA: 0x105ECF0 Offset: 0x105ECF0 VA: 0x105ECF0
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]