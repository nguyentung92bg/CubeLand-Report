public class SeasonPassBonusBank : SeasonPassCheckpointBase // TypeDefIndex: 3379
{
	// Fields
	[SerializeField]
	private Slider bonusTarget; // 0x14
	[SerializeField]
	private TMP_Text progressText; // 0x18
	[SerializeField]
	private TMP_Text infoText; // 0x1C
	[SerializeField]
	private GameObject lockUi; // 0x20

	// Methods

	// RVA: 0x109FDB4 Offset: 0x109FDB4 VA: 0x109FDB4 Slot: 6
	public override void Init(SeasonPassSo seasonPassSo) { }

	// RVA: 0x109FFAC Offset: 0x109FFAC VA: 0x109FFAC
	public void CheckStatus() { }

	// RVA: 0x109FE6C Offset: 0x109FE6C VA: 0x109FE6C
	public void SetTarget(int max, int currentValue = 0) { }

	// RVA: 0x10A02B8 Offset: 0x10A02B8 VA: 0x10A02B8
	public Tween FillBy(float startValue, float amount, float duration) { }

	// RVA: 0x10A03F0 Offset: 0x10A03F0 VA: 0x10A03F0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10A0400 Offset: 0x10A0400 VA: 0x10A0400
	private void <FillBy>b__7_0(float v) { }
}

// Namespace: Rotatelab.SeasonPass