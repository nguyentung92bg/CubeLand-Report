public class CreativeSlider : MonoBehaviour // TypeDefIndex: 3724
{
	// Fields
	[SerializeField]
	private Slider slider; // 0x10
	[SerializeField]
	private bool isBoolean; // 0x14
	[SerializeField]
	private int snapMultiplier; // 0x18
	public TMP_InputField value; // 0x1C

	// Methods

	// RVA: 0x110AE54 Offset: 0x110AE54 VA: 0x110AE54
	public float GetValue() { }

	// RVA: 0x110FEDC Offset: 0x110FEDC VA: 0x110FEDC
	public void SetSlider(float v) { }

	// RVA: 0x110BA54 Offset: 0x110BA54 VA: 0x110BA54
	public void Bind(float currentValue, Action<float> onChanged) { }

	// RVA: 0x110FF18 Offset: 0x110FF18 VA: 0x110FF18
	public void OnSliderValueChanged() { }

	// RVA: 0x1110124 Offset: 0x1110124 VA: 0x1110124
	public void OnInputFieldValueChanged() { }

	// RVA: 0x11102A0 Offset: 0x11102A0 VA: 0x11102A0
	public void .ctor() { }
}

// Namespace: Rotatelab.UI