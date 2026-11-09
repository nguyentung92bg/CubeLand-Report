public class GiftWrapperController : MonoBehaviour // TypeDefIndex: 4031
{
	// Fields
	[CompilerGenerated]
	private GiftWrapperData <Data>k__BackingField; // 0x10
	[SerializeField]
	private MeshFilter giftWrapperCutRenderer; // 0x14
	[SerializeField]
	private SkinnedMeshRenderer giftWrapperRenderer; // 0x18
	[SerializeField]
	private Mesh[] cutMeshes; // 0x1C
	[SerializeField]
	private ParticleSystem[] destroyParticles; // 0x20
	[SerializeField]
	private ParticleSystem[] cutParticles; // 0x24
	[SerializeField]
	private TMP_Text[] hpTexts; // 0x28
	[SerializeField]
	private float blendshapeSetDuration; // 0x2C
	[SerializeField]
	private float cutPointRandomOffset; // 0x30
	private int _hp; // 0x34
	private int _visualHp; // 0x38

	// Properties
	public GiftWrapperData Data { get; set; }
	public int Hp { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x100EA30 Offset: 0x100EA30 VA: 0x100EA30
	public GiftWrapperData get_Data() { }

	[CompilerGenerated]
	// RVA: 0x100EA38 Offset: 0x100EA38 VA: 0x100EA38
	private void set_Data(GiftWrapperData value) { }

	// RVA: 0x100EA40 Offset: 0x100EA40 VA: 0x100EA40
	public int get_Hp() { }

	// RVA: 0x100EA48 Offset: 0x100EA48 VA: 0x100EA48
	public void Initialize(GiftWrapperData data) { }

	// RVA: 0x100ECCC Offset: 0x100ECCC VA: 0x100ECCC
	public void DecreaseHp() { }

	// RVA: 0x100ECDC Offset: 0x100ECDC VA: 0x100ECDC
	public void DecreaseHpVisually() { }

	// RVA: 0x100EC08 Offset: 0x100EC08 VA: 0x100EC08
	private void UpdateHpTexts() { }

	// RVA: 0x100EE70 Offset: 0x100EE70 VA: 0x100EE70
	public void AnimateCut() { }

	// RVA: 0x100EF28 Offset: 0x100EF28 VA: 0x100EF28
	public bool TryGetScissorsCutPoint(out Transform target) { }

	// RVA: 0x100F320 Offset: 0x100F320 VA: 0x100F320
	public void Destroy() { }

	// RVA: 0x100F60C Offset: 0x100F60C VA: 0x100F60C
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts