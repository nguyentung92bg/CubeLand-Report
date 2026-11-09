public class CannonProjectileController : MonoBehaviour // TypeDefIndex: 3812
{
	// Fields
	[SerializeField]
	[Tooltip("Projectile flight tween duration (muzzle → impact). Slower reads as a heavier, more impactful shot.")]
	private float flightDuration; // 0x10
	[SerializeField]
	private float arcHeight; // 0x14
	[SerializeField]
	private ParticleSystem impactParticle; // 0x18
	[SerializeField]
	private AudioClip impactClip; // 0x1C
	private Vector3 _start; // 0x20
	private Vector3 _end; // 0x2C
	private Action _onImpact; // 0x38
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x1133810 Offset: 0x1133810 VA: 0x1133810
	protected void Awake() { }

	// RVA: 0x1133858 Offset: 0x1133858 VA: 0x1133858
	public void Fire(Vector3 start, Vector3 end, Action onImpact) { }

	// RVA: 0x1133C64 Offset: 0x1133C64 VA: 0x1133C64
	private void UpdateFlightPosition(float t) { }

	// RVA: 0x1133D28 Offset: 0x1133D28 VA: 0x1133D28
	private void OnArrived() { }

	// RVA: 0x1133E08 Offset: 0x1133E08 VA: 0x1133E08
	protected void OnDisable() { }

	// RVA: 0x1133E14 Offset: 0x1133E14 VA: 0x1133E14
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]