public class MetaProgressionBaseStage : MonoBehaviour // TypeDefIndex: 3176
{
	// Fields
	private RectTransform rectTransform; // 0x10
	public Slider slider; // 0x14

	// Methods

	// RVA: 0xFBB7DC Offset: 0xFBB7DC VA: 0xFBB7DC Slot: 4
	public virtual void Init(MetaProgressionSo.MetaProgressData data, int dividerCount, int stageIndex) { }

	// RVA: 0xFBB8DC Offset: 0xFBB8DC VA: 0xFBB8DC
	public void SetSliderValue(float value = -1, bool isAnimated = False, float moveDuration = 1.5, float moveDelay = 0.5) { }

	// RVA: 0xFBBCFC Offset: 0xFBBCFC VA: 0xFBBCFC Slot: 5
	public virtual void Collect() { }

	// RVA: 0xFBBD00 Offset: 0xFBBD00 VA: 0xFBBD00
	public float GetSliderMin() { }

	// RVA: 0xFBBD1C Offset: 0xFBBD1C VA: 0xFBBD1C
	public float GetHeight() { }

	// RVA: 0xFBBD50 Offset: 0xFBBD50 VA: 0xFBBD50
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]