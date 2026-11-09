public class SeasonPassTargetBar : MonoBehaviour // TypeDefIndex: 3407
{
	// Fields
	[SerializeField]
	private ParticleImage burst; // 0x10
	[SerializeField]
	private TMP_Text currentCheckpoint; // 0x14
	[SerializeField]
	private TMP_Text progress; // 0x18
	[SerializeField]
	private GameObject bonusBankIcon; // 0x1C
	[SerializeField]
	private TMP_Text bonusBankAmount; // 0x20
	[SerializeField]
	private Slider slider; // 0x24

	// Methods

	// RVA: 0x10A7024 Offset: 0x10A7024 VA: 0x10A7024
	public void SetTarget(int max, int currentValue = 0, bool isBonusBank = False) { }

	// RVA: 0x10A8BBC Offset: 0x10A8BBC VA: 0x10A8BBC
	public Tween FillBy(float startValue, float amount, float duration) { }

	// RVA: 0x10A909C Offset: 0x10A909C VA: 0x10A909C
	public void PlayBurst() { }

	// RVA: 0x10A72EC Offset: 0x10A72EC VA: 0x10A72EC
	public void SetVisible(bool active) { }

	// RVA: 0x10AB75C Offset: 0x10AB75C VA: 0x10AB75C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x10AB764 Offset: 0x10AB764 VA: 0x10AB764
	private void <FillBy>b__7_0(float v) { }
}

// Namespace: Rotatelab.RainbowShooter