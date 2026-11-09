public class ColorBoxColorDataSO : SingletonScriptableObject<ColorBoxColorDataSO> // TypeDefIndex: 3976
{
	// Fields
	[SerializeField]
	private ColorBoxColorProperty[] colors; // 0xC

	// Methods

	// RVA: 0xFF4F68 Offset: 0xFF4F68 VA: 0xFF4F68
	private ColorBoxColorProperty GetDataByType(ColorType colorType) { }

	// RVA: 0xFF50C8 Offset: 0xFF50C8 VA: 0xFF50C8
	public Material GetBodyMaterial(ColorType colorType) { }

	// RVA: 0xFF50E8 Offset: 0xFF50E8 VA: 0xFF50E8
	public Material GetPlankBodyMaterial(ColorType colorType) { }

	// RVA: 0xFF5108 Offset: 0xFF5108 VA: 0xFF5108
	public Material GetParticleMaterial(ColorType colorType) { }

	// RVA: 0xFF5128 Offset: 0xFF5128 VA: 0xFF5128
	public void .ctor() { }
}

// Namespace: Rotatelab.Scripts
[Serializable]