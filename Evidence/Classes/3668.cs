public class ParticleController : MonoBehaviour // TypeDefIndex: 3668
{
	// Fields
	[SerializeField]
	private ParticleSystem system; // 0x10
	[SerializeField]
	private ParticleSystemRenderer[] coloredParticles; // 0x14
	public IObjectPool<ParticleSystem> Pool; // 0x18

	// Properties
	public ParticleSystem System { get; }

	// Methods

	// RVA: 0x10FAC6C Offset: 0x10FAC6C VA: 0x10FAC6C
	public ParticleSystem get_System() { }

	// RVA: 0x10FAC74 Offset: 0x10FAC74 VA: 0x10FAC74
	private void Start() { }

	// RVA: 0x10FACBC Offset: 0x10FACBC VA: 0x10FACBC
	private void OnParticleSystemStopped() { }

	// RVA: 0x10FAD7C Offset: 0x10FAD7C VA: 0x10FAD7C
	public void UpdateColor(Material material) { }

	// RVA: 0x10FADE0 Offset: 0x10FADE0 VA: 0x10FADE0
	public void UpdateColor(Color color) { }

	// RVA: 0x10FAF20 Offset: 0x10FAF20 VA: 0x10FAF20
	public void .ctor() { }
}

// Namespace: Rotatelab.FX