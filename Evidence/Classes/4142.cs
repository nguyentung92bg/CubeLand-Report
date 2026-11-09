public class ShieldController : MonoBehaviour // TypeDefIndex: 4142
{
	// Fields
	[CompilerGenerated]
	private ShieldData <Data>k__BackingField; // 0x10
	[SerializeField]
	private Renderer shieldRenderer; // 0x14
	[SerializeField]
	private Transform hitPoint; // 0x18
	[SerializeField]
	private ParticleSystem hitParticle; // 0x1C
	[SerializeField]
	private TMP_Text hpText; // 0x20
	[SerializeField]
	private float scaleDownDuration; // 0x24
	[SerializeField]
	private float scaleUpDuration; // 0x28
	private int _hp; // 0x2C
	private float _targetHitProgress; // 0x30
	private float _currentHitProgress; // 0x34
	private Material _material; // 0x38
	private Tween _cutProgressTween; // 0x3C

	// Properties
	public ShieldData Data { get; set; }
	public Vector3Int[] OccupiedCells { get; }
	public int Hp { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1050690 Offset: 0x1050690 VA: 0x1050690
	public ShieldData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x1050698 Offset: 0x1050698 VA: 0x1050698
	private void set_Data(ShieldData value) { }

	// RVA: 0x10506A0 Offset: 0x10506A0 VA: 0x10506A0
	public Vector3Int[] get_OccupiedCells() { }

	// RVA: 0x10506BC Offset: 0x10506BC VA: 0x10506BC
	public int get_Hp() { }

	// RVA: 0x10506C4 Offset: 0x10506C4 VA: 0x10506C4
	public void Initialize(ShieldData data) { }

	// RVA: 0x104E558 Offset: 0x104E558 VA: 0x104E558
	public void DecreaseHp() { }

	// RVA: 0x105084C Offset: 0x105084C VA: 0x105084C
	private void UpdateHealthText() { }

	// RVA: 0x104EAE0 Offset: 0x104EAE0 VA: 0x104EAE0
	public void AnimateHit() { }

	// RVA: 0x1047C28 Offset: 0x1047C28 VA: 0x1047C28
	public bool TryGetSwordHitPoint(out Transform target) { }

	// RVA: 0x104EC9C Offset: 0x104EC9C VA: 0x104EC9C
	public void Destroy() { }

	// RVA: 0x10508C4 Offset: 0x10508C4 VA: 0x10508C4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10508DC Offset: 0x10508DC VA: 0x10508DC
	private void <AnimateHit>b__22_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x105096C Offset: 0x105096C VA: 0x105096C
	private void <Destroy>b__24_1() { }

	[CompilerGenerated]
	// RVA: 0x105099C Offset: 0x105099C VA: 0x105099C
	private void <Destroy>b__24_2() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]