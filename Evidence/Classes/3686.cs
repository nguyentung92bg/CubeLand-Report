public class ParticleImageManager : SingletonBehaviour<ParticleImageManager> // TypeDefIndex: 3686
{
	// Fields
	[SerializeField]
	private ParticleImageManager.ParticleTargetData[] particleTargetData; // 0x10
	[SerializeField]
	private ParticleImagePool pool; // 0x14
	private Canvas canvas; // 0x18

	// Methods

	// RVA: 0x1100884 Offset: 0x1100884 VA: 0x1100884 Slot: 4
	protected override void Awake() { }

	// RVA: 0x1100910 Offset: 0x1100910 VA: 0x1100910
	public void SetTargetForParticleTargetData(ParticleImageType type, Transform target) { }

	// RVA: 0x1100A94 Offset: 0x1100A94 VA: 0x1100A94
	public void Play(ParticleImageType type, Vector3 position) { }

	// RVA: 0x1100E20 Offset: 0x1100E20 VA: 0x1100E20
	public void .ctor() { }
}

// Namespace: Rotatelab.FX